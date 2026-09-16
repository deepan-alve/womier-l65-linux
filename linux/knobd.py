#!/usr/bin/env python3
"""
knobd - Womier L65 knob daemon (Linux, tested target: GNOME Wayland).

Turns the volume knob into a context-aware media / scrub / brightness dial.
No keyboard firmware change needed - it just intercepts the knob's evdev events
and re-dispatches them based on gestures + the Left-Shift modifier.

GESTURE MAP  (Left-Shift = modifier)
  rotate                -> volume up/down            (accelerates when spun fast)
  Shift + rotate        -> scrub / seek media        (nothing if no player)
  Ctrl  + rotate        -> laptop screen brightness  (native OSD, see bright())
  press once            -> play/pause  (mute if nothing is playing)
  Shift + press once    -> mute (always)
  double tap            -> next track
  Shift + double tap    -> previous track
  triple tap            -> next software profile     (see APP_PROFILES)
  long press            -> next lighting preset      (see LIGHTING_PRESETS;
                           currently DISABLED - notifies only, touches nothing)

Why scrub is on Shift rather than hold+rotate:
  The knob's consumer HID report (id 2) is a SINGLE 16-bit usage slot - mute and
  both rotation usages compete for it, so rotating while the knob is held evicts
  the press and the kernel sees a release. Hold+rotate can therefore never be
  detected, and seeking lives on Shift instead.

REQUIRES
  python-evdev                         (pip install evdev  /  distro python3-evdev)
  wpctl (PipeWire) OR pactl OR amixer  -> volume
  playerctl                            -> media control + scrub
  brightnessctl                        -> laptop backlight
  notify-send                          -> on-screen feedback (optional)

The user must be able to read AND grab /dev/input/event* (usually: be in the
'input' group, then re-login). See the setup notes printed by `--help-setup`.
"""

import os
import sys
import time
import shutil
import signal
import argparse
import selectors
import threading
import subprocess
from pathlib import Path

try:
    from evdev import InputDevice, list_devices, ecodes
except ImportError:
    sys.exit("python-evdev not installed.  Install:  pip install --user evdev   "
             "(or your distro package python3-evdev)")

# --------------------------------------------------------------------------- #
# Tunables - edit these to taste
# --------------------------------------------------------------------------- #
VENDORS      = {0x258a, 0x3554}   # 0x258a = wired L65, 0x3554 = 2.4G dongle

# The knob emits these on rotation. Stock firmware = volume codes; the screen-
# brightness firmware patch = brightness codes. We accept BOTH so knobd works
# either way and just treats any of them as "one detent" - the daemon alone
# decides what a detent means (volume / brightness / scrub).
ROTATE_UP    = {ecodes.KEY_VOLUMEUP, ecodes.KEY_BRIGHTNESSUP}
ROTATE_DOWN  = {ecodes.KEY_VOLUMEDOWN, ecodes.KEY_BRIGHTNESSDOWN}
PRESS_CODE   = ecodes.KEY_MUTE     # knob press; confirm via --dry-run, change if different

RESCAN_EVERY = 3.0                # s between device re-scans. The keyboard's
                                  # event nodes are renumbered on every replug
                                  # and when switching wired <-> dongle, so we
                                  # have to notice rather than hold stale fds.

TAP_WINDOW   = 0.28               # s to wait for another tap before resolving
LONG_PRESS   = 1.2                # s held (no rotation) before it counts as long-press.
                                  # Measured natural hold on this knob is ~1.57s, so this
                                  # sits just under it: deliberate enough not to trigger by
                                  # accident, still reachable without a conscious wait.
                                  # Fires the instant the threshold is reached, NOT on
                                  # release, so you get feedback while still holding.

# NOTE: VOL_STEP and BRI_STEP only apply on the FALLBACK path (no uinput). On the
# normal path we emit a real media key and the DESKTOP owns the step size, so
# tuning these changes nothing. To change the real volume granularity:
#   gsettings set org.gnome.settings-daemon.plugins.media-keys volume-step 1
# (integer percent, range 1-20; GNOME's default is 6, which is very coarse once
# acceleration multiplies it. At 1 a detent is 1%, a fast spin 5%.)
VOL_STEP     = 2                  # % volume per detent  - fallback path only
BRI_STEP     = 2                  # % brightness per detent - fallback path only
SEEK_STEP    = 3                  # seconds seek per detent (always used - playerctl)

# Acceleration: gap between detents (s) -> step multiplier. Spin fast = bigger jumps.
#
# Deliberately gentle on the uinput path. Each unit here becomes one MORE key
# event, and every event restarts GNOME's OSD fade animation - at the old 5x a
# fast spin emitted ~100 events/sec and the slider visibly stuttered, even
# though the volume itself settles in ~20ms. Spinning faster already yields more
# detents, so that IS the acceleration; multiplying on top double-counts it.
# Raise ACCEL_MAX if you want bigger jumps and can live with a busier OSD.
ACCEL_MAX = 2

def accel_mult(dt):
    if dt is None:   return 1
    if dt < 0.045:   return ACCEL_MAX
    if dt < 0.090:   return min(2, ACCEL_MAX)
    return 1

SHOW_OSD     = True               # notify-send feedback for discrete actions

# --------------------------------------------------------------------------- #
# Lighting presets - cycled by LONG PRESS
# --------------------------------------------------------------------------- #
# Each entry is (name, argv passed to `l65ctl.py set`).
#
# DISABLED for now - the long press deliberately does not touch the lighting
# until the RGB/brightness set is decided. Re-enable by moving these back into
# the list; the cycling machinery in long_press() is unchanged and will pick
# them straight up:
#     ("Full",  ["--effect", "neon_stream", "--brightness", "4", "--speed", "4"]),
#     ("Work",  ["--effect", "fixed_on",    "--brightness", "2", "--color", "white"]),
#     ("Night", ["--effect", "respire",     "--brightness", "1", "--color", "cyan"]),
#     ("Dark",  ["--effect", "off"]),
#
# NOTE when re-enabling: `l65ctl.py set` writes the config block to flash
# (0xC600, 512-byte sector). Fine at long-press frequency, but never wire these
# to anything that can fire rapidly. The RAM-only path is `l65ctl.py frame`.
LIGHTING_PRESETS = []

# --------------------------------------------------------------------------- #
# Software profiles - cycled by TRIPLE TAP
# --------------------------------------------------------------------------- #
# (name, overrides). An override may retune any of 'vol_step', 'bri_step' or
# 'seek_step' for that profile; anything absent falls back to the globals above.
#
# This is the switching mechanism only. The per-software behaviour goes in these
# dicts once decided. Note that GNOME Wayland gives an unprivileged client no way
# to read the focused window, so a profile cannot auto-select by app - it is
# switched by hand with a triple tap. The one app signal that IS available is the
# active MPRIS player, via `playerctl metadata --format '{{playerName}}'`.
APP_PROFILES = [
    ("Default", {}),
]

# --------------------------------------------------------------------------- #
# Backends (auto-detected)
# --------------------------------------------------------------------------- #
HAVE = {c: shutil.which(c) is not None for c in
        ("wpctl", "pactl", "amixer", "playerctl", "brightnessctl", "notify-send")}

# --------------------------------------------------------------------------- #
# Virtual keyboard - this is what gets the native GNOME OSD back
# --------------------------------------------------------------------------- #
# Because we grab the knob's node, the desktop never sees the volume key, and
# driving wpctl/brightnessctl directly changes the level behind GNOME's back -
# no slider animation, no feedback. So instead we re-emit a real media key on
# our own uinput device: GNOME handles it exactly as if it came from a keyboard,
# runs its own volume/brightness logic, and shows its own OSD.
#
# Acceleration becomes N taps rather than one big jump, so GNOME's per-press
# step is respected and the OSD animates the whole way.
UINPUT_NAME = "knobd-virtual"
OSD_CODES = [ecodes.KEY_VOLUMEUP, ecodes.KEY_VOLUMEDOWN, ecodes.KEY_MUTE,
             ecodes.KEY_BRIGHTNESSUP, ecodes.KEY_BRIGHTNESSDOWN]
UI = None                         # set by open_uinput(); None = fall back, no OSD


def open_uinput():
    """Create the virtual keyboard, or return None and explain why not."""
    global UI
    try:
        from evdev import UInput
        UI = UInput({ecodes.EV_KEY: OSD_CODES}, name=UINPUT_NAME)
    except Exception as e:
        UI = None
        print(f"warn: no uinput ({e}) - volume/brightness will still work, "
              f"but silently, with no on-screen slider")
    return UI


def tap(code, times=1):
    """Press+release a key on the virtual device `times` times."""
    for _ in range(max(1, times)):
        UI.write(ecodes.EV_KEY, code, 1)
        UI.syn()
        UI.write(ecodes.EV_KEY, code, 0)
        UI.syn()

def run(cmd, timeout=2):
    try:
        return subprocess.run(cmd, capture_output=True, text=True, timeout=timeout)
    except Exception:
        return None

def vol(delta_pct, up, taps=1):
    if UI is not None:                       # preferred: GNOME reacts + shows its OSD
        tap(ecodes.KEY_VOLUMEUP if up else ecodes.KEY_VOLUMEDOWN, taps)
        return
    sign = "+" if up else "-"                # fallback: works, but no OSD
    if HAVE["wpctl"]:
        run(["wpctl", "set-volume", "-l", "1.5", "@DEFAULT_AUDIO_SINK@", f"{delta_pct}%{sign}"])
    elif HAVE["pactl"]:
        run(["pactl", "set-sink-volume", "@DEFAULT_SINK@", f"{sign}{delta_pct}%"])
    elif HAVE["amixer"]:
        run(["amixer", "-q", "set", "Master", f"{delta_pct}%{sign}"])

MUTE_BINDING = "<Shift>XF86AudioMute"
MUTE_GSETTING = ("org.gnome.settings-daemon.plugins.media-keys", "volume-mute")


def mute_toggle():
    """Toggle mute, preferring the real key so GNOME shows its own OSD.

    We only READ Shift, never grab it, so the desktop still sees Shift held when
    we emit our key - GNOME receives Shift+Mute, not Mute. Its built-in binding
    (volume-mute-static) matches the bare key only, so shift+press did nothing at
    all. The fix is not on our side: GNOME's user-configurable `volume-mute` list
    is told to accept MUTE_BINDING as well, and then GNOME handles it natively.
    check_mute_binding() warns at startup if that is missing.

    (Brightness keys are not modifier-sensitive this way, which is why
    shift+rotate always worked and only mute needed this.)
    """
    if UI is not None:
        tap(ecodes.KEY_MUTE)
        return
    if HAVE["wpctl"]:                        # no uinput: no OSD, so say so ourselves
        run(["wpctl", "set-mute", "@DEFAULT_AUDIO_SINK@", "toggle"])
    elif HAVE["pactl"]:
        run(["pactl", "set-sink-mute", "@DEFAULT_SINK@", "toggle"])
    elif HAVE["amixer"]:
        run(["amixer", "-q", "set", "Master", "toggle"])
    r = run(["wpctl", "get-volume", "@DEFAULT_AUDIO_SINK@"]) if HAVE["wpctl"] else None
    notify("Muted" if (r and "[MUTED]" in r.stdout) else "Unmuted", "Volume")


def check_mute_binding():
    """Warn loudly if shift+press mute will silently do nothing."""
    schema, key = MUTE_GSETTING
    r = run(["gsettings", "get", schema, key])
    if r is None or r.returncode != 0:
        return                               # not GNOME, or gsettings missing
    if MUTE_BINDING not in r.stdout:
        print(f"warn: GNOME has no '{MUTE_BINDING}' binding, so shift+press will "
              f"mute nothing.\n      fix:  gsettings set {schema} {key} "
              f"\"['{MUTE_BINDING}']\"")

_player = None                    # last player we chose, for stickiness
_player_at = 0.0                  # when we last looked (monotonic)
PLAYER_TTL = 1.0                  # s to reuse the choice before re-scanning


def active_player(force=False):
    """Name of the MPRIS player to control, or None.

    A bare `playerctl` command targets the FIRST player on the bus, not the one
    you are actually listening to. With VLC playing and a paused YouTube tab in
    Chromium, every command went to Chromium and VLC ignored the knob entirely.

    So: prefer whatever is genuinely Playing. The choice is sticky, so pausing
    does not immediately hand control to some other player, and it is cached for
    PLAYER_TTL because this costs one subprocess per player and gets called on
    every detent while scrubbing.

    (playerctld would also solve this, but it is another daemon to run and it
    tracks last-active rather than actually-playing.)
    """
    global _player, _player_at
    if not HAVE["playerctl"]:
        return None
    now = time.monotonic()
    if not force and (now - _player_at) < PLAYER_TTL:
        return _player
    _player_at = now
    r = run(["playerctl", "-l"])
    names = r.stdout.split() if (r and r.returncode == 0) else []
    if not names:
        _player = None
        return None
    playing = [n for n in names
               if (s := run(["playerctl", "-p", n, "status"]))
               and s.returncode == 0 and s.stdout.strip() == "Playing"]
    if playing:
        _player = _player if _player in playing else playing[0]
    elif _player not in names:
        _player = names[0]
    return _player


def media_status():
    """Return 'Playing'/'Paused'/'Stopped' for the active player, else None."""
    p = active_player()
    if p is None:
        return None
    r = run(["playerctl", "-p", p, "status"])
    if not r or r.returncode != 0:
        return None
    return r.stdout.strip()

def media(cmd):
    p = active_player()
    if p:
        run(["playerctl", "-p", p, cmd])
        active_player(force=True)      # the action may have changed who is playing

def scrub(seconds, forward):
    p = active_player()
    if p:
        run(["playerctl", "-p", p, "position", f"{seconds}{'+' if forward else '-'}"])

def backlight_files():
    import glob
    return sorted(glob.glob("/sys/class/backlight/*/brightness"))


BRIGHT_BINDING = "<Ctrl>XF86MonBrightnessUp"
BRIGHT_GSETTING = ("org.gnome.shell.keybindings", "screen-brightness-up")


def bright(delta_pct, up, taps=1):
    """Raise/lower screen brightness, preferring the real key for the OSD.

    Screen brightness is bound in org.gnome.shell.keybindings (NOT media-keys,
    which only covers the keyboard backlight). Out of the box the bare key works
    and Ctrl is unbound, so a synthetic Ctrl+key did nothing at all - and Shift
    is already taken by screen-brightness-up-monitor, per-monitor adjustment,
    which is a no-op on a single-display laptop. Adding the Ctrl variant to that
    binding list makes GNOME handle it and draw its own OSD; see
    check_brightness_binding(), which says so at startup if it is missing.

    The direct sysfs path below is only a fallback for when uinput is absent.
    """
    if UI is not None:
        tap(ecodes.KEY_BRIGHTNESSUP if up else ecodes.KEY_BRIGHTNESSDOWN, taps)
        return
    files = backlight_files()
    if not files:
        return
    path = files[0]
    try:
        with open(path) as f:
            cur = int(f.read().strip())
        with open(path.rsplit("/", 1)[0] + "/max_brightness") as f:
            mx = int(f.read().strip())
    except Exception:
        return
    step = max(1, mx * delta_pct // 100)
    new = max(0, min(mx, cur + (step if up else -step)))
    try:
        with open(path, "w") as f:
            f.write(str(new))
    except OSError:
        # no write access - fall back to brightnessctl, which may itself be
        # blocked if we are not in the 'video' group (see check_backlight_access)
        if not HAVE["brightnessctl"]:
            return
        r = run(["brightnessctl", "-q", "set", f"{delta_pct}%{'+' if up else '-'}"])
        if r is None or r.returncode != 0:
            notify("No permission to change brightness", "Display")
            return
        try:
            with open(path) as f:
                new = int(f.read().strip())
        except Exception:
            return
    notify(f"{round(new * 100 / mx)}%", "Brightness")


def check_brightness_binding():
    """Warn if ctrl+rotate will silently fail to change brightness."""
    schema, key = BRIGHT_GSETTING
    r = run(["gsettings", "get", schema, key])
    if r is None or r.returncode != 0:
        return
    if BRIGHT_BINDING not in r.stdout:
        print(f"warn: GNOME has no '{BRIGHT_BINDING}' binding, so ctrl+rotate "
              f"will not\n      change brightness. fix:\n"
              f"        gsettings set {schema} {key} "
              f"\"['XF86MonBrightnessUp', '{BRIGHT_BINDING}']\"\n"
              f"        gsettings set {schema} screen-brightness-down "
              f"\"['XF86MonBrightnessDown', '<Ctrl>XF86MonBrightnessDown']\"")


def check_backlight_access():
    """Warn if the sysfs FALLBACK cannot write. Irrelevant when uinput works,
    since then GNOME owns the backlight and we never touch sysfs."""
    if UI is not None:
        return
    files = backlight_files()
    if not files:
        return
    if os.access(files[0], os.W_OK):
        return
    r = run(["brightnessctl", "-q", "set", "+0%"]) if HAVE["brightnessctl"] else None
    if r is not None and r.returncode == 0:
        return
    print(f"warn: no write access to {files[0]} - ctrl+rotate cannot change "
          f"brightness.\n      fix: join the 'video' group, then restart the whole "
          f"session (a running\n      systemd --user caches its groups at startup, so "
          f"a re-login is not enough).\n      udev cannot help: uaccess only ACLs "
          f"/dev nodes, and a backlight has none.")

def notify(msg, title="Knob"):
    if SHOW_OSD and HAVE["notify-send"]:
        # the synchronous hint makes each OSD replace the previous one instead of stacking
        run(["notify-send", "-t", "1200",
             "-h", "string:x-canonical-private-synchronous:knobd", title, msg])

def find_l65ctl():
    """Absolute path to l65ctl.py, or None.

    The documented install copies only knobd.py into ~/.local/bin, so when this
    runs as a systemd user service l65ctl.py is NOT a sibling. Check the env
    override and the repo checkout too before giving up.
    """
    cands = []
    if os.environ.get("L65CTL"):
        cands.append(Path(os.environ["L65CTL"]))
    cands += [Path(__file__).resolve().with_name("l65ctl.py"),
              Path.home() / ".local" / "bin" / "l65ctl.py"]
    for c in cands:
        if c.is_file():
            return str(c)
    return shutil.which("l65ctl.py")

def l65ctl(args, label):
    """Run an l65ctl.py subcommand off the event loop.

    A config write is a USB feature report plus a flash sector write, which is
    far too slow to do inline - blocking here would stall knob input.
    """
    path = find_l65ctl()
    if not path:
        notify("l65ctl.py not found (set $L65CTL)", "Knob")
        return
    def work():
        r = run([sys.executable, path] + args, timeout=10)
        if r is None or r.returncode != 0:
            detail = (r.stderr or r.stdout).strip().splitlines()[-1] if r else "timed out"
            notify(f"{label}: {detail}", "Knob (failed)")
    threading.Thread(target=work, daemon=True).start()

# --------------------------------------------------------------------------- #
# Gesture engine
# --------------------------------------------------------------------------- #
class Knob:
    def __init__(self, dry=False):
        self.dry          = dry
        self.shift        = False   # Left-Shift held?
        self.ctrl         = False   # Left-Ctrl held?
        self.press_t      = None    # monotonic time knob went down, or None
        self.rotated      = False   # did a rotation happen during this press?
        self.long_fired   = False   # long press already fired for this hold?
        self.taps         = 0       # completed quick taps awaiting resolution
        self.tap_deadline = None    # monotonic time to resolve taps
        self.tap_shift    = False   # was Shift held when the tap(s) were made?
        self.profile_i    = 0       # index into APP_PROFILES
        self.preset_i     = 0       # index into LIGHTING_PRESETS

    def act(self, desc, fn):
        if self.dry:
            print(f"[dry] {desc}")
            return
        fn()

    def tune(self, key, default):
        """Step size for the active software profile, else the global default."""
        return APP_PROFILES[self.profile_i][1].get(key, default)

    # -- rotation ---------------------------------------------------------- #
    def on_rotate(self, up, dt):
        m = accel_mult(dt)
        if self.press_t is not None and not self.rotated:
            # A rotation during a hold cancels the pending long press. On this
            # keyboard it should not be reachable - the consumer report has a
            # single usage slot, so rotating evicts the press first - but if a
            # firmware ever delivers both, a long press must not also fire.
            self.flush_taps()
            self.rotated = True
        if self.shift:                               # shift + rotate = scrub / seek
            # active_player() is cached; media_status() would spawn a subprocess
            # on every single detent, which is far too slow to scrub with
            if active_player() is not None:
                step = self.tune('seek_step', SEEK_STEP) * m
                self.act(f"scrub {'+' if up else '-'}{step}s",
                         lambda: scrub(step, up))
        elif self.ctrl:                              # ctrl + rotate = brightness
            step = self.tune('bri_step', BRI_STEP) * m
            self.act(f"brightness {'+' if up else '-'}{step}%",
                     lambda: bright(step, up, m))
        else:                                        # plain rotate = volume
            step = self.tune('vol_step', VOL_STEP) * m
            self.act(f"volume {'+' if up else '-'}{step}% ({m} tap)",
                     lambda: vol(step, up, m))

    # -- press / release --------------------------------------------------- #
    def on_press(self):
        self.press_t    = time.monotonic()
        self.rotated    = False
        self.long_fired = False
        # Latch Shift NOW. resolve_taps() only runs TAP_WINDOW after the last
        # release, and by then Shift has usually been let go - reading it there
        # made shift+press silently fall through to play/pause. Sticky across a
        # multi-tap sequence, so shift+double-tap works even if you release the
        # modifier between the two taps.
        self.tap_shift = self.shift if self.taps == 0 else (self.tap_shift or self.shift)

    def on_release(self):
        if self.press_t is None:
            return
        self.press_t = None
        if self.rotated or self.long_fired:          # scrub session, or already fired
            return
        self.taps += 1                               # quick tap - wait for more
        self.tap_deadline = time.monotonic() + TAP_WINDOW

    # -- long press fires on the threshold, not on release ------------------ #
    def long_deadline(self):
        """When this hold becomes a long press, or None if it no longer can."""
        if self.press_t is None or self.rotated or self.long_fired:
            return None
        return self.press_t + LONG_PRESS

    def check_long_press(self):
        d = self.long_deadline()
        if d is not None and time.monotonic() >= d:
            self.long_fired = True                   # set first, so it cannot re-arm
            self.flush_taps()
            self.long_press()

    # -- tap resolution ---------------------------------------------------- #
    def flush_taps(self):
        if self.taps > 0:
            self.resolve_taps()
        else:
            self.tap_deadline = None

    def resolve_taps(self):
        n = self.taps
        shift = self.tap_shift          # as it was when pressed, not now
        self.taps = 0
        self.tap_deadline = None
        self.tap_shift = False
        if n == 1:
            if shift:
                self.act("mute", mute_toggle)
            elif media_status():
                self.act("play/pause", lambda: media("play-pause"))
            else:
                self.act("mute (no media)", mute_toggle)
        elif n == 2:
            if shift:
                self.act("previous", lambda: (media("previous"), notify("Previous")))
            else:
                self.act("next", lambda: (media("next"), notify("Next")))
        elif n >= 3:
            self.toggle_app_profile()

    # -- gesture targets ---------------------------------------------------- #
    def toggle_app_profile(self):
        """Triple tap: advance to the next software profile."""
        if len(APP_PROFILES) < 2:
            self.act("profile cycle (only one defined)",
                     lambda: notify("Only one profile defined", "Knob"))
            return
        self.profile_i = (self.profile_i + 1) % len(APP_PROFILES)
        name = APP_PROFILES[self.profile_i][0]
        self.act(f"profile -> {name}", lambda: notify(name, "Profile"))

    def long_press(self):
        """Long press: advance to the next lighting preset."""
        if not LIGHTING_PRESETS:
            # deliberately unassigned - still report it, so the gesture is
            # visibly firing and we know the threshold is right
            self.act("long press (lighting disabled)",
                     lambda: notify("Long press — nothing assigned", "Knob"))
            return
        self.preset_i = (self.preset_i + 1) % len(LIGHTING_PRESETS)
        name, argv = LIGHTING_PRESETS[self.preset_i]

        def apply():
            notify(name, "Lighting")
            l65ctl(["set"] + argv, f"preset {name}")

        self.act(f"lighting preset {name} ({' '.join(argv)})", apply)

# --------------------------------------------------------------------------- #
# Device discovery
# --------------------------------------------------------------------------- #
def find_devices():
    """Return (grab_list, monitor_list).
    grab_list    = the L65 knob's consumer node only - grabbed exclusively.
    monitor_list = EVERY keyboard carrying LEFTSHIFT - read only, never grabbed.

    The monitor list is deliberately not restricted to the L65. Shift is just a
    modifier, and you may well be resting a hand on the laptop's built-in
    keyboard while turning the knob; limiting it to the L65 meant Shift silently
    did nothing unless pressed on the Womier itself. Reading is harmless - these
    are never grabbed, so normal typing is completely unaffected.

    A rotation code alone does NOT identify the knob. This is a composite HID
    device: the main typing nodes ("BY Tech Gaming Keyboard" wired, "CX 2.4G
    Wireless Receiver" on the dongle) advertise KEY_VOLUMEUP/KEY_VOLUMEDOWN in
    their own capability bitmap, so matching on rotation codes also matches the
    keyboard itself - and grabbing that swallows every keystroke on the way to
    the desktop. The knob node is the one that has rotation codes but is not a
    typing keyboard, and KEY_A separates the two reliably on both transports.
    """
    grab, mon = [], []
    for path in list_devices():
        try:
            d = InputDevice(path)
        except Exception:
            continue
        if d.name == UINPUT_NAME:   # never read back our own synthetic keys
            d.close()
            continue
        caps = set(d.capabilities().get(ecodes.EV_KEY, []))
        is_typing_kbd = ecodes.KEY_A in caps
        if (d.info.vendor in VENDORS
                and ((ROTATE_UP | ROTATE_DOWN) & caps) and not is_typing_kbd):
            grab.append(d)          # the knob itself - only ever an L65 consumer node
        elif ecodes.KEY_LEFTSHIFT in caps or ecodes.KEY_LEFTCTRL in caps:
            mon.append(d)           # ANY keyboard, read only, purely for modifiers
        else:
            d.close()
    return grab, mon

# --------------------------------------------------------------------------- #
# Main loop
# --------------------------------------------------------------------------- #
SETUP_NOTES = """\
knobd setup
-----------
1. Install deps:
     sudo apt install python3-evdev playerctl brightnessctl   # Debian/Ubuntu
     # PipeWire's wpctl is usually already present; else install wireplumber

2. Device access - install the udev rule, then RE-PLUG the keyboard/dongle:
     sudo cp udev/60-womier-l65.rules /etc/udev/rules.d/
     sudo udevadm control --reload-rules && sudo udevadm trigger

   Its uaccess tags cover the input nodes, so you do NOT need the 'input'
   group. That matters: a running `systemd --user` caches its supplementary
   groups at startup, so a group added later never reaches the service until
   the whole session restarts. uaccess works immediately and after every replug.

   Only the sysfs backlight FALLBACK needs a group, and only if uinput is
   unavailable:  sudo usermod -aG video $USER   (then restart the session)

3. GNOME keybindings - two actions are dispatched as real keys so GNOME draws
   its own OSD, but the modifier variants are unbound out of the box:
     gsettings set org.gnome.settings-daemon.plugins.media-keys volume-mute \
       "['<Shift>XF86AudioMute']"
     gsettings set org.gnome.shell.keybindings screen-brightness-up \
       "['XF86MonBrightnessUp', '<Ctrl>XF86MonBrightnessUp']"
     gsettings set org.gnome.shell.keybindings screen-brightness-down \
       "['XF86MonBrightnessDown', '<Ctrl>XF86MonBrightnessDown']"
   Without these, shift+press and ctrl+rotate silently do nothing. knobd warns
   at startup if it spots either missing.

4. Test it (won't touch your typing):
     python3 knobd.py --list          # confirm it finds the L65
     python3 knobd.py --dry-run       # spin/press the knob, watch the log
     python3 knobd.py                 # go live

   If the press does not register, run knobprobe.py to see what the knob
   actually emits and set PRESS_CODE accordingly.

5. Autostart as a user service (optional):
     install -Dm755 linux/knobd.py  ~/.local/bin/knobd.py
     install -Dm755 linux/l65ctl.py ~/.local/bin/l65ctl.py   # lighting presets
     mkdir -p ~/.config/systemd/user
     cp systemd/knobd.service ~/.config/systemd/user/
     systemctl --user daemon-reload
     systemctl --user enable --now knobd.service
     journalctl --user -u knobd.service -f
"""

def main():
    ap = argparse.ArgumentParser(description="Womier L65 knob daemon")
    ap.add_argument("--list", action="store_true", help="list detected devices and exit")
    ap.add_argument("--dry-run", action="store_true", help="log gestures, execute nothing")
    ap.add_argument("--help-setup", action="store_true", help="print install/setup notes")
    args = ap.parse_args()

    if args.help_setup:
        print(SETUP_NOTES)
        return

    grab_devs, mon_devs = find_devices()

    if args.list:
        for d in grab_devs:
            print(f"GRAB    {d.path}  {d.name}  vendor={hex(d.info.vendor)}")
        for d in mon_devs:
            print(f"MONITOR {d.path}  {d.name}  vendor={hex(d.info.vendor)}")
        if not grab_devs and not mon_devs:
            print("no Womier L65 devices found - is it plugged in / dongle in?")
        return

    if not grab_devs:
        sys.exit("No L65 knob device found (needs VOLUMEUP+MUTE). "
                 "Run 'python3 knobd.py --list'.")

    knob = Knob(dry=args.dry_run)
    sel = selectors.DefaultSelector()
    held = {}                     # path -> device, for everything registered
    grabbed = set()               # paths we hold EVIOCGRAB on

    def drop(dev, why):
        """Unregister and close one device.

        Critically this must happen when a device disappears. An unplugged
        device's fd stays permanently readable (EPOLLHUP), so select() returns
        it on every pass while read() keeps raising - the old code swallowed
        that and span the loop at ~20% CPU until restarted.
        """
        try:
            sel.unregister(dev)
        except Exception:
            pass
        if dev.path in grabbed:
            try:
                dev.ungrab()
            except Exception:
                pass
            grabbed.discard(dev.path)
        try:
            dev.close()
        except Exception:
            pass
        held.pop(dev.path, None)
        if why:
            print(f"device gone: {dev.path} ({why})")

    def rescan(announce=True):
        """(Re)discover devices and rebuild the selector.

        Needed because the keyboard's nodes are renumbered on every replug and
        on switching between wired and the dongle. Without this, a transport
        switch left us grabbing nothing and required a manual restart.
        """
        g, m = find_devices()
        wanted = {d.path: d for d in g}
        wanted.update({d.path: d for d in m})
        if set(wanted) == set(held):            # nothing changed - keep the fds
            for d in list(wanted.values()):
                d.close()
            return False
        for dev in list(held.values()):
            drop(dev, None)
        for d in g:
            try:
                d.grab()
                grabbed.add(d.path)
            except Exception as e:
                print(f"warn: could not grab {d.path}: {e} (run in 'input' group)")
            sel.register(d, selectors.EVENT_READ)
            held[d.path] = d
        for d in m:
            sel.register(d, selectors.EVENT_READ)
            held[d.path] = d
        if announce:
            print(f"knobd running on: "
                  f"{', '.join(d.name for d in g) or 'NOTHING - knob not found'}")
            print(f"modifiers (shift/ctrl) watched on: "
                  f"{', '.join(d.name for d in m) or 'nothing'}")
        return True

    for d in grab_devs + mon_devs:              # discovery above re-runs inside
        d.close()
    rescan(announce=False)

    # after discovery, so the virtual device is never a discovery candidate
    open_uinput()
    check_mute_binding()
    check_brightness_binding()
    check_backlight_access()

    def cleanup(*_):
        for dev in list(held.values()):
            drop(dev, None)
        if UI is not None:
            try:
                UI.close()
            except Exception:
                pass
        sys.exit(0)
    signal.signal(signal.SIGINT, cleanup)
    signal.signal(signal.SIGTERM, cleanup)

    backends = ", ".join(k for k, v in HAVE.items() if v) or "NONE (nothing will happen!)"
    print(f"knobd running on: "
          f"{', '.join(d.name for p, d in held.items() if p in grabbed) or 'NOTHING'}")
    print(f"modifiers (shift/ctrl) watched on: "
          f"{', '.join(d.name for p, d in held.items() if p not in grabbed) or 'nothing'}")
    print(f"volume/brightness: {'virtual key -> native GNOME OSD' if UI is not None else 'direct control, NO OSD'}")
    print(f"backends: {backends}")
    if args.dry_run:
        print("DRY RUN - no actions executed. Ctrl-C to quit.")

    last_rot = None
    next_scan = time.monotonic() + RESCAN_EVERY
    while True:
        # wake for whichever deadline lands first - tap resolution, the
        # long-press threshold, or the next device rescan.
        pending = [d for d in (knob.tap_deadline, knob.long_deadline(), next_scan)
                   if d is not None]
        timeout = max(0.0, min(pending) - time.monotonic()) if pending else None

        for key, _ in sel.select(timeout):
            dev = key.fileobj
            try:
                for ev in dev.read():
                    if ev.type != ecodes.EV_KEY:
                        continue
                    code, val = ev.code, ev.value

                    if code == ecodes.KEY_LEFTSHIFT:
                        if val in (0, 1):
                            knob.shift = (val == 1)
                        continue
                    if code == ecodes.KEY_LEFTCTRL:
                        if val in (0, 1):
                            knob.ctrl = (val == 1)
                        continue

                    # act on key-down (val==1); handle knob release separately
                    if val != 1:
                        if code == PRESS_CODE and val == 0:
                            knob.on_release()
                        continue

                    if code in ROTATE_UP:
                        now = time.monotonic()
                        knob.on_rotate(True, (now - last_rot) if last_rot else None)
                        last_rot = now
                    elif code in ROTATE_DOWN:
                        now = time.monotonic()
                        knob.on_rotate(False, (now - last_rot) if last_rot else None)
                        last_rot = now
                    elif code == PRESS_CODE:
                        knob.on_press()
            except OSError as e:
                # unplugged, or the transport was switched. Drop it now - the
                # fd would otherwise stay readable forever and spin the loop.
                drop(dev, e.strerror or "read failed")
                next_scan = time.monotonic()        # look for its replacement

        knob.check_long_press()
        if knob.tap_deadline is not None and time.monotonic() >= knob.tap_deadline:
            knob.resolve_taps()

        if time.monotonic() >= next_scan:
            next_scan = time.monotonic() + RESCAN_EVERY
            rescan()

if __name__ == "__main__":
    main()
