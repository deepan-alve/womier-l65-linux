# Womier L65 — complete Linux guide

Everything needed to run the keyboard from Linux: device access, the knob daemon, lighting and
remap, the battery indicator, and firmware patching.

**Tested target:** Ubuntu 26.04 LTS, GNOME Shell 50.1 on Wayland, Linux 7.0. `l65ctl.py` is plain
`hidraw` and should work anywhere; the knob daemon's brightness and OSD paths assume GNOME.

- [1. First-time setup](#1-first-time-setup)
- [2. Device access (udev)](#2-device-access-udev)
- [3. Knob daemon (knobd.py)](#3-knob-daemon-knobdpy)
- [4. Lighting, colours & remap (l65ctl.py)](#4-lighting-colours--remap-l65ctlpy)
- [5. Battery indicator (l65battery.py)](#5-battery-indicator-l65batterypy)
- [6. Firmware patching](#6-firmware-patching)
- [7. Factory reset](#7-factory-reset)
- [8. Troubleshooting](#8-troubleshooting)
- [9. Reference tables](#9-reference-tables)

---

## 1. First-time setup

```bash
git clone https://github.com/deepan-alve/womier-l65-linux.git
cd womier-l65-linux
```

Confirm the hardware is what this repo targets:

```bash
lsusb | grep -iE '258a|3554'
```

You want `258a:010c` (wired) and/or `3554:fa09` (dongle). Anything else — read the compatibility
table in the [README](../README.md#does-this-fit-my-keyboard) first.

Dependencies, by tool:

| Tool | Needs |
|---|---|
| `l65ctl.py` | **nothing** — pure `hidraw`, standard library only |
| `firmware/patch.py` | **nothing** — standard library only |
| `knobd.py` | `python3-evdev`, plus `playerctl`, `brightnessctl`, and one of `wpctl`/`pactl`/`amixer` |
| `l65battery.py` | `python3-gi` and `gir1.2-ayatanaappindicator3-0.1` |
| firmware flashing | [`sinowisp`](https://github.com/carlossless/sinowisp/releases) — separate project, GPL-3.0 |

```bash
sudo apt install python3-evdev playerctl brightnessctl \
                 python3-gi gir1.2-ayatanaappindicator3-0.1
```

`wpctl` ships with PipeWire and is usually already present; if not, install `wireplumber`.
`notify-send` (for feedback) is normally preinstalled.

---

## 2. Device access (udev)

One rule covers everything — both `hidraw` (for `l65ctl.py`) and the input nodes (for `knobd.py`):

```bash
sudo cp udev/60-womier-l65.rules /etc/udev/rules.d/
sudo udevadm control --reload-rules && sudo udevadm trigger
```

**Then re-plug the keyboard or dongle.** The rule only applies to devices that appear after it is
loaded.

The rule uses `TAG+="uaccess"`, which hands an ACL to whoever is logged in at the seat. That is
better than the `input` group for a reason worth knowing: **a running `systemd --user` caches its
supplementary groups at startup**, so a group you add today never reaches your user services until
the entire session restarts. `uaccess` works immediately, and again after every replug — which is
what makes autostarting the daemon reliable.

**The one thing udev cannot do here** is the backlight. `uaccess` works by setting an ACL on a
device node in `/dev`, and a backlight has none — `brightness` is a sysfs attribute. The daemon
normally avoids this entirely by dispatching a real brightness key (see §3), but if `uinput` is
unavailable it falls back to writing sysfs, and that needs the `video` group:

```bash
sudo usermod -aG video $USER    # then restart the session — see the caching note above
```

Firmware flashing needs raw USB and is simplest with `sudo` — see §6.

---

## 3. Knob daemon (knobd.py)

Turns the volume knob into a context-aware media / scrub / brightness dial, with no firmware change.
It grabs **only** the knob's consumer node, so GNOME does not double-act and your typing is
untouched. Left-Shift and Ctrl are watched read-only.

### Gesture map

| Gesture | Action | If nothing is playing |
|---|---|---|
| Rotate | Volume ± (accelerates when spun fast) | — |
| **Shift** + rotate | Scrub / seek | nothing |
| **Ctrl** + rotate | Laptop screen brightness ± | — |
| Press | Play / Pause | Mute |
| **Shift** + press | Mute, always | — |
| Double tap | Next track | — |
| **Shift** + double tap | Previous track | — |
| Triple tap | Next software profile (`APP_PROFILES`) | — |
| Long press (1.2 s) | Next lighting preset (`LIGHTING_PRESETS`) | — |

`APP_PROFILES` ships with one entry and `LIGHTING_PRESETS` ships empty and disabled — both are
hooks for you to fill in, near the top of the file.

> **Why scrub is on Shift and not hold-and-rotate.** The knob's consumer HID report (id 2) is a
> *single 16-bit usage slot*: mute and both rotation usages compete for it. Rotating while the knob
> is held evicts the press, and the kernel sees a release. Hold-and-rotate therefore cannot be
> detected on this hardware at all, no matter how the daemon is written. `knobprobe.py` shows this
> happening live.

### GNOME keybindings — do this or two gestures silently do nothing

Mute and brightness are dispatched as **real key presses** through `uinput`, so GNOME draws its own
native OSD rather than the daemon faking one with notifications. But the modifier variants are
unbound out of the box, so GNOME swallows them:

```bash
gsettings set org.gnome.settings-daemon.plugins.media-keys volume-mute \
  "['<Shift>XF86AudioMute']"
gsettings set org.gnome.shell.keybindings screen-brightness-up \
  "['XF86MonBrightnessUp', '<Ctrl>XF86MonBrightnessUp']"
gsettings set org.gnome.shell.keybindings screen-brightness-down \
  "['XF86MonBrightnessDown', '<Ctrl>XF86MonBrightnessDown']"
```

Screen brightness lives in `org.gnome.shell.keybindings`, **not** `media-keys` — that schema only
covers the keyboard backlight. Shift is already taken there by `screen-brightness-up-monitor`
(per-monitor adjustment, a no-op on a single-display laptop), which is why Ctrl is the modifier.

`knobd` checks both bindings at startup and prints the exact fix if either is missing.

### Run it

```bash
python3 linux/knobd.py --list        # confirm it finds the keyboard
python3 linux/knobd.py --dry-run     # spin and press — logs gestures, executes nothing
python3 linux/knobd.py               # go live
python3 linux/knobd.py --help-setup  # the setup notes, built in
```

On first run use `--dry-run` and confirm the **press** registers. If it does not, find out what your
knob actually emits:

```bash
python3 linux/knobprobe.py -t 30     # read-only, never grabs — your desktop keeps working
```

Then set `PRESS_CODE` near the top of `knobd.py` to whatever it reported.

### Autostart

```bash
install -Dm755 linux/knobd.py  ~/.local/bin/knobd.py
install -Dm755 linux/l65ctl.py ~/.local/bin/l65ctl.py     # needed for lighting presets
mkdir -p ~/.config/systemd/user
cp systemd/knobd.service ~/.config/systemd/user/
systemctl --user daemon-reload
systemctl --user enable --now knobd.service
systemctl --user status knobd.service
journalctl --user -u knobd.service -f
```

### Tuning

Constants at the top of `linux/knobd.py`:

| Constant | Meaning | Default |
|---|---|---|
| `TAP_WINDOW` | seconds to wait for another tap | 0.28 |
| `LONG_PRESS` | seconds held before it counts as a long press | 1.2 |
| `ACCEL_MAX` | step multiplier when spun fast | 2 |
| `VOL_STEP` / `BRI_STEP` | % per detent — *fallback paths only* | 2 / 2 |
| `SEEK_STEP` | seconds seek per detent | 3 |
| `PRESS_CODE` | evdev code for the knob press | `KEY_MUTE` |
| `SHOW_OSD` | `notify-send` feedback for discrete actions | `True` |

`ACCEL_MAX` is deliberately low. Each unit becomes one *more* synthetic key event, and every event
restarts GNOME's OSD fade — at a multiplier of 5 a fast spin emitted ~100 events/sec and the slider
visibly stuttered even though the volume itself settled in ~20 ms. Spinning faster already produces
more detents, so that *is* the acceleration; multiplying on top double-counts it.

---

## 4. Lighting, colours & remap (l65ctl.py)

Auto-detects the connection (wired first, else dongle). Force with `--wired` / `--wireless`.
**Every write auto-backs-up first** to `~/.cache/l65ctl/backup-*.bin` — undo with `restore`.

### Commands

```bash
# inspect
python3 linux/l65ctl.py dump                    # current config + which transport
python3 linux/l65ctl.py effects                 # list effect names/numbers
python3 linux/l65ctl.py battery                 # wireless only

# effect / brightness / speed / side strip / globals   (wired + wireless)
python3 linux/l65ctl.py set --effect respire --brightness 2 --speed 0 --color red
python3 linux/l65ctl.py set --side-mode breathing --side-color cyan
python3 linux/l65ctl.py set --tap 180 --sleep 10 --debounce 2     # tap ms, sleep minutes
python3 linux/l65ctl.py set --knob media                          # or: lighting

# custom effect colour (writes a palette slot, points the effect at it)
python3 linux/l65ctl.py colors --rgb 8000ff --effect fixed_on --slot 0
python3 linux/l65ctl.py colors                                    # no --rgb: print the palette

# remap keys / knob press   (wired + wireless; dongle = layer 0 only)
python3 linux/l65ctl.py remap knob=play_pause caps=esc
python3 linux/l65ctl.py remap --list                              # all key names + actions

# per-key colours   (WIRED only)
python3 linux/l65ctl.py keys --all blue w=red a=red s=red d=red
python3 linux/l65ctl.py keys --list

# realtime frame   (WIRED only)
python3 linux/l65ctl.py frame --all 8000ff --seconds 3

# undo any write
python3 linux/l65ctl.py restore ~/.cache/l65ctl/backup-cfg-YYYYMMDD-HHMMSS.bin
```

### Value ranges

`--brightness` / `--speed` / `--side-brightness` / `--side-speed` are 0–4. `--tap` is 0–255 ms
(0 = off), `--sleep` 0–127 min, `--debounce` 1–8, `--color` 0–7 or a name. Colours accept `RRGGBB`,
`#RRGGBB`, or a name: `red green blue yellow pink cyan white orange purple off`.

Remap actions: any key (`a`, `f5`, `enter`), combos (`ctrl+shift+s`), media keys
(`mute vol_up vol_down play_pause next prev stop calculator browser`), raw
(`fn disabled knob_default brightness_up brightness_down effect_next`), or `hex:XXXXXXXX`.

### Transport limits

| Feature | Wired | Dongle |
|---|---|---|
| effect / brightness / speed / side strip / tap / sleep / debounce | ✅ | ✅ |
| custom effect colours (palette) | ✅ | ✅ |
| key / knob remap | ✅ | ✅ layer 0 only |
| per-key colours | ✅ | ❌ |
| realtime frame / music | ✅ | ❌ |
| battery level | ❌ | ✅ |

**Dongle note:** the keyboard fast-dozes when idle, and a dozing board does not answer. If a
wireless command reports "asleep", press a key and retry. The `no-sleep` firmware patch (§6)
extends the window to 3+ minutes if this gets annoying.

---

## 5. Battery indicator (l65battery.py)

Wireless battery level in the GNOME top bar, as a five-segment bar:

```bash
python3 linux/l65battery.py
```

It uses AppIndicator (StatusNotifierItem), so it needs no shell extension of its own and no
re-login — the `ubuntu-appindicators` extension already present picks it up.

| Display | Meaning |
|---|---|
| `▰▰▰▰▱ 82%` | fresh reading |
| `▰▰▰▰▱ ~82%` | last poll missed; showing the previous value |
| `USB` | wired — the keyboard reports no battery over USB |
| `--` | no keyboard or dongle found |

It polls slowly on purpose. The level is read over 2.4 GHz with vendor command `0x4A`, and a dozing
keyboard simply does not answer — so **missed polls are normal, not an error**. They keep the
previous value and mark it stale.

> `l65ctl.py battery` prints the status byte as raw flags (`status 0x10, bit4 set`) rather than
> claiming "charging". The bit meanings were never decoded, and an earlier `bool(byte6)` reading
> reported "charging" on a full, unplugged board. If you have a charging board, decoding this
> properly would be a welcome contribution.

---

## 6. Firmware patching

Two patches are documented: **knob→screen-brightness** and **extended wireless sleep**. Full byte
tables and the reasoning are in [`../firmware/README.md`](../firmware/README.md).

You may well not need the first one — `knobd.py` puts brightness on Ctrl+rotate in software and
accepts either rotation code, so it works patched or not.

**Two conditions for flashing:**

1. **Wired only.** The ISP bootloader is on the USB interface; the dongle cannot reach the main chip.
2. **Raw USB access.** Run with `sudo`.

Get the flasher from its own project — it is not vendored here:

```bash
# https://github.com/carlossless/sinowisp/releases
tar xzf sinowisp-x86_64-unknown-linux-gnu-*.tar.gz
chmod +x sinowisp
```

### Patch your own firmware

```bash
# 1. read YOUR board out
sudo ./sinowisp read -d aula-f75 -s firmware stock.bin

# 2. KEEP stock.bin. It is your only rollback target — this repo does not
#    redistribute unmodified vendor firmware.

# 3. see what it is
python3 firmware/patch.py stock.bin --inspect

# 4. patch and flash
python3 firmware/patch.py stock.bin -o mine.bin --knob-brightness --no-sleep
sudo ./sinowisp write -d aula-f75 --format bin mine.bin

# roll back, whenever
sudo ./sinowisp write -d aula-f75 --format bin stock.bin
```

`patch.py` verifies every byte before overwriting it and refuses on a mismatch, so a different
firmware revision fails loudly instead of producing a bricked image.

The prebuilt `firmware/*.bin` images are there for convenience **if** `--inspect` reports the same
stock sha256 as mine (`edd6cc5c…`). Otherwise use your own dump.

### After any flash

- **The lighting config is factory-reset.** The firmware treats an ISP write as a post-update reset.
  Re-apply your look with `l65ctl.py set …` / `colors …`.
- **The bootloader survives erase** (it lives at `0xF000`, outside the firmware region), so a bad
  write is recoverable — re-plug and flash again.
- ⚠️ **Never run the Windows vendor app's "firmware update"** afterwards; it silently restores stock
  and you lose the patches. Its *"Restore Defaults"* is fine — config block only.

Finding *new* patch points means re-importing a full dump into Ghidra — see
[`../re/README.md`](../re/README.md).

---

## 7. Factory reset

**Config** (effects, tap timing, debounce, remaps, colours) — any of:

- the Windows vendor app's **"Restore Defaults"**,
- `l65ctl.py restore` with a known-good backup from `~/.cache/l65ctl/`,
- or just `l65ctl.py set …` the values you want.

None of these touch flashed firmware.

**Firmware** — flash the `stock.bin` you read off your own board before patching (§6). If you never
took one, you will need a dump from an identical board; the vendor app's firmware update will also
restore stock.

---

## 8. Troubleshooting

| Symptom | Fix |
|---|---|
| `knobd --list` finds nothing | Plugged in? udev rule installed **and** device re-plugged since (§2)? |
| knob press does nothing in `--dry-run` | Press isn't `KEY_MUTE`. Run `knobprobe.py`, then set `PRESS_CODE`. |
| rotate does nothing | Check the backend line at startup — needs one of `wpctl` / `pactl` / `amixer`. |
| **shift+press doesn't mute** | Missing GNOME binding. `knobd` prints the exact `gsettings` line at startup — §3. |
| **ctrl+rotate doesn't change brightness** | Same — the `<Ctrl>XF86MonBrightness*` bindings, §3. |
| brightness changes but no OSD | `uinput` unavailable, so it fell back to sysfs. Check the `video` group (§2). |
| next / prev / play do nothing | `playerctl` installed and an MPRIS player running? |
| GNOME changes volume *as well* | The daemon didn't grab the device — the udev rule isn't applying. Re-plug. |
| volume OSD stutters on a fast spin | Lower `ACCEL_MAX` in `knobd.py`. |
| daemon works standalone but not as a service | Almost always group caching — use the udev rule instead of the `input` group (§2). |
| `l65ctl` permission denied | udev rule (§2), then re-plug. |
| `l65ctl --wireless` says "asleep" | Press a key to wake it, retry. Consider the `no-sleep` patch (§6). |
| `l65ctl battery` on wired | Expected — battery is reported over 2.4 GHz only. |
| `sinowisp` can't find the board | Wired, and `sudo`. If still stuck, re-plug and retry immediately. |
| `patch.py` refuses: "does not fit this firmware" | Your board is a different revision. Offsets need re-deriving — `re/README.md`. |

---

## 9. Reference tables

**Devices:** wired `258a:010c` (SinoWealth SH68F90), dongle `3554:fa09` (Beken BK3632, "Compx"
receiver).

**Config block offsets** (same wired and wireless): `0x03` debounce (stage−1), `0x09` self-define
flag, `0x0A` effect, `0x12–0x15` side strip mode/colour/brightness/speed, `0x16` tap ms, `0x18`
sleep (min×2), `0x1A` knob mode (0 = media, 1 = lighting), `0x38+2n` effect *n* brightness,
`0x39+2n` `(speed<<4)|colour-slot`, `0x75` self-define brightness, `0x7E` end marker `5A A5`.

**Wireless command map:** config `0x04` / read `0x44`, palette `0x09`/`0x49` (490 B), matrix
`0x01`/`0x41` (504 B), battery `0x4A`. Read code = write code `| 0x40`.

**Wired command map:** config `0x04`/`0x84`, per-key `0x06`/`0x86` (378 B planar), palette
`0x0A`/`0x8A` (512 B), matrix `0x03`/`0x83` (504 B), realtime `0x08`, macro `0x05`/`0x85`.

**Firmware patch offsets:** knob→brightness `0x259B E9→6F`, `0x259F EA→70`; sleep — the bytes at
`0x0462`, `0x0466`, `0x046E`, `0x0844`, `0x0848`, `0x084D`, `0x0851` all set to `0xFF`. Full detail
in [`../firmware/README.md`](../firmware/README.md).

Deeper protocol detail — report framing, checksums, chunking — is in
[`L65-protocol.md`](L65-protocol.md).
