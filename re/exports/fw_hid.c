
// ==== CODE:0200 FUN_CODE_0200 ====
// callers: FUN_CODE_9540@CODE:9540
// callees: FUN_CODE_05a8@CODE:05a8, FUN_CODE_05b9@CODE:05b9, FUN_CODE_05de@CODE:05de, FUN_CODE_b03d@CODE:b03d, FUN_CODE_b1e2@CODE:b1e2, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_0200(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  if (DAT_EXTMEM_0fd3 == '\x04') {
    DAT_EXTMEM_0fd3 = '\0';
    DAT_EXTMEM_0fd4 = 0x11;
    DAT_EXTMEM_0fd5 = 0;
    pbVar5 = &DAT_EXTMEM_0fc7;
    bVar3 = DAT_EXTMEM_1100;
  }
  else {
    if (DAT_EXTMEM_0fd3 != '\x06') {
      if (DAT_EXTMEM_0fd3 != '\t') {
        bVar3 = FUN_CODE_05de();
        return bVar3;
      }
      bVar3 = DAT_EXTMEM_0fc9;
      if (DAT_EXTMEM_0fc9 == 0) {
        bVar3 = DAT_EXTMEM_0fca ^ 6;
      }
      if (bVar3 == 0) {
        DAT_EXTMEM_0fd4 = 0x11;
        DAT_EXTMEM_0fd5 = 0;
        if ((DAT_EXTMEM_1100 == 5) && (DAT_EXTMEM_1101 == 'u')) {
          DAT_EXTMEM_0fd3 = '\0';
          bVar3 = FUN_CODE_b1e2(0);
        }
        else {
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          DAT_EXTMEM_038e = DAT_INTMEM_78;
          DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
          DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
          DAT_EXTMEM_038f = DAT_INTMEM_7d;
          DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          bVar3 = DAT_INTMEM_7c;
        }
      }
      else {
        cVar2 = ((DAT_EXTMEM_0fca < 8) << 7) >> 7;
        bVar1 = DAT_EXTMEM_0fc9 < (byte)-cVar2;
        bVar3 = DAT_EXTMEM_0fc9 + cVar2;
        if (!bVar1) {
          if (DAT_EXTMEM_0fc3 < (byte)-(((DAT_EXTMEM_0fc4 < 8U - ((bVar1 << 7) >> 7)) << 7) >> 7)) {
            DAT_EXTMEM_0fd4 = 0x11;
            DAT_EXTMEM_0fd5 = 0;
            DAT_EXTMEM_0f9c = 0;
            DAT_EXTMEM_0f9d = 0;
            do {
              puVar6 = (undefined1 *)CONCAT11(DAT_EXTMEM_0f9c + 0x11,DAT_EXTMEM_0f9d);
              *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
              DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
              if (DAT_EXTMEM_0f9d == 0) {
                DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
              }
              bVar3 = DAT_EXTMEM_0f9c;
              if (DAT_EXTMEM_0f9c == 0) {
                bVar3 = DAT_EXTMEM_0f9d ^ 8;
              }
            } while (bVar3 != 0);
            FUN_CODE_b03d(*puVar6);
            DAT_EXTMEM_0fc3 = 0;
            DAT_EXTMEM_0fc4 = 8;
            DAT_EXTMEM_038e = DAT_INTMEM_78;
            DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
            DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
            DAT_EXTMEM_038f = DAT_INTMEM_7d;
            DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          }
          DAT_EXTMEM_0f9a = 0;
          DAT_EXTMEM_0f9b = 0;
          DAT_EXTMEM_0fd4 = '\x11';
          DAT_EXTMEM_0fd5 = 0;
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            bVar3 = DAT_EXTMEM_0fc4 - 8;
            bVar4 = DAT_EXTMEM_0fc3 + (-1 - (((7 < DAT_EXTMEM_0fc4) << 7) >> 7));
            if (DAT_INTMEM_77 == 8) {
              if (bVar4 < 1U - (((bVar3 < 0x7a) << 7) >> 7)) {
                *(undefined1 *)
                 CONCAT11((bVar4 - (((0xad < bVar3) << 7) >> 7)) + '\x01',DAT_EXTMEM_0fc4 + 0x4a) =
                     *(undefined1 *)
                      CONCAT11(DAT_EXTMEM_0fd4 +
                               (DAT_EXTMEM_0f9c -
                               ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                               DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
              }
            }
            else if (bVar4 < 2U - (((bVar3 < 8) << 7) >> 7)) {
              *(undefined1 *)
               CONCAT11((bVar4 - (((0xbc < bVar3) << 7) >> 7)) + '\n',DAT_EXTMEM_0fc4 + 0x3b) =
                   *(undefined1 *)
                    CONCAT11(DAT_EXTMEM_0fd4 +
                             (DAT_EXTMEM_0f9c -
                             ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                             DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
            }
            DAT_EXTMEM_0fc4 = DAT_EXTMEM_0fc4 + 1;
            if (DAT_EXTMEM_0fc4 == 0) {
              DAT_EXTMEM_0fc3 = DAT_EXTMEM_0fc3 + 1;
            }
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          bVar3 = DAT_EXTMEM_0fc9 ^ DAT_EXTMEM_0fc3;
          if (bVar3 == 0) {
            bVar3 = DAT_EXTMEM_0fca ^ DAT_EXTMEM_0fc4;
          }
          if (bVar3 != 0) {
            bVar3 = FUN_CODE_05b9();
            return bVar3;
          }
          bVar4 = DAT_SFR_9b;
          DAT_SFR_9b = bVar4 & 0xf0;
          bVar4 = HADDR;
          HADDR = bVar4 | 4;
          if (DAT_EXTMEM_031c != 0) {
            DAT_EXTMEM_0fd3 = bVar3;
            return DAT_EXTMEM_031c;
          }
          DAT_EXTMEM_0fd3 = bVar3;
          if ((DAT_INTMEM_77 != 8) && ((DAT_INTMEM_77 & 0xf0) != 0x80)) {
            _7_2 = 1;
            if (_a_3 == '\0') {
              DAT_EXTMEM_0a14 = 0;
              DAT_EXTMEM_0a15 = 200;
            }
            else {
              DAT_EXTMEM_0a14 = 0xb;
              DAT_EXTMEM_0a15 = 0xb8;
            }
            FUN_CODE_ec00();
          }
          if (DAT_INTMEM_77 != 0xaa) {
            bVar3 = DAT_INTMEM_77 - 3;
            if (7 < bVar3) {
              return bVar3;
            }
                    /* WARNING: Could not recover jumptable at 0x0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar3 = (*(code *)(CONCAT11((char)((ushort)bVar3 * 3 >> 8) + '\x04',0x95) +
                              ((ushort)bVar3 * 3 & 0xff)))();
            return bVar3;
          }
          bVar3 = FUN_CODE_05a8();
          return bVar3;
        }
      }
      goto LAB_CODE_05e3;
    }
    bVar3 = 0;
    pbVar5 = &DAT_EXTMEM_0fd3;
  }
  *pbVar5 = bVar3;
LAB_CODE_05e3:
  bVar4 = DAT_SFR_9b;
  DAT_SFR_9b = bVar4 & 0xf0;
  bVar4 = HADDR;
  HADDR = bVar4 | 4;
  return bVar3;
}



// ==== CODE:0200 FUN_CODE_0200 ====
// callers: FUN_CODE_9540@CODE:9540
// callees: FUN_CODE_05a8@CODE:05a8, FUN_CODE_05b9@CODE:05b9, FUN_CODE_05de@CODE:05de, FUN_CODE_b03d@CODE:b03d, FUN_CODE_b1e2@CODE:b1e2, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_0200(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  if (DAT_EXTMEM_0fd3 == '\x04') {
    DAT_EXTMEM_0fd3 = '\0';
    DAT_EXTMEM_0fd4 = 0x11;
    DAT_EXTMEM_0fd5 = 0;
    pbVar5 = &DAT_EXTMEM_0fc7;
    bVar3 = DAT_EXTMEM_1100;
  }
  else {
    if (DAT_EXTMEM_0fd3 != '\x06') {
      if (DAT_EXTMEM_0fd3 != '\t') {
        bVar3 = FUN_CODE_05de();
        return bVar3;
      }
      bVar3 = DAT_EXTMEM_0fc9;
      if (DAT_EXTMEM_0fc9 == 0) {
        bVar3 = DAT_EXTMEM_0fca ^ 6;
      }
      if (bVar3 == 0) {
        DAT_EXTMEM_0fd4 = 0x11;
        DAT_EXTMEM_0fd5 = 0;
        if ((DAT_EXTMEM_1100 == 5) && (DAT_EXTMEM_1101 == 'u')) {
          DAT_EXTMEM_0fd3 = '\0';
          bVar3 = FUN_CODE_b1e2(0);
        }
        else {
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          DAT_EXTMEM_038e = DAT_INTMEM_78;
          DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
          DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
          DAT_EXTMEM_038f = DAT_INTMEM_7d;
          DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          bVar3 = DAT_INTMEM_7c;
        }
      }
      else {
        cVar2 = ((DAT_EXTMEM_0fca < 8) << 7) >> 7;
        bVar1 = DAT_EXTMEM_0fc9 < (byte)-cVar2;
        bVar3 = DAT_EXTMEM_0fc9 + cVar2;
        if (!bVar1) {
          if (DAT_EXTMEM_0fc3 < (byte)-(((DAT_EXTMEM_0fc4 < 8U - ((bVar1 << 7) >> 7)) << 7) >> 7)) {
            DAT_EXTMEM_0fd4 = 0x11;
            DAT_EXTMEM_0fd5 = 0;
            DAT_EXTMEM_0f9c = 0;
            DAT_EXTMEM_0f9d = 0;
            do {
              puVar6 = (undefined1 *)CONCAT11(DAT_EXTMEM_0f9c + 0x11,DAT_EXTMEM_0f9d);
              *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
              DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
              if (DAT_EXTMEM_0f9d == 0) {
                DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
              }
              bVar3 = DAT_EXTMEM_0f9c;
              if (DAT_EXTMEM_0f9c == 0) {
                bVar3 = DAT_EXTMEM_0f9d ^ 8;
              }
            } while (bVar3 != 0);
            FUN_CODE_b03d(*puVar6);
            DAT_EXTMEM_0fc3 = 0;
            DAT_EXTMEM_0fc4 = 8;
            DAT_EXTMEM_038e = DAT_INTMEM_78;
            DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
            DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
            DAT_EXTMEM_038f = DAT_INTMEM_7d;
            DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          }
          DAT_EXTMEM_0f9a = 0;
          DAT_EXTMEM_0f9b = 0;
          DAT_EXTMEM_0fd4 = '\x11';
          DAT_EXTMEM_0fd5 = 0;
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            bVar3 = DAT_EXTMEM_0fc4 - 8;
            bVar4 = DAT_EXTMEM_0fc3 + (-1 - (((7 < DAT_EXTMEM_0fc4) << 7) >> 7));
            if (DAT_INTMEM_77 == 8) {
              if (bVar4 < 1U - (((bVar3 < 0x7a) << 7) >> 7)) {
                *(undefined1 *)
                 CONCAT11((bVar4 - (((0xad < bVar3) << 7) >> 7)) + '\x01',DAT_EXTMEM_0fc4 + 0x4a) =
                     *(undefined1 *)
                      CONCAT11(DAT_EXTMEM_0fd4 +
                               (DAT_EXTMEM_0f9c -
                               ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                               DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
              }
            }
            else if (bVar4 < 2U - (((bVar3 < 8) << 7) >> 7)) {
              *(undefined1 *)
               CONCAT11((bVar4 - (((0xbc < bVar3) << 7) >> 7)) + '\n',DAT_EXTMEM_0fc4 + 0x3b) =
                   *(undefined1 *)
                    CONCAT11(DAT_EXTMEM_0fd4 +
                             (DAT_EXTMEM_0f9c -
                             ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                             DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
            }
            DAT_EXTMEM_0fc4 = DAT_EXTMEM_0fc4 + 1;
            if (DAT_EXTMEM_0fc4 == 0) {
              DAT_EXTMEM_0fc3 = DAT_EXTMEM_0fc3 + 1;
            }
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          bVar3 = DAT_EXTMEM_0fc9 ^ DAT_EXTMEM_0fc3;
          if (bVar3 == 0) {
            bVar3 = DAT_EXTMEM_0fca ^ DAT_EXTMEM_0fc4;
          }
          if (bVar3 != 0) {
            bVar3 = FUN_CODE_05b9();
            return bVar3;
          }
          bVar4 = DAT_SFR_9b;
          DAT_SFR_9b = bVar4 & 0xf0;
          bVar4 = HADDR;
          HADDR = bVar4 | 4;
          if (DAT_EXTMEM_031c != 0) {
            DAT_EXTMEM_0fd3 = bVar3;
            return DAT_EXTMEM_031c;
          }
          DAT_EXTMEM_0fd3 = bVar3;
          if ((DAT_INTMEM_77 != 8) && ((DAT_INTMEM_77 & 0xf0) != 0x80)) {
            _7_2 = 1;
            if (_a_3 == '\0') {
              DAT_EXTMEM_0a14 = 0;
              DAT_EXTMEM_0a15 = 200;
            }
            else {
              DAT_EXTMEM_0a14 = 0xb;
              DAT_EXTMEM_0a15 = 0xb8;
            }
            FUN_CODE_ec00();
          }
          if (DAT_INTMEM_77 != 0xaa) {
            bVar3 = DAT_INTMEM_77 - 3;
            if (7 < bVar3) {
              return bVar3;
            }
                    /* WARNING: Could not recover jumptable at 0x0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar3 = (*(code *)(CONCAT11((char)((ushort)bVar3 * 3 >> 8) + '\x04',0x95) +
                              ((ushort)bVar3 * 3 & 0xff)))();
            return bVar3;
          }
          bVar3 = FUN_CODE_05a8();
          return bVar3;
        }
      }
      goto LAB_CODE_05e3;
    }
    bVar3 = 0;
    pbVar5 = &DAT_EXTMEM_0fd3;
  }
  *pbVar5 = bVar3;
LAB_CODE_05e3:
  bVar4 = DAT_SFR_9b;
  DAT_SFR_9b = bVar4 & 0xf0;
  bVar4 = HADDR;
  HADDR = bVar4 | 4;
  return bVar3;
}



// ==== CODE:0200 FUN_CODE_0200 ====
// callers: FUN_CODE_9540@CODE:9540
// callees: FUN_CODE_05a8@CODE:05a8, FUN_CODE_05b9@CODE:05b9, FUN_CODE_05de@CODE:05de, FUN_CODE_b03d@CODE:b03d, FUN_CODE_b1e2@CODE:b1e2, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_0200(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  if (DAT_EXTMEM_0fd3 == '\x04') {
    DAT_EXTMEM_0fd3 = '\0';
    DAT_EXTMEM_0fd4 = 0x11;
    DAT_EXTMEM_0fd5 = 0;
    pbVar5 = &DAT_EXTMEM_0fc7;
    bVar3 = DAT_EXTMEM_1100;
  }
  else {
    if (DAT_EXTMEM_0fd3 != '\x06') {
      if (DAT_EXTMEM_0fd3 != '\t') {
        bVar3 = FUN_CODE_05de();
        return bVar3;
      }
      bVar3 = DAT_EXTMEM_0fc9;
      if (DAT_EXTMEM_0fc9 == 0) {
        bVar3 = DAT_EXTMEM_0fca ^ 6;
      }
      if (bVar3 == 0) {
        DAT_EXTMEM_0fd4 = 0x11;
        DAT_EXTMEM_0fd5 = 0;
        if ((DAT_EXTMEM_1100 == 5) && (DAT_EXTMEM_1101 == 'u')) {
          DAT_EXTMEM_0fd3 = '\0';
          bVar3 = FUN_CODE_b1e2(0);
        }
        else {
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          DAT_EXTMEM_038e = DAT_INTMEM_78;
          DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
          DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
          DAT_EXTMEM_038f = DAT_INTMEM_7d;
          DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          bVar3 = DAT_INTMEM_7c;
        }
      }
      else {
        cVar2 = ((DAT_EXTMEM_0fca < 8) << 7) >> 7;
        bVar1 = DAT_EXTMEM_0fc9 < (byte)-cVar2;
        bVar3 = DAT_EXTMEM_0fc9 + cVar2;
        if (!bVar1) {
          if (DAT_EXTMEM_0fc3 < (byte)-(((DAT_EXTMEM_0fc4 < 8U - ((bVar1 << 7) >> 7)) << 7) >> 7)) {
            DAT_EXTMEM_0fd4 = 0x11;
            DAT_EXTMEM_0fd5 = 0;
            DAT_EXTMEM_0f9c = 0;
            DAT_EXTMEM_0f9d = 0;
            do {
              puVar6 = (undefined1 *)CONCAT11(DAT_EXTMEM_0f9c + 0x11,DAT_EXTMEM_0f9d);
              *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
              DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
              if (DAT_EXTMEM_0f9d == 0) {
                DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
              }
              bVar3 = DAT_EXTMEM_0f9c;
              if (DAT_EXTMEM_0f9c == 0) {
                bVar3 = DAT_EXTMEM_0f9d ^ 8;
              }
            } while (bVar3 != 0);
            FUN_CODE_b03d(*puVar6);
            DAT_EXTMEM_0fc3 = 0;
            DAT_EXTMEM_0fc4 = 8;
            DAT_EXTMEM_038e = DAT_INTMEM_78;
            DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
            DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
            DAT_EXTMEM_038f = DAT_INTMEM_7d;
            DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          }
          DAT_EXTMEM_0f9a = 0;
          DAT_EXTMEM_0f9b = 0;
          DAT_EXTMEM_0fd4 = '\x11';
          DAT_EXTMEM_0fd5 = 0;
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            bVar3 = DAT_EXTMEM_0fc4 - 8;
            bVar4 = DAT_EXTMEM_0fc3 + (-1 - (((7 < DAT_EXTMEM_0fc4) << 7) >> 7));
            if (DAT_INTMEM_77 == 8) {
              if (bVar4 < 1U - (((bVar3 < 0x7a) << 7) >> 7)) {
                *(undefined1 *)
                 CONCAT11((bVar4 - (((0xad < bVar3) << 7) >> 7)) + '\x01',DAT_EXTMEM_0fc4 + 0x4a) =
                     *(undefined1 *)
                      CONCAT11(DAT_EXTMEM_0fd4 +
                               (DAT_EXTMEM_0f9c -
                               ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                               DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
              }
            }
            else if (bVar4 < 2U - (((bVar3 < 8) << 7) >> 7)) {
              *(undefined1 *)
               CONCAT11((bVar4 - (((0xbc < bVar3) << 7) >> 7)) + '\n',DAT_EXTMEM_0fc4 + 0x3b) =
                   *(undefined1 *)
                    CONCAT11(DAT_EXTMEM_0fd4 +
                             (DAT_EXTMEM_0f9c -
                             ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                             DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
            }
            DAT_EXTMEM_0fc4 = DAT_EXTMEM_0fc4 + 1;
            if (DAT_EXTMEM_0fc4 == 0) {
              DAT_EXTMEM_0fc3 = DAT_EXTMEM_0fc3 + 1;
            }
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          bVar3 = DAT_EXTMEM_0fc9 ^ DAT_EXTMEM_0fc3;
          if (bVar3 == 0) {
            bVar3 = DAT_EXTMEM_0fca ^ DAT_EXTMEM_0fc4;
          }
          if (bVar3 != 0) {
            bVar3 = FUN_CODE_05b9();
            return bVar3;
          }
          bVar4 = DAT_SFR_9b;
          DAT_SFR_9b = bVar4 & 0xf0;
          bVar4 = HADDR;
          HADDR = bVar4 | 4;
          if (DAT_EXTMEM_031c != 0) {
            DAT_EXTMEM_0fd3 = bVar3;
            return DAT_EXTMEM_031c;
          }
          DAT_EXTMEM_0fd3 = bVar3;
          if ((DAT_INTMEM_77 != 8) && ((DAT_INTMEM_77 & 0xf0) != 0x80)) {
            _7_2 = 1;
            if (_a_3 == '\0') {
              DAT_EXTMEM_0a14 = 0;
              DAT_EXTMEM_0a15 = 200;
            }
            else {
              DAT_EXTMEM_0a14 = 0xb;
              DAT_EXTMEM_0a15 = 0xb8;
            }
            FUN_CODE_ec00();
          }
          if (DAT_INTMEM_77 != 0xaa) {
            bVar3 = DAT_INTMEM_77 - 3;
            if (7 < bVar3) {
              return bVar3;
            }
                    /* WARNING: Could not recover jumptable at 0x0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar3 = (*(code *)(CONCAT11((char)((ushort)bVar3 * 3 >> 8) + '\x04',0x95) +
                              ((ushort)bVar3 * 3 & 0xff)))();
            return bVar3;
          }
          bVar3 = FUN_CODE_05a8();
          return bVar3;
        }
      }
      goto LAB_CODE_05e3;
    }
    bVar3 = 0;
    pbVar5 = &DAT_EXTMEM_0fd3;
  }
  *pbVar5 = bVar3;
LAB_CODE_05e3:
  bVar4 = DAT_SFR_9b;
  DAT_SFR_9b = bVar4 & 0xf0;
  bVar4 = HADDR;
  HADDR = bVar4 | 4;
  return bVar3;
}



// ==== CODE:0200 FUN_CODE_0200 ====
// callers: FUN_CODE_9540@CODE:9540
// callees: FUN_CODE_05a8@CODE:05a8, FUN_CODE_05b9@CODE:05b9, FUN_CODE_05de@CODE:05de, FUN_CODE_b03d@CODE:b03d, FUN_CODE_b1e2@CODE:b1e2, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_0200(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  if (DAT_EXTMEM_0fd3 == '\x04') {
    DAT_EXTMEM_0fd3 = '\0';
    DAT_EXTMEM_0fd4 = 0x11;
    DAT_EXTMEM_0fd5 = 0;
    pbVar5 = &DAT_EXTMEM_0fc7;
    bVar3 = DAT_EXTMEM_1100;
  }
  else {
    if (DAT_EXTMEM_0fd3 != '\x06') {
      if (DAT_EXTMEM_0fd3 != '\t') {
        bVar3 = FUN_CODE_05de();
        return bVar3;
      }
      bVar3 = DAT_EXTMEM_0fc9;
      if (DAT_EXTMEM_0fc9 == 0) {
        bVar3 = DAT_EXTMEM_0fca ^ 6;
      }
      if (bVar3 == 0) {
        DAT_EXTMEM_0fd4 = 0x11;
        DAT_EXTMEM_0fd5 = 0;
        if ((DAT_EXTMEM_1100 == 5) && (DAT_EXTMEM_1101 == 'u')) {
          DAT_EXTMEM_0fd3 = '\0';
          bVar3 = FUN_CODE_b1e2(0);
        }
        else {
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          DAT_EXTMEM_038e = DAT_INTMEM_78;
          DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
          DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
          DAT_EXTMEM_038f = DAT_INTMEM_7d;
          DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          bVar3 = DAT_INTMEM_7c;
        }
      }
      else {
        cVar2 = ((DAT_EXTMEM_0fca < 8) << 7) >> 7;
        bVar1 = DAT_EXTMEM_0fc9 < (byte)-cVar2;
        bVar3 = DAT_EXTMEM_0fc9 + cVar2;
        if (!bVar1) {
          if (DAT_EXTMEM_0fc3 < (byte)-(((DAT_EXTMEM_0fc4 < 8U - ((bVar1 << 7) >> 7)) << 7) >> 7)) {
            DAT_EXTMEM_0fd4 = 0x11;
            DAT_EXTMEM_0fd5 = 0;
            DAT_EXTMEM_0f9c = 0;
            DAT_EXTMEM_0f9d = 0;
            do {
              puVar6 = (undefined1 *)CONCAT11(DAT_EXTMEM_0f9c + 0x11,DAT_EXTMEM_0f9d);
              *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
              DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
              if (DAT_EXTMEM_0f9d == 0) {
                DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
              }
              bVar3 = DAT_EXTMEM_0f9c;
              if (DAT_EXTMEM_0f9c == 0) {
                bVar3 = DAT_EXTMEM_0f9d ^ 8;
              }
            } while (bVar3 != 0);
            FUN_CODE_b03d(*puVar6);
            DAT_EXTMEM_0fc3 = 0;
            DAT_EXTMEM_0fc4 = 8;
            DAT_EXTMEM_038e = DAT_INTMEM_78;
            DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
            DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
            DAT_EXTMEM_038f = DAT_INTMEM_7d;
            DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          }
          DAT_EXTMEM_0f9a = 0;
          DAT_EXTMEM_0f9b = 0;
          DAT_EXTMEM_0fd4 = '\x11';
          DAT_EXTMEM_0fd5 = 0;
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            bVar3 = DAT_EXTMEM_0fc4 - 8;
            bVar4 = DAT_EXTMEM_0fc3 + (-1 - (((7 < DAT_EXTMEM_0fc4) << 7) >> 7));
            if (DAT_INTMEM_77 == 8) {
              if (bVar4 < 1U - (((bVar3 < 0x7a) << 7) >> 7)) {
                *(undefined1 *)
                 CONCAT11((bVar4 - (((0xad < bVar3) << 7) >> 7)) + '\x01',DAT_EXTMEM_0fc4 + 0x4a) =
                     *(undefined1 *)
                      CONCAT11(DAT_EXTMEM_0fd4 +
                               (DAT_EXTMEM_0f9c -
                               ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                               DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
              }
            }
            else if (bVar4 < 2U - (((bVar3 < 8) << 7) >> 7)) {
              *(undefined1 *)
               CONCAT11((bVar4 - (((0xbc < bVar3) << 7) >> 7)) + '\n',DAT_EXTMEM_0fc4 + 0x3b) =
                   *(undefined1 *)
                    CONCAT11(DAT_EXTMEM_0fd4 +
                             (DAT_EXTMEM_0f9c -
                             ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                             DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
            }
            DAT_EXTMEM_0fc4 = DAT_EXTMEM_0fc4 + 1;
            if (DAT_EXTMEM_0fc4 == 0) {
              DAT_EXTMEM_0fc3 = DAT_EXTMEM_0fc3 + 1;
            }
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          bVar3 = DAT_EXTMEM_0fc9 ^ DAT_EXTMEM_0fc3;
          if (bVar3 == 0) {
            bVar3 = DAT_EXTMEM_0fca ^ DAT_EXTMEM_0fc4;
          }
          if (bVar3 != 0) {
            bVar3 = FUN_CODE_05b9();
            return bVar3;
          }
          bVar4 = DAT_SFR_9b;
          DAT_SFR_9b = bVar4 & 0xf0;
          bVar4 = HADDR;
          HADDR = bVar4 | 4;
          if (DAT_EXTMEM_031c != 0) {
            DAT_EXTMEM_0fd3 = bVar3;
            return DAT_EXTMEM_031c;
          }
          DAT_EXTMEM_0fd3 = bVar3;
          if ((DAT_INTMEM_77 != 8) && ((DAT_INTMEM_77 & 0xf0) != 0x80)) {
            _7_2 = 1;
            if (_a_3 == '\0') {
              DAT_EXTMEM_0a14 = 0;
              DAT_EXTMEM_0a15 = 200;
            }
            else {
              DAT_EXTMEM_0a14 = 0xb;
              DAT_EXTMEM_0a15 = 0xb8;
            }
            FUN_CODE_ec00();
          }
          if (DAT_INTMEM_77 != 0xaa) {
            bVar3 = DAT_INTMEM_77 - 3;
            if (7 < bVar3) {
              return bVar3;
            }
                    /* WARNING: Could not recover jumptable at 0x0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar3 = (*(code *)(CONCAT11((char)((ushort)bVar3 * 3 >> 8) + '\x04',0x95) +
                              ((ushort)bVar3 * 3 & 0xff)))();
            return bVar3;
          }
          bVar3 = FUN_CODE_05a8();
          return bVar3;
        }
      }
      goto LAB_CODE_05e3;
    }
    bVar3 = 0;
    pbVar5 = &DAT_EXTMEM_0fd3;
  }
  *pbVar5 = bVar3;
LAB_CODE_05e3:
  bVar4 = DAT_SFR_9b;
  DAT_SFR_9b = bVar4 & 0xf0;
  bVar4 = HADDR;
  HADDR = bVar4 | 4;
  return bVar3;
}



// ==== CODE:0200 FUN_CODE_0200 ====
// callers: FUN_CODE_9540@CODE:9540
// callees: FUN_CODE_05a8@CODE:05a8, FUN_CODE_05b9@CODE:05b9, FUN_CODE_05de@CODE:05de, FUN_CODE_b03d@CODE:b03d, FUN_CODE_b1e2@CODE:b1e2, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_0200(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  
  if (DAT_EXTMEM_0fd3 == '\x04') {
    DAT_EXTMEM_0fd3 = '\0';
    DAT_EXTMEM_0fd4 = 0x11;
    DAT_EXTMEM_0fd5 = 0;
    pbVar5 = &DAT_EXTMEM_0fc7;
    bVar3 = DAT_EXTMEM_1100;
  }
  else {
    if (DAT_EXTMEM_0fd3 != '\x06') {
      if (DAT_EXTMEM_0fd3 != '\t') {
        bVar3 = FUN_CODE_05de();
        return bVar3;
      }
      bVar3 = DAT_EXTMEM_0fc9;
      if (DAT_EXTMEM_0fc9 == 0) {
        bVar3 = DAT_EXTMEM_0fca ^ 6;
      }
      if (bVar3 == 0) {
        DAT_EXTMEM_0fd4 = 0x11;
        DAT_EXTMEM_0fd5 = 0;
        if ((DAT_EXTMEM_1100 == 5) && (DAT_EXTMEM_1101 == 'u')) {
          DAT_EXTMEM_0fd3 = '\0';
          bVar3 = FUN_CODE_b1e2(0);
        }
        else {
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          DAT_EXTMEM_038e = DAT_INTMEM_78;
          DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
          DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
          DAT_EXTMEM_038f = DAT_INTMEM_7d;
          DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          bVar3 = DAT_INTMEM_7c;
        }
      }
      else {
        cVar2 = ((DAT_EXTMEM_0fca < 8) << 7) >> 7;
        bVar1 = DAT_EXTMEM_0fc9 < (byte)-cVar2;
        bVar3 = DAT_EXTMEM_0fc9 + cVar2;
        if (!bVar1) {
          if (DAT_EXTMEM_0fc3 < (byte)-(((DAT_EXTMEM_0fc4 < 8U - ((bVar1 << 7) >> 7)) << 7) >> 7)) {
            DAT_EXTMEM_0fd4 = 0x11;
            DAT_EXTMEM_0fd5 = 0;
            DAT_EXTMEM_0f9c = 0;
            DAT_EXTMEM_0f9d = 0;
            do {
              puVar6 = (undefined1 *)CONCAT11(DAT_EXTMEM_0f9c + 0x11,DAT_EXTMEM_0f9d);
              *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
              DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
              if (DAT_EXTMEM_0f9d == 0) {
                DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
              }
              bVar3 = DAT_EXTMEM_0f9c;
              if (DAT_EXTMEM_0f9c == 0) {
                bVar3 = DAT_EXTMEM_0f9d ^ 8;
              }
            } while (bVar3 != 0);
            FUN_CODE_b03d(*puVar6);
            DAT_EXTMEM_0fc3 = 0;
            DAT_EXTMEM_0fc4 = 8;
            DAT_EXTMEM_038e = DAT_INTMEM_78;
            DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
            DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
            DAT_EXTMEM_038f = DAT_INTMEM_7d;
            DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          }
          DAT_EXTMEM_0f9a = 0;
          DAT_EXTMEM_0f9b = 0;
          DAT_EXTMEM_0fd4 = '\x11';
          DAT_EXTMEM_0fd5 = 0;
          DAT_EXTMEM_0f9c = 0;
          DAT_EXTMEM_0f9d = 0;
          do {
            bVar3 = DAT_EXTMEM_0fc4 - 8;
            bVar4 = DAT_EXTMEM_0fc3 + (-1 - (((7 < DAT_EXTMEM_0fc4) << 7) >> 7));
            if (DAT_INTMEM_77 == 8) {
              if (bVar4 < 1U - (((bVar3 < 0x7a) << 7) >> 7)) {
                *(undefined1 *)
                 CONCAT11((bVar4 - (((0xad < bVar3) << 7) >> 7)) + '\x01',DAT_EXTMEM_0fc4 + 0x4a) =
                     *(undefined1 *)
                      CONCAT11(DAT_EXTMEM_0fd4 +
                               (DAT_EXTMEM_0f9c -
                               ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                               DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
              }
            }
            else if (bVar4 < 2U - (((bVar3 < 8) << 7) >> 7)) {
              *(undefined1 *)
               CONCAT11((bVar4 - (((0xbc < bVar3) << 7) >> 7)) + '\n',DAT_EXTMEM_0fc4 + 0x3b) =
                   *(undefined1 *)
                    CONCAT11(DAT_EXTMEM_0fd4 +
                             (DAT_EXTMEM_0f9c -
                             ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                             DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
            }
            DAT_EXTMEM_0fc4 = DAT_EXTMEM_0fc4 + 1;
            if (DAT_EXTMEM_0fc4 == 0) {
              DAT_EXTMEM_0fc3 = DAT_EXTMEM_0fc3 + 1;
            }
            DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
            if (DAT_EXTMEM_0f9d == 0) {
              DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
            }
            bVar3 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar3 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar3 != 0);
          bVar3 = DAT_EXTMEM_0fc9 ^ DAT_EXTMEM_0fc3;
          if (bVar3 == 0) {
            bVar3 = DAT_EXTMEM_0fca ^ DAT_EXTMEM_0fc4;
          }
          if (bVar3 != 0) {
            bVar3 = FUN_CODE_05b9();
            return bVar3;
          }
          bVar4 = DAT_SFR_9b;
          DAT_SFR_9b = bVar4 & 0xf0;
          bVar4 = HADDR;
          HADDR = bVar4 | 4;
          if (DAT_EXTMEM_031c != 0) {
            DAT_EXTMEM_0fd3 = bVar3;
            return DAT_EXTMEM_031c;
          }
          DAT_EXTMEM_0fd3 = bVar3;
          if ((DAT_INTMEM_77 != 8) && ((DAT_INTMEM_77 & 0xf0) != 0x80)) {
            _7_2 = 1;
            if (_a_3 == '\0') {
              DAT_EXTMEM_0a14 = 0;
              DAT_EXTMEM_0a15 = 200;
            }
            else {
              DAT_EXTMEM_0a14 = 0xb;
              DAT_EXTMEM_0a15 = 0xb8;
            }
            FUN_CODE_ec00();
          }
          if (DAT_INTMEM_77 != 0xaa) {
            bVar3 = DAT_INTMEM_77 - 3;
            if (7 < bVar3) {
              return bVar3;
            }
                    /* WARNING: Could not recover jumptable at 0x0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar3 = (*(code *)(CONCAT11((char)((ushort)bVar3 * 3 >> 8) + '\x04',0x95) +
                              ((ushort)bVar3 * 3 & 0xff)))();
            return bVar3;
          }
          bVar3 = FUN_CODE_05a8();
          return bVar3;
        }
      }
      goto LAB_CODE_05e3;
    }
    bVar3 = 0;
    pbVar5 = &DAT_EXTMEM_0fd3;
  }
  *pbVar5 = bVar3;
LAB_CODE_05e3:
  bVar4 = DAT_SFR_9b;
  DAT_SFR_9b = bVar4 & 0xf0;
  bVar4 = HADDR;
  HADDR = bVar4 | 4;
  return bVar3;
}



// ==== CODE:05ea FUN_CODE_05ea ====
// callers: vec_0003_target@CODE:9fdf
// callees: FUN_CODE_0dbb@CODE:0dbb, FUN_CODE_0f6d@CODE:0f6d, FUN_CODE_3d58@CODE:3d58, FUN_CODE_3f52@CODE:3f52, FUN_CODE_767b@CODE:767b, FUN_CODE_a940@CODE:a940, FUN_CODE_ac8c@CODE:ac8c, FUN_CODE_ae8e@CODE:ae8e, FUN_CODE_af0c@CODE:af0c, FUN_CODE_afc9@CODE:afc9, FUN_CODE_b08e@CODE:b08e, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_05ea(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  
  BANK1_R0 = 0;
  if (_d_7 != '\x01') {
    bVar6 = FUN_CODE_0f6d();
    return bVar6;
  }
  _d_7 = 0;
  uVar5 = 0;
  cVar4 = 'T';
  FUN_CODE_3d58(0x20,0x54,0,1,1,0,0x17);
  cVar3 = 'p';
  bVar6 = DAT_INTMEM_70;
  if (DAT_INTMEM_70 != 0) goto LAB_CODE_0f70;
  if (DAT_EXTMEM_0120 == 2) {
    bVar6 = DAT_EXTMEM_0122;
    if ((DAT_EXTMEM_0122 != 0) || (bVar6 = DAT_EXTMEM_0121 ^ 6, bVar6 != 0)) goto LAB_CODE_0f70;
    BANK1_R1 = '\0';
    BANK1_R2 = 0;
    do {
      BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                   BANK1_R2 + 0x20) + BANK1_R0;
      BANK1_R2 = BANK1_R2 + 1;
      if (BANK1_R2 == 0) {
        BANK1_R1 = BANK1_R1 + '\x01';
      }
    } while (BANK1_R2 != 9 || BANK1_R1 != '\0');
    BANK1_R0 = 0x55 - BANK1_R0;
    bVar6 = DAT_EXTMEM_0129 ^ BANK1_R0;
    if (bVar6 != 0) goto LAB_CODE_0f70;
    DAT_EXTMEM_0a3e = DAT_EXTMEM_0124;
    DAT_EXTMEM_0a30 = DAT_EXTMEM_0125;
    DAT_EXTMEM_02e6 = DAT_EXTMEM_0127;
    DAT_EXTMEM_02e7 = DAT_EXTMEM_0126;
    if (_6_3 == '\0') {
      if (_c_4 == '\0') {
        if (DAT_EXTMEM_031c == '\x02') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if (((DAT_EXTMEM_031a == 0) << 7 < '\0') || (3 < DAT_EXTMEM_031a)) {
            DAT_EXTMEM_031a = 1;
          }
          bVar6 = DAT_EXTMEM_031a;
          if ((DAT_EXTMEM_0124 == BANK0_R7) && (DAT_EXTMEM_0125 != 0)) {
            if (_d_1 != '\x01') {
              DAT_EXTMEM_0ec1 = 0;
              DAT_EXTMEM_09fb = 1;
              DAT_EXTMEM_09fc = 0xf4;
              DAT_EXTMEM_02ff = 0;
              DAT_EXTMEM_0a31 = 0;
              DAT_EXTMEM_0a32 = 0;
            }
            _d_1 = '\x01';
          }
          else {
LAB_CODE_0732:
            DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
            FUN_CODE_afc9(bVar6,0);
          }
        }
        else if (DAT_EXTMEM_031c == '\x01') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if ((DAT_EXTMEM_0124 != 0) || (DAT_EXTMEM_0125 == 0)) {
            bVar6 = 0;
            goto LAB_CODE_0732;
          }
          if (_d_1 != '\x01') {
            DAT_EXTMEM_0ec1 = 0;
            DAT_EXTMEM_09fb = 1;
            DAT_EXTMEM_09fc = 0xf4;
            DAT_EXTMEM_02ff = 0;
            DAT_EXTMEM_0a31 = 0;
            DAT_EXTMEM_0a32 = 0;
          }
          _d_1 = '\x01';
        }
        else if ((DAT_EXTMEM_031c == '\0') && (DAT_EXTMEM_0124 != 10)) {
          FUN_CODE_ae8e();
        }
      }
      else if (DAT_EXTMEM_0124 != 0xb) {
        FUN_CODE_ac8c(3);
      }
    }
    bVar6 = BANK3_R0;
    BANK3_R0 = BANK3_R0 + 1;
    bVar6 = bVar6 - 5;
    if (5 < BANK3_R0) {
      BANK3_R0 = 0;
      bVar6 = FUN_CODE_767b();
    }
    goto LAB_CODE_0f70;
  }
  if (DAT_EXTMEM_0120 == 3) {
    _c_3 = 1;
    DAT_EXTMEM_0150 = 0;
    bVar6 = FUN_CODE_a940(0,0xf0);
    BANK3_R0 = 6;
    BANK2_R7 = 0xff;
    goto LAB_CODE_0f70;
  }
  bVar6 = DAT_EXTMEM_0120 ^ 8;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  BANK1_R0 = '\0';
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  do {
    BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                 BANK1_R2 + 0x20) + BANK1_R0;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x15 || BANK1_R1 != '\0');
  BANK1_R0 = 0x55 - BANK1_R0;
  bVar6 = DAT_EXTMEM_0135 ^ BANK1_R0;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  DAT_EXTMEM_02e2 = (DAT_EXTMEM_0123 & 0x7f) - 1;
  DAT_EXTMEM_0d98 = DAT_EXTMEM_0124;
  DAT_EXTMEM_0390 = DAT_EXTMEM_0125 & 0xf;
  DAT_EXTMEM_038f = 0;
  DAT_EXTMEM_038e = DAT_EXTMEM_0125 >> 4;
  if ((DAT_EXTMEM_0122 & 0x7f) == 8) {
    bVar6 = FUN_CODE_0dbb();
    return bVar6;
  }
  FUN_CODE_a940(0,0xf1);
  DAT_EXTMEM_0a31 = 0;
  DAT_EXTMEM_0a32 = 0;
  _9_1 = 0;
  DAT_EXTMEM_02e3 = 0;
  DAT_EXTMEM_02e4 = 0;
  if (((DAT_EXTMEM_0122 & 0x7f) != 5) && ((DAT_EXTMEM_0122 & 0x70) != 0x40)) {
    _7_2 = 1;
    if (_a_3 == '\0') {
      DAT_EXTMEM_0a14 = 2;
      DAT_EXTMEM_0a15 = 0x58;
    }
    else {
      DAT_EXTMEM_0a14 = 0xb;
      DAT_EXTMEM_0a15 = 0xb8;
    }
    FUN_CODE_ec00();
  }
  FUN_CODE_3f52();
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  sVar2 = (ushort)DAT_EXTMEM_0d98 * 0xe;
  while( true ) {
    DAT_EXTMEM_0139 = (char)((ushort)sVar2 >> 8);
    DAT_EXTMEM_013a = (byte)sVar2;
    bVar6 = BANK1_R1 - (((DAT_EXTMEM_0390 < BANK1_R2 + 1) << 7) >> 7);
    if (DAT_EXTMEM_038f < bVar6) break;
    *(undefined1 *)
     CONCAT11(((DAT_EXTMEM_0139 + (BANK1_R1 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7))) -
              (((0xbc < DAT_EXTMEM_013a + BANK1_R2) << 7) >> 7)) + '\n',
              DAT_EXTMEM_013a + BANK1_R2 + 0x43) =
         *(undefined1 *)
          CONCAT11((BANK1_R1 - (((0xd9 < BANK1_R2) << 7) >> 7)) + '\x01',BANK1_R2 + 0x26);
    BANK1_R2 = BANK1_R2 + 1;
    sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
      sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    }
  }
  BANK0_R1 = uVar5;
  FUN_CODE_af0c(DAT_EXTMEM_038f - bVar6,cVar3 + '\x01',cVar4 + '\x01',1);
  if (DAT_EXTMEM_0d98 == DAT_EXTMEM_02e2) {
    switch(DAT_EXTMEM_038e) {
    case 0:
      DAT_EXTMEM_0139 = -0x24;
      break;
    case 1:
      DAT_EXTMEM_0139 = -0x22;
      break;
    case 2:
      DAT_EXTMEM_0139 = -0x20;
      break;
    case 3:
      DAT_EXTMEM_0139 = -0x1e;
      break;
    case 4:
      DAT_EXTMEM_0139 = -0x1c;
      break;
    case 5:
      DAT_EXTMEM_0139 = -0x1a;
      break;
    case 6:
      DAT_EXTMEM_0139 = -0x18;
      break;
    case 7:
      DAT_EXTMEM_0139 = -0x16;
      break;
    default:
      goto switchD_CODE_0b34_default;
    }
    DAT_EXTMEM_013a = 0;
switchD_CODE_0b34_default:
    FUN_CODE_b08e();
  }
  BANK1_R1 = '\0';
  BANK1_R2 = 2;
  do {
    cVar4 = BANK1_R2 + 0x1f;
    cVar3 = BANK1_R1 - (((0xe0 < BANK1_R2) << 7) >> 7);
    *(byte *)(BANK1_R2 + 0x33) = BANK0_R7;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x16 || BANK1_R1 != '\0');
  bVar6 = FUN_CODE_acb5(*(undefined1 *)CONCAT11(cVar3 + '\x01',cVar4));
LAB_CODE_0f70:
  if (_c_1 != '\x01') {
    bVar1 = EPCON;
    EPCON = bVar1 & 0xfb;
    P0_2 = 1;
  }
  return bVar6;
}



// ==== CODE:05ea FUN_CODE_05ea ====
// callers: vec_0003_target@CODE:9fdf
// callees: FUN_CODE_0dbb@CODE:0dbb, FUN_CODE_0f6d@CODE:0f6d, FUN_CODE_3d58@CODE:3d58, FUN_CODE_3f52@CODE:3f52, FUN_CODE_767b@CODE:767b, FUN_CODE_a940@CODE:a940, FUN_CODE_ac8c@CODE:ac8c, FUN_CODE_ae8e@CODE:ae8e, FUN_CODE_af0c@CODE:af0c, FUN_CODE_afc9@CODE:afc9, FUN_CODE_b08e@CODE:b08e, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_05ea(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  
  BANK1_R0 = 0;
  if (_d_7 != '\x01') {
    bVar6 = FUN_CODE_0f6d();
    return bVar6;
  }
  _d_7 = 0;
  uVar5 = 0;
  cVar4 = 'T';
  FUN_CODE_3d58(0x20,0x54,0,1,1,0,0x17);
  cVar3 = 'p';
  bVar6 = DAT_INTMEM_70;
  if (DAT_INTMEM_70 != 0) goto LAB_CODE_0f70;
  if (DAT_EXTMEM_0120 == 2) {
    bVar6 = DAT_EXTMEM_0122;
    if ((DAT_EXTMEM_0122 != 0) || (bVar6 = DAT_EXTMEM_0121 ^ 6, bVar6 != 0)) goto LAB_CODE_0f70;
    BANK1_R1 = '\0';
    BANK1_R2 = 0;
    do {
      BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                   BANK1_R2 + 0x20) + BANK1_R0;
      BANK1_R2 = BANK1_R2 + 1;
      if (BANK1_R2 == 0) {
        BANK1_R1 = BANK1_R1 + '\x01';
      }
    } while (BANK1_R2 != 9 || BANK1_R1 != '\0');
    BANK1_R0 = 0x55 - BANK1_R0;
    bVar6 = DAT_EXTMEM_0129 ^ BANK1_R0;
    if (bVar6 != 0) goto LAB_CODE_0f70;
    DAT_EXTMEM_0a3e = DAT_EXTMEM_0124;
    DAT_EXTMEM_0a30 = DAT_EXTMEM_0125;
    DAT_EXTMEM_02e6 = DAT_EXTMEM_0127;
    DAT_EXTMEM_02e7 = DAT_EXTMEM_0126;
    if (_6_3 == '\0') {
      if (_c_4 == '\0') {
        if (DAT_EXTMEM_031c == '\x02') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if (((DAT_EXTMEM_031a == 0) << 7 < '\0') || (3 < DAT_EXTMEM_031a)) {
            DAT_EXTMEM_031a = 1;
          }
          bVar6 = DAT_EXTMEM_031a;
          if ((DAT_EXTMEM_0124 == BANK0_R7) && (DAT_EXTMEM_0125 != 0)) {
            if (_d_1 != '\x01') {
              DAT_EXTMEM_0ec1 = 0;
              DAT_EXTMEM_09fb = 1;
              DAT_EXTMEM_09fc = 0xf4;
              DAT_EXTMEM_02ff = 0;
              DAT_EXTMEM_0a31 = 0;
              DAT_EXTMEM_0a32 = 0;
            }
            _d_1 = '\x01';
          }
          else {
LAB_CODE_0732:
            DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
            FUN_CODE_afc9(bVar6,0);
          }
        }
        else if (DAT_EXTMEM_031c == '\x01') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if ((DAT_EXTMEM_0124 != 0) || (DAT_EXTMEM_0125 == 0)) {
            bVar6 = 0;
            goto LAB_CODE_0732;
          }
          if (_d_1 != '\x01') {
            DAT_EXTMEM_0ec1 = 0;
            DAT_EXTMEM_09fb = 1;
            DAT_EXTMEM_09fc = 0xf4;
            DAT_EXTMEM_02ff = 0;
            DAT_EXTMEM_0a31 = 0;
            DAT_EXTMEM_0a32 = 0;
          }
          _d_1 = '\x01';
        }
        else if ((DAT_EXTMEM_031c == '\0') && (DAT_EXTMEM_0124 != 10)) {
          FUN_CODE_ae8e();
        }
      }
      else if (DAT_EXTMEM_0124 != 0xb) {
        FUN_CODE_ac8c(3);
      }
    }
    bVar6 = BANK3_R0;
    BANK3_R0 = BANK3_R0 + 1;
    bVar6 = bVar6 - 5;
    if (5 < BANK3_R0) {
      BANK3_R0 = 0;
      bVar6 = FUN_CODE_767b();
    }
    goto LAB_CODE_0f70;
  }
  if (DAT_EXTMEM_0120 == 3) {
    _c_3 = 1;
    DAT_EXTMEM_0150 = 0;
    bVar6 = FUN_CODE_a940(0,0xf0);
    BANK3_R0 = 6;
    BANK2_R7 = 0xff;
    goto LAB_CODE_0f70;
  }
  bVar6 = DAT_EXTMEM_0120 ^ 8;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  BANK1_R0 = '\0';
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  do {
    BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                 BANK1_R2 + 0x20) + BANK1_R0;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x15 || BANK1_R1 != '\0');
  BANK1_R0 = 0x55 - BANK1_R0;
  bVar6 = DAT_EXTMEM_0135 ^ BANK1_R0;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  DAT_EXTMEM_02e2 = (DAT_EXTMEM_0123 & 0x7f) - 1;
  DAT_EXTMEM_0d98 = DAT_EXTMEM_0124;
  DAT_EXTMEM_0390 = DAT_EXTMEM_0125 & 0xf;
  DAT_EXTMEM_038f = 0;
  DAT_EXTMEM_038e = DAT_EXTMEM_0125 >> 4;
  if ((DAT_EXTMEM_0122 & 0x7f) == 8) {
    bVar6 = FUN_CODE_0dbb();
    return bVar6;
  }
  FUN_CODE_a940(0,0xf1);
  DAT_EXTMEM_0a31 = 0;
  DAT_EXTMEM_0a32 = 0;
  _9_1 = 0;
  DAT_EXTMEM_02e3 = 0;
  DAT_EXTMEM_02e4 = 0;
  if (((DAT_EXTMEM_0122 & 0x7f) != 5) && ((DAT_EXTMEM_0122 & 0x70) != 0x40)) {
    _7_2 = 1;
    if (_a_3 == '\0') {
      DAT_EXTMEM_0a14 = 2;
      DAT_EXTMEM_0a15 = 0x58;
    }
    else {
      DAT_EXTMEM_0a14 = 0xb;
      DAT_EXTMEM_0a15 = 0xb8;
    }
    FUN_CODE_ec00();
  }
  FUN_CODE_3f52();
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  sVar2 = (ushort)DAT_EXTMEM_0d98 * 0xe;
  while( true ) {
    DAT_EXTMEM_0139 = (char)((ushort)sVar2 >> 8);
    DAT_EXTMEM_013a = (byte)sVar2;
    bVar6 = BANK1_R1 - (((DAT_EXTMEM_0390 < BANK1_R2 + 1) << 7) >> 7);
    if (DAT_EXTMEM_038f < bVar6) break;
    *(undefined1 *)
     CONCAT11(((DAT_EXTMEM_0139 + (BANK1_R1 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7))) -
              (((0xbc < DAT_EXTMEM_013a + BANK1_R2) << 7) >> 7)) + '\n',
              DAT_EXTMEM_013a + BANK1_R2 + 0x43) =
         *(undefined1 *)
          CONCAT11((BANK1_R1 - (((0xd9 < BANK1_R2) << 7) >> 7)) + '\x01',BANK1_R2 + 0x26);
    BANK1_R2 = BANK1_R2 + 1;
    sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
      sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    }
  }
  BANK0_R1 = uVar5;
  FUN_CODE_af0c(DAT_EXTMEM_038f - bVar6,cVar3 + '\x01',cVar4 + '\x01',1);
  if (DAT_EXTMEM_0d98 == DAT_EXTMEM_02e2) {
    switch(DAT_EXTMEM_038e) {
    case 0:
      DAT_EXTMEM_0139 = -0x24;
      break;
    case 1:
      DAT_EXTMEM_0139 = -0x22;
      break;
    case 2:
      DAT_EXTMEM_0139 = -0x20;
      break;
    case 3:
      DAT_EXTMEM_0139 = -0x1e;
      break;
    case 4:
      DAT_EXTMEM_0139 = -0x1c;
      break;
    case 5:
      DAT_EXTMEM_0139 = -0x1a;
      break;
    case 6:
      DAT_EXTMEM_0139 = -0x18;
      break;
    case 7:
      DAT_EXTMEM_0139 = -0x16;
      break;
    default:
      goto switchD_CODE_0b34_default;
    }
    DAT_EXTMEM_013a = 0;
switchD_CODE_0b34_default:
    FUN_CODE_b08e();
  }
  BANK1_R1 = '\0';
  BANK1_R2 = 2;
  do {
    cVar4 = BANK1_R2 + 0x1f;
    cVar3 = BANK1_R1 - (((0xe0 < BANK1_R2) << 7) >> 7);
    *(byte *)(BANK1_R2 + 0x33) = BANK0_R7;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x16 || BANK1_R1 != '\0');
  bVar6 = FUN_CODE_acb5(*(undefined1 *)CONCAT11(cVar3 + '\x01',cVar4));
LAB_CODE_0f70:
  if (_c_1 != '\x01') {
    bVar1 = EPCON;
    EPCON = bVar1 & 0xfb;
    P0_2 = 1;
  }
  return bVar6;
}



// ==== CODE:05ea FUN_CODE_05ea ====
// callers: vec_0003_target@CODE:9fdf
// callees: FUN_CODE_0dbb@CODE:0dbb, FUN_CODE_0f6d@CODE:0f6d, FUN_CODE_3d58@CODE:3d58, FUN_CODE_3f52@CODE:3f52, FUN_CODE_767b@CODE:767b, FUN_CODE_a940@CODE:a940, FUN_CODE_ac8c@CODE:ac8c, FUN_CODE_ae8e@CODE:ae8e, FUN_CODE_af0c@CODE:af0c, FUN_CODE_afc9@CODE:afc9, FUN_CODE_b08e@CODE:b08e, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_05ea(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  
  BANK1_R0 = 0;
  if (_d_7 != '\x01') {
    bVar6 = FUN_CODE_0f6d();
    return bVar6;
  }
  _d_7 = 0;
  uVar5 = 0;
  cVar4 = 'T';
  FUN_CODE_3d58(0x20,0x54,0,1,1,0,0x17);
  cVar3 = 'p';
  bVar6 = DAT_INTMEM_70;
  if (DAT_INTMEM_70 != 0) goto LAB_CODE_0f70;
  if (DAT_EXTMEM_0120 == 2) {
    bVar6 = DAT_EXTMEM_0122;
    if ((DAT_EXTMEM_0122 != 0) || (bVar6 = DAT_EXTMEM_0121 ^ 6, bVar6 != 0)) goto LAB_CODE_0f70;
    BANK1_R1 = '\0';
    BANK1_R2 = 0;
    do {
      BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                   BANK1_R2 + 0x20) + BANK1_R0;
      BANK1_R2 = BANK1_R2 + 1;
      if (BANK1_R2 == 0) {
        BANK1_R1 = BANK1_R1 + '\x01';
      }
    } while (BANK1_R2 != 9 || BANK1_R1 != '\0');
    BANK1_R0 = 0x55 - BANK1_R0;
    bVar6 = DAT_EXTMEM_0129 ^ BANK1_R0;
    if (bVar6 != 0) goto LAB_CODE_0f70;
    DAT_EXTMEM_0a3e = DAT_EXTMEM_0124;
    DAT_EXTMEM_0a30 = DAT_EXTMEM_0125;
    DAT_EXTMEM_02e6 = DAT_EXTMEM_0127;
    DAT_EXTMEM_02e7 = DAT_EXTMEM_0126;
    if (_6_3 == '\0') {
      if (_c_4 == '\0') {
        if (DAT_EXTMEM_031c == '\x02') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if (((DAT_EXTMEM_031a == 0) << 7 < '\0') || (3 < DAT_EXTMEM_031a)) {
            DAT_EXTMEM_031a = 1;
          }
          bVar6 = DAT_EXTMEM_031a;
          if ((DAT_EXTMEM_0124 == BANK0_R7) && (DAT_EXTMEM_0125 != 0)) {
            if (_d_1 != '\x01') {
              DAT_EXTMEM_0ec1 = 0;
              DAT_EXTMEM_09fb = 1;
              DAT_EXTMEM_09fc = 0xf4;
              DAT_EXTMEM_02ff = 0;
              DAT_EXTMEM_0a31 = 0;
              DAT_EXTMEM_0a32 = 0;
            }
            _d_1 = '\x01';
          }
          else {
LAB_CODE_0732:
            DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
            FUN_CODE_afc9(bVar6,0);
          }
        }
        else if (DAT_EXTMEM_031c == '\x01') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if ((DAT_EXTMEM_0124 != 0) || (DAT_EXTMEM_0125 == 0)) {
            bVar6 = 0;
            goto LAB_CODE_0732;
          }
          if (_d_1 != '\x01') {
            DAT_EXTMEM_0ec1 = 0;
            DAT_EXTMEM_09fb = 1;
            DAT_EXTMEM_09fc = 0xf4;
            DAT_EXTMEM_02ff = 0;
            DAT_EXTMEM_0a31 = 0;
            DAT_EXTMEM_0a32 = 0;
          }
          _d_1 = '\x01';
        }
        else if ((DAT_EXTMEM_031c == '\0') && (DAT_EXTMEM_0124 != 10)) {
          FUN_CODE_ae8e();
        }
      }
      else if (DAT_EXTMEM_0124 != 0xb) {
        FUN_CODE_ac8c(3);
      }
    }
    bVar6 = BANK3_R0;
    BANK3_R0 = BANK3_R0 + 1;
    bVar6 = bVar6 - 5;
    if (5 < BANK3_R0) {
      BANK3_R0 = 0;
      bVar6 = FUN_CODE_767b();
    }
    goto LAB_CODE_0f70;
  }
  if (DAT_EXTMEM_0120 == 3) {
    _c_3 = 1;
    DAT_EXTMEM_0150 = 0;
    bVar6 = FUN_CODE_a940(0,0xf0);
    BANK3_R0 = 6;
    BANK2_R7 = 0xff;
    goto LAB_CODE_0f70;
  }
  bVar6 = DAT_EXTMEM_0120 ^ 8;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  BANK1_R0 = '\0';
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  do {
    BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                 BANK1_R2 + 0x20) + BANK1_R0;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x15 || BANK1_R1 != '\0');
  BANK1_R0 = 0x55 - BANK1_R0;
  bVar6 = DAT_EXTMEM_0135 ^ BANK1_R0;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  DAT_EXTMEM_02e2 = (DAT_EXTMEM_0123 & 0x7f) - 1;
  DAT_EXTMEM_0d98 = DAT_EXTMEM_0124;
  DAT_EXTMEM_0390 = DAT_EXTMEM_0125 & 0xf;
  DAT_EXTMEM_038f = 0;
  DAT_EXTMEM_038e = DAT_EXTMEM_0125 >> 4;
  if ((DAT_EXTMEM_0122 & 0x7f) == 8) {
    bVar6 = FUN_CODE_0dbb();
    return bVar6;
  }
  FUN_CODE_a940(0,0xf1);
  DAT_EXTMEM_0a31 = 0;
  DAT_EXTMEM_0a32 = 0;
  _9_1 = 0;
  DAT_EXTMEM_02e3 = 0;
  DAT_EXTMEM_02e4 = 0;
  if (((DAT_EXTMEM_0122 & 0x7f) != 5) && ((DAT_EXTMEM_0122 & 0x70) != 0x40)) {
    _7_2 = 1;
    if (_a_3 == '\0') {
      DAT_EXTMEM_0a14 = 2;
      DAT_EXTMEM_0a15 = 0x58;
    }
    else {
      DAT_EXTMEM_0a14 = 0xb;
      DAT_EXTMEM_0a15 = 0xb8;
    }
    FUN_CODE_ec00();
  }
  FUN_CODE_3f52();
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  sVar2 = (ushort)DAT_EXTMEM_0d98 * 0xe;
  while( true ) {
    DAT_EXTMEM_0139 = (char)((ushort)sVar2 >> 8);
    DAT_EXTMEM_013a = (byte)sVar2;
    bVar6 = BANK1_R1 - (((DAT_EXTMEM_0390 < BANK1_R2 + 1) << 7) >> 7);
    if (DAT_EXTMEM_038f < bVar6) break;
    *(undefined1 *)
     CONCAT11(((DAT_EXTMEM_0139 + (BANK1_R1 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7))) -
              (((0xbc < DAT_EXTMEM_013a + BANK1_R2) << 7) >> 7)) + '\n',
              DAT_EXTMEM_013a + BANK1_R2 + 0x43) =
         *(undefined1 *)
          CONCAT11((BANK1_R1 - (((0xd9 < BANK1_R2) << 7) >> 7)) + '\x01',BANK1_R2 + 0x26);
    BANK1_R2 = BANK1_R2 + 1;
    sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
      sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    }
  }
  BANK0_R1 = uVar5;
  FUN_CODE_af0c(DAT_EXTMEM_038f - bVar6,cVar3 + '\x01',cVar4 + '\x01',1);
  if (DAT_EXTMEM_0d98 == DAT_EXTMEM_02e2) {
    switch(DAT_EXTMEM_038e) {
    case 0:
      DAT_EXTMEM_0139 = -0x24;
      break;
    case 1:
      DAT_EXTMEM_0139 = -0x22;
      break;
    case 2:
      DAT_EXTMEM_0139 = -0x20;
      break;
    case 3:
      DAT_EXTMEM_0139 = -0x1e;
      break;
    case 4:
      DAT_EXTMEM_0139 = -0x1c;
      break;
    case 5:
      DAT_EXTMEM_0139 = -0x1a;
      break;
    case 6:
      DAT_EXTMEM_0139 = -0x18;
      break;
    case 7:
      DAT_EXTMEM_0139 = -0x16;
      break;
    default:
      goto switchD_CODE_0b34_default;
    }
    DAT_EXTMEM_013a = 0;
switchD_CODE_0b34_default:
    FUN_CODE_b08e();
  }
  BANK1_R1 = '\0';
  BANK1_R2 = 2;
  do {
    cVar4 = BANK1_R2 + 0x1f;
    cVar3 = BANK1_R1 - (((0xe0 < BANK1_R2) << 7) >> 7);
    *(byte *)(BANK1_R2 + 0x33) = BANK0_R7;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x16 || BANK1_R1 != '\0');
  bVar6 = FUN_CODE_acb5(*(undefined1 *)CONCAT11(cVar3 + '\x01',cVar4));
LAB_CODE_0f70:
  if (_c_1 != '\x01') {
    bVar1 = EPCON;
    EPCON = bVar1 & 0xfb;
    P0_2 = 1;
  }
  return bVar6;
}



// ==== CODE:05ea FUN_CODE_05ea ====
// callers: vec_0003_target@CODE:9fdf
// callees: FUN_CODE_0dbb@CODE:0dbb, FUN_CODE_0f6d@CODE:0f6d, FUN_CODE_3d58@CODE:3d58, FUN_CODE_3f52@CODE:3f52, FUN_CODE_767b@CODE:767b, FUN_CODE_a940@CODE:a940, FUN_CODE_ac8c@CODE:ac8c, FUN_CODE_ae8e@CODE:ae8e, FUN_CODE_af0c@CODE:af0c, FUN_CODE_afc9@CODE:afc9, FUN_CODE_b08e@CODE:b08e, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_05ea(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  
  BANK1_R0 = 0;
  if (_d_7 != '\x01') {
    bVar6 = FUN_CODE_0f6d();
    return bVar6;
  }
  _d_7 = 0;
  uVar5 = 0;
  cVar4 = 'T';
  FUN_CODE_3d58(0x20,0x54,0,1,1,0,0x17);
  cVar3 = 'p';
  bVar6 = DAT_INTMEM_70;
  if (DAT_INTMEM_70 != 0) goto LAB_CODE_0f70;
  if (DAT_EXTMEM_0120 == 2) {
    bVar6 = DAT_EXTMEM_0122;
    if ((DAT_EXTMEM_0122 != 0) || (bVar6 = DAT_EXTMEM_0121 ^ 6, bVar6 != 0)) goto LAB_CODE_0f70;
    BANK1_R1 = '\0';
    BANK1_R2 = 0;
    do {
      BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                   BANK1_R2 + 0x20) + BANK1_R0;
      BANK1_R2 = BANK1_R2 + 1;
      if (BANK1_R2 == 0) {
        BANK1_R1 = BANK1_R1 + '\x01';
      }
    } while (BANK1_R2 != 9 || BANK1_R1 != '\0');
    BANK1_R0 = 0x55 - BANK1_R0;
    bVar6 = DAT_EXTMEM_0129 ^ BANK1_R0;
    if (bVar6 != 0) goto LAB_CODE_0f70;
    DAT_EXTMEM_0a3e = DAT_EXTMEM_0124;
    DAT_EXTMEM_0a30 = DAT_EXTMEM_0125;
    DAT_EXTMEM_02e6 = DAT_EXTMEM_0127;
    DAT_EXTMEM_02e7 = DAT_EXTMEM_0126;
    if (_6_3 == '\0') {
      if (_c_4 == '\0') {
        if (DAT_EXTMEM_031c == '\x02') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if (((DAT_EXTMEM_031a == 0) << 7 < '\0') || (3 < DAT_EXTMEM_031a)) {
            DAT_EXTMEM_031a = 1;
          }
          bVar6 = DAT_EXTMEM_031a;
          if ((DAT_EXTMEM_0124 == BANK0_R7) && (DAT_EXTMEM_0125 != 0)) {
            if (_d_1 != '\x01') {
              DAT_EXTMEM_0ec1 = 0;
              DAT_EXTMEM_09fb = 1;
              DAT_EXTMEM_09fc = 0xf4;
              DAT_EXTMEM_02ff = 0;
              DAT_EXTMEM_0a31 = 0;
              DAT_EXTMEM_0a32 = 0;
            }
            _d_1 = '\x01';
          }
          else {
LAB_CODE_0732:
            DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
            FUN_CODE_afc9(bVar6,0);
          }
        }
        else if (DAT_EXTMEM_031c == '\x01') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if ((DAT_EXTMEM_0124 != 0) || (DAT_EXTMEM_0125 == 0)) {
            bVar6 = 0;
            goto LAB_CODE_0732;
          }
          if (_d_1 != '\x01') {
            DAT_EXTMEM_0ec1 = 0;
            DAT_EXTMEM_09fb = 1;
            DAT_EXTMEM_09fc = 0xf4;
            DAT_EXTMEM_02ff = 0;
            DAT_EXTMEM_0a31 = 0;
            DAT_EXTMEM_0a32 = 0;
          }
          _d_1 = '\x01';
        }
        else if ((DAT_EXTMEM_031c == '\0') && (DAT_EXTMEM_0124 != 10)) {
          FUN_CODE_ae8e();
        }
      }
      else if (DAT_EXTMEM_0124 != 0xb) {
        FUN_CODE_ac8c(3);
      }
    }
    bVar6 = BANK3_R0;
    BANK3_R0 = BANK3_R0 + 1;
    bVar6 = bVar6 - 5;
    if (5 < BANK3_R0) {
      BANK3_R0 = 0;
      bVar6 = FUN_CODE_767b();
    }
    goto LAB_CODE_0f70;
  }
  if (DAT_EXTMEM_0120 == 3) {
    _c_3 = 1;
    DAT_EXTMEM_0150 = 0;
    bVar6 = FUN_CODE_a940(0,0xf0);
    BANK3_R0 = 6;
    BANK2_R7 = 0xff;
    goto LAB_CODE_0f70;
  }
  bVar6 = DAT_EXTMEM_0120 ^ 8;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  BANK1_R0 = '\0';
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  do {
    BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                 BANK1_R2 + 0x20) + BANK1_R0;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x15 || BANK1_R1 != '\0');
  BANK1_R0 = 0x55 - BANK1_R0;
  bVar6 = DAT_EXTMEM_0135 ^ BANK1_R0;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  DAT_EXTMEM_02e2 = (DAT_EXTMEM_0123 & 0x7f) - 1;
  DAT_EXTMEM_0d98 = DAT_EXTMEM_0124;
  DAT_EXTMEM_0390 = DAT_EXTMEM_0125 & 0xf;
  DAT_EXTMEM_038f = 0;
  DAT_EXTMEM_038e = DAT_EXTMEM_0125 >> 4;
  if ((DAT_EXTMEM_0122 & 0x7f) == 8) {
    bVar6 = FUN_CODE_0dbb();
    return bVar6;
  }
  FUN_CODE_a940(0,0xf1);
  DAT_EXTMEM_0a31 = 0;
  DAT_EXTMEM_0a32 = 0;
  _9_1 = 0;
  DAT_EXTMEM_02e3 = 0;
  DAT_EXTMEM_02e4 = 0;
  if (((DAT_EXTMEM_0122 & 0x7f) != 5) && ((DAT_EXTMEM_0122 & 0x70) != 0x40)) {
    _7_2 = 1;
    if (_a_3 == '\0') {
      DAT_EXTMEM_0a14 = 2;
      DAT_EXTMEM_0a15 = 0x58;
    }
    else {
      DAT_EXTMEM_0a14 = 0xb;
      DAT_EXTMEM_0a15 = 0xb8;
    }
    FUN_CODE_ec00();
  }
  FUN_CODE_3f52();
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  sVar2 = (ushort)DAT_EXTMEM_0d98 * 0xe;
  while( true ) {
    DAT_EXTMEM_0139 = (char)((ushort)sVar2 >> 8);
    DAT_EXTMEM_013a = (byte)sVar2;
    bVar6 = BANK1_R1 - (((DAT_EXTMEM_0390 < BANK1_R2 + 1) << 7) >> 7);
    if (DAT_EXTMEM_038f < bVar6) break;
    *(undefined1 *)
     CONCAT11(((DAT_EXTMEM_0139 + (BANK1_R1 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7))) -
              (((0xbc < DAT_EXTMEM_013a + BANK1_R2) << 7) >> 7)) + '\n',
              DAT_EXTMEM_013a + BANK1_R2 + 0x43) =
         *(undefined1 *)
          CONCAT11((BANK1_R1 - (((0xd9 < BANK1_R2) << 7) >> 7)) + '\x01',BANK1_R2 + 0x26);
    BANK1_R2 = BANK1_R2 + 1;
    sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
      sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    }
  }
  BANK0_R1 = uVar5;
  FUN_CODE_af0c(DAT_EXTMEM_038f - bVar6,cVar3 + '\x01',cVar4 + '\x01',1);
  if (DAT_EXTMEM_0d98 == DAT_EXTMEM_02e2) {
    switch(DAT_EXTMEM_038e) {
    case 0:
      DAT_EXTMEM_0139 = -0x24;
      break;
    case 1:
      DAT_EXTMEM_0139 = -0x22;
      break;
    case 2:
      DAT_EXTMEM_0139 = -0x20;
      break;
    case 3:
      DAT_EXTMEM_0139 = -0x1e;
      break;
    case 4:
      DAT_EXTMEM_0139 = -0x1c;
      break;
    case 5:
      DAT_EXTMEM_0139 = -0x1a;
      break;
    case 6:
      DAT_EXTMEM_0139 = -0x18;
      break;
    case 7:
      DAT_EXTMEM_0139 = -0x16;
      break;
    default:
      goto switchD_CODE_0b34_default;
    }
    DAT_EXTMEM_013a = 0;
switchD_CODE_0b34_default:
    FUN_CODE_b08e();
  }
  BANK1_R1 = '\0';
  BANK1_R2 = 2;
  do {
    cVar4 = BANK1_R2 + 0x1f;
    cVar3 = BANK1_R1 - (((0xe0 < BANK1_R2) << 7) >> 7);
    *(byte *)(BANK1_R2 + 0x33) = BANK0_R7;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x16 || BANK1_R1 != '\0');
  bVar6 = FUN_CODE_acb5(*(undefined1 *)CONCAT11(cVar3 + '\x01',cVar4));
LAB_CODE_0f70:
  if (_c_1 != '\x01') {
    bVar1 = EPCON;
    EPCON = bVar1 & 0xfb;
    P0_2 = 1;
  }
  return bVar6;
}



// ==== CODE:05ea FUN_CODE_05ea ====
// callers: vec_0003_target@CODE:9fdf
// callees: FUN_CODE_0dbb@CODE:0dbb, FUN_CODE_0f6d@CODE:0f6d, FUN_CODE_3d58@CODE:3d58, FUN_CODE_3f52@CODE:3f52, FUN_CODE_767b@CODE:767b, FUN_CODE_a940@CODE:a940, FUN_CODE_ac8c@CODE:ac8c, FUN_CODE_ae8e@CODE:ae8e, FUN_CODE_af0c@CODE:af0c, FUN_CODE_afc9@CODE:afc9, FUN_CODE_b08e@CODE:b08e, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_05ea(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  
  BANK1_R0 = 0;
  if (_d_7 != '\x01') {
    bVar6 = FUN_CODE_0f6d();
    return bVar6;
  }
  _d_7 = 0;
  uVar5 = 0;
  cVar4 = 'T';
  FUN_CODE_3d58(0x20,0x54,0,1,1,0,0x17);
  cVar3 = 'p';
  bVar6 = DAT_INTMEM_70;
  if (DAT_INTMEM_70 != 0) goto LAB_CODE_0f70;
  if (DAT_EXTMEM_0120 == 2) {
    bVar6 = DAT_EXTMEM_0122;
    if ((DAT_EXTMEM_0122 != 0) || (bVar6 = DAT_EXTMEM_0121 ^ 6, bVar6 != 0)) goto LAB_CODE_0f70;
    BANK1_R1 = '\0';
    BANK1_R2 = 0;
    do {
      BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                   BANK1_R2 + 0x20) + BANK1_R0;
      BANK1_R2 = BANK1_R2 + 1;
      if (BANK1_R2 == 0) {
        BANK1_R1 = BANK1_R1 + '\x01';
      }
    } while (BANK1_R2 != 9 || BANK1_R1 != '\0');
    BANK1_R0 = 0x55 - BANK1_R0;
    bVar6 = DAT_EXTMEM_0129 ^ BANK1_R0;
    if (bVar6 != 0) goto LAB_CODE_0f70;
    DAT_EXTMEM_0a3e = DAT_EXTMEM_0124;
    DAT_EXTMEM_0a30 = DAT_EXTMEM_0125;
    DAT_EXTMEM_02e6 = DAT_EXTMEM_0127;
    DAT_EXTMEM_02e7 = DAT_EXTMEM_0126;
    if (_6_3 == '\0') {
      if (_c_4 == '\0') {
        if (DAT_EXTMEM_031c == '\x02') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if (((DAT_EXTMEM_031a == 0) << 7 < '\0') || (3 < DAT_EXTMEM_031a)) {
            DAT_EXTMEM_031a = 1;
          }
          bVar6 = DAT_EXTMEM_031a;
          if ((DAT_EXTMEM_0124 == BANK0_R7) && (DAT_EXTMEM_0125 != 0)) {
            if (_d_1 != '\x01') {
              DAT_EXTMEM_0ec1 = 0;
              DAT_EXTMEM_09fb = 1;
              DAT_EXTMEM_09fc = 0xf4;
              DAT_EXTMEM_02ff = 0;
              DAT_EXTMEM_0a31 = 0;
              DAT_EXTMEM_0a32 = 0;
            }
            _d_1 = '\x01';
          }
          else {
LAB_CODE_0732:
            DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
            FUN_CODE_afc9(bVar6,0);
          }
        }
        else if (DAT_EXTMEM_031c == '\x01') {
          DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
          if ((DAT_EXTMEM_0124 != 0) || (DAT_EXTMEM_0125 == 0)) {
            bVar6 = 0;
            goto LAB_CODE_0732;
          }
          if (_d_1 != '\x01') {
            DAT_EXTMEM_0ec1 = 0;
            DAT_EXTMEM_09fb = 1;
            DAT_EXTMEM_09fc = 0xf4;
            DAT_EXTMEM_02ff = 0;
            DAT_EXTMEM_0a31 = 0;
            DAT_EXTMEM_0a32 = 0;
          }
          _d_1 = '\x01';
        }
        else if ((DAT_EXTMEM_031c == '\0') && (DAT_EXTMEM_0124 != 10)) {
          FUN_CODE_ae8e();
        }
      }
      else if (DAT_EXTMEM_0124 != 0xb) {
        FUN_CODE_ac8c(3);
      }
    }
    bVar6 = BANK3_R0;
    BANK3_R0 = BANK3_R0 + 1;
    bVar6 = bVar6 - 5;
    if (5 < BANK3_R0) {
      BANK3_R0 = 0;
      bVar6 = FUN_CODE_767b();
    }
    goto LAB_CODE_0f70;
  }
  if (DAT_EXTMEM_0120 == 3) {
    _c_3 = 1;
    DAT_EXTMEM_0150 = 0;
    bVar6 = FUN_CODE_a940(0,0xf0);
    BANK3_R0 = 6;
    BANK2_R7 = 0xff;
    goto LAB_CODE_0f70;
  }
  bVar6 = DAT_EXTMEM_0120 ^ 8;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  BANK1_R0 = '\0';
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  do {
    BANK1_R0 = *(char *)CONCAT11((BANK1_R1 - (((0xdf < BANK1_R2) << 7) >> 7)) + '\x01',
                                 BANK1_R2 + 0x20) + BANK1_R0;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x15 || BANK1_R1 != '\0');
  BANK1_R0 = 0x55 - BANK1_R0;
  bVar6 = DAT_EXTMEM_0135 ^ BANK1_R0;
  if (bVar6 != 0) goto LAB_CODE_0f70;
  DAT_EXTMEM_02e2 = (DAT_EXTMEM_0123 & 0x7f) - 1;
  DAT_EXTMEM_0d98 = DAT_EXTMEM_0124;
  DAT_EXTMEM_0390 = DAT_EXTMEM_0125 & 0xf;
  DAT_EXTMEM_038f = 0;
  DAT_EXTMEM_038e = DAT_EXTMEM_0125 >> 4;
  if ((DAT_EXTMEM_0122 & 0x7f) == 8) {
    bVar6 = FUN_CODE_0dbb();
    return bVar6;
  }
  FUN_CODE_a940(0,0xf1);
  DAT_EXTMEM_0a31 = 0;
  DAT_EXTMEM_0a32 = 0;
  _9_1 = 0;
  DAT_EXTMEM_02e3 = 0;
  DAT_EXTMEM_02e4 = 0;
  if (((DAT_EXTMEM_0122 & 0x7f) != 5) && ((DAT_EXTMEM_0122 & 0x70) != 0x40)) {
    _7_2 = 1;
    if (_a_3 == '\0') {
      DAT_EXTMEM_0a14 = 2;
      DAT_EXTMEM_0a15 = 0x58;
    }
    else {
      DAT_EXTMEM_0a14 = 0xb;
      DAT_EXTMEM_0a15 = 0xb8;
    }
    FUN_CODE_ec00();
  }
  FUN_CODE_3f52();
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  sVar2 = (ushort)DAT_EXTMEM_0d98 * 0xe;
  while( true ) {
    DAT_EXTMEM_0139 = (char)((ushort)sVar2 >> 8);
    DAT_EXTMEM_013a = (byte)sVar2;
    bVar6 = BANK1_R1 - (((DAT_EXTMEM_0390 < BANK1_R2 + 1) << 7) >> 7);
    if (DAT_EXTMEM_038f < bVar6) break;
    *(undefined1 *)
     CONCAT11(((DAT_EXTMEM_0139 + (BANK1_R1 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7))) -
              (((0xbc < DAT_EXTMEM_013a + BANK1_R2) << 7) >> 7)) + '\n',
              DAT_EXTMEM_013a + BANK1_R2 + 0x43) =
         *(undefined1 *)
          CONCAT11((BANK1_R1 - (((0xd9 < BANK1_R2) << 7) >> 7)) + '\x01',BANK1_R2 + 0x26);
    BANK1_R2 = BANK1_R2 + 1;
    sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
      sVar2 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    }
  }
  BANK0_R1 = uVar5;
  FUN_CODE_af0c(DAT_EXTMEM_038f - bVar6,cVar3 + '\x01',cVar4 + '\x01',1);
  if (DAT_EXTMEM_0d98 == DAT_EXTMEM_02e2) {
    switch(DAT_EXTMEM_038e) {
    case 0:
      DAT_EXTMEM_0139 = -0x24;
      break;
    case 1:
      DAT_EXTMEM_0139 = -0x22;
      break;
    case 2:
      DAT_EXTMEM_0139 = -0x20;
      break;
    case 3:
      DAT_EXTMEM_0139 = -0x1e;
      break;
    case 4:
      DAT_EXTMEM_0139 = -0x1c;
      break;
    case 5:
      DAT_EXTMEM_0139 = -0x1a;
      break;
    case 6:
      DAT_EXTMEM_0139 = -0x18;
      break;
    case 7:
      DAT_EXTMEM_0139 = -0x16;
      break;
    default:
      goto switchD_CODE_0b34_default;
    }
    DAT_EXTMEM_013a = 0;
switchD_CODE_0b34_default:
    FUN_CODE_b08e();
  }
  BANK1_R1 = '\0';
  BANK1_R2 = 2;
  do {
    cVar4 = BANK1_R2 + 0x1f;
    cVar3 = BANK1_R1 - (((0xe0 < BANK1_R2) << 7) >> 7);
    *(byte *)(BANK1_R2 + 0x33) = BANK0_R7;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x16 || BANK1_R1 != '\0');
  bVar6 = FUN_CODE_acb5(*(undefined1 *)CONCAT11(cVar3 + '\x01',cVar4));
LAB_CODE_0f70:
  if (_c_1 != '\x01') {
    bVar1 = EPCON;
    EPCON = bVar1 & 0xfb;
    P0_2 = 1;
  }
  return bVar6;
}



// ==== CODE:0dbb FUN_CODE_0dbb ====
// callers: FUN_CODE_05ea@CODE:05ea
// callees: FUN_CODE_3f46@CODE:3f46

void FUN_CODE_0dbb(void)

{
  short sVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined1 *puVar8;
  
  if (DAT_EXTMEM_038e == '\x02') {
    BANK1_R1 = 0;
    BANK1_R2 = 0;
    do {
      cVar3 = '\0';
      do {
        uVar7 = 0x152;
        uVar2 = DAT_EXTMEM_0126;
        FUN_CODE_3f46(BANK1_R2,0x12);
        puVar8 = (undefined1 *)CONCAT11(BANK1_R1 * '\x12' + (char)((ushort)uVar7 >> 8),(char)uVar7);
        FUN_CODE_3f46(cVar3,3);
        *puVar8 = uVar2;
        uVar7 = 0x153;
        uVar2 = DAT_EXTMEM_0127;
        FUN_CODE_3f46(BANK1_R2,0x12);
        puVar8 = (undefined1 *)CONCAT11(BANK1_R1 * '\x12' + (char)((ushort)uVar7 >> 8),(char)uVar7);
        FUN_CODE_3f46(cVar3,3);
        *puVar8 = uVar2;
        uVar7 = 0x154;
        uVar2 = DAT_EXTMEM_0128;
        FUN_CODE_3f46(BANK1_R2,0x12);
        puVar8 = (undefined1 *)CONCAT11(BANK1_R1 * '\x12' + (char)((ushort)uVar7 >> 8),(char)uVar7);
        FUN_CODE_3f46(cVar3,3);
        *puVar8 = uVar2;
        cVar3 = cVar3 + '\x01';
      } while (cVar3 != '\x06');
      BANK1_R2 = BANK1_R2 + 1;
      if (BANK1_R2 == 0) {
        BANK1_R1 = BANK1_R1 + 1;
      }
    } while (BANK1_R2 != 0x15 || BANK1_R1 != 0);
    _a_2 = 1;
    _a_3 = 1;
    DAT_EXTMEM_0e25 = 0;
    DAT_EXTMEM_0e26 = 0;
  }
  else if (DAT_EXTMEM_038e == '\x01') {
    if ((DAT_EXTMEM_0124 == DAT_EXTMEM_0a2e + 1) || (DAT_EXTMEM_0124 == 0)) {
      DAT_EXTMEM_0a2e = DAT_EXTMEM_0124;
      _a_3 = 1;
      bVar4 = (byte)((ushort)DAT_EXTMEM_011e * 200);
      bVar5 = (byte)((ushort)DAT_EXTMEM_0124 * 0xe);
      bVar6 = bVar5 + bVar4;
      DAT_EXTMEM_013a = bVar6 + 1;
      DAT_EXTMEM_0139 =
           ((char)((ushort)DAT_EXTMEM_0124 * 0xe >> 8) +
           ((char)((ushort)DAT_EXTMEM_011e * 200 >> 8) - ((CARRY1(bVar5,bVar4) << 7) >> 7))) -
           (((0xfe < bVar6) << 7) >> 7);
      bVar4 = DAT_EXTMEM_0125 & 0xf;
      BANK1_R1 = 0;
      BANK1_R2 = 0;
      while (BANK1_R1 < (byte)-(((BANK1_R2 < bVar4) << 7) >> 7)) {
        bVar5 = DAT_EXTMEM_013a + BANK1_R2;
        bVar6 = DAT_EXTMEM_0139 + (BANK1_R1 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7));
        if (bVar6 < 2U - (((bVar5 < 0x76) << 7) >> 7)) {
          *(undefined1 *)CONCAT11((bVar6 - (((0xbc < bVar5) << 7) >> 7)) + '\n',bVar5 + 0x43) =
               *(undefined1 *)
                CONCAT11((BANK1_R1 - (((0xd9 < BANK1_R2) << 7) >> 7)) + '\x01',BANK1_R2 + 0x26);
        }
        BANK1_R2 = BANK1_R2 + 1;
        if (BANK1_R2 == 0) {
          BANK1_R1 = BANK1_R1 + 1;
        }
      }
      bVar4 = (DAT_EXTMEM_0123 & 0x7f) - 1;
      if (DAT_EXTMEM_0124 == bVar4) {
        sVar1 = (ushort)bVar4 * 0xe;
        bVar4 = (byte)sVar1;
        DAT_EXTMEM_013a = (DAT_EXTMEM_0125 & 0xf) + bVar4;
        DAT_EXTMEM_0139 =
             (char)((ushort)sVar1 >> 8) - ((CARRY1(DAT_EXTMEM_0125 & 0xf,bVar4) << 7) >> 7);
        if (BANK1_R1 + (DAT_EXTMEM_0139 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7)) <
            2U - (((DAT_EXTMEM_013a + BANK1_R2 < 0x76) << 7) >> 7)) {
          bVar4 = (byte)((ushort)DAT_EXTMEM_011e * 200);
          *(byte *)CONCAT11((char)((ushort)DAT_EXTMEM_011e * 200 >> 8) +
                            ('\n' - (((0xbc < bVar4) << 7) >> 7)),bVar4 + 0x43) = DAT_EXTMEM_013a;
        }
        DAT_EXTMEM_011e = DAT_EXTMEM_011e + 1;
        if (2 < DAT_EXTMEM_011e) {
          DAT_EXTMEM_011e = 0;
        }
        DAT_EXTMEM_0d9f = DAT_EXTMEM_0d9f + '\x01';
      }
    }
    else {
      bVar4 = (byte)((ushort)DAT_EXTMEM_011e * 200);
      *(undefined1 *)
       CONCAT11((char)((ushort)DAT_EXTMEM_011e * 200 >> 8) + ('\n' - (((0xbc < bVar4) << 7) >> 7)),
                bVar4 + 0x43) = 0;
    }
  }
  if (_c_1 != '\x01') {
    bVar4 = EPCON;
    EPCON = bVar4 & 0xfb;
    P0_2 = 1;
  }
  return;
}



// ==== 0x30a7: no function ====

// ==== CODE:a55f FUN_CODE_a55f ====
// callers: FUN_CODE_461b@CODE:461b, FUN_CODE_5847@CODE:5847, FUN_CODE_6bb6@CODE:6bb6, FUN_CODE_974a@CODE:974a
// callees: FUN_CODE_3f09@CODE:3f09, FUN_CODE_3faa@CODE:3faa

byte FUN_CODE_a55f(byte param_1,byte param_2,byte param_3,byte param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_CODE_3faa(0xfed);
  cVar1 = '\x10';
  if (((param_1 == 0 && param_2 == 0) && param_3 == 0) && param_4 == 0) {
    param_1 = 0xa5;
    param_2 = 0xa5;
  }
  do {
    bVar5 = param_1 >> 1;
    bVar2 = param_2 >> 1 | param_1 << 7;
    bVar3 = param_3 >> 1 | param_2 << 7;
    bVar4 = param_4 >> 1 | param_3 << 7;
    if ((char)(param_4 << 7) < '\0') {
      bVar5 = bVar5 ^ 0xcc;
      bVar2 = bVar2 ^ 0x4c;
      bVar3 = bVar3 ^ 0x4e;
      bVar4 = bVar4 ^ 0xce;
    }
    cVar1 = cVar1 + -1;
    param_1 = bVar5;
    param_2 = bVar2;
    param_3 = bVar3;
    param_4 = bVar4;
  } while (cVar1 != '\0');
  FUN_CODE_3f09(0xfed);
  return bVar3 & 0x7f;
}



// ==== CODE:3d58 FUN_CODE_3d58 ====
// callers: FUN_CODE_05ea@CODE:05ea, FUN_CODE_2cff@CODE:2cff
// callees: 

char FUN_CODE_3d58(undefined1 param_1,char param_2,char param_3,char param_4,char param_5)

{
  byte bVar1;
  char cVar2;
  
  if (param_5 != '\0') {
    param_4 = param_4 + '\x01';
  }
  if (((param_5 != '\0' || param_4 != '\0') && (param_3 + 2U < 4)) &&
     (bVar1 = param_2 + 2, bVar1 < 4)) {
    bVar1 = (bVar1 * '\x02' | bVar1 >> 7) << 1 | (bVar1 & 0x7f) >> 6 | param_3 + 2U;
                    /* WARNING: Could not recover jumptable at 0x3d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    cVar2 = (*(code *)((ushort)(bVar1 << 1 | bVar1 >> 7) + 0x3cd8))(param_1);
    return cVar2;
  }
  return param_3;
}



// ==== CODE:9efc FUN_CODE_9efc ====
// callers: FUN_CODE_64b1@CODE:64b1, FUN_CODE_6a02@CODE:6a02, FUN_CODE_7108@CODE:7108, FUN_CODE_9929@CODE:9929
// callees: 

byte FUN_CODE_9efc(byte param_1)

{
  if (_4_3 == '\0') {
    if (DAT_EXTMEM_0916 == '\n') {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 - 0x14;
    }
    else if ((DAT_EXTMEM_0916 == '\v') || (DAT_EXTMEM_0916 == '\x11')) {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 - 2;
    }
    else {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 - 1;
    }
    if (param_1 <= DAT_EXTMEM_0944) {
      DAT_EXTMEM_0944 = param_1 - 1;
    }
  }
  else {
    if (DAT_EXTMEM_0916 == '\n') {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 + 0x14;
    }
    else if ((DAT_EXTMEM_0916 == '\v') || (DAT_EXTMEM_0916 == '\x11')) {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 + 2;
    }
    else {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 + 1;
    }
    if (param_1 <= DAT_EXTMEM_0944) {
      DAT_EXTMEM_0944 = 0;
    }
  }
  return DAT_EXTMEM_0944;
}



// ==== CODE:9efc FUN_CODE_9efc ====
// callers: FUN_CODE_64b1@CODE:64b1, FUN_CODE_6a02@CODE:6a02, FUN_CODE_7108@CODE:7108, FUN_CODE_9929@CODE:9929
// callees: 

byte FUN_CODE_9efc(byte param_1)

{
  if (_4_3 == '\0') {
    if (DAT_EXTMEM_0916 == '\n') {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 - 0x14;
    }
    else if ((DAT_EXTMEM_0916 == '\v') || (DAT_EXTMEM_0916 == '\x11')) {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 - 2;
    }
    else {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 - 1;
    }
    if (param_1 <= DAT_EXTMEM_0944) {
      DAT_EXTMEM_0944 = param_1 - 1;
    }
  }
  else {
    if (DAT_EXTMEM_0916 == '\n') {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 + 0x14;
    }
    else if ((DAT_EXTMEM_0916 == '\v') || (DAT_EXTMEM_0916 == '\x11')) {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 + 2;
    }
    else {
      DAT_EXTMEM_0944 = DAT_EXTMEM_0944 + 1;
    }
    if (param_1 <= DAT_EXTMEM_0944) {
      DAT_EXTMEM_0944 = 0;
    }
  }
  return DAT_EXTMEM_0944;
}



// ==== 0x9854: no function ====

// ==== CODE:8a25 FUN_CODE_8a25 ====
// callers: FUN_CODE_a27e@CODE:a27e
// callees: 

void FUN_CODE_8a25(void)

{
  byte bVar1;
  byte *pbVar2;
  
  if (_8_2 == '\0') {
    if (DAT_EXTMEM_0d99 == '\0') {
      if (DAT_EXTMEM_0d9b == '\t') {
        DAT_EXTMEM_0317 = 0x1f < DAT_EXTMEM_0d9a;
        if ((bool)DAT_EXTMEM_0317) {
          pbVar2 = &DAT_EXTMEM_0319;
        }
        else {
          pbVar2 = &DAT_EXTMEM_0318;
        }
        *pbVar2 = DAT_EXTMEM_0d9a;
        DAT_EXTMEM_009d = *pbVar2;
      }
      else if (DAT_EXTMEM_0d9a == 0) {
        _7_1 = 0;
        bVar1 = DAT_EXTMEM_0318 + 1;
        if (DAT_EXTMEM_0318 + 1 == 9) {
          bVar1 = DAT_EXTMEM_0318 + 2;
        }
        DAT_EXTMEM_0318 = bVar1;
        if (DAT_EXTMEM_0318 == 0xe) {
          DAT_EXTMEM_0318 = 0xf;
        }
        if (0x11 < DAT_EXTMEM_0318) {
          DAT_EXTMEM_0318 = 0;
        }
        DAT_EXTMEM_009d = DAT_EXTMEM_0318;
        DAT_EXTMEM_0317 = 0;
        if (DAT_EXTMEM_0318 == 0x12) {
          DAT_EXTMEM_0319 = 0x20;
          DAT_EXTMEM_009d = 0x20;
          DAT_EXTMEM_0317 = 1;
        }
      }
      _c_0 = 1;
    }
    else if (DAT_EXTMEM_0d99 == '\x01') {
      _8_7 = 1;
      if (DAT_EXTMEM_0d9b == '\t') {
        DAT_EXTMEM_0320 = DAT_EXTMEM_0d9a;
      }
      else if ((DAT_EXTMEM_0d9a == 0) &&
              (DAT_EXTMEM_0320 = DAT_EXTMEM_0320 + 1, 4 < DAT_EXTMEM_0320)) {
        DAT_EXTMEM_0320 = 0;
      }
      _6_5 = 1;
    }
    DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
    DAT_EXTMEM_0941 = 0;
    DAT_EXTMEM_0942 = 1;
    _7_4 = 1;
    _7_7 = 1;
  }
  return;
}



// ==== CODE:7108 FUN_CODE_7108 ====
// callers: 
// callees: FUN_CODE_3f46@CODE:3f46, FUN_CODE_6d70@CODE:6d70, FUN_CODE_842e@CODE:842e, FUN_CODE_9bfc@CODE:9bfc, FUN_CODE_9d02@CODE:9d02, FUN_CODE_9efc@CODE:9efc

char FUN_CODE_7108(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined2 uStack_1;
  
  DAT_EXTMEM_0f6a = 0;
  FUN_CODE_9efc(0x80);
  DAT_EXTMEM_0f6a = 0;
  DAT_EXTMEM_0f68 = 0;
  do {
    if (DAT_EXTMEM_011c < 7) {
      puVar6 = (undefined1 *)
               CONCAT11((char)((ushort)DAT_EXTMEM_0916 * 0x15 >> 8) + -0x38,
                        (char)((ushort)DAT_EXTMEM_0916 * 0x15));
      bVar3 = DAT_EXTMEM_0916;
      bVar4 = DAT_EXTMEM_011c;
      FUN_CODE_3f46(DAT_EXTMEM_011c,3);
      DAT_EXTMEM_011d = *puVar6;
      bVar2 = (byte)((ushort)bVar3 * 0x15);
      puVar6 = (undefined1 *)
               CONCAT11((char)((ushort)bVar3 * 0x15 >> 8) + (-0x38 - (((0xfe < bVar2) << 7) >> 7)),
                        bVar2 + 1);
      FUN_CODE_3f46(bVar4,3);
      uEXTMEM0000 = *puVar6;
      bVar3 = (byte)((ushort)DAT_EXTMEM_0916 * 0x15);
      uStack_1 = (undefined1 *)
                 CONCAT11((char)((ushort)DAT_EXTMEM_0916 * 0x15 >> 8) +
                          (-0x38 - (((0xfd < bVar3) << 7) >> 7)),bVar3 + 2);
      FUN_CODE_3f46(DAT_EXTMEM_011c,3);
      DAT_EXTMEM_0eab = *uStack_1;
    }
    else if (DAT_EXTMEM_011c == 7) {
      bVar3 = (byte)((ushort)DAT_EXTMEM_0f6a * 3);
      DAT_EXTMEM_0eab =
           *(undefined1 *)
            CONCAT11((char)((ushort)DAT_EXTMEM_0f6a * 3 >> 8) +
                     ('\'' - (((0x21 < bVar3) << 7) >> 7)),bVar3 - 0x22);
      bVar3 = (byte)((ushort)DAT_EXTMEM_0f6a * 3);
      uEXTMEM0000 = *(undefined1 *)
                     CONCAT11((char)((ushort)DAT_EXTMEM_0f6a * 3 >> 8) +
                              ('\'' - (((0x20 < bVar3) << 7) >> 7)),bVar3 - 0x21);
      bVar3 = (byte)((ushort)DAT_EXTMEM_0f6a * 3);
      DAT_EXTMEM_011d =
           *(undefined1 *)
            CONCAT11((char)((ushort)DAT_EXTMEM_0f6a * 3 >> 8) +
                     ('\'' - (((0x1f < bVar3) << 7) >> 7)),bVar3 - 0x20);
    }
    FUN_CODE_9bfc(0xff,(&DAT_CODE_c480)[DAT_EXTMEM_0944]);
    FUN_CODE_9d02();
    bVar3 = DAT_EXTMEM_0f6a + 0xb;
    if (0xbf < DAT_EXTMEM_0f6a + 0xb) {
      bVar3 = DAT_EXTMEM_0f6a + 0x4b;
    }
    DAT_EXTMEM_0f6a = bVar3;
    cVar1 = '\0';
    do {
      if ((&DAT_CODE_c500)[DAT_EXTMEM_0f68 * '\x06' + cVar1] != -1) {
        bVar3 = cVar1 * '\x15' + 0xa1;
        bVar4 = cVar1 * '\x15' + 0x1f;
        cVar5 = *(char *)CONCAT11((',' - (((0xe0U < (byte)(cVar1 * '\x15')) << 7) >> 7)) -
                                  ((CARRY1(bVar4,DAT_EXTMEM_0f68) << 7) >> 7),
                                  bVar4 + DAT_EXTMEM_0f68);
        FUN_CODE_842e(cVar5,*(undefined1 *)
                             CONCAT11(('+' - (((0x5eU < (byte)(cVar1 * '\x15')) << 7) >> 7)) -
                                      ((CARRY1(bVar3,DAT_EXTMEM_0f68) << 7) >> 7),
                                      bVar3 + DAT_EXTMEM_0f68),BANK0_R4);
        if (cVar5 == '\0') {
          FUN_CODE_6d70(BANK0_R6,BANK0_R3,BANK0_R4);
        }
      }
      bVar3 = DAT_EXTMEM_0f68;
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\x06');
    DAT_EXTMEM_0f68 = DAT_EXTMEM_0f68 + 1;
  } while (DAT_EXTMEM_0f68 < 0x10);
  return bVar3 - 0xf;
}



// ==== CODE:42e3 FUN_CODE_42e3 ====
// callers: FUN_CODE_8954@CODE:8954
// callees: FUN_CODE_9bf1@CODE:9bf1, FUN_CODE_9bfc@CODE:9bfc, FUN_CODE_ad7a@CODE:ad7a, FUN_CODE_ad81@CODE:ad81

byte FUN_CODE_42e3(byte param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  
  if (_d_4 != '\0') {
    return param_1;
  }
  if (_6_3 != '\0') {
    return param_1;
  }
  if ((_8_7 != '\0') && (_8_7 = '\0', DAT_EXTMEM_0320 < 5)) {
    DAT_EXTMEM_0f4f = 0;
  }
  if ((_b_3 == '\x01') || (_3_3 != '\0')) {
    DAT_EXTMEM_011d = 0;
    bEXTMEM0000 = 0;
    DAT_EXTMEM_0eab = 0;
    _d_0 = '\x01';
    bVar3 = 0;
  }
  else {
    if (DAT_EXTMEM_0320 == 1) {
      bVar2 = (&DAT_CODE_2cf6)[DAT_EXTMEM_0323];
      bVar3 = DAT_EXTMEM_0a12 - (bVar2 + 1);
      if (DAT_EXTMEM_0a12 < bVar2 + 1) goto LAB_CODE_4587;
      FUN_CODE_ad7a(bVar3);
      cVar1 = '\0';
      DAT_EXTMEM_0f4f = bVar2;
      do {
        bVar3 = (byte)((ushort)bVar2 * 3);
        DAT_EXTMEM_011d =
             *(byte *)CONCAT11((char)((ushort)bVar2 * 3 >> 8) +
                               ('\'' - (((0x21 < bVar3) << 7) >> 7)),bVar3 - 0x22);
        bVar3 = (byte)((ushort)bVar2 * 3);
        bEXTMEM0000 = *(byte *)CONCAT11((char)((ushort)bVar2 * 3 >> 8) +
                                        ('\'' - (((0x20 < bVar3) << 7) >> 7)),bVar3 - 0x21);
        bVar3 = (byte)((ushort)bVar2 * 3);
        DAT_EXTMEM_0eab =
             *(byte *)CONCAT11((char)((ushort)bVar2 * 3 >> 8) +
                               ('\'' - (((0x1f < bVar3) << 7) >> 7)),bVar3 - 0x20);
        bVar3 = bVar2 + 9;
        if (0xbf < bVar3) {
          bVar3 = bVar2 + 0x49;
        }
        FUN_CODE_9bf1(bVar2 + 0x49);
        bVar2 = (byte)((ushort)DAT_EXTMEM_011d * 4);
        pcVar4 = (char *)CONCAT11('\x03' - (((0x53U < (byte)(cVar1 * '\x06')) << 7) >> 7),
                                  cVar1 * '\x06' + 0xac);
        *pcVar4 = (char)((ushort)DAT_EXTMEM_011d * 4 >> 8) -
                  ((CARRY1(DAT_CODE_25ed,bVar2) << 7) >> 7);
        pcVar4[1] = DAT_CODE_25ed + bVar2;
        bVar2 = (byte)((ushort)bEXTMEM0000 * 4);
        pcVar4 = (char *)CONCAT11('\x03' - (((0x51U < (byte)(cVar1 * '\x06')) << 7) >> 7),
                                  cVar1 * '\x06' + 0xae);
        *pcVar4 = (char)((ushort)bEXTMEM0000 * 4 >> 8) - ((CARRY1(DAT_CODE_25ee,bVar2) << 7) >> 7);
        pcVar4[1] = DAT_CODE_25ee + bVar2;
        bVar2 = (byte)((ushort)DAT_EXTMEM_0eab * 4);
        pcVar4 = (char *)CONCAT11('\x03' - (((0x4fU < (byte)(cVar1 * '\x06')) << 7) >> 7),
                                  cVar1 * '\x06' + 0xb0);
        *pcVar4 = (char)((ushort)DAT_EXTMEM_0eab * 4 >> 8) -
                  ((CARRY1(DAT_CODE_25ef,bVar2) << 7) >> 7);
        pcVar4[1] = DAT_CODE_25ef + bVar2;
        cVar1 = cVar1 + '\x01';
        bVar2 = bVar3;
      } while (cVar1 != '\x15');
    }
    else if (DAT_EXTMEM_0320 == 2) {
      bVar2 = (&DAT_CODE_2cf2)[DAT_EXTMEM_0323];
      bVar3 = DAT_EXTMEM_0a12 - (bVar2 + 1);
      if (DAT_EXTMEM_0a12 < bVar2 + 1) goto LAB_CODE_4587;
      FUN_CODE_ad7a(bVar3);
      bVar3 = (byte)((ushort)bVar2 * 3);
      DAT_EXTMEM_011d =
           *(byte *)CONCAT11((char)((ushort)bVar2 * 3 >> 8) + ('\'' - (((0x21 < bVar3) << 7) >> 7)),
                             bVar3 - 0x22);
      bVar3 = (byte)((ushort)bVar2 * 3);
      bEXTMEM0000 = *(byte *)CONCAT11((char)((ushort)bVar2 * 3 >> 8) +
                                      ('\'' - (((0x20 < bVar3) << 7) >> 7)),bVar3 - 0x21);
      bVar3 = (byte)((ushort)bVar2 * 3);
      DAT_EXTMEM_0eab =
           *(byte *)CONCAT11((char)((ushort)bVar2 * 3 >> 8) + ('\'' - (((0x1f < bVar3) << 7) >> 7)),
                             bVar3 - 0x20);
      DAT_EXTMEM_0f4f = bVar2;
      FUN_CODE_9bf1();
      _d_0 = '\x01';
    }
    else if (DAT_EXTMEM_0320 == 3) {
      bVar3 = DAT_EXTMEM_0a12 + 0xa5;
      if (DAT_EXTMEM_0a12 < 0x5b) goto LAB_CODE_4587;
      DAT_EXTMEM_011d =
           *(byte *)CONCAT11('%' - (((10U < (byte)(DAT_EXTMEM_0321 * '\x03')) << 7) >> 7),
                             DAT_EXTMEM_0321 * '\x03' - 0xb);
      bEXTMEM0000 = *(byte *)CONCAT11('%' - (((9U < (byte)(DAT_EXTMEM_0321 * '\x03')) << 7) >> 7),
                                      DAT_EXTMEM_0321 * '\x03' - 10);
      DAT_EXTMEM_0eab =
           *(byte *)CONCAT11('%' - (((8U < (byte)(DAT_EXTMEM_0321 * '\x03')) << 7) >> 7),
                             DAT_EXTMEM_0321 * '\x03' - 9);
      FUN_CODE_9bf1();
      _d_0 = '\x01';
    }
    else if (DAT_EXTMEM_0320 == 4) {
      bVar3 = DAT_EXTMEM_0a12 - ((&DAT_CODE_2cf2)[DAT_EXTMEM_0323] + 1);
      if (DAT_EXTMEM_0a12 < (&DAT_CODE_2cf2)[DAT_EXTMEM_0323] + 1) goto LAB_CODE_4587;
      bVar3 = 0x80;
      FUN_CODE_ad81(DAT_EXTMEM_0f4f);
      DAT_EXTMEM_011d =
           *(byte *)CONCAT11('%' - (((10U < (byte)(DAT_EXTMEM_0321 * '\x03')) << 7) >> 7),
                             DAT_EXTMEM_0321 * '\x03' - 0xb);
      bEXTMEM0000 = *(byte *)CONCAT11('%' - (((9U < (byte)(DAT_EXTMEM_0321 * '\x03')) << 7) >> 7),
                                      DAT_EXTMEM_0321 * '\x03' - 10);
      DAT_EXTMEM_0eab =
           *(byte *)CONCAT11('%' - (((8U < (byte)(DAT_EXTMEM_0321 * '\x03')) << 7) >> 7),
                             DAT_EXTMEM_0321 * '\x03' - 9);
      DAT_EXTMEM_0f4f = bVar3;
      FUN_CODE_9bfc(0xff,(&DAT_CODE_c480)[bVar3]);
      FUN_CODE_9bf1();
      _d_0 = '\x01';
    }
    else {
      bVar3 = DAT_EXTMEM_0320;
      if ((DAT_EXTMEM_0320 != 0) || (bVar3 = DAT_EXTMEM_0a12 + 0xa5, DAT_EXTMEM_0a12 < 0x5b))
      goto LAB_CODE_4587;
      DAT_EXTMEM_011d = 0;
      bEXTMEM0000 = 0;
      DAT_EXTMEM_0eab = 0;
      _d_0 = '\x01';
    }
    DAT_EXTMEM_0a12 = 0;
    bVar3 = 0;
  }
LAB_CODE_4587:
  if (_d_0 == '\x01') {
    _d_0 = '\0';
    cVar1 = '\0';
    do {
      bVar3 = (byte)((ushort)DAT_EXTMEM_011d * 4);
      pcVar4 = (char *)CONCAT11('\x03' - (((0x53U < (byte)(cVar1 * '\x06')) << 7) >> 7),
                                cVar1 * '\x06' + 0xac);
      *pcVar4 = (char)((ushort)DAT_EXTMEM_011d * 4 >> 8) - ((CARRY1(DAT_CODE_25ed,bVar3) << 7) >> 7)
      ;
      pcVar4[1] = DAT_CODE_25ed + bVar3;
      bVar3 = (byte)((ushort)bEXTMEM0000 * 4);
      pcVar4 = (char *)CONCAT11('\x03' - (((0x51U < (byte)(cVar1 * '\x06')) << 7) >> 7),
                                cVar1 * '\x06' + 0xae);
      *pcVar4 = (char)((ushort)bEXTMEM0000 * 4 >> 8) - ((CARRY1(DAT_CODE_25ee,bVar3) << 7) >> 7);
      pcVar4[1] = DAT_CODE_25ee + bVar3;
      bVar3 = (byte)((ushort)DAT_EXTMEM_0eab * 4);
      pcVar4 = (char *)CONCAT11('\x03' - (((0x4fU < (byte)(cVar1 * '\x06')) << 7) >> 7),
                                cVar1 * '\x06' + 0xb0);
      *pcVar4 = (char)((ushort)DAT_EXTMEM_0eab * 4 >> 8) - ((CARRY1(DAT_CODE_25ef,bVar3) << 7) >> 7)
      ;
      pcVar4[1] = DAT_CODE_25ef + bVar3;
      cVar1 = cVar1 + '\x01';
      bVar3 = 0;
    } while (cVar1 != '\x15');
  }
  return bVar3;
}



// ==== CODE:ff00 FUN_CODE_ff00 ====
// callers: FUN_CODE_b1e2@CODE:b1e2
// callees: FUN_CODE_fc5f@CODE:fc5f, FUN_CODE_fd28@CODE:fd28, FUN_CODE_fda7@CODE:fda7, FUN_CODE_fdee@CODE:fdee

void FUN_CODE_ff00(char param_1,char param_2)

{
  if ((param_1 == 'Z') && (param_2 == -0x5b)) {
    EA = 0;
    SP = 0x70;
    IEN1 = 0;
    FUN_CODE_fc5f();
    DAT_SFR_91 = 0;
    DAT_SFR_92 = 0;
    DPX = 0;
    DAT_SFR_94 = 0;
    DAT_SFR_95 = 0;
    DAT_SFR_96 = 0;
    IEN1 = 0;
    FUN_CODE_fd28(0,7,0xd0);
    IEN1 = 0;
    BANK1_R2 = 9;
    BANK1_R3 = 6;
    FUN_CODE_fda7(0);
  }
  FUN_CODE_fdee();
  return;
}


