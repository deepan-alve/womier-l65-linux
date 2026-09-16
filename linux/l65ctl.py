#!/usr/bin/env python3
"""Control a Womier L65 (AULA F75 platform) from Linux via hidraw - wired OR 2.4GHz dongle.

Auto-detects the connection:
  * wired  = SinoWealth SH68F90 at USB 258a:010c, vendor feature report 0x06 (520 bytes).
  * wireless = Beken BK3632 receiver "Compx" 3554:fa09, vendor interrupt report 0x13 (20-byte packets,
               chunked). Same keyboard, a SEPARATE lighting profile.
Pass --wired / --wireless to force one. Every packet below was verified against real hardware,
first from the Windows vendor app and then from this port on Linux.

Capability by transport (what the dongle physically relays is the difference):
                         wired   wireless
  effect/brightness/speed  y        y      (config block)
  side strip, tap/sleep/... y        y
  custom colours (palette)  y        y
  key / knob remap          y        y
  per-key colours (each key) y       -      (378-byte Self-define block; dongle has no per-key payload)
  macros                    y        -
  realtime frame / music    y        -

Usage:
  l65ctl.py dump
  l65ctl.py effects
  l65ctl.py set --effect respire --brightness 2 --speed 0 --color red
  l65ctl.py colors --rgb 8000ff [--effect fixed_on] [--slot 0]     # custom colour (wired or wireless)
  l65ctl.py remap knob=play_pause caps=esc [--layer 0]             # keys/knob (wired or wireless)
  l65ctl.py keys --all blue w=red a=red s=red d=red                # per-key colours (WIRED only)
  l65ctl.py frame --all 8000ff --seconds 3                         # realtime (WIRED only)
  l65ctl.py battery                                                # (WIRELESS)
  l65ctl.py restore ~/.cache/l65ctl/backup-*.bin

WIRED protocol (feature report 0x06, 520 bytes): 06 CMD INDEX 00 01 00 SIZE_LO SIZE_HI <data>.
  read = SetFeature(header) then GetFeature. config 0x84/0x04, per-key 0x86/0x06 (378 planar),
  palette/color-table 0x8A/0x0A (512), key matrix 0x83/0x03 (index=layer, 504), realtime 0x08, macro 0x85/0x05.
WIRELESS protocol (interrupt report 0x13, 20 bytes): 13 CMD NPKG IDX (OPER<<4|LEN) <=14 data CSUM.
  csum = sum(bytes 0..18) & 0xff. read = one request (oper 0), device streams NPKG packets (reassemble
  by IDX); write = send each packet (oper 1), device acks each by IDX (skip ack if CMD high bit set).
  config 0x44/0x04 (128), palette 0x49/0x09 (490 = 23 rows x 7 RGB), key matrix 0x41/0x01 (504), battery 0x4A.
  Read code = write code | 0x40. NB: on 2.4G the keyboard fast-dozes after a few min idle - a read that
  times out usually means "asleep"; press a key to wake it.

Config block offsets (same wired/wireless): 0x03 debounce (stage-1), 0x09 self-define flag, 0x0A effect,
  0x12-0x15 side strip mode/color/brightness/speed, 0x16 tap ms, 0x18 sleep (min x2), 0x1A knob mode,
  0x38+2n effect n brightness, 0x39+2n (speed<<4)|color-slot, 0x75 self-define brightness, 0x7E 5A A5.

udev (run without sudo): /etc/udev/rules.d/60-womier-l65.rules
  KERNEL=="hidraw*", ATTRS{idVendor}=="258a", ATTRS{idProduct}=="010c", MODE="0660", TAG+="uaccess"
  KERNEL=="hidraw*", ATTRS{idVendor}=="3554", ATTRS{idProduct}=="fa09", MODE="0660", TAG+="uaccess"
  then: sudo udevadm control --reload-rules && sudo udevadm trigger
"""
import argparse
import fcntl
import glob
import os
import select
import sys
import time

WIRED_VID, WIRED_PID = 0x258A, 0x010C
DONGLE_VID, DONGLE_PID = 0x3554, 0xFA09

CFG_LEN = 0x80
PERKEY_LEN = 378
WIRED_PALETTE_LEN = 512
WL_PALETTE_LEN = 490
MATRIX_LEN = 504
COLOR_ROW = 21
SLOTS = 126
END_MARKER = b'\x5a\xa5'

DEBOUNCE_OFF, SELF_DEFINE_FLAG_OFF, EFFECT_OFF = 0x03, 0x09, 0x0A
SIDE_MODE_OFF, SIDE_COLOR_OFF, SIDE_BRIGHT_OFF, SIDE_SPEED_OFF = 0x12, 0x13, 0x14, 0x15
TAP_OFF, SLEEP_OFF, WHEEL_OFF = 0x16, 0x18, 0x1A
TABLE_BASE, SELF_DEFINE_BRIGHTNESS_OFF = 0x38, 0x75

EFFECT_NAMES = {
    0: 'off', 1: 'fixed_on', 2: 'respire', 3: 'rainbow', 4: 'flash_away', 5: 'raindrops',
    6: 'rainbow_wheel', 7: 'ripples_shining', 8: 'stars_twinkle', 9: 'shadow_disappear',
    10: 'retro_snake', 11: 'neon_stream', 12: 'reaction', 13: 'sine_wave', 14: 'retinue_scanning',
    15: 'rotating_windmill', 16: 'colorful_waterfall', 17: 'blossoming', 18: 'rotating_storm', 21: 'self_define',
}
VALID_EFFECTS = set(EFFECT_NAMES)
OFF, SELF_DEFINE = 0, 21
NO_SLOT_EFFECTS = {OFF, SELF_DEFINE}
COLOR_NAMES = {0: 'red', 1: 'green', 2: 'blue', 3: 'yellow', 4: 'pink', 5: 'cyan', 6: 'white', 7: 'colorful'}
SIDE_MODE_NAMES = {1: 'rainbow', 2: 'flicker', 3: 'solid', 4: 'breathing', 5: 'off'}
RGB_NAMES = {'red': 'ff0000', 'green': '00ff00', 'blue': '0000ff', 'yellow': 'ffff00', 'pink': 'ff00ff',
             'cyan': '00ffff', 'white': 'ffffff', 'orange': 'ff8000', 'purple': '8000ff', 'off': '000000'}
KEY_SLOTS = {
    'esc': 1, '1': 7, '2': 13, '3': 19, '4': 25, '5': 31, '6': 37, '7': 43, '8': 49, '9': 55, '0': 61,
    'minus': 67, 'equal': 73, 'backspace': 79, 'delete': 92,
    'tab': 2, 'q': 8, 'w': 14, 'e': 20, 'r': 26, 't': 32, 'y': 38, 'u': 44, 'i': 50, 'o': 56, 'p': 62,
    'lbracket': 68, 'rbracket': 74, 'backslash': 80, 'pgup': 93,
    'caps': 3, 'a': 9, 's': 15, 'd': 21, 'f': 27, 'g': 33, 'h': 39, 'j': 45, 'k': 51, 'l': 57,
    'semicolon': 63, 'quote': 69, 'enter': 81, 'pgdn': 94,
    'lshift': 4, 'z': 10, 'x': 16, 'c': 22, 'v': 28, 'b': 34, 'n': 40, 'm': 46,
    'comma': 52, 'period': 58, 'slash': 64, 'rshift': 82, 'up': 88,
    'lctrl': 5, 'lwin': 11, 'lalt': 17, 'space': 35, 'ralt': 53, 'fn': 59, 'left': 83, 'down': 89,
    'right': 95, 'iso_hash': 75, 'iso_backslash': 76, 'knob': 91,
}
KEY_ALIASES = {
    '-': 'minus', '=': 'equal', '[': 'lbracket', ']': 'rbracket', '\\': 'backslash', '|': 'backslash',
    ';': 'semicolon', "'": 'quote', ',': 'comma', '.': 'period', '/': 'slash', 'bksp': 'backspace',
    'del': 'delete', 'capslock': 'caps', 'shift': 'lshift', 'ctrl': 'lctrl', 'win': 'lwin', 'alt': 'lalt',
}
# remap action encoding: 4-byte matrix entry [type, mods, key2, key1]
HID_KEYS = {
    'a': 0x04, 'b': 0x05, 'c': 0x06, 'd': 0x07, 'e': 0x08, 'f': 0x09, 'g': 0x0A, 'h': 0x0B, 'i': 0x0C,
    'j': 0x0D, 'k': 0x0E, 'l': 0x0F, 'm': 0x10, 'n': 0x11, 'o': 0x12, 'p': 0x13, 'q': 0x14, 'r': 0x15,
    's': 0x16, 't': 0x17, 'u': 0x18, 'v': 0x19, 'w': 0x1A, 'x': 0x1B, 'y': 0x1C, 'z': 0x1D,
    '1': 0x1E, '2': 0x1F, '3': 0x20, '4': 0x21, '5': 0x22, '6': 0x23, '7': 0x24, '8': 0x25, '9': 0x26,
    '0': 0x27, 'enter': 0x28, 'esc': 0x29, 'backspace': 0x2A, 'tab': 0x2B, 'space': 0x2C, 'minus': 0x2D,
    'equal': 0x2E, 'lbracket': 0x2F, 'rbracket': 0x30, 'backslash': 0x31, 'semicolon': 0x33, 'quote': 0x34,
    'grave': 0x35, 'comma': 0x36, 'period': 0x37, 'slash': 0x38, 'caps': 0x39,
    'f1': 0x3A, 'f2': 0x3B, 'f3': 0x3C, 'f4': 0x3D, 'f5': 0x3E, 'f6': 0x3F, 'f7': 0x40, 'f8': 0x41,
    'f9': 0x42, 'f10': 0x43, 'f11': 0x44, 'f12': 0x45, 'printscreen': 0x46, 'scrolllock': 0x47, 'pause': 0x48,
    'insert': 0x49, 'home': 0x4A, 'pgup': 0x4B, 'delete': 0x4C, 'end': 0x4D, 'pgdn': 0x4E,
    'right': 0x4F, 'left': 0x50, 'down': 0x51, 'up': 0x52, 'app': 0x65,
}
MODIFIER_BITS = {'lctrl': 0x01, 'lshift': 0x02, 'lalt': 0x04, 'lwin': 0x08,
                 'rctrl': 0x10, 'rshift': 0x20, 'ralt': 0x40, 'rwin': 0x80}
MEDIA_KEYS = {'mute': 0xE2, 'vol_up': 0xE9, 'vol_down': 0xEA, 'play_pause': 0xCD, 'next': 0xB5, 'prev': 0xB6,
              'stop': 0xB7, 'calculator': 0x192, 'browser': 0x194}
RAW_ACTIONS = {'fn': bytes((0x0D, 0, 0, 0)), 'disabled': bytes(4), 'knob_default': bytes((0x07, 0, 0, 0x1D)),
               'brightness_up': bytes((0x08, 0x03, 0x01, 0)), 'brightness_down': bytes((0x08, 0x03, 0x02, 0)),
               'effect_next': bytes((0x08, 0x02, 0, 0))}
BACKUP_DIR = os.path.expanduser('~/.cache/l65ctl')


def _ioc_rw(nr, size):
    return (3 << 30) | (size << 16) | (ord('H') << 8) | nr


# ---- transports -------------------------------------------------------------

class NotSupported(Exception):
    pass


def _hidraw_nodes(vid, pid):
    for node in sorted(glob.glob('/sys/class/hidraw/hidraw*')):
        try:
            with open(os.path.join(node, 'device', 'uevent')) as f:
                uevent = f.read()
            with open(os.path.join(node, 'device', 'report_descriptor'), 'rb') as f:
                desc = f.read()
        except OSError:
            continue
        if f'HID_ID=0003:{vid:08X}:{pid:08X}' in uevent:
            yield '/dev/' + os.path.basename(node), desc


class WiredTransport:
    """SH68F90 vendor interface: 520-byte feature reports (report id 6)."""
    name = 'wired'
    REPORT_LEN = 520
    HIDIOCSFEATURE = _ioc_rw(0x06, 520)
    HIDIOCGFEATURE = _ioc_rw(0x07, 520)
    # kind -> (read_cmd, write_cmd, length)
    OPS = {'config': (0x84, 0x04, CFG_LEN), 'perkey': (0x86, 0x06, PERKEY_LEN),
           'palette': (0x8A, 0x0A, WIRED_PALETTE_LEN), 'matrix': (0x83, 0x03, MATRIX_LEN)}

    def __init__(self):
        path = None
        for p, desc in _hidraw_nodes(WIRED_VID, WIRED_PID):
            if b'\x85\x06' in desc:  # report id 6
                path = p
                break
        if not path:
            raise NotSupported('wired keyboard (258a:010c) not found')
        self.fd = os.open(path, os.O_RDWR)

    def close(self):
        os.close(self.fd)

    def _xfer(self, cmd, size, data=b'', index=0):
        buf = bytearray(self.REPORT_LEN)
        buf[:8] = bytes((6, cmd, index, 0, 1, 0)) + size.to_bytes(2, 'little')
        buf[8:8 + len(data)] = data
        fcntl.ioctl(self.fd, self.HIDIOCSFEATURE, buf)
        time.sleep(0.05)
        resp = bytearray(self.REPORT_LEN)
        resp[0] = 6
        fcntl.ioctl(self.fd, self.HIDIOCGFEATURE, resp)
        return bytes(resp[8:8 + size])

    def read(self, kind, index=0):
        rc, _, length = self.OPS[kind]
        return self._xfer(rc, length, index=index)

    def write(self, kind, data, index=0):
        _, wc, _ = self.OPS[kind]
        self._xfer(wc, len(data), data, index=index)
        time.sleep(0.08)

    def battery(self):
        raise NotSupported('battery read is a wireless feature')

    def frame(self, data):
        self._xfer(0x08, len(data), data, index=0)


class WirelessTransport:
    """BK3632 dongle vendor interface (usage FF02, report 0x13): 20-byte interrupt packets, chunked."""
    name = 'wireless'
    # kind -> (read_cmd, write_cmd, length)
    OPS = {'config': (0x44, 0x04, CFG_LEN), 'palette': (0x49, 0x09, WL_PALETTE_LEN),
           'matrix': (0x41, 0x01, MATRIX_LEN)}

    def __init__(self):
        path = None
        for p, desc in _hidraw_nodes(DONGLE_VID, DONGLE_PID):
            if b'\x06\x02\xff' in desc and b'\x85\x13' in desc:  # usage page FF02, report id 0x13
                path = p
                break
        if not path:
            raise NotSupported('dongle (3554:fa09) vendor interface not found')
        self.fd = os.open(path, os.O_RDWR)

    def close(self):
        os.close(self.fd)

    @staticmethod
    def _csum(pkt):
        return sum(pkt[:19]) & 0xFF

    def _packet(self, cmd, oper, data=b'', npkg=1, idx=0):
        pkt = bytearray(20)
        pkt[0] = 0x13
        pkt[1] = cmd
        pkt[2] = npkg
        pkt[3] = idx
        pkt[4] = (oper << 4) | (len(data) & 0xF)
        pkt[5:5 + len(data)] = data
        pkt[19] = self._csum(pkt)
        return bytes(pkt)

    def _write20(self, pkt):
        os.write(self.fd, pkt)

    def _read20(self, timeout=1.5):
        r, _, _ = select.select([self.fd], [], [], timeout)
        if not r:
            return None
        try:
            b = os.read(self.fd, 64)
        except OSError:
            return None
        if len(b) < 20 or b[0] != 0x13:
            return None
        return b[:20]

    def _drain(self):
        while self._read20(0.04) is not None:
            pass

    def read(self, kind, index=0):
        rc, _, _ = self.OPS[kind]
        for _ in range(4):
            self._drain()
            self._write20(self._packet(rc, 0))
            chunks, npkg = {}, -1
            for _ in range(140):
                r = self._read20()
                if r is None:
                    break
                if (r[1] & 0x7F) != rc:
                    continue
                npkg = r[2]
                ln = r[4] & 0xF
                chunks[r[3]] = r[5:5 + ln]
                if npkg > 0 and len(chunks) >= npkg:
                    break
            if npkg > 0 and all(i in chunks for i in range(npkg)):
                return b''.join(chunks[i] for i in range(npkg))
        raise NotSupported(f'no response to 0x{rc:02X} (keyboard asleep? press a key) or unsupported')

    def write(self, kind, data, index=0):
        _, wc, _ = self.OPS[kind]
        self._drain()
        npkg = (len(data) + 13) // 14
        fire_forget = bool(wc & 0x80)
        for idx in range(npkg):
            chunk = data[idx * 14: idx * 14 + 14]
            self._write20(self._packet(wc, 1, chunk, npkg, idx))
            if fire_forget:
                continue
            ack = None
            for _ in range(25):
                r = self._read20()
                if r is None:
                    break
                if (r[1] & 0x7F) == wc:
                    ack = r
                    break
            if ack is None:
                raise IOError(f'no ack for packet {idx} (asleep? press a key)')
            if ack[1] & 0x80:
                raise IOError(f'keyboard CRC error on packet {idx}')
            if ack[3] != idx:
                raise IOError(f'ack index mismatch on packet {idx}')
        time.sleep(0.1)

    def battery(self):
        self._drain()
        self._write20(self._packet(0x4A, 0))
        for _ in range(25):
            r = self._read20()
            if r is None:
                break
            if (r[1] & 0x7F) == 0x4A:
                # byte 5 = level %, byte 6 = status FLAGS (not a charging bool).
                # Measured on a full, unplugged keyboard: 64 10 -> 100%, 0x10.
                # bool(byte6) therefore reported "charging" while discharging;
                # return the raw byte until the bit meanings are actually decoded.
                return r[5], r[6]
        raise NotSupported('no battery response (asleep? press a key)')

    def frame(self, data):
        raise NotSupported('realtime frames do not display over the dongle; use wired')


def open_device(force=None):
    order = {'wired': [WiredTransport], 'wireless': [WirelessTransport]}.get(
        force, [WiredTransport, WirelessTransport])
    errs = []
    for cls in order:
        try:
            return cls()
        except NotSupported as e:
            errs.append(str(e))
    sys.exit('No L65 found. ' + '; '.join(errs))


# ---- helpers ----------------------------------------------------------------

def read_cfg(dev):
    cfg = dev.read('config')
    if len(cfg) != CFG_LEN or cfg[-2:] != END_MARKER:
        sys.exit(f'bad config read ({len(cfg)} bytes)')
    return bytearray(cfg)


def backup(data, kind):
    os.makedirs(BACKUP_DIR, exist_ok=True)
    path = os.path.join(BACKUP_DIR, time.strftime(f'backup-{kind}-%Y%m%d-%H%M%S.bin'))
    with open(path, 'wb') as f:
        f.write(data)
    return path


def effect_arg(v):
    by = {n: k for k, n in EFFECT_NAMES.items()}
    n = int(v) if v.isdigit() else by.get(v.lower().replace(' ', '_').replace('-', '_'))
    if n not in VALID_EFFECTS:
        raise argparse.ArgumentTypeError(f'unknown effect {v!r}; run "effects"')
    return n


def color_arg(v):
    by = {n: k for k, n in COLOR_NAMES.items()}
    n = int(v) if v.isdigit() else by.get(v.lower())
    if n not in COLOR_NAMES:
        raise argparse.ArgumentTypeError(f'unknown color {v!r}; 0-7 or {", ".join(by)}')
    return n


def rgb_arg(v):
    h = RGB_NAMES.get(v.lower(), v.lstrip('#'))
    try:
        b = bytes.fromhex(h)
    except ValueError:
        b = b''
    if len(b) != 3:
        raise argparse.ArgumentTypeError(f'bad color {v!r}; RRGGBB or {", ".join(RGB_NAMES)}')
    return b


def key_slot(name):
    return KEY_SLOTS.get(KEY_ALIASES.get(name.lower(), name.lower()))


def key_color_arg(v):
    name, sep, color = v.rpartition('=')
    slot = key_slot(name) if sep else None
    if slot is None:
        raise argparse.ArgumentTypeError(f'expected KEY=COLOR, got {v!r}')
    return slot, rgb_arg(color)


def action_bytes(text):
    t = text.lower()
    if t.startswith('hex:'):
        raw = bytes.fromhex(t[4:])
        if len(raw) != 4:
            raise argparse.ArgumentTypeError('hex: needs 4 bytes')
        return raw
    if t in RAW_ACTIONS:
        return RAW_ACTIONS[t]
    if t in MEDIA_KEYS:
        u = MEDIA_KEYS[t]
        return bytes((0x02, 0, u >> 8, u & 0xFF))
    mods, key = 0, None
    for part in t.split('+'):
        part = KEY_ALIASES.get(part, part)
        if part in MODIFIER_BITS:
            mods |= MODIFIER_BITS[part]
        elif part in HID_KEYS and key is None:
            key = HID_KEYS[part]
        else:
            raise argparse.ArgumentTypeError(f'unknown action {text!r}; run "remap --list"')
    return bytes((0x00, mods, 0, key or 0))


def remap_arg(v):
    name, sep, action = v.partition('=')
    slot = key_slot(name) if sep else None
    if slot is None:
        raise argparse.ArgumentTypeError(f'expected KEY=ACTION, got {v!r}')
    return slot, action_bytes(action)


def ranged(lo, hi):
    def parse(v):
        n = int(v, 0)
        if not lo <= n <= hi:
            raise argparse.ArgumentTypeError(f'must be {lo}-{hi}')
        return n
    return parse


def describe(dev, cfg):
    e = cfg[EFFECT_OFF]
    print(f'transport   {dev.name}')
    print(f'effect      {e} ({EFFECT_NAMES.get(e, "unknown")})')
    if e == SELF_DEFINE:
        print(f'brightness  {cfg[SELF_DEFINE_BRIGHTNESS_OFF]}')
    elif e not in NO_SLOT_EFFECTS:
        s = TABLE_BASE + 2 * e
        print(f'brightness  {cfg[s]}\nspeed       {cfg[s + 1] >> 4}\ncolor slot  {cfg[s + 1] & 0xF}')
    print(f'side strip  mode {cfg[SIDE_MODE_OFF]} ({SIDE_MODE_NAMES.get(cfg[SIDE_MODE_OFF], "?")}), '
          f'color {cfg[SIDE_COLOR_OFF]}, brightness {cfg[SIDE_BRIGHT_OFF]}, speed {cfg[SIDE_SPEED_OFF]}')
    print(f'global      tap {cfg[TAP_OFF]}ms, sleep {cfg[SLEEP_OFF] // 2}min, '
          f'debounce {cfg[DEBOUNCE_OFF] + 1}, knob {"lighting" if cfg[WHEEL_OFF] else "media"}')


# ---- commands ---------------------------------------------------------------

def cmd_dump(dev, a):
    cfg = read_cfg(dev)
    for i in range(0, CFG_LEN, 16):
        print(f'{i:02X}: {cfg[i:i + 16].hex(" ")}')
    describe(dev, cfg)


def cmd_battery(dev, a):
    lvl, status = dev.battery()
    bits = ' '.join(f'bit{i}' for i in range(8) if status >> i & 1) or 'none'
    print(f'battery {lvl}%  (status 0x{status:02x}, {bits} set)')


def cmd_set(dev, a):
    if all(v is None for v in (a.effect, a.brightness, a.speed, a.color, a.side_mode, a.side_color,
                               a.side_brightness, a.side_speed, a.tap, a.sleep, a.debounce, a.knob)):
        sys.exit('nothing to set; see "set --help"')
    cfg = read_cfg(dev)
    print(f'backup {backup(cfg, "cfg")}')
    if a.effect is not None:
        cfg[EFFECT_OFF] = a.effect
        cfg[SELF_DEFINE_FLAG_OFF] = int(a.effect == SELF_DEFINE)
    e = cfg[EFFECT_OFF]
    if e in NO_SLOT_EFFECTS:
        if a.brightness is not None and e == SELF_DEFINE:
            cfg[SELF_DEFINE_BRIGHTNESS_OFF] = a.brightness
    else:
        s = TABLE_BASE + 2 * e
        if a.brightness is not None:
            cfg[s] = a.brightness
        if a.speed is not None:
            cfg[s + 1] = (a.speed << 4) | (cfg[s + 1] & 0xF)
        if a.color is not None:
            cfg[s + 1] = (cfg[s + 1] & 0xF0) | a.color
    for val, off in ((a.side_mode, SIDE_MODE_OFF), (a.side_color, SIDE_COLOR_OFF),
                     (a.side_brightness, SIDE_BRIGHT_OFF), (a.side_speed, SIDE_SPEED_OFF),
                     (a.tap, TAP_OFF), (a.debounce, DEBOUNCE_OFF), (a.knob, WHEEL_OFF)):
        if val is not None:
            cfg[off] = val
    if a.sleep is not None:
        cfg[SLEEP_OFF] = min(255, a.sleep * 2)
    dev.write('config', bytes(cfg))
    describe(dev, read_cfg(dev))


def cmd_colors(dev, a):
    if a.rgb is None:
        # show palette
        pal = dev.read('palette')
        for e, name in EFFECT_NAMES.items():
            if e in NO_SLOT_EFFECTS:
                continue
            off = e * COLOR_ROW
            if off + COLOR_ROW <= len(pal):
                row = ' '.join(f'#{pal[off + i:off + i + 3].hex()}' for i in range(0, COLOR_ROW, 3))
                print(f'{e:2} {name:<19} {row}')
        return
    cfg = read_cfg(dev)
    e = a.effect if a.effect is not None else cfg[EFFECT_OFF]
    if e in NO_SLOT_EFFECTS:
        sys.exit(f'{EFFECT_NAMES[e]} has no colour slots; pick a normal effect')
    pal = bytearray(dev.read('palette'))
    print(f'backup {backup(pal, "palette")}')
    off = e * COLOR_ROW + a.slot * 3
    pal[off:off + 3] = a.rgb
    dev.write('palette', bytes(pal))
    # point the effect at this slot so it shows
    cfg[EFFECT_OFF] = e
    cfg[SELF_DEFINE_FLAG_OFF] = 0
    s = TABLE_BASE + 2 * e
    cfg[s + 1] = (cfg[s + 1] & 0xF0) | (a.slot & 0xF)
    if cfg[s] == 0:
        cfg[s] = 4
    dev.write('config', bytes(cfg))
    print(f'effect {e} slot {a.slot} = #{a.rgb.hex()}')


def cmd_keys(dev, a):
    if a.list:
        print(' '.join(KEY_SLOTS))
        return
    if dev.name != 'wired':
        sys.exit('per-key colours are wired-only (the dongle has no per-key payload). Plug in the cable.')
    if a.all is None and not a.assign:
        sys.exit('pass --all COLOR and/or KEY=COLOR')
    cfg = read_cfg(dev)
    planes = bytearray(dev.read('perkey'))
    print(f'backups {backup(cfg, "cfg")}, {backup(planes, "keys")}')
    targets = [(s, a.all) for s in KEY_SLOTS.values()] if a.all is not None else []
    for slot, rgb in targets + a.assign:
        for p, val in enumerate(rgb):
            planes[p * SLOTS + slot] = val
    dev.write('perkey', bytes(planes))
    cfg[EFFECT_OFF] = SELF_DEFINE
    cfg[SELF_DEFINE_FLAG_OFF] = 1
    if cfg[SELF_DEFINE_BRIGHTNESS_OFF] == 0:
        cfg[SELF_DEFINE_BRIGHTNESS_OFF] = 4
    dev.write('config', bytes(cfg))
    print('per-key colours applied (Self-define)')


def cmd_remap(dev, a):
    if a.list:
        print('keys:    ' + ' '.join(KEY_SLOTS))
        print('actions: any key, combos (ctrl+shift+s), ' + ' '.join(MEDIA_KEYS) + ', '
              + ' '.join(RAW_ACTIONS) + ', hex:XXXXXXXX')
        return
    if not a.assign:
        sys.exit('pass KEY=ACTION pairs, e.g. knob=play_pause caps=esc')
    if dev.name != 'wired' and a.layer != 0:
        sys.exit('over the dongle only layer 0 (default layer) is confirmed; use wired for FN1/FN2/Tap layers')
    layer = bytearray(dev.read('matrix', index=a.layer))
    cfg = read_cfg(dev)
    print(f'backups {backup(layer, f"matrix{a.layer}")}, {backup(cfg, "cfg")}')
    for slot, entry in a.assign:
        print(f'slot {slot}: {layer[slot * 4:slot * 4 + 4].hex(" ")} -> {entry.hex(" ")}')
        layer[slot * 4:slot * 4 + 4] = entry
    dev.write('matrix', bytes(layer), index=a.layer)
    dev.write('config', bytes(cfg))  # commit
    print('remap applied; undo with: restore <matrix backup>')


def cmd_frame(dev, a):
    if dev.name != 'wired':
        sys.exit('realtime frames are wired-only over this keyboard.')
    if a.all is None and not a.assign:
        sys.exit('pass --all COLOR and/or KEY=COLOR')
    frame = bytearray(PERKEY_LEN)
    if a.all is not None:
        for s in KEY_SLOTS.values():
            frame[s * 3:s * 3 + 3] = a.all
    for slot, rgb in a.assign:
        frame[slot * 3:slot * 3 + 3] = rgb
    end = time.monotonic() + a.seconds
    while True:
        dev.frame(bytes(frame))
        if time.monotonic() >= end:
            break
        time.sleep(1 / a.fps)


def cmd_restore(dev, a):
    with open(a.file, 'rb') as f:
        saved = f.read()
    import re
    if len(saved) == CFG_LEN:
        dev.write('config', saved)
    elif len(saved) == PERKEY_LEN:
        if dev.name != 'wired':
            sys.exit('per-key restore is wired-only')
        dev.write('perkey', saved)
        dev.write('config', bytes(read_cfg(dev)))
    elif len(saved) in (WIRED_PALETTE_LEN, WL_PALETTE_LEN):
        dev.write('palette', saved)
    elif len(saved) == MATRIX_LEN:
        m = re.search(r'matrix(\d)', os.path.basename(a.file))
        dev.write('matrix', saved, index=int(m.group(1)) if m else 0)
        dev.write('config', bytes(read_cfg(dev)))
    else:
        sys.exit(f'{a.file}: unrecognised size {len(saved)}')
    print('restored')


def main():
    p = argparse.ArgumentParser(description='Womier L65 control (Linux hidraw, wired + 2.4G dongle)')
    p.add_argument('--wired', action='store_const', dest='force', const='wired', help='force wired')
    p.add_argument('--wireless', action='store_const', dest='force', const='wireless', help='force dongle')
    sub = p.add_subparsers(dest='command', required=True)

    sp = sub.add_parser('dump', help='show current config + transport')
    sp.set_defaults(func=cmd_dump)
    sub.add_parser('battery', help='battery level (wireless)').set_defaults(func=cmd_battery)
    sub.add_parser('effects', help='list effects').set_defaults(
        func=lambda dev, a: [print(f'{n:2}  {name}') for n, name in EFFECT_NAMES.items()])

    sp = sub.add_parser('set', help='effect / brightness / speed / side strip / global (wired+wireless)')
    sp.add_argument('--effect', type=effect_arg)
    sp.add_argument('--brightness', type=ranged(0, 4))
    sp.add_argument('--speed', type=ranged(0, 4))
    sp.add_argument('--color', type=color_arg, help='palette slot 0-7 or name')
    sp.add_argument('--side-mode', type=lambda v: SIDE_MODE_NAMES and (int(v) if v.isdigit() else
                    {n: k for k, n in SIDE_MODE_NAMES.items()}[v.lower()]))
    sp.add_argument('--side-color', type=color_arg)
    sp.add_argument('--side-brightness', type=ranged(0, 4))
    sp.add_argument('--side-speed', type=ranged(0, 4))
    sp.add_argument('--tap', type=ranged(0, 255))
    sp.add_argument('--sleep', type=ranged(0, 127), help='minutes')
    sp.add_argument('--debounce', type=ranged(1, 8))
    sp.add_argument('--knob', type=lambda v: {'media': 0, 'lighting': 1}[v.lower()])
    sp.set_defaults(func=cmd_set)

    sp = sub.add_parser('colors', help='custom effect colour / palette (wired+wireless)')
    sp.add_argument('--rgb', type=rgb_arg, metavar='RRGGBB')
    sp.add_argument('--effect', type=effect_arg)
    sp.add_argument('--slot', type=ranged(0, 6), default=0)
    sp.set_defaults(func=cmd_colors)

    sp = sub.add_parser('keys', help='per-key colours (WIRED only)')
    sp.add_argument('assign', nargs='*', type=key_color_arg, metavar='KEY=COLOR')
    sp.add_argument('--all', type=rgb_arg, metavar='COLOR')
    sp.add_argument('--list', action='store_true')
    sp.set_defaults(func=cmd_keys)

    sp = sub.add_parser('remap', help='remap keys / knob press (wired+wireless)')
    sp.add_argument('assign', nargs='*', type=remap_arg, metavar='KEY=ACTION')
    sp.add_argument('--layer', type=ranged(0, 3), default=0)
    sp.add_argument('--list', action='store_true')
    sp.set_defaults(func=cmd_remap)

    sp = sub.add_parser('frame', help='realtime frame (WIRED only)')
    sp.add_argument('assign', nargs='*', type=key_color_arg, metavar='KEY=COLOR')
    sp.add_argument('--all', type=rgb_arg, metavar='COLOR')
    sp.add_argument('--seconds', type=float, default=3.0)
    sp.add_argument('--fps', type=float, default=30.0)
    sp.set_defaults(func=cmd_frame)

    sp = sub.add_parser('restore', help='write back a backup file')
    sp.add_argument('file')
    sp.set_defaults(func=cmd_restore)

    args = p.parse_args()
    dev = open_device(args.force)
    try:
        args.func(dev, args)
    except (NotSupported, IOError) as e:
        sys.exit(str(e))
    finally:
        dev.close()


if __name__ == '__main__':
    main()
