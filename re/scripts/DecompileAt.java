// Decompiles the functions at the given addresses (plus their direct callees' names) into one file.
// Usage: analyzeHeadless <projDir> <projName> -process OemDrv.exe -noanalysis
//          -postScript DecompileAt.java <output.c> <hexAddr> [<hexAddr> ...]
//@category Womier
import java.io.PrintWriter;
import java.util.stream.Collectors;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class DecompileAt extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            printerr("usage: DecompileAt.java <output.c> <hexAddr>...");
            return;
        }
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        try (PrintWriter out = new PrintWriter(args[0], "UTF-8")) {
            for (int i = 1; i < args.length; i++) {
                Address addr = toAddr(args[i]);
                Function f = getFunctionContaining(addr);
                out.println();
                if (f == null) {
                    out.println("// ==== " + args[i] + ": no function ====");
                    continue;
                }
                out.println("// ==== " + f.getEntryPoint() + " " + f.getName() + " ====");
                out.println("// callers: " + f.getCallingFunctions(monitor).stream()
                    .map(c -> c.getName() + "@" + c.getEntryPoint()).sorted().collect(Collectors.joining(", ")));
                out.println("// callees: " + f.getCalledFunctions(monitor).stream()
                    .map(c -> c.getName() + "@" + c.getEntryPoint()).sorted().collect(Collectors.joining(", ")));
                DecompileResults res = ifc.decompileFunction(f, 120, monitor);
                out.println(res.decompileCompleted() ? res.getDecompiledFunction().getC() : "// decompile failed: " + res.getErrorMessage());
            }
        } finally {
            ifc.dispose();
        }
        println("Wrote " + (args.length - 1) + " functions to " + args[0]);
    }
}
