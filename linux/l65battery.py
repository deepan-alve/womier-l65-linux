#!/usr/bin/env python3
"""
l65battery - Womier L65 battery level in the GNOME top bar.

Renders the level as a five-segment bar next to a keyboard icon, e.g.

    ▰▰▰▰▱ 82%          fresh reading
    ▰▰▰▰▱ ~82%         last poll missed, showing the previous value
    USB                wired - the keyboard reports no battery over USB
    --                 no keyboard / dongle found

Uses AppIndicator (StatusNotifierItem), so it needs no GNOME extension of its
own and no re-login - the ubuntu-appindicators extension already present picks
it up. Writing a shell extension instead would require logging out, since
Wayland cannot restart gnome-shell in place.

WHY IT POLLS SLOWLY
  The level is read over the 2.4G link with vendor command 0x4A. A dozing
  keyboard simply does not answer, so misses are normal rather than an error -
  they keep the previous value and mark it stale. The default interval is
  deliberately minutes, not seconds: a battery monitor that chatters at the
  radio to ask about the battery is self-defeating.

WHY THERE IS NO CHARGING INDICATOR
  battery() returns (level, status_byte) and the status bits are NOT decoded -
  see the comment in l65ctl.py. A full, unplugged keyboard reports 0x10, so the
  obvious bool(byte6) reads as "charging" while discharging. The raw byte is
  shown in the menu; inventing a plug icon from it would be a guess.

REQUIRES
  gir1.2-ayatanaappindicator3-0.1   (already a dependency of ubuntu-appindicators)
  l65ctl.py                         (sibling file, ~/.local/bin, $L65CTL, or PATH)

    python3 linux/l65battery.py                 # 5 min polling
    python3 linux/l65battery.py --interval 120  # every 2 min
    python3 linux/l65battery.py --once          # print and exit, no tray
"""

import os
import sys
import time
import fcntl
import shutil
import argparse
import importlib.util
from pathlib import Path

SEGMENTS = 5
FILLED, EMPTY = "▰", "▱"      # ▰ ▱
ICON = "input-keyboard-symbolic"


def find_l65ctl():
    """Locate l65ctl.py. Same search order as knobd, for the same reason:
    when this runs as a user service it is not next to the repo checkout."""
    cands = []
    if os.environ.get("L65CTL"):
        cands.append(Path(os.environ["L65CTL"]))
    cands += [Path(__file__).resolve().with_name("l65ctl.py"),
              Path.home() / ".local" / "bin" / "l65ctl.py"]
    for c in cands:
        if c.is_file():
            return str(c)
    return shutil.which("l65ctl.py")


def load_l65ctl():
    path = find_l65ctl()
    if not path:
        sys.exit("l65ctl.py not found - set $L65CTL or run from the repo")
    spec = importlib.util.spec_from_file_location("l65ctl", path)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


class Reading:
    """One battery sample, or the reason there isn't one."""

    def __init__(self, level=None, status=None, wired=False, error=None):
        self.level = level
        self.status = status
        self.wired = wired
        self.error = error
        self.at = time.monotonic()

    @property
    def ok(self):
        return self.level is not None


def read_battery(L):
    """Sample the battery. Never raises - failure is an expected outcome here."""
    try:
        dev = L.open_device()
    except Exception as e:
        return Reading(error=f"no device ({e})")
    try:
        level, status = dev.battery()
        return Reading(level=level, status=status)
    except Exception as e:
        # WiredTransport.battery() raises for USB; wireless raises on timeout
        # when the keyboard is dozing. Distinguish, because one is permanent
        # for this transport and the other will likely succeed next time.
        msg = str(e)
        if getattr(dev, "name", "") == "wired" or "wireless feature" in msg:
            return Reading(wired=True, error=msg)
        return Reading(error=msg)
    finally:
        for closer in ("close", "__exit__"):
            fn = getattr(dev, closer, None)
            if callable(fn):
                try:
                    fn() if closer == "close" else fn(None, None, None)
                except Exception:
                    pass
                break


def claim_single_instance():
    """Refuse to start a second tray copy.

    Each instance registers its own StatusNotifierItem, so a duplicate shows a
    duplicate icon in the panel - easy to hit once this is autostarted and then
    also launched by hand. The lock is held for the process lifetime and is
    released automatically on exit, including a kill.
    """
    run_dir = os.environ.get("XDG_RUNTIME_DIR") or "/tmp"
    path = os.path.join(run_dir, "l65battery.lock")
    handle = open(path, "w")
    try:
        fcntl.flock(handle, fcntl.LOCK_EX | fcntl.LOCK_NB)
    except OSError:
        sys.exit(f"l65battery is already running (lock held on {path}) - "
                 f"refusing to add a second tray icon")
    handle.write(str(os.getpid()))
    handle.flush()
    return handle                 # caller must keep this alive


def bar(level):
    filled = max(0, min(SEGMENTS, round(level / 100 * SEGMENTS)))
    # Never show an empty bar for a live battery: 7% rounds to 0 segments, which
    # would look identical to flat. Likewise never show it full below 100%.
    if level > 0:
        filled = max(1, filled)
    if level < 100:
        filled = min(SEGMENTS - 1, filled)
    return FILLED * filled + EMPTY * (SEGMENTS - filled)


def label_for(last_good, latest):
    """Top-bar text. Keeps the previous level when a poll misses, rather than
    flapping to blank every time the keyboard dozes."""
    if latest.wired:
        return "USB"
    if latest.ok:
        return f"{bar(latest.level)} {latest.level}%"
    if last_good is not None and last_good.ok:
        return f"{bar(last_good.level)} ~{last_good.level}%"
    return "--"


def describe(last_good, latest):
    """Menu text - the honest detail behind the label."""
    lines = []
    if latest.wired:
        lines.append("Wired: no battery reported over USB")
    elif latest.ok:
        lines.append(f"Battery {latest.level}%")
        lines.append(f"Status byte 0x{latest.status:02x} (bits not decoded)")
    elif last_good is not None and last_good.ok:
        age = int(time.monotonic() - last_good.at)
        lines.append(f"Last known {last_good.level}%, {age}s ago")
        lines.append("Keyboard asleep - it does not answer while dozing")
    else:
        lines.append("No reading yet")
    if latest.error and not latest.wired:
        lines.append(latest.error)
    return lines


def main():
    ap = argparse.ArgumentParser(description="L65 battery in the top bar")
    ap.add_argument("--interval", type=float, default=300.0,
                    help="seconds between polls (default 300; keep it slow)")
    ap.add_argument("--once", action="store_true",
                    help="print one reading and exit, no tray icon")
    args = ap.parse_args()

    L = load_l65ctl()

    if args.once:
        r = read_battery(L)
        print(label_for(None, r))
        for line in describe(None, r):
            print(f"  {line}")
        return 0 if (r.ok or r.wired) else 1

    # only the tray mode needs exclusivity; --once is free to run alongside
    lock = claim_single_instance()

    import gi
    gi.require_version("Gtk", "3.0")
    gi.require_version("AyatanaAppIndicator3", "0.1")
    from gi.repository import Gtk, GLib, AyatanaAppIndicator3 as AppIndicator

    ind = AppIndicator.Indicator.new(
        "l65battery", ICON, AppIndicator.IndicatorCategory.HARDWARE)
    ind.set_status(AppIndicator.IndicatorStatus.ACTIVE)

    menu = Gtk.Menu()
    info_items = [Gtk.MenuItem(label="starting...") for _ in range(3)]
    for it in info_items:
        it.set_sensitive(False)
        menu.append(it)
    menu.append(Gtk.SeparatorMenuItem())
    refresh = Gtk.MenuItem(label="Refresh now")
    quit_it = Gtk.MenuItem(label="Quit")
    menu.append(refresh)
    menu.append(quit_it)
    menu.show_all()
    ind.set_menu(menu)

    state = {"last_good": None}

    def apply(latest):
        lg = state["last_good"]
        ind.set_label(label_for(lg, latest), "100%")
        lines = describe(lg, latest)
        for i, it in enumerate(info_items):
            it.set_label(lines[i] if i < len(lines) else "")
            it.set_visible(i < len(lines))
        if latest.ok:
            state["last_good"] = latest
        return False

    def poll_async():
        """Read on a worker thread - the RF round trip can take seconds and
        would otherwise freeze the panel."""
        import threading

        def work():
            r = read_battery(L)
            GLib.idle_add(apply, r)

        threading.Thread(target=work, daemon=True).start()

    def on_timer():
        poll_async()
        return True

    refresh.connect("activate", lambda _w: poll_async())
    quit_it.connect("activate", lambda _w: Gtk.main_quit())

    poll_async()
    GLib.timeout_add_seconds(max(10, int(args.interval)), on_timer)
    Gtk.main()
    return 0


if __name__ == "__main__":
    sys.exit(main())
