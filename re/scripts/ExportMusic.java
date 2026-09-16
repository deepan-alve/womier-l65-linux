// Second Ghidra pass for the Womier L65 app: dump the device-class vtables (slot -> function -> HID cmd),
// and decompile everything around music / realtime / custom-color / global-settings paths.
// Usage: analyzeHeadless <proj> L65 -process OemDrv.exe -noanalysis -readOnly -postScript ExportMusic.java <out.c>
//@category Womier
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.stream.Collectors;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;

public class ExportMusic extends GhidraScript {
    private static final String[] KEYWORDS = {
        "music", "gain", "audio", "wasapi", "loopback", "iaudio", "fft", "spectrum", "realdata", "selfdata",
        "rteffect", "realtime", "cartoon", "_unit", ".txt", "tap", "sleep", "debounce", "reset", "profile",
        "custom", "colorgroup", "rgbtab", "setgame", "layer", "matrix", "macro", "combo",
        "wheel", "sideled", "onboard", "dse", "gsetting", "queryprofile", "submit"
    };
    private static final int MAX = 400;
    private static final Pattern CMD_ARG = Pattern.compile("FUN_00498f60\\([^;]*?,1,(0x[0-9a-fA-F]+|\\d+),");
    private static final Pattern CMD_BYTE = Pattern.compile("(?:local|acStack)_20c\\[1\\] = (0x[0-9a-fA-F]+)");
    private final Map<Function, Set<String>> picked = new TreeMap<>(Comparator.comparing(Function::getEntryPoint));
    private final Map<Function, String> decCache = new TreeMap<>(Comparator.comparing(Function::getEntryPoint));
    private DecompInterface ifc;

    private void add(Function f, String why) {
        if (f == null || f.isThunk() || (!picked.containsKey(f) && picked.size() >= MAX)) {
            return;
        }
        picked.computeIfAbsent(f, k -> new TreeSet<>()).add(why.length() > 80 ? why.substring(0, 80) + "..." : why);
    }

    private Set<Function> refFuncs(Address a) {
        Set<Function> r = new HashSet<>();
        for (Reference ref : getReferencesTo(a)) {
            Function f = getFunctionContaining(ref.getFromAddress());
            if (f != null) {
                r.add(f);
            }
        }
        return r;
    }

    private String dec(Function f) {
        return decCache.computeIfAbsent(f, k -> {
            DecompileResults res = ifc.decompileFunction(k, 90, monitor);
            return res.decompileCompleted() ? res.getDecompiledFunction().getC() : "// decompile failed: " + res.getErrorMessage();
        });
    }

    @Override
    public void run() throws Exception {
        String out = getScriptArgs()[0];
        ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        Memory mem = currentProgram.getMemory();
        List<String> vtables = new ArrayList<>();
        for (String anchor : new String[]{"0049bad0", "00494c40", "00498540"}) {
            Function af = getFunctionAt(toAddr(anchor));
            for (Reference ref : getReferencesTo(af.getEntryPoint())) {
                Address slot = ref.getFromAddress();
                if (getFunctionContaining(slot) != null) {
                    continue;
                }
                Address start = slot;
                while (true) {
                    Address prev = start.subtract(4);
                    long v = mem.getInt(prev) & 0xffffffffL;
                    if (getFunctionAt(toAddr(v)) == null) {
                        break;
                    }
                    start = prev;
                }
                StringBuilder sb = new StringBuilder("// VTABLE at " + start + " (anchor " + af.getName() + "@" + anchor + ")\n");
                Address p = start;
                int i = 0;
                while (i < 80) {
                    long v = mem.getInt(p) & 0xffffffffL;
                    Function vf = getFunctionAt(toAddr(v));
                    if (vf == null) {
                        break;
                    }
                    String cmd = "";
                    Matcher m = CMD_ARG.matcher(dec(vf));
                    if (m.find()) {
                        cmd = "  cmd=" + m.group(1);
                    } else {
                        Matcher m2 = CMD_BYTE.matcher(dec(vf));
                        if (m2.find()) {
                            cmd = "  cmd=" + m2.group(1);
                        }
                    }
                    sb.append(String.format("//   +0x%02x  %s@%s%s%n", i * 4, vf.getName(), vf.getEntryPoint(), cmd));
                    add(vf, "vtable slot 0x" + Integer.toHexString(i * 4));
                    p = p.add(4);
                    i++;
                }
                vtables.add(sb.toString());
            }
        }
        List<String> hits = new ArrayList<>();
        DataIterator it = currentProgram.getListing().getDefinedData(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Data d = it.next();
            if (!d.hasStringValue()) {
                continue;
            }
            String s = String.valueOf(d.getValue());
            String l = s.toLowerCase();
            for (String k : KEYWORDS) {
                if (l.contains(k)) {
                    Set<Function> fs = refFuncs(d.getAddress());
                    hits.add(d.getAddress() + " \"" + s.replace("\n", "\\n") + "\" <- "
                        + fs.stream().map(Function::getName).sorted().collect(Collectors.joining(",")));
                    for (Function f : fs) {
                        add(f, "str: " + s.trim());
                    }
                    break;
                }
            }
        }
        for (String a : new String[]{"0049a350", "0049a380", "0049a3b0", "0049a3e0", "0049ca60", "0049ca80", "00499ce0", "00499f30", "0049a160"}) {
            Function f = getFunctionAt(toAddr(a));
            add(f, "cmd wrapper");
            for (Function c : f.getCallingFunctions(monitor)) {
                add(c, "calls " + f.getName());
                for (Function c2 : c.getCallingFunctions(monitor)) {
                    add(c2, "calls " + c.getName());
                }
            }
        }
        try (PrintWriter pw = new PrintWriter(out, "UTF-8")) {
            for (String v : vtables) {
                pw.println(v);
            }
            pw.println("// STRING HITS");
            for (String h : hits) {
                pw.println("//   " + h);
            }
            pw.println("// FUNCTIONS (" + picked.size() + ")");
            for (Map.Entry<Function, Set<String>> e : picked.entrySet()) {
                pw.println("//   " + e.getKey().getEntryPoint() + " " + e.getKey().getName() + " [" + String.join("; ", e.getValue()) + "]");
            }
            for (Map.Entry<Function, Set<String>> e : picked.entrySet()) {
                pw.println();
                pw.println("// ==== " + e.getKey().getEntryPoint() + " " + e.getKey().getName() + " ====");
                pw.println("// why: " + String.join("; ", e.getValue()));
                pw.println(dec(e.getKey()));
            }
        }
        ifc.dispose();
        println("Wrote " + picked.size() + " functions to " + out);
    }
}
