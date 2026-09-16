# Contributing

This started as one person working out one keyboard. Anything that widens it beyond that is
welcome — especially reports from hardware I do not own.

## Reporting a sibling keyboard

The AULA F75 platform is sold under many brands. If you have one of those and something here
works (or nearly works), that is genuinely useful to know. Open an issue using the **device
report** template, or include this by hand:

```bash
lsusb | grep -iE '258a|3554'                  # USB IDs
python3 linux/l65ctl.py dump                  # what it reports, or how it fails
python3 linux/knobprobe.py -t 20              # what the knob emits, if it has one
```

Plus the brand name on the box and how it connects (wired / dongle / Bluetooth). If you flashed
anything, `python3 firmware/patch.py yourdump.bin --inspect` output too.

**Do not attach a firmware dump to an issue.** It is the vendor's code and I would rather not host
it. The sha256 and the `--inspect` output are what matter.

## Reporting a bug

Say which transport (wired or dongle), what you ran, what happened, and what you expected.
For the daemon, `python3 linux/knobd.py --dry-run` output is usually the fastest way to a diagnosis.

## Protocol corrections

If something in [`docs/L65-protocol.md`](docs/L65-protocol.md) is wrong, please say so — everything
there was derived from one board, and a confident claim that turns out to be revision-specific is
exactly the kind of error worth fixing. Evidence from the wire beats evidence from the decompiler.

## Code

No build system, no test suite, no CI. Just Python 3 and the standard library:

- `l65ctl.py` must stay **dependency-free** — it is `hidraw` and nothing else, on purpose, so it
  works on a fresh install without pip.
- `knobd.py` may use `evdev` and shell out to CLI tools, but degrade gracefully when one is absent
  rather than crashing.
- Match the commenting style already there: say **why** a thing is the way it is, especially when
  it is the way it is because of some hardware quirk. Most of the non-obvious code here exists to
  work around something, and the comment explaining what is the valuable part.
- Do not claim hardware behaviour you have not observed. "Untested" in a comment is fine and
  useful; a confident wrong assertion costs the next person hours.

### Known gaps, if you want something to do

- **Non-GNOME support in `knobd.py`.** Volume and media are already desktop-agnostic; the
  brightness path and the OSD assume GNOME.
- **External monitor brightness** via `ddcutil` — currently laptop panel only.
- **Battery status bits.** `l65ctl.py battery` reports byte 6 as raw flags because the bit meanings
  were never decoded — `0x10` shows on a full, unplugged board. Someone with a charging board and
  patience could finish this.
- **Bluetooth.** Untouched here. Some boards on this platform have it; mine does not.

## Licence

Contributions are taken as MIT, matching [LICENSE](LICENSE). Please do not add vendor binaries or
decompiled third-party code beyond what [NOTICE](NOTICE) already accounts for.
