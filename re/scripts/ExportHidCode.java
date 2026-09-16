// Decompiles the functions around the Womier L65 app's HID protocol and writes them to one file:
// functions that reference protocol-related strings, functions that call the HID/IO imports,
// and up to two levels of callers of the HidD_SetFeature/HidD_GetFeature wrappers.
// Usage: analyzeHeadless <projDir> <projName> -import OemDrv.exe -postScript ExportHidCode.java <output.c>
//@category Womier
import java.io.PrintWriter;
import java.util.*;
import java.util.stream.Collectors;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;

public class ExportHidCode extends GhidraScript {
    private static final String[] STRING_KEYWORDS = {
        "sendcmd", "accessdata", "setfeature", "getfeature", "cdev3632", "cdevg5kb", "icdev916kb",
        "cdevcombofilm", "findhiddevice", "psd", "ledopt", "ic2481", "gaoshou", "macrobuffer", "cmdreset",
        "channelmask", "ledmask", "defledindex", "kblayout", "showdebounce", "sleeptime", "crc", "synccfg",
        "setprofile", "setmacro", "rgbindex", "fwver", "download fw", "reset using cmd", "servicethread",
        "keyinfo_to_hardware_code", "hdmacro", "online=", "package"
    };
    private static final Set<String> FEATURE_IMPORTS = Set.of("HidD_SetFeature", "HidD_GetFeature");
    private static final Set<String> IO_IMPORTS = Set.of("WriteFile", "ReadFile", "HidD_SetOutputReport",
        "HidD_GetInputReport", "HidD_GetAttributes", "HidP_GetCaps", "DeviceIoControl");
    private static final int MAX_FUNCTIONS = 600;

    private final Map<Function, Set<String>> reasons = new TreeMap<>(Comparator.comparing(Function::getEntryPoint));

    private void add(Function f, String why) {
        if (f == null || (!reasons.containsKey(f) && reasons.size() >= MAX_FUNCTIONS)) {
            return;
        }
        reasons.computeIfAbsent(f, k -> new TreeSet<>()).add(why.length() > 90 ? why.substring(0, 90) + "..." : why);
    }

    private Set<Function> functionsReferencing(Address target) {
        Set<Function> result = new HashSet<>();
        for (Reference ref : getReferencesTo(target)) {
            Function f = getFunctionContaining(ref.getFromAddress());
            if (f != null) {
                if (f.isThunk()) {
                    result.addAll(f.getCallingFunctions(monitor));
                } else {
                    result.add(f);
                }
            } else {
                // Import address table slot or pointer table: follow references to the slot itself.
                for (Reference ref2 : getReferencesTo(ref.getFromAddress())) {
                    Function g = getFunctionContaining(ref2.getFromAddress());
                    if (g != null) {
                        result.add(g);
                    }
                }
            }
        }
        return result;
    }

    private static String names(Collection<Function> fs) {
        return fs.stream().map(f -> f.getName() + "@" + f.getEntryPoint()).sorted().collect(Collectors.joining(", "));
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = args.length > 0 ? args[0] : "hid_export.c";

        List<String> stringHits = new ArrayList<>();
        DataIterator it = currentProgram.getListing().getDefinedData(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Data d = it.next();
            if (!d.hasStringValue()) {
                continue;
            }
            String s = String.valueOf(d.getValue());
            String lower = s.toLowerCase();
            for (String k : STRING_KEYWORDS) {
                if (lower.contains(k)) {
                    Set<Function> fs = functionsReferencing(d.getAddress());
                    stringHits.add(d.getAddress() + "  \"" + s.replace("\n", "\\n").replace("\r", "\\r") + "\"  <- " + names(fs));
                    for (Function f : fs) {
                        add(f, "string: " + s.trim());
                    }
                    break;
                }
            }
        }

        List<String> importHits = new ArrayList<>();
        Set<Function> featureCallers = new HashSet<>();
        SymbolIterator ext = currentProgram.getSymbolTable().getExternalSymbols();
        while (ext.hasNext()) {
            Symbol sym = ext.next();
            String name = sym.getName();
            if (!FEATURE_IMPORTS.contains(name) && !IO_IMPORTS.contains(name)) {
                continue;
            }
            Set<Function> fs = functionsReferencing(sym.getAddress());
            importHits.add(name + "  <- " + names(fs));
            for (Function f : fs) {
                add(f, "calls " + name);
                if (FEATURE_IMPORTS.contains(name)) {
                    featureCallers.add(f);
                }
            }
        }

        Set<Function> frontier = featureCallers;
        for (int depth = 1; depth <= 2; depth++) {
            Set<Function> next = new HashSet<>();
            for (Function f : frontier) {
                for (Function caller : f.getCallingFunctions(monitor)) {
                    if (!reasons.containsKey(caller)) {
                        next.add(caller);
                    }
                    add(caller, "caller depth " + depth + " of " + f.getName());
                }
            }
            frontier = next;
        }

        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        try (PrintWriter out = new PrintWriter(outPath, "UTF-8")) {
            out.println("// Program: " + currentProgram.getName() + "  image base " + currentProgram.getImageBase());
            out.println("// Import call sites");
            for (String h : importHits) {
                out.println("//   " + h);
            }
            out.println("// Keyword string references");
            for (String h : stringHits) {
                out.println("//   " + h);
            }
            out.println("// Function index (" + reasons.size() + ")");
            for (Map.Entry<Function, Set<String>> e : reasons.entrySet()) {
                out.println("//   " + e.getKey().getEntryPoint() + " " + e.getKey().getName() + "  [" + String.join("; ", e.getValue()) + "]");
            }
            for (Map.Entry<Function, Set<String>> e : reasons.entrySet()) {
                if (monitor.isCancelled()) {
                    break;
                }
                Function f = e.getKey();
                out.println();
                out.println("// ==== " + f.getEntryPoint() + " " + f.getName() + " ====");
                out.println("// why: " + String.join("; ", e.getValue()));
                DecompileResults res = ifc.decompileFunction(f, 60, monitor);
                out.println(res.decompileCompleted() ? res.getDecompiledFunction().getC() : "// decompile failed: " + res.getErrorMessage());
            }
        } finally {
            ifc.dispose();
        }
        println("Wrote " + reasons.size() + " functions to " + outPath);
    }
}
