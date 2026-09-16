// Pre-analysis setup for the raw 8051 firmware dump: define entry points at the reset/interrupt
// vectors (following their LJMPs), the main entry, and the bootloader, so auto-analysis has roots.
// Usage: analyzeHeadless <proj> L65FW -process l65-full.bin -preScript FwSetup.java ...
//@category Womier
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class FwSetup extends GhidraScript {
    private void root(long at, String name) throws Exception {
        Address a = toAddr(at);
        disassemble(a);
        if (getFunctionAt(a) == null) {
            Function f = createFunction(a, name);
            println("root " + name + " @ " + a + (f == null ? " (createFunction failed)" : ""));
        }
    }

    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        for (MemoryBlock b : mem.getBlocks()) {
            println("block " + b.getName() + " " + b.getStart() + "-" + b.getEnd() + " size " + b.getSize());
        }
        long[] vectors = {0x0000, 0x0003, 0x000B, 0x0013, 0x001B, 0x0023, 0x002B, 0x0033, 0x003B, 0x0043, 0x004B, 0x0053, 0x005B, 0x0063};
        for (long v : vectors) {
            Address a = toAddr(v);
            int op = mem.getByte(a) & 0xFF;
            if (op == 0x02) {
                long target = ((mem.getByte(a.add(1)) & 0xFF) << 8) | (mem.getByte(a.add(2)) & 0xFF);
                disassemble(a);
                root(target, String.format("vec_%04X_target", v));
            } else if (op != 0xFF && op != 0x00) {
                root(v, String.format("vec_%04X", v));
            }
        }
        root(0xF000, "bootloader_entry");
        println("functions before analysis: " + currentProgram.getFunctionManager().getFunctionCount());
    }
}
