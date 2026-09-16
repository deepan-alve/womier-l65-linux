# Reverse-engineering artifacts

How the protocol in [`../docs/L65-protocol.md`](../docs/L65-protocol.md) and the patch offsets in
[`../firmware/README.md`](../firmware/README.md) were actually derived. Nothing here is needed to
*use* the keyboard — it is here so the results can be checked and extended.

Two separate targets were decompiled, and the exports are a mix of both:

| Target | Files | What it gave |
|---|---|---|
| The keyboard's own **SH68F90 firmware** (8051) | `exports/fw_*.c` | Patch offsets, the doze counter, knob usage IDs, why the dongle relays only a subset of commands. |
| **`OemDrv.exe`**, the Windows vendor app (x86) | `exports/cfg_funcs.c`, `exports/hid_export.c`, `exports/music_export.c` | The command vocabulary itself — report IDs, payload sizes, the config block layout, the music-sync path. |

The vendor app was the more productive of the two: it *builds* the packets, so reading it gives you
the protocol directly, whereas the 8051 side mostly confirms what the hardware does with them.

## Firmware exports (`fw_*.c`)

8051, addresses like `CODE:2021`. Seeded around different entry points, so they overlap rather than
partition cleanly — several files re-export shared leaf functions.

| File | Seeded around |
|---|---|
| `fw_hid.c` (2.8k lines) | HID report assembly from `CODE:0200`, the widest net of the set. |
| `fw_rf.c` (2.2k lines) | The 2.4 GHz path. |
| `fw_dispatch.c`, `fw_cmds.c` | Vendor report dispatch — command byte to handler. |
| `fw_knob.c`, `fw_encoder.c` | Knob decoding from `CODE:2021`; source of the `knob-brightness` offsets. |
| `fw_sleep.c` | The doze counter behind the `no-sleep` patch. |
| `fw_hid2.c`, `fw_hid3.c`, `fw_aa.c`, `fw_aa2.c` | Further HID and lighting-table neighbourhoods. |

## Vendor app exports

x86, addresses like `FUN_0049b4b0`, image base `0x400000`.

| File | What |
|---|---|
| `cfg_funcs.c` (656 lines) | Config block construction — the direct source of the offset table in the protocol doc. |
| `hid_export.c` (15k lines) | Everything reachable from the `WriteFile`/`ReadFile` call sites — the HID transport layer. |
| `music_export.c` (30k lines) | The music-sync vtable and its neighbourhood. Not reimplemented in `l65ctl.py`; this is the only record of how it works. |

## Method

Ghidra 12.1.3, headless. The firmware side ran against a 64 KB `sinowisp read -s full` dump; the
8051 language module handles the chip, and the work was in seeding entry points and the vendor
dispatch table, which `FwSeed.java` and `FwSetup.java` do.

The Ghidra **project databases are not in this repo** — ~73 MB, and reproducible:

```bash
sudo sinowisp read -d aula-f75 -s full l65-full.bin
analyzeHeadless /path/to/proj L65 -import l65-full.bin \
    -processor 8051:BE:16:default -preScript re/scripts/FwSetup.java
analyzeHeadless /path/to/proj L65 -process l65-full.bin \
    -postScript re/scripts/ExportHidCode.java
```

`OemDrv.exe` is **not** in this repo either — it is the vendor's binary. It ships with the Windows
Womier/AULA configuration software if you want to repeat that half.

Decompiler output on an 8051 is rough — bank switching and the split address spaces confuse it, so
treat the C as a map rather than as source. Anything stated as fact in the protocol doc was
confirmed against the wire, not just read out of these files.

## Licensing

The Ghidra **scripts** in `scripts/` are mine and MIT licensed.

The **exports** are machine-generated from other people's compiled code — the keyboard firmware and
the vendor's Windows application — and are not mine to license. They are published as an
interoperability reference. See [`../NOTICE`](../NOTICE).

A previous private revision of this work also carried a decompiled copy of `sinowisp`'s Rust
source. That was removed before publication — `sinowisp` is GPL-3.0 and its real source is public
at [carlossless/sinowisp](https://github.com/carlossless/sinowisp). Read that instead.
