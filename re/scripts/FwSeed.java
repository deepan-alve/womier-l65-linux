// Seed functions in the raw 8051 firmware from LCALL/LJMP targets found by scanning the image bytes,
// so regions reached only through computed or interrupt paths still get analyzed.
// Usage: analyzeHeadless <proj> L65FW -process l65-full.bin -preScript FwSeed.java ...
//@category Womier
import java.util.HashMap;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;

public class FwSeed extends GhidraScript {
    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        int size = 0x10000;
        byte[] img = new byte[size];
        mem.getBytes(toAddr(0), img);
        Map<Integer, Integer> calls = new HashMap<>();
        for (int i = 0; i + 2 < size; i++) {
            int op = img[i] & 0xFF;
            if (op != 0x12 && op != 0x02) {
                continue;
            }
            int target = ((img[i + 1] & 0xFF) << 8) | (img[i + 2] & 0xFF);
            if (target < 0x0066 || target >= 0xFFF0) {
                continue;
            }
            calls.merge(target, op == 0x12 ? 2 : 1, Integer::sum);
        }
        int made = 0;
        for (Map.Entry<Integer, Integer> e : calls.entrySet()) {
            if (e.getValue() < 1) {
                continue;
            }
            Address a = toAddr(e.getKey());
            if (getFunctionAt(a) != null || getInstructionAt(a) != null) {
                continue;
            }
            int first = img[e.getKey()] & 0xFF;
            if (first == 0x00 || first == 0xFF) {
                continue;
            }
            disassemble(a);
            if (getInstructionAt(a) != null && getFunctionContaining(a) == null && createFunction(a, null) != null) {
                made++;
            }
        }
        println("seeded " + made + " functions from " + calls.size() + " call/jump targets; total now "
            + currentProgram.getFunctionManager().getFunctionCount());
    }
}
