# Womier L65 — protocol and firmware reference

Reverse-engineered on 2026-09-10 from the vendor app (`OemDrv.exe`, class `CDevG5KB`) and the
keyboard's own firmware (SinoWealth SH68F90, 8051). Everything marked ✅ was verified on the
keyboard; the rest comes from decompiled code.

Device: USB `258a:010c` "BY Tech Gaming Keyboard", firmware V10.0.0 (`bcdDevice 0x1000`),
USB strings "Womier-L65 3.0 / 5.0". Wired only (the 2.4G dongle `3554:fa09` is a different path).

## HID interfaces

| Interface / collection | Usage | Purpose |
|---|---|---|
| MI_00 | keyboard | boot keyboard, 6KRO |
| MI_01 col 1 | system control | power keys |
| MI_01 col 2 | consumer | media keys |
| MI_01 col 3 | vendor, input report **3**, 3 bytes | keyboard → host events (echo of cmd `0xAA`, Fn events) |
| MI_01 col 4 | keyboard | NKRO |
| MI_01 col 5 | vendor, feature report **5**, 6 bytes | **ISP / bootloader channel** (sinowisp; `05 75 ..` = jump to bootloader) |
| MI_01 col 6 | vendor, feature report **6**, 520 bytes | **all lighting / settings commands** |
| MI_01 col 7 | mouse | mouse emulation for remapped keys |

## Report 6 packet (520 bytes incl. report ID) ✅

```
06 CMD INDEX 00 PACKETS PACKET SIZE_LO SIZE_HI  <data, max 512>
```
Write: one `SetFeature`. Read: `SetFeature` of the header with `CMD | 0x80`, then `GetFeature`
returns the same header followed by the data. The firmware only dispatches CMD 3–10 (and `0xAA`);
0x0B–0x0F and 0x11 (used by other models for screens, light bars and reset) are ignored here.

| CMD | Data | Flash home | Notes |
|---|---|---|---|
| `03` / `83` | 504 B = 126 × `[type, mods, key2, key1]` | `0xCC00 + layer*0x400` | key matrix; INDEX = layer 0 default, 1 FN1, 2 FN2, 3 Tap ✅ |
| `04` / `84` | 128 B config block | `0xC600` | see below; writing it also applies pending per-key colors ✅ |
| `05` / `85` | macros | `0xDC00 +` | format not decoded |
| `06` / `86` | 378 B = R plane, G plane, B plane (126 slots) | `0xCA00` | Self-define per-key colors ✅ |
| `07`, `09` | – | – | no-op in this firmware |
| `08` | 378 B = 126 × `[R,G,B]` interleaved, INDEX 0 | RAM only | realtime frame; INDEX 2 + `00 00 00` = stop ✅ |
| `0A` / `8A` | 512 B color table | `0xC800` | row = effect, 21 B = 7 RGB slots; `5A A5` at 0x1FA ✅ |
| `82` | 6 B | – | device id / "Psd" (`03 00 00 00 01 CA`) ✅ |
| `87` | 2 B | – | battery (wireless models) |
| `88` | – | – | realtime read-back |
| `AA` | – | – | echo: keyboard answers on input report 3 with `AA INDEX 00` |

Flash is written in 512-byte sectors (`sector = address / 0x200`). Settings **persist across
unplugging**. A reboot through the ISP bootloader (what `sinowisp read` does at the end) makes the
firmware restore the **factory template at `0xC400`** for config, per-key colors and color table
(key layers are untouched) — back everything up before using ISP tools.

## Config block (128 bytes) ✅

| Offset | Meaning |
|---|---|
| `0x03` | debounce = stage − 1 (app shows stages 1–8) |
| `0x09` | 1 while Self-define is active |
| `0x0A` | current effect (table below) |
| `0x12` | side strip mode: 1 rainbow wave, 2 rainbow flicker, 3 solid, 4 breathing, 5 off (Fn+Tab cycles) |
| `0x13` | side strip color slot 0–7 (used by modes 3 and 4) |
| `0x14` / `0x15` | side strip brightness 0–4 / speed 0–4 |
| `0x16` | tap sensitivity in ms, 0 = off (app max 127) |
| `0x18` | sleep timer in half-minutes (20 min = 0x28), 0 = off |
| `0x1A` | unknown; the app writes 0 |
| `0x38 + 2n` | effect n brightness 0–4 (n = 1…18) |
| `0x39 + 2n` | effect n: high nibble speed 0–4, low nibble color slot 0–7 |
| `0x75` | Self-define brightness 0–4 (0 = dark) |
| `0x7E` | `5A A5` end marker |

Color slot 0–6 picks an RGB from the effect's row of the color table (factory red, green, blue,
yellow, pink, cyan, white); 7 = "ColorFull" (multicolor).

Effects: 0 off, 1 Fixed_on, 2 Respire, 3 Rainbow, 4 Flash_away, 5 Raindrops, 6 Rainbow_wheel†,
7 Ripples_shining, 8 Stars_twinkle, 9 Shadow_disappear, 10 Retro_snake, 11 Neon_stream (factory
default), 12 Reaction, 13 Sine_wave, 14 Retinue_scanning†, 15 Rotating_windmill,
16 Colorful_waterfall, 17 Blossoming, 18 Rotating_storm†, 21 Self-define. († hidden by the app,
still implemented by the firmware.)

## Key matrix entries ✅

LED/key slot = column × 6 + row (see `KEY_SLOTS` in `l65ctl.py`). Entry `[type, mods, key2, key1]`:

| type | meaning |
|---|---|
| `00` | keyboard: `key1` = HID usage; `mods` bitmask 01 ctrl, 02 shift, 04 alt, 08 win, 20 rshift, 40 ralt; `key2` = second key of a combo |
| `02` | consumer/media usage `key2:key1` (e.g. `02 00 00 E2` mute, `E9`/`EA` volume, `CD` play) |
| `07` | special functions (`07 00 00 1F` on Fn+Ctrl, `07 00 00 01` win-lock on Fn+Win, …) |
| `08` | lighting control: `08 03 01 00` brightness up, `08 03 02 00` down, `08 04 01/02 00` speed, `08 02 00 00` effect next, `08 00 00 01` side strip mode |
| `0D` | Fn layer key |
| `01`, `03`, `05` | mouse, macro, and other app-generated types (see `keyinfo_to_hardware_code` in the app) |

Swapping two entries on layer 0 and committing with a config write took effect immediately ✅.

## Music mode (host side)

The keyboard has no audio input. The app records the PC's output (WASAPI loopback), runs an FFT,
maps 9 bands to keyboard columns using `Dev\kb\ET\audiobar.txt`, and streams frames with CMD `08`
every few ms. `l65ctl.py music` does the same on Linux (untested at the time of writing).

## Firmware map (`re-tools\firmware\l65-full.bin`, 64 KB)

| Range | Content |
|---|---|
| `0x0000` | reset vector `LJMP 0x9052`; interrupt vectors |
| `0x0200` | USB feature-report receiver (`FUN_CODE_0200`); command jump table at `0x0495` (CMD 3–10) |
| `0x04AD…0x05E9` | handlers: 03 → layers, 04 → `FUN_CODE_b161` config write, 05 → macros, 06 → per-key, 08 → realtime flags, 0A → color table |
| `0x842E` | key-matrix filter (not HID) |
| `0xB1E2` | report 5 `0x75` → `FUN_CODE_ff00(0x5A, 0xA5)` = enter bootloader |
| `0xB400…0xC3FF` | data pages ending in `5A A5` (factory data) |
| `0xC400` | factory-default config template |
| `0xC600` | live config · `0xC800` color table · `0xCA00` per-key colors |
| `0xCC00 / 0xD000 / 0xD400 / 0xD800` | key layers 0–3 · `0xDC00+` macros |
| `0xF000–0xFFFF` | ISP bootloader (entry `0xFF00`, magic `5A A5`) |

Ghidra project: `re-tools\work\ghidra-project` (`L65` = app, x86; `L65FW` = firmware, 8051).
Decompiled exports: `work\hid_export.c`, `music_export.c`, `fw_*.c`.
