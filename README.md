# Womier L65 on Linux

Full Linux control of the **Womier L65** wired/wireless mechanical keyboard, reverse-engineered
from the Windows vendor app. No vendor software, no Wine, no daemon phoning home.

- **Lighting** — effects, brightness, speed, side strip, custom palettes, per-key RGB, realtime frames
- **Remap** — any key and the knob, over USB *or* the 2.4 GHz dongle
- **Knob daemon** — turns the volume knob into a context-aware media / scrub / brightness dial
- **Battery indicator** — wireless level in the GNOME top bar
- **Firmware patches** — knob→screen-brightness, and a fix for the wireless fast-doze
- **Protocol documentation** — the full HID/RF command vocabulary, plus the Ghidra artifacts behind it

Everything here was worked out on real hardware. The protocol notes in
[`docs/L65-protocol.md`](docs/L65-protocol.md) are probably the most reusable part if you have a
different keyboard on the same platform.

---

## Does this fit my keyboard?

The L65 is an **AULA F75 platform** board: a SinoWealth **SH68F90** 8051 MCU with a Beken
**BK3632** 2.4 GHz radio. That platform is sold under a lot of names, so check the USB IDs
rather than the label on the box:

```bash
lsusb | grep -iE '258a|3554'
```

| What you see | Meaning |
|---|---|
| `258a:010c` | Wired keyboard (SH68F90). Everything in this repo applies. |
| `3554:fa09` | The 2.4 GHz dongle ("Compx" receiver). Config, palette and remap work; per-key does not. |
| `258a:` something else | Same MCU family, different product. `l65ctl.py` will likely need new report sizes, but the protocol doc still applies. |
| Neither | Different platform. The knob daemon may still be useful — it is pure evdev — but nothing else will be. |

If you have a sibling board and get it working, please open an issue; there is a
[device report template](.github/ISSUE_TEMPLATE/device-report.yml) for it.

**Tested on:** Ubuntu 26.04 LTS, GNOME Shell 50.1 on Wayland, Linux 7.0. The lighting and remap tools are
plain `hidraw` and should work on any distro. The knob daemon's brightness and OSD paths assume
GNOME; the rest of it is desktop-agnostic.

---

## Quick start

```bash
git clone https://github.com/deepan-alve/womier-l65-linux.git
cd womier-l65-linux

# device access — no sudo needed after this, and no group membership either
sudo cp udev/60-womier-l65.rules /etc/udev/rules.d/
sudo udevadm control --reload-rules && sudo udevadm trigger
# now re-plug the keyboard or dongle

# lighting and remap — pure hidraw, no Python packages required
python3 linux/l65ctl.py dump
python3 linux/l65ctl.py effects
python3 linux/l65ctl.py set --effect respire --brightness 2 --color red

# knob daemon — needs evdev plus a few CLI helpers
sudo apt install python3-evdev playerctl brightnessctl
python3 linux/knobd.py --list      # confirm it finds the keyboard
python3 linux/knobd.py --dry-run   # spin and press the knob, watch the log
python3 linux/knobd.py             # go live
```

📖 **[docs/GUIDE.md](docs/GUIDE.md) is the real manual** — setup, permissions, every `l65ctl`
command, the knob daemon, firmware flashing, factory reset and troubleshooting.

---

## What's here

| Path | What |
|------|------|
| `linux/l65ctl.py` | Lighting / palette / per-key / remap over `hidraw`. **No dependencies.** Wired **and** dongle. |
| `linux/knobd.py` | Knob daemon (evdev). Volume, scrub, brightness, media by gesture. |
| `linux/knobprobe.py` | Read-only probe — prints what your knob actually emits. Run this first if gestures misbehave. |
| `linux/l65battery.py` | Wireless battery level as a GNOME tray indicator (AppIndicator). |
| `windows/l65w.ps1` | The same wireless control from Windows, in PowerShell. |
| `firmware/patch.py` | Applies the documented firmware patches to **your own** dump. |
| `firmware/*.bin` | Prebuilt patched images. Read [`firmware/README.md`](firmware/README.md) before flashing. |
| `udev/`, `systemd/` | Device access rule and a user service to autostart the daemon. |
| `docs/L65-protocol.md` | HID/RF protocol reference — commands, report layouts, config block offsets. |
| `docs/GUIDE.md` | The full manual. |
| `re/` | Ghidra export scripts and decompiled firmware C. See [`re/README.md`](re/README.md). |

## Knob gesture map

Left-Shift and Ctrl act as modifiers. Nothing is remapped in firmware — the daemon grabs only
the knob's consumer node, so typing is untouched and GNOME does not double-act.

| Gesture | Action |
|---|---|
| Rotate | Volume ± (accelerates when spun fast) |
| **Shift** + rotate | Scrub / seek the current player |
| **Ctrl** + rotate | Laptop screen brightness ± |
| Press | Play/Pause — or Mute if nothing is playing |
| **Shift** + press | Mute, always |
| Double tap | Next track |
| **Shift** + double tap | Previous track |
| Triple tap | Next software profile *(one profile ships — add your own in `APP_PROFILES`)* |
| Long press | Next lighting preset *(ships empty and disabled — notifies only)* |

> Scrub is on Shift rather than hold-and-rotate for a hardware reason: the knob's consumer HID
> report is a single 16-bit usage slot, so rotating while the knob is held **evicts** the press and
> the kernel sees a release. Hold-and-rotate can never be detected on this board. `knobprobe.py`
> will show you this happening.

## What works over which transport

| Feature | Wired (USB) | 2.4 GHz dongle |
|---|---|---|
| Effect, brightness, speed, side strip, sleep/tap/debounce | ✅ | ✅ |
| Effect colour palette | ✅ | ✅ |
| Key and knob remap | ✅ | ✅ layer 0 only |
| **Per-key** RGB | ✅ | ❌ |
| Realtime frame streaming | ✅ | ❌ |
| Battery level | ❌ | ✅ |
| Music sync | vendor app only | ❌ |

Per-key colour and realtime streaming are wired-only because the dongle relays only the
config / palette / matrix command vocabulary — confirmed from both directions. Fixing that
would need dongle firmware, and that chip is undumped.

---

## Safety

Flashing is genuinely low-risk on this board — the SH68F90's **bootloader survives erase**, so a
bad write is always recoverable by re-plugging and flashing again. That said:

- **Read and keep your own stock dump before you flash anything.** This repo does not redistribute
  unmodified vendor firmware, so your dump is your only rollback target.
- **Never run the vendor app's "firmware update"** afterwards — it overwrites patches with stock.
  The vendor app's *"Restore Defaults"* is fine; it only touches the config block.
- **Any flash factory-resets the lighting config.** Re-apply it with `l65ctl.py` afterwards.
- Modifying firmware will void your warranty. Nothing here is endorsed by Womier, AULA or SinoWealth.

## Contributing

Bug reports, sibling-device reports and protocol corrections are all welcome — see
[CONTRIBUTING.md](CONTRIBUTING.md). Non-GNOME knob backends and a `ddcutil` path for external
monitors are the most obvious gaps.

## Credits

- **[carlossless/sinowisp](https://github.com/carlossless/sinowisp)** — the ISP flasher that makes
  reading and writing this MCU possible at all. GPL-3.0; download it from its own releases page.
- **[carlossless/smk](https://github.com/carlossless/smk)** and
  **[Thaolia/smk_aulaF75](https://github.com/Thaolia/smk_aulaF75)** — open firmware for
  SinoWealth 8051 boards, including this exact platform. If you want to replace the firmware
  rather than patch it, start there.

## Licence

Original code and documentation: **MIT** ([LICENSE](LICENSE)).
The firmware binaries and the decompiled C under `re/exports/` are vendor material and are **not**
MIT-licensed — read [NOTICE](NOTICE) for exactly what is covered by what.
