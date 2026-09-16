#!/usr/bin/env python3
"""patch.py - apply the documented firmware patches to YOUR OWN L65 dump.

The prebuilt .bin files here were patched from one specific board. If your
keyboard shipped with a different firmware revision, flashing them would
install someone else's firmware over yours. This tool avoids that: read your
own board out with sinowisp, patch that, flash the result.

    sudo sinowisp read -d aula-f75 -s firmware stock.bin     # your own dump
    python3 firmware/patch.py stock.bin -o mine.bin --knob-brightness --no-sleep
    sudo sinowisp write -d aula-f75 --format bin mine.bin

Keep stock.bin. It is your only rollback target - this repo deliberately does
not redistribute the vendor's unmodified firmware.

Every patch verifies the bytes it is about to overwrite and refuses on a
mismatch, so a revision that moved these addresses fails loudly instead of
producing a bricked image. Use --inspect to see what a dump already has.

No dependencies. Python 3.8+.
"""

import sys
import shutil
import argparse
import hashlib

# Firmware region only (the 61440-byte flash below the bootloader). A 65536-byte
# `-s full` dump includes the bootloader at 0xF000; --inspect accepts it, but
# patching targets the firmware region, which is what `write` expects.
FIRMWARE_SIZE = 61440
FULL_SIZE = 65536

# The one revision these offsets were derived from, for information only. A
# different hash is not an error - the per-byte checks below are the real gate.
KNOWN_STOCK_SHA256 = \
    "edd6cc5cb6e341cd57b0d5ff4386602f6708a7253e628c97b5af819ba432f852"

# Each patch is a list of (offset, expect_stock, replace_with).
PATCHES = {
    "knob-brightness": {
        "flag": "--knob-brightness",
        "summary": "knob rotation in media mode sends Display Brightness +/- "
                   "instead of Volume +/-",
        "detail": """\
Rewrites the two immediate operands that load the consumer-usage IDs sent on
rotation: 0xE9/0xEA (Volume Up/Down) become 0x6F/0x70 (Display Brightness
Up/Down). Media mode only - rotation in lighting mode still drives LED
brightness, and the knob press still mutes. Context at 0x2599 is
    74 e9 80 02 74 ea f0   ->   74 6f 80 02 74 70 f0""",
        "bytes": [
            (0x259B, 0xE9, 0x6F),
            (0x259F, 0xEA, 0x70),
        ],
    },
    "no-sleep": {
        "flag": "--no-sleep",
        "summary": "extend the wireless fast-doze timeout from ~3 s to 3+ min",
        "detail": """\
On 2.4G the keyboard drops into a fast doze within a few seconds of going idle,
and a dozing board does not answer vendor reports - which makes any multi-step
wireless operation (a palette write, a matrix write) unreliable. Seven operand
bytes feed the doze counter at 0x0A14/0x0A15, decremented in FUN_CODE_1019.
Setting them to 0xFF loads ~0xFFFF instead of 0x0BB8 / 0x0258 / 0x00C8.
Measured after flashing: stays awake 3+ minutes.

This trades battery life for reliability. Skip it if you only ever use the
keyboard wired, where dozing is not in play.""",
        "bytes": [
            (0x0462, 0x0B, 0xFF),
            (0x0466, 0xB8, 0xFF),
            (0x046E, 0xC8, 0xFF),
            (0x0844, 0x0B, 0xFF),
            (0x0848, 0xB8, 0xFF),
            (0x084D, 0x02, 0xFF),
            (0x0851, 0x58, 0xFF),
        ],
    },
}


def classify(data, patch):
    """Return 'stock', 'applied', or a description of the mismatch."""
    stock = all(data[off] == want for off, want, _ in patch["bytes"])
    if stock:
        return "stock", None
    applied = all(data[off] == new for off, _, new in patch["bytes"])
    if applied:
        return "applied", None
    bad = [f"0x{off:04X}: found {data[off]:02X}, "
           f"expected {want:02X} (stock) or {new:02X} (patched)"
           for off, want, new in patch["bytes"]
           if data[off] != want and data[off] != new]
    return "mismatch", bad


def load(path):
    with open(path, "rb") as fh:
        data = bytearray(fh.read())
    if len(data) not in (FIRMWARE_SIZE, FULL_SIZE):
        sys.exit(f"{path}: {len(data)} bytes - expected {FIRMWARE_SIZE} "
                 f"(firmware) or {FULL_SIZE} (full dump).\n"
                 f"Read it with:  sudo sinowisp read -d aula-f75 "
                 f"-s firmware stock.bin")
    return data


def cmd_inspect(args):
    data = load(args.input)
    digest = hashlib.sha256(bytes(data)).hexdigest()
    region = "firmware" if len(data) == FIRMWARE_SIZE else "full (with bootloader)"
    print(f"{args.input}: {len(data)} bytes, {region}")
    print(f"sha256: {digest}")
    if digest == KNOWN_STOCK_SHA256:
        print("        matches the stock revision these offsets came from")
    print()
    for name, patch in PATCHES.items():
        state, bad = classify(data, patch)
        mark = {"stock": "not applied", "applied": "APPLIED",
                "mismatch": "UNRECOGNISED"}[state]
        print(f"  {name:<18} {mark}")
        for line in bad or []:
            print(f"      {line}")
    return 0


def cmd_patch(args):
    wanted = [n for n in PATCHES if getattr(args, n.replace("-", "_"))]
    if not wanted:
        sys.exit("pick at least one patch: "
                 + "  ".join(p["flag"] for p in PATCHES.values())
                 + "\n(or use --inspect to see what a dump already has)")

    data = load(args.input)
    if len(data) == FULL_SIZE and not args.allow_full:
        sys.exit("this is a full 64 KB dump including the bootloader. Patch the "
                 "firmware region instead:\n"
                 "  sudo sinowisp read -d aula-f75 -s firmware stock.bin\n"
                 "(or pass --allow-full if you really mean to patch in place)")

    changed = 0
    for name in wanted:
        patch = PATCHES[name]
        state, bad = classify(data, patch)
        if state == "mismatch":
            print(f"error: {name} does not fit this firmware:", file=sys.stderr)
            for line in bad:
                print(f"  {line}", file=sys.stderr)
            sys.exit("\nYour board is most likely a different revision. The "
                     "offsets would have to be\nre-derived in Ghidra - see "
                     "re/ and docs/L65-protocol.md. Nothing was written.")
        if state == "applied":
            print(f"{name}: already applied, leaving alone")
            continue
        for off, _, new in patch["bytes"]:
            data[off] = new
        changed += len(patch["bytes"])
        print(f"{name}: patched {len(patch['bytes'])} bytes")

    if not changed:
        print("nothing to do - every requested patch was already present")

    out = args.output
    if out == args.input:
        shutil.copy2(args.input, args.input + ".orig")
        print(f"backed up original to {args.input}.orig")
    with open(out, "wb") as fh:
        fh.write(data)
    print(f"wrote {out}  ({len(data)} bytes, "
          f"sha256 {hashlib.sha256(bytes(data)).hexdigest()[:16]}...)")
    print(f"\nflash with:  sudo sinowisp write -d aula-f75 --format bin {out}")
    print("note: flashing factory-resets the lighting config - re-apply it "
          "afterwards with l65ctl.py")
    return 0


def main():
    epilog = "\n\n".join(
        f"{p['flag']}\n  {p['summary']}\n\n" + "\n".join(
            "  " + line for line in p["detail"].splitlines())
        for p in PATCHES.values())

    ap = argparse.ArgumentParser(
        description=__doc__.split("\n\n")[1],
        epilog=epilog,
        formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("input", help="your own firmware dump from sinowisp read")
    ap.add_argument("-o", "--output", help="where to write the patched image")
    ap.add_argument("--inspect", action="store_true",
                    help="report which patches a dump already has, write nothing")
    ap.add_argument("--allow-full", action="store_true",
                    help="permit patching a 64 KB full dump in place")
    for name, patch in PATCHES.items():
        ap.add_argument(patch["flag"], dest=name.replace("-", "_"),
                        action="store_true", help=patch["summary"])
    args = ap.parse_args()

    if args.inspect:
        return cmd_inspect(args)
    if not args.output:
        ap.error("-o/--output is required when patching "
                 "(use --inspect to only report)")
    return cmd_patch(args)


if __name__ == "__main__":
    sys.exit(main())
