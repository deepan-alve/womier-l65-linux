// Force-create functions at the given addresses (jump-table targets inside a bigger function) and
// decompile them. Usage: ... -postScript CreateAndDecompile.java <out.c> <hexAddr>...
//@category Womier
import java.io.PrintWriter;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;

public class CreateAndDecompile extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        DecompInterface ifc = new DecompInterface();
        ifc.openProgram(currentProgram);
        try (PrintWriter out = new PrintWriter(args[0], "UTF-8")) {
            for (int i = 1; i < args.length; i++) {
                Address a = toAddr(args[i]);
                disassemble(a);
                Function f = getFunctionAt(a);
                if (f == null) {
                    Function holder = getFunctionContaining(a);
                    if (holder != null) {
                        out.println("// note: " + a + " was inside " + holder.getName() + ", splitting");
                    }
                    f = createFunction(a, "cmd_" + args[i]);
                }
                out.println();
                out.println("// ==== " + a + " " + (f == null ? "(no function)" : f.getName()) + " ====");
                if (f == null) {
                    Instruction ins = getInstructionAt(a);
                    for (int n = 0; n < 60 && ins != null; n++) {
                        out.println("//   " + ins.getAddress() + "  " + ins);
                        ins = ins.getNext();
                    }
                    continue;
                }
                DecompileResults res = ifc.decompileFunction(f, 120, monitor);
                out.println(res.decompileCompleted() ? res.getDecompiledFunction().getC() : "// decompile failed: " + res.getErrorMessage());
            }
        } finally {
            ifc.dispose();
        }
        println("done");
    }
}
