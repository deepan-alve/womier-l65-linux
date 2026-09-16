
// ==== CODE:0200 FUN_CODE_0200 ====
// callers: FUN_CODE_9540@CODE:9540
// callees: FUN_CODE_05a8@CODE:05a8, FUN_CODE_05b9@CODE:05b9, FUN_CODE_05de@CODE:05de, FUN_CODE_b03d@CODE:b03d, FUN_CODE_b1e2@CODE:b1e2, FUN_CODE_ec00@CODE:ec00, cmd_0x05e9@CODE:05e9

char FUN_CODE_0200(void)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  undefined1 *puVar7;
  
  if (DAT_EXTMEM_0fd3 == '\x04') {
    DAT_EXTMEM_0fd3 = '\0';
    DAT_EXTMEM_0fd4 = 0x11;
    DAT_EXTMEM_0fd5 = 0;
    pcVar6 = &DAT_EXTMEM_0fc7;
    cVar3 = DAT_EXTMEM_1100;
  }
  else {
    if (DAT_EXTMEM_0fd3 != '\x06') {
      if (DAT_EXTMEM_0fd3 != '\t') {
        cVar3 = FUN_CODE_05de();
        return cVar3;
      }
      bVar4 = DAT_EXTMEM_0fc9;
      if (DAT_EXTMEM_0fc9 == 0) {
        bVar4 = DAT_EXTMEM_0fca ^ 6;
      }
      if (bVar4 == 0) {
        DAT_EXTMEM_0fd4 = 0x11;
        DAT_EXTMEM_0fd5 = 0;
        if ((DAT_EXTMEM_1100 == '\x05') && (DAT_EXTMEM_1101 == 'u')) {
          DAT_EXTMEM_0fd3 = '\0';
          cVar3 = FUN_CODE_b1e2(0);
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
            bVar4 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar4 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar4 != 0);
          DAT_EXTMEM_038e = DAT_INTMEM_78;
          DAT_EXTMEM_02e2 = DAT_INTMEM_7a;
          DAT_EXTMEM_0d98 = DAT_INTMEM_7b;
          DAT_EXTMEM_038f = DAT_INTMEM_7d;
          DAT_EXTMEM_0390 = DAT_INTMEM_7c;
          cVar3 = DAT_INTMEM_7c;
        }
      }
      else {
        cVar3 = ((DAT_EXTMEM_0fca < 8) << 7) >> 7;
        bVar1 = DAT_EXTMEM_0fc9 < (byte)-cVar3;
        cVar3 = DAT_EXTMEM_0fc9 + cVar3;
        if (!bVar1) {
          if (DAT_EXTMEM_0fc3 < (byte)-(((DAT_EXTMEM_0fc4 < 8U - ((bVar1 << 7) >> 7)) << 7) >> 7)) {
            DAT_EXTMEM_0fd4 = 0x11;
            DAT_EXTMEM_0fd5 = 0;
            DAT_EXTMEM_0f9c = 0;
            DAT_EXTMEM_0f9d = 0;
            do {
              puVar7 = (undefined1 *)CONCAT11(DAT_EXTMEM_0f9c + 0x11,DAT_EXTMEM_0f9d);
              *(undefined1 *)(DAT_EXTMEM_0f9d + 0x76) = BANK0_R5;
              DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
              if (DAT_EXTMEM_0f9d == 0) {
                DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + 1;
              }
              bVar4 = DAT_EXTMEM_0f9c;
              if (DAT_EXTMEM_0f9c == 0) {
                bVar4 = DAT_EXTMEM_0f9d ^ 8;
              }
            } while (bVar4 != 0);
            FUN_CODE_b03d(*puVar7);
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
            bVar4 = DAT_EXTMEM_0fc4 - 8;
            bVar5 = DAT_EXTMEM_0fc3 + (-1 - (((7 < DAT_EXTMEM_0fc4) << 7) >> 7));
            if (DAT_INTMEM_77 == 8) {
              if (bVar5 < 1U - (((bVar4 < 0x7a) << 7) >> 7)) {
                *(undefined1 *)
                 CONCAT11((bVar5 - (((0xad < bVar4) << 7) >> 7)) + '\x01',DAT_EXTMEM_0fc4 + 0x4a) =
                     *(undefined1 *)
                      CONCAT11(DAT_EXTMEM_0fd4 +
                               (DAT_EXTMEM_0f9c -
                               ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                               DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
              }
            }
            else if (bVar5 < 2U - (((bVar4 < 8) << 7) >> 7)) {
              *(undefined1 *)
               CONCAT11((bVar5 - (((0xbc < bVar4) << 7) >> 7)) + '\n',DAT_EXTMEM_0fc4 + 0x3b) =
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
            bVar4 = DAT_EXTMEM_0f9c;
            if (DAT_EXTMEM_0f9c == 0) {
              bVar4 = DAT_EXTMEM_0f9d ^ 8;
            }
          } while (bVar4 != 0);
          bVar4 = DAT_EXTMEM_0fc9 ^ DAT_EXTMEM_0fc3;
          if (bVar4 == 0) {
            bVar4 = DAT_EXTMEM_0fca ^ DAT_EXTMEM_0fc4;
          }
          if (bVar4 != 0) {
            cVar3 = FUN_CODE_05b9();
            return cVar3;
          }
          bVar5 = DAT_SFR_9b;
          DAT_SFR_9b = bVar5 & 0xf0;
          bVar5 = HADDR;
          HADDR = bVar5 | 4;
          DAT_EXTMEM_0fd3 = bVar4;
          if (DAT_EXTMEM_031c != '\0') {
            cVar3 = cmd_0x05e9();
            return cVar3;
          }
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
          if (DAT_INTMEM_77 == 0xaa) {
            cVar3 = FUN_CODE_05a8();
            return cVar3;
          }
          if (7 < DAT_INTMEM_77 - 3) {
            cVar3 = cmd_0x05e9();
            return cVar3;
          }
          uVar2 = (ushort)(DAT_INTMEM_77 - 3) * 3;
                    /* WARNING: Could not recover jumptable at 0x0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          cVar3 = (*(code *)(CONCAT11((char)(uVar2 >> 8) + '\x04',0x95) + (uVar2 & 0xff)))();
          return cVar3;
        }
      }
      goto LAB_CODE_05e3;
    }
    cVar3 = '\0';
    pcVar6 = &DAT_EXTMEM_0fd3;
  }
  *pcVar6 = cVar3;
LAB_CODE_05e3:
  bVar4 = DAT_SFR_9b;
  DAT_SFR_9b = bVar4 & 0xf0;
  bVar4 = HADDR;
  HADDR = bVar4 | 4;
  return cVar3;
}



// ==== CODE:7e00 FUN_CODE_7e00 ====
// callers: 
// callees: 

void FUN_CODE_7e00(undefined1 param_1,undefined1 *param_2)

{
  *param_2 = param_1;
  DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
  DAT_EXTMEM_0941 = 0;
  DAT_EXTMEM_0942 = 1;
  _7_4 = 1;
  _c_0 = 1;
  return;
}



// ==== CODE:1019 FUN_CODE_1019 ====
// callers: FUN_CODE_1212@CODE:1212
// callees: FUN_CODE_7c29@CODE:7c29, FUN_CODE_7e36@CODE:7e36

undefined1 FUN_CODE_1019(char *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 uStackX_0;
  undefined1 in_stack_000000f4;
  undefined1 in_stack_000000f9;
  undefined1 in_stack_000000fa;
  undefined1 in_stack_000000fb;
  undefined1 in_stack_000000fc;
  undefined1 in_stack_000000fd;
  undefined1 in_stack_000000fe;
  undefined1 in_stack_000000ff;
  
  cVar3 = *param_1;
  *param_1 = cVar3 + '\x01';
  if (cVar3 + '\x01' == '\0') {
    DAT_EXTMEM_030a = DAT_EXTMEM_030a + '\x01';
  }
  DAT_EXTMEM_039f = DAT_EXTMEM_039f + '\x01';
  if (DAT_EXTMEM_039f == '\0') {
    DAT_EXTMEM_039e = DAT_EXTMEM_039e + '\x01';
  }
  DAT_EXTMEM_0a2c = DAT_EXTMEM_0a2c + '\x01';
  if (DAT_EXTMEM_0a2c == '\0') {
    DAT_EXTMEM_0a2b = DAT_EXTMEM_0a2b + '\x01';
  }
  FUN_CODE_7e36();
  if (_7_2 != '\0') {
    cVar3 = DAT_EXTMEM_0a14;
    if (DAT_EXTMEM_0a14 == '\0') {
      cVar3 = DAT_EXTMEM_0a15;
    }
    if (cVar3 == '\0') {
      _7_2 = '\0';
      _a_3 = 0;
    }
    else {
      bVar1 = DAT_EXTMEM_0a15 != '\0';
      DAT_EXTMEM_0a15 = DAT_EXTMEM_0a15 + -1;
      DAT_EXTMEM_0a14 = DAT_EXTMEM_0a14 + (-1 - ((bVar1 << 7) >> 7));
    }
  }
  if (0x14 < DAT_EXTMEM_095f) {
    DAT_EXTMEM_095f = 0;
    _8_0 = 1;
  }
  DAT_EXTMEM_0fd7 = DAT_EXTMEM_0fd7 + 1;
  if (DAT_EXTMEM_0fd7 == 0) {
    DAT_EXTMEM_0fd6 = DAT_EXTMEM_0fd6 + 1;
  }
  if (3U - (((DAT_EXTMEM_0fd7 < 0xe9) << 7) >> 7) <= DAT_EXTMEM_0fd6) {
    DAT_EXTMEM_0fd6 = 0;
    DAT_EXTMEM_0fd7 = 0;
    DAT_EXTMEM_0a32 = DAT_EXTMEM_0a32 + '\x01';
    if (DAT_EXTMEM_0a32 == '\0') {
      DAT_EXTMEM_0a31 = DAT_EXTMEM_0a31 + '\x01';
    }
  }
  if ((DAT_EXTMEM_0307 != '\0') && (DAT_EXTMEM_0307 = DAT_EXTMEM_0307 + -1, DAT_EXTMEM_0307 == '\0')
     ) {
    DAT_EXTMEM_0cc8 = 2;
    cVar3 = '\a';
    puVar4 = &DAT_EXTMEM_0933;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
    _7_0 = 1;
    if (DAT_EXTMEM_031c != '\0') {
      DAT_EXTMEM_091c = 0x10;
    }
  }
  FUN_CODE_7c29();
  bVar2 = CCAPM0;
  CCAPM0 = bVar2 & 0xdf;
  BANK0_R7 = uStackX_0;
  BANK0_R6 = in_stack_000000ff;
  BANK0_R5 = in_stack_000000fe;
  BANK0_R4 = in_stack_000000fd;
  BANK0_R3 = in_stack_000000fc;
  BANK0_R2 = in_stack_000000fb;
  BANK0_R1 = in_stack_000000fa;
  BANK0_R0 = in_stack_000000f9;
  return in_stack_000000f4;
}



// ==== CODE:1019 FUN_CODE_1019 ====
// callers: FUN_CODE_1212@CODE:1212
// callees: FUN_CODE_7c29@CODE:7c29, FUN_CODE_7e36@CODE:7e36

undefined1 FUN_CODE_1019(char *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 uStackX_0;
  undefined1 in_stack_000000f4;
  undefined1 in_stack_000000f9;
  undefined1 in_stack_000000fa;
  undefined1 in_stack_000000fb;
  undefined1 in_stack_000000fc;
  undefined1 in_stack_000000fd;
  undefined1 in_stack_000000fe;
  undefined1 in_stack_000000ff;
  
  cVar3 = *param_1;
  *param_1 = cVar3 + '\x01';
  if (cVar3 + '\x01' == '\0') {
    DAT_EXTMEM_030a = DAT_EXTMEM_030a + '\x01';
  }
  DAT_EXTMEM_039f = DAT_EXTMEM_039f + '\x01';
  if (DAT_EXTMEM_039f == '\0') {
    DAT_EXTMEM_039e = DAT_EXTMEM_039e + '\x01';
  }
  DAT_EXTMEM_0a2c = DAT_EXTMEM_0a2c + '\x01';
  if (DAT_EXTMEM_0a2c == '\0') {
    DAT_EXTMEM_0a2b = DAT_EXTMEM_0a2b + '\x01';
  }
  FUN_CODE_7e36();
  if (_7_2 != '\0') {
    cVar3 = DAT_EXTMEM_0a14;
    if (DAT_EXTMEM_0a14 == '\0') {
      cVar3 = DAT_EXTMEM_0a15;
    }
    if (cVar3 == '\0') {
      _7_2 = '\0';
      _a_3 = 0;
    }
    else {
      bVar1 = DAT_EXTMEM_0a15 != '\0';
      DAT_EXTMEM_0a15 = DAT_EXTMEM_0a15 + -1;
      DAT_EXTMEM_0a14 = DAT_EXTMEM_0a14 + (-1 - ((bVar1 << 7) >> 7));
    }
  }
  if (0x14 < DAT_EXTMEM_095f) {
    DAT_EXTMEM_095f = 0;
    _8_0 = 1;
  }
  DAT_EXTMEM_0fd7 = DAT_EXTMEM_0fd7 + 1;
  if (DAT_EXTMEM_0fd7 == 0) {
    DAT_EXTMEM_0fd6 = DAT_EXTMEM_0fd6 + 1;
  }
  if (3U - (((DAT_EXTMEM_0fd7 < 0xe9) << 7) >> 7) <= DAT_EXTMEM_0fd6) {
    DAT_EXTMEM_0fd6 = 0;
    DAT_EXTMEM_0fd7 = 0;
    DAT_EXTMEM_0a32 = DAT_EXTMEM_0a32 + '\x01';
    if (DAT_EXTMEM_0a32 == '\0') {
      DAT_EXTMEM_0a31 = DAT_EXTMEM_0a31 + '\x01';
    }
  }
  if ((DAT_EXTMEM_0307 != '\0') && (DAT_EXTMEM_0307 = DAT_EXTMEM_0307 + -1, DAT_EXTMEM_0307 == '\0')
     ) {
    DAT_EXTMEM_0cc8 = 2;
    cVar3 = '\a';
    puVar4 = &DAT_EXTMEM_0933;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
    _7_0 = 1;
    if (DAT_EXTMEM_031c != '\0') {
      DAT_EXTMEM_091c = 0x10;
    }
  }
  FUN_CODE_7c29();
  bVar2 = CCAPM0;
  CCAPM0 = bVar2 & 0xdf;
  BANK0_R7 = uStackX_0;
  BANK0_R6 = in_stack_000000ff;
  BANK0_R5 = in_stack_000000fe;
  BANK0_R4 = in_stack_000000fd;
  BANK0_R3 = in_stack_000000fc;
  BANK0_R2 = in_stack_000000fb;
  BANK0_R1 = in_stack_000000fa;
  BANK0_R0 = in_stack_000000f9;
  return in_stack_000000f4;
}



// ==== CODE:05ea FUN_CODE_05ea ====
// callers: vec_0003_target@CODE:9fdf
// callees: FUN_CODE_0ab2@CODE:0ab2, FUN_CODE_0dbb@CODE:0dbb, FUN_CODE_0f6d@CODE:0f6d, FUN_CODE_3d58@CODE:3d58, FUN_CODE_3f52@CODE:3f52, FUN_CODE_767b@CODE:767b, FUN_CODE_a940@CODE:a940, FUN_CODE_ac8c@CODE:ac8c, FUN_CODE_ae8e@CODE:ae8e, FUN_CODE_afc9@CODE:afc9, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_05ea(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  
  BANK1_R0 = 0;
  if (_d_7 != '\x01') {
    bVar5 = FUN_CODE_0f6d();
    return bVar5;
  }
  _d_7 = 0;
  uVar4 = 0;
  cVar3 = 'T';
  FUN_CODE_3d58(0x20,0x54,0,1,1,0,0x17);
  cVar2 = 'p';
  bVar5 = DAT_INTMEM_70;
  if (DAT_INTMEM_70 != 0) goto LAB_CODE_0f70;
  if (DAT_EXTMEM_0120 != 2) {
    if (DAT_EXTMEM_0120 == 3) {
      _c_3 = 1;
      DAT_EXTMEM_0150 = 0;
      bVar5 = FUN_CODE_a940(0,0xf0);
      BANK3_R0 = 6;
      BANK2_R7 = 0xff;
    }
    else {
      bVar5 = DAT_EXTMEM_0120 ^ 8;
      if (bVar5 == 0) {
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
        bVar5 = DAT_EXTMEM_0135 ^ BANK1_R0;
        if (bVar5 == 0) {
          DAT_EXTMEM_02e2 = (DAT_EXTMEM_0123 & 0x7f) - 1;
          DAT_EXTMEM_0d98 = DAT_EXTMEM_0124;
          DAT_EXTMEM_0390 = DAT_EXTMEM_0125 & 0xf;
          DAT_EXTMEM_038f = 0;
          DAT_EXTMEM_038e = DAT_EXTMEM_0125 >> 4;
          if ((DAT_EXTMEM_0122 & 0x7f) != 8) {
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
            FUN_CODE_3f52(DAT_EXTMEM_0122 & 0x7f);
            BANK0_R1 = uVar4;
            bVar5 = FUN_CODE_0ab2(cVar2 + '\x01',cVar3 + '\x01');
            return bVar5;
          }
          bVar5 = FUN_CODE_0dbb();
          return bVar5;
        }
      }
    }
    goto LAB_CODE_0f70;
  }
  bVar5 = DAT_EXTMEM_0122;
  if ((DAT_EXTMEM_0122 != 0) || (bVar5 = DAT_EXTMEM_0121 ^ 6, bVar5 != 0)) goto LAB_CODE_0f70;
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
  bVar5 = DAT_EXTMEM_0129 ^ BANK1_R0;
  if (bVar5 != 0) goto LAB_CODE_0f70;
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
        bVar5 = DAT_EXTMEM_031a;
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
          FUN_CODE_afc9(bVar5,0);
        }
      }
      else if (DAT_EXTMEM_031c == '\x01') {
        DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
        if ((DAT_EXTMEM_0124 != '\0') || (DAT_EXTMEM_0125 == 0)) {
          bVar5 = 0;
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
      else if ((DAT_EXTMEM_031c == '\0') && (DAT_EXTMEM_0124 != '\n')) {
        FUN_CODE_ae8e();
      }
    }
    else if (DAT_EXTMEM_0124 != '\v') {
      FUN_CODE_ac8c(3);
    }
  }
  bVar5 = BANK3_R0;
  BANK3_R0 = BANK3_R0 + 1;
  bVar5 = bVar5 - 5;
  if (5 < BANK3_R0) {
    BANK3_R0 = 0;
    bVar5 = FUN_CODE_767b();
  }
LAB_CODE_0f70:
  if (_c_1 != '\x01') {
    bVar1 = EPCON;
    EPCON = bVar1 & 0xfb;
    P0_2 = 1;
  }
  return bVar5;
}



// ==== CODE:05ea FUN_CODE_05ea ====
// callers: vec_0003_target@CODE:9fdf
// callees: FUN_CODE_0ab2@CODE:0ab2, FUN_CODE_0dbb@CODE:0dbb, FUN_CODE_0f6d@CODE:0f6d, FUN_CODE_3d58@CODE:3d58, FUN_CODE_3f52@CODE:3f52, FUN_CODE_767b@CODE:767b, FUN_CODE_a940@CODE:a940, FUN_CODE_ac8c@CODE:ac8c, FUN_CODE_ae8e@CODE:ae8e, FUN_CODE_afc9@CODE:afc9, FUN_CODE_ec00@CODE:ec00

byte FUN_CODE_05ea(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  
  BANK1_R0 = 0;
  if (_d_7 != '\x01') {
    bVar5 = FUN_CODE_0f6d();
    return bVar5;
  }
  _d_7 = 0;
  uVar4 = 0;
  cVar3 = 'T';
  FUN_CODE_3d58(0x20,0x54,0,1,1,0,0x17);
  cVar2 = 'p';
  bVar5 = DAT_INTMEM_70;
  if (DAT_INTMEM_70 != 0) goto LAB_CODE_0f70;
  if (DAT_EXTMEM_0120 != 2) {
    if (DAT_EXTMEM_0120 == 3) {
      _c_3 = 1;
      DAT_EXTMEM_0150 = 0;
      bVar5 = FUN_CODE_a940(0,0xf0);
      BANK3_R0 = 6;
      BANK2_R7 = 0xff;
    }
    else {
      bVar5 = DAT_EXTMEM_0120 ^ 8;
      if (bVar5 == 0) {
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
        bVar5 = DAT_EXTMEM_0135 ^ BANK1_R0;
        if (bVar5 == 0) {
          DAT_EXTMEM_02e2 = (DAT_EXTMEM_0123 & 0x7f) - 1;
          DAT_EXTMEM_0d98 = DAT_EXTMEM_0124;
          DAT_EXTMEM_0390 = DAT_EXTMEM_0125 & 0xf;
          DAT_EXTMEM_038f = 0;
          DAT_EXTMEM_038e = DAT_EXTMEM_0125 >> 4;
          if ((DAT_EXTMEM_0122 & 0x7f) != 8) {
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
            FUN_CODE_3f52(DAT_EXTMEM_0122 & 0x7f);
            BANK0_R1 = uVar4;
            bVar5 = FUN_CODE_0ab2(cVar2 + '\x01',cVar3 + '\x01');
            return bVar5;
          }
          bVar5 = FUN_CODE_0dbb();
          return bVar5;
        }
      }
    }
    goto LAB_CODE_0f70;
  }
  bVar5 = DAT_EXTMEM_0122;
  if ((DAT_EXTMEM_0122 != 0) || (bVar5 = DAT_EXTMEM_0121 ^ 6, bVar5 != 0)) goto LAB_CODE_0f70;
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
  bVar5 = DAT_EXTMEM_0129 ^ BANK1_R0;
  if (bVar5 != 0) goto LAB_CODE_0f70;
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
        bVar5 = DAT_EXTMEM_031a;
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
          FUN_CODE_afc9(bVar5,0);
        }
      }
      else if (DAT_EXTMEM_031c == '\x01') {
        DAT_EXTMEM_0fc7 = DAT_EXTMEM_0123;
        if ((DAT_EXTMEM_0124 != '\0') || (DAT_EXTMEM_0125 == 0)) {
          bVar5 = 0;
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
      else if ((DAT_EXTMEM_031c == '\0') && (DAT_EXTMEM_0124 != '\n')) {
        FUN_CODE_ae8e();
      }
    }
    else if (DAT_EXTMEM_0124 != '\v') {
      FUN_CODE_ac8c(3);
    }
  }
  bVar5 = BANK3_R0;
  BANK3_R0 = BANK3_R0 + 1;
  bVar5 = bVar5 - 5;
  if (5 < BANK3_R0) {
    BANK3_R0 = 0;
    bVar5 = FUN_CODE_767b();
  }
LAB_CODE_0f70:
  if (_c_1 != '\x01') {
    bVar1 = EPCON;
    EPCON = bVar1 & 0xfb;
    P0_2 = 1;
  }
  return bVar5;
}


