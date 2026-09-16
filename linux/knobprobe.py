#!/usr/bin/env python3
"""
knobprobe - one-shot check of what the L65 knob actually emits.

knobd.py assumes the knob press arrives as KEY_MUTE and that rotation arrives as
volume or brightness codes. Both are only *advertised* in the device capability
bitmap, which is not proof the hardware sends them. This listens to the knob's
consumer node read-only and prints every key event it sees, decoded, so the
assumption can be confirmed or corrected.

Read-only: it never grabs, so your desktop keeps reacting normally while it runs.

    python3 linux/knobprobe.py            # 30s window
    python3 linux/knobprobe.py -t 60      # longer window
"""

import sys
import time
import argparse
from collections import Counter

try:
    from evdev import InputDevice, list_devices, ecodes
except ImportError:
    sys.exit("python-evdev not installed:  sudo apt install python3-evdev")

VENDORS = {0x258a, 0x3554}
ROTATE = {ecodes.KEY_VOLUMEUP, ecodes.KEY_BRIGHTNESSUP,
          ecodes.KEY_VOLUMEDOWN, ecodes.KEY_BRIGHTNESSDOWN}

# Event types worth watching. A detented knob usually reports as EV_KEY (a
# consumer usage per detent) but can equally be an EV_REL wheel or an EV_ABS
# axis - knobd.py only handles EV_KEY, so we must be able to tell which it is.
WATCH = {ecodes.EV_KEY: "KEY", ecodes.EV_REL: "REL",
         ecodes.EV_ABS: "ABS", ecodes.EV_MSC: "MSC"}


def all_nodes(every_device=False):
    """Input nodes to watch: the keyboard and dongle, or literally everything.

    Deliberately unfiltered within that scope. An earlier version narrowed to
    the consumer nodes and saw nothing, which could not distinguish "knob not
    touched" from "events arriving somewhere I wasn't looking". --all-devices
    widens it further, for when the knob visibly does something but no L65 node
    reports it - the event may be surfacing on a node owned by another vendor.
    """
    out = []
    for path in list_devices():
        try:
            d = InputDevice(path)
        except Exception:
            continue
        if every_device or d.info.vendor in VENDORS:
            out.append(d)
        else:
            d.close()
    return out


def backlight_paths():
    """Every backlight brightness file, so we can watch the panel directly."""
    import glob
    return sorted(glob.glob("/sys/class/backlight/*/brightness"))


def read_backlight(paths):
    vals = {}
    for p in paths:
        try:
            with open(p) as f:
                vals[p.split("/")[-2]] = int(f.read().strip())
        except Exception:
            pass
    return vals


def code_name(etype, code):
    """Human name for a code. evdev hands back EVERY alias for codes that have
    more than one (113 is both KEY_MIN_INTERESTING and KEY_MUTE), as a list or
    a tuple depending on version - so join them rather than guessing which one
    matters, and let callers match on the parts."""
    tbl = {ecodes.EV_KEY: ecodes.KEY, ecodes.EV_REL: ecodes.REL,
           ecodes.EV_ABS: ecodes.ABS, ecodes.EV_MSC: ecodes.MSC}.get(etype, {})
    n = tbl.get(code, f"code {code}")
    return "/".join(n) if isinstance(n, (list, tuple)) else n


def main():
    ap = argparse.ArgumentParser(description="probe what the L65 knob emits")
    ap.add_argument("-t", "--timeout", type=float, default=30.0,
                    help="listen window in seconds (default 30)")
    ap.add_argument("-a", "--all-devices", action="store_true",
                    help="watch EVERY input device, not just the L65 and its dongle")
    args = ap.parse_args()

    devs = all_nodes(args.all_devices)
    if not devs:
        sys.exit("No L65 input node found at all. Plugged in? In the 'input' group "
                 "(needs a logout/login after usermod, or use setpriv)?")

    # The knob lives on a consumer node. Anything with KEY_A is a typing node,
    # so key events from it are keystrokes and must never be read as knob input.
    typing_nodes = set()
    import selectors
    sel = selectors.DefaultSelector()
    for d in devs:
        base = d.path.rsplit("/", 1)[-1]
        if ecodes.KEY_A in set(d.capabilities().get(ecodes.EV_KEY, [])):
            typing_nodes.add(base)
        sel.register(d, selectors.EVENT_READ)
        print(f"listening on {d.path:<20} {d.name}"
              f"{'   [typing node - keystrokes ignored]' if base in typing_nodes else ''}")

    print(f"\nTurn the knob both ways, then press it, then hold it down.")
    print(f"{args.timeout:.0f}s window - Ctrl-C to stop early.")
    print("Every event is printed as it arrives; silence means nothing reached us.\n")

    seen = Counter()          # (node, TYPE, code) -> count
    presses = []              # (code_name, held_seconds)
    down_at = {}
    deadline = time.monotonic() + args.timeout

    # knobd's scrub gesture is "hold the knob and rotate". That only works if the
    # firmware still reports rotation while the switch is down - some encoders
    # suppress it. Count detents that arrive between a press down and its up.
    press_held = False
    rot_while_held = 0
    holds_with_rotation = 0
    this_hold_rot = 0

    # Watch the panel itself alongside the input nodes. If the backlight moves
    # while no input event arrives, the knob is reaching it by some path other
    # than evdev - and knobd can never intercept it.
    bl_paths = backlight_paths()
    bl_last = read_backlight(bl_paths)
    bl_changes = 0
    last_event_at = [None]
    if bl_paths:
        print(f"also watching backlight: "
              f"{', '.join(f'{k}={v}' for k, v in bl_last.items())}\n")

    def poll_backlight():
        nonlocal bl_last, bl_changes
        now = read_backlight(bl_paths)
        for dev_name, val in now.items():
            old = bl_last.get(dev_name)
            if old is not None and val != old:
                bl_changes += 1
                gap = ("no input event yet" if last_event_at[0] is None else
                       f"{time.monotonic() - last_event_at[0]:.2f}s since last input event")
                print(f"  >> BACKLIGHT {dev_name}: {old} -> {val}   ({gap})")
        bl_last = now

    try:
        while time.monotonic() < deadline:
            # cap the wait so the backlight gets polled regularly
            wait = min(0.05, max(0.0, deadline - time.monotonic()))
            for key, _ in sel.select(wait):
                dev = key.fileobj
                for ev in dev.read():
                    if ev.type not in WATCH:
                        continue
                    kind = WATCH[ev.type]
                    name = code_name(ev.type, ev.code)
                    node = dev.path.rsplit("/", 1)[-1]
                    tag = "  (typing)" if node in typing_nodes else ""
                    if ev.type == ecodes.EV_KEY:
                        edge = {1: "down", 0: "up", 2: "repeat"}.get(ev.value, ev.value)
                        print(f"  {node:<9} {kind}  {name:<22} {edge}{tag}")
                        if node in typing_nodes:
                            pass                      # a keystroke, not a knob hold
                        elif ev.code in ROTATE:
                            if press_held and ev.value == 1:
                                rot_while_held += 1
                                this_hold_rot += 1
                        elif ev.value == 1:
                            press_held = True
                            this_hold_rot = 0
                            down_at[(node, ev.code)] = time.monotonic()
                        elif ev.value == 0:
                            press_held = False
                            if this_hold_rot:
                                holds_with_rotation += 1
                            t = down_at.pop((node, ev.code), None)
                            if t is not None:
                                presses.append((name, time.monotonic() - t))
                    else:
                        print(f"  {node:<9} {kind}  {name:<22} {ev.value:+d}{tag}")
                    if ev.value != 0 or ev.type != ecodes.EV_KEY:
                        seen[(node, kind, name)] += 1
                    if node not in typing_nodes:
                        last_event_at[0] = time.monotonic()
            poll_backlight()
    except KeyboardInterrupt:
        print("\n(stopped early)")

    print("\n" + "=" * 64)

    # Split before judging: keystrokes from a typing node are not knob input.
    knob_seen = Counter({k: v for k, v in seen.items() if k[0] not in typing_nodes})
    noise = sum(v for k, v in seen.items() if k[0] in typing_nodes)

    if noise:
        print(f"ignored {noise} event(s) from typing nodes "
              f"({', '.join(sorted(typing_nodes))}) - those are keystrokes.\n")

    if not knob_seen:
        if bl_changes:
            print(f"SMOKING GUN: the backlight moved {bl_changes} time(s), but NO input")
            print("event arrived on any watched node. So the knob IS working and IS")
            print("reaching the panel - by a path evdev never sees. knobd.py cannot")
            print("intercept it, and no PRESS_CODE change will help.")
            if not args.all_devices:
                print("\nNext: re-run with --all-devices to see whether the event")
                print("surfaces on a node owned by some other vendor.")
            else:
                print("\nEvery input device on the system was watched, so this is not")
                print("a node we missed. Likely handled in firmware/HID before evdev.")
        else:
            print("NO KNOB EVENTS, and the backlight never moved either. Nothing was")
            print("arriving on any non-typing node across KEY/REL/ABS/MSC. The knob")
            print("was not turned during the window - everything was being watched.")
        return

    print("knob events seen:")
    for (node, kind, name), n in knob_seen.most_common():
        print(f"  {node:<9} {kind}  {name:<22} x{n}")

    rot_names = {code_name(ecodes.EV_KEY, c) for c in ROTATE}
    keyev = {(nd, nm) for (nd, k, nm) in knob_seen if k == "KEY"}
    relev = [(nd, nm) for (nd, k, nm) in knob_seen if k == "REL"]
    rot_hit = sorted({nm for _, nm in keyev if nm in rot_names})
    press_hit = sorted({nm for _, nm in keyev if nm not in rot_names})

    print("\nverdict:")
    if rot_hit:
        print(f"  rotation -> {', '.join(rot_hit)}   (EV_KEY, which knobd handles)")
    elif relev:
        print(f"  rotation -> {relev[0][1]} on {relev[0][0]} as EV_REL")
        print("             knobd.py handles EV_KEY ONLY - it needs a REL branch.")
    else:
        print("  rotation -> NONE SEEN")

    if not press_hit:
        print("  press    -> NONE SEEN (press the knob during the window)")
    else:
        for n in press_hit:
            aliases = n.split("/")
            ok = ("matches PRESS_CODE, no change needed" if "KEY_MUTE" in aliases
                  else f"set PRESS_CODE = ecodes.{aliases[-1]} in knobd.py line 60")
            print(f"  press    -> {n}   <-- {ok}")

    # hold + rotate = the scrub gesture
    if rot_while_held:
        print(f"  press+rot-> {rot_while_held} detent(s) across {holds_with_rotation} hold(s)")
        print("              <-- HARDWARE SUPPORTS IT. scrub/seek is viable.")
    elif presses:
        print("  press+rot-> no rotation seen during any hold.")
        print("              Either you did not rotate while holding, or the")
        print("              firmware suppresses rotation while the switch is down")
        print("              (in which case scrub can never fire).")
    else:
        print("  press+rot-> untested (no hold captured)")

    if presses:
        longest = max(h for _, h in presses)
        print(f"\n  longest hold measured: {longest:.2f}s")
        print(f"  LONG_PRESS in knobd.py is 1.2s - holds longer than that fire the")
        print(f"  lighting preset instead of a tap.")


if __name__ == "__main__":
    main()
