# Firmware

Two patches for the SH68F90 (AULA F75 profile), documented byte-for-byte so you can apply them
to your own board rather than trusting a binary from a stranger.

> **The stock firmware is deliberately not in this repo.** It is the vendor's, not mine to
> redistribute — and more practically, if your board shipped a different revision then flashing
> my dump would replace your firmware with someone else's. Read your own board out instead.

## The patches

### `knob-brightness` — knob rotation sends screen brightness

Two bytes. The immediate operands that load the consumer usage IDs sent on rotation change from
`0xE9`/`0xEA` (Volume Up/Down) to `0x6F`/`0x70` (Display Brightness Up/Down):

```
0x259B: E9 -> 6F
0x259F: EA -> 70
context at 0x2599:   74 e9 80 02 74 ea f0  ->  74 6f 80 02 74 70 f0
```

Media mode only. Rotation in lighting mode still drives LED brightness, and the press still mutes.

Note you may not need this at all: `knobd.py` puts brightness on **Ctrl + rotate** in software and
accepts either the volume or the brightness rotation codes, so it works patched or not.

### `no-sleep` — extend the wireless fast-doze timeout

Seven bytes. On 2.4 GHz the keyboard dozes within a few seconds of going idle, and a dozing board
does not answer vendor reports — which makes multi-step wireless writes (a palette, a key matrix)
fail halfway. These operands feed the doze counter at `0x0A14`/`0x0A15`, decremented in
`FUN_CODE_1019`; forcing them to `0xFF` loads ~`0xFFFF` instead of `0x0BB8` / `0x0258` / `0x00C8`.

```
0x0462: 0B -> FF      0x0844: 0B -> FF      0x084D: 02 -> FF
0x0466: B8 -> FF      0x0848: B8 -> FF      0x0851: 58 -> FF
0x046E: C8 -> FF
```

Measured after flashing: stays awake 3+ minutes, up from ~3 seconds. This **costs battery life** —
skip it if you only use the keyboard wired.

## Doing it on your own board

```bash
# 1. get sinowisp (GPL-3.0, separate project)
#    https://github.com/carlossless/sinowisp/releases

# 2. read your own firmware out — WIRED only, the dongle cannot reach the ISP
sudo sinowisp read -d aula-f75 -s firmware stock.bin

# 3. KEEP stock.bin SOMEWHERE SAFE. It is your only way back.

# 4. see what it is
python3 patch.py stock.bin --inspect

# 5. patch it
python3 patch.py stock.bin -o mine.bin --knob-brightness --no-sleep

# 6. flash
sudo sinowisp write -d aula-f75 --format bin mine.bin

# to roll back, later:
sudo sinowisp write -d aula-f75 --format bin stock.bin
```

`patch.py` verifies every byte it is about to overwrite and refuses if your firmware does not match,
so a different revision fails loudly instead of producing a bricked image. If it refuses, your
offsets need re-deriving in Ghidra — see [`../re/README.md`](../re/README.md).

## The prebuilt images

These are here for convenience if your `--inspect` reports the same sha256 as mine. They are the
stock firmware of **my** board with the bytes above changed, nothing else.

| File | Patches | sha256 |
|---|---|---|
| `l65-firmware-screenbright.bin` | `knob-brightness` | `4f39f056…65a73ccc` |
| `l65-firmware-sb-nosleep.bin` | `knob-brightness` + `no-sleep` | `c595c11d…d7655139e5` |

Both are 61440 bytes (the firmware region, not a full dump). Derived from stock sha256
`edd6cc5c…a432f852`. `patch.py` reproduces both byte-for-byte from that stock image.

## Things that will bite you

- **Flashing factory-resets the lighting config.** The firmware treats any ISP write as a
  post-update reset — effects, per-key colours and the palette all go back to defaults. Re-apply
  them with `l65ctl.py` afterwards.
- **The bootloader survives erase** (it lives at `0xF000`, outside the firmware region), so a bad
  write is recoverable: re-plug and flash again. This board is hard to brick.
- **Flashing is wired-only.** The ISP bootloader is on the USB interface; the dongle cannot reach it.
- **Never run the vendor app's "firmware update"** after patching — it silently restores stock.
  Its *"Restore Defaults"* button is fine; that only touches the config block.
- Modifying firmware voids your warranty.
