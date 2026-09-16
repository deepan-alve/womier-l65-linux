
// ==== CODE:05a8 FUN_CODE_05a8 ====
// callers: FUN_CODE_0200@CODE:0200
// callees: 

void FUN_CODE_05a8(void)

{
  DAT_EXTMEM_0940 = DAT_INTMEM_77;
  DAT_EXTMEM_0941 = DAT_INTMEM_78;
  DAT_EXTMEM_0942 = 0;
  _7_4 = 1;
  return;
}



// ==== CODE:05b9 FUN_CODE_05b9 ====
// callers: FUN_CODE_0200@CODE:0200
// callees: FUN_CODE_b03d@CODE:b03d

byte FUN_CODE_05b9(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_CODE_b03d();
  DAT_EXTMEM_0f9b = DAT_EXTMEM_0f9b + 1;
  if (DAT_EXTMEM_0f9b == 0) {
    DAT_EXTMEM_0f9a = DAT_EXTMEM_0f9a + 1;
  }
  cVar1 = ((DAT_EXTMEM_0f9b < 0x40) << 7) >> 7;
  if (DAT_EXTMEM_0f9a < (byte)-cVar1) {
    DAT_EXTMEM_0fd4 = '\x11';
    DAT_EXTMEM_0fd5 = 0;
    DAT_EXTMEM_0f9c = 0;
    DAT_EXTMEM_0f9d = 0;
    do {
      bVar2 = DAT_EXTMEM_0fc4 - 8;
      bVar3 = DAT_EXTMEM_0fc3 + (-1 - (((7 < DAT_EXTMEM_0fc4) << 7) >> 7));
      if (DAT_INTMEM_77 == 8) {
        if (bVar3 < 1U - (((bVar2 < 0x7a) << 7) >> 7)) {
          *(undefined1 *)
           CONCAT11((bVar3 - (((0xad < bVar2) << 7) >> 7)) + '\x01',DAT_EXTMEM_0fc4 + 0x4a) =
               *(undefined1 *)
                CONCAT11(DAT_EXTMEM_0fd4 +
                         (DAT_EXTMEM_0f9c - ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
                         DAT_EXTMEM_0fd5 + DAT_EXTMEM_0f9d);
        }
      }
      else if (bVar3 < 2U - (((bVar2 < 8) << 7) >> 7)) {
        *(undefined1 *)
         CONCAT11((bVar3 - (((0xbc < bVar2) << 7) >> 7)) + '\n',DAT_EXTMEM_0fc4 + 0x3b) =
             *(undefined1 *)
              CONCAT11(DAT_EXTMEM_0fd4 +
                       (DAT_EXTMEM_0f9c - ((CARRY1(DAT_EXTMEM_0fd5,DAT_EXTMEM_0f9d) << 7) >> 7)),
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
      bVar2 = DAT_EXTMEM_0f9c;
      if (DAT_EXTMEM_0f9c == 0) {
        bVar2 = DAT_EXTMEM_0f9d ^ 8;
      }
    } while (bVar2 != 0);
    bVar3 = DAT_EXTMEM_0fc9 ^ DAT_EXTMEM_0fc3;
    if (bVar3 == 0) {
      bVar3 = DAT_EXTMEM_0fca ^ DAT_EXTMEM_0fc4;
    }
    if (bVar3 != 0) {
      bVar2 = FUN_CODE_05b9();
      return bVar2;
    }
    bVar2 = DAT_SFR_9b;
    DAT_SFR_9b = bVar2 & 0xf0;
    bVar2 = HADDR;
    HADDR = bVar2 | 4;
    bVar2 = DAT_EXTMEM_031c;
    DAT_EXTMEM_0fd3 = bVar3;
    if (DAT_EXTMEM_031c == 0) {
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
        bVar2 = FUN_CODE_05a8();
        return bVar2;
      }
      bVar2 = DAT_INTMEM_77 - 3;
      if ((bVar2 < 8) << 7 < '\0') {
                    /* WARNING: Could not recover jumptable at 0x0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        bVar2 = (*(code *)(CONCAT11((char)((ushort)bVar2 * 3 >> 8) + '\x04',0x95) +
                          ((ushort)bVar2 * 3 & 0xff)))();
        return bVar2;
      }
    }
  }
  else {
    bVar2 = DAT_SFR_9b;
    DAT_SFR_9b = bVar2 & 0xf0;
    bVar2 = HADDR;
    HADDR = bVar2 | 4;
    bVar2 = DAT_EXTMEM_0f9a + cVar1;
  }
  return bVar2;
}



// ==== CODE:05de FUN_CODE_05de ====
// callers: FUN_CODE_0200@CODE:0200
// callees: 

void FUN_CODE_05de(void)

{
  byte bVar1;
  
  DAT_EXTMEM_0fd3 = 0;
  bVar1 = DAT_SFR_9b;
  DAT_SFR_9b = bVar1 & 0xf0;
  bVar1 = HADDR;
  HADDR = bVar1 | 4;
  return;
}



// ==== CODE:b1e2 FUN_CODE_b1e2 ====
// callers: FUN_CODE_0200@CODE:0200
// callees: FUN_CODE_ff00@CODE:ff00

void FUN_CODE_b1e2(void)

{
  EA = 0;
  FUN_CODE_ff00(0x5a,0xa5);
  return;
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



// ==== CODE:9540 FUN_CODE_9540 ====
// callers: vec_003B_target@CODE:a8ba
// callees: FUN_CODE_0200@CODE:0200, FUN_CODE_9b66@CODE:9b66, FUN_CODE_a643@CODE:a643, FUN_CODE_ae09@CODE:ae09, FUN_CODE_ae4d@CODE:ae4d

void FUN_CODE_9540(void)

{
  byte bVar1;
  
  DAT_EXTMEM_02e3 = 0;
  DAT_EXTMEM_02e4 = 0;
  DAT_EXTMEM_0fc2 = DAT_SFR_92;
  if (DAT_EXTMEM_0fc2 == 0) {
    DAT_EXTMEM_0fc5 = DPX;
    if (DAT_EXTMEM_0fc5 != 0) {
      if ((DAT_EXTMEM_0fc5 >> 6 & 1) != 0) {
        bVar1 = DPX;
        DPX = bVar1 & 0xbf;
        bVar1 = DAT_SFR_9a;
        DAT_SFR_9a = bVar1 | 1;
        return;
      }
      if ((DAT_EXTMEM_0fc5 >> 5 & 1) != 0) {
        bVar1 = DPX;
        DPX = bVar1 & 0xdf;
        return;
      }
      if ((DAT_EXTMEM_0fc5 >> 4 & 1) != 0) {
        bVar1 = DPX;
        DPX = bVar1 & 0xef;
        FUN_CODE_0200();
        goto LAB_CODE_95c9;
      }
      if ((DAT_EXTMEM_0fc5 >> 2 & 1) != 0) {
        bVar1 = DPX;
        DPX = bVar1 & 0xfb;
        return;
      }
      if ((DAT_EXTMEM_0fc5 >> 1 & 1) != 0) {
        bVar1 = DPX;
        DPX = bVar1 & 0xfd;
        return;
      }
      if ((DAT_EXTMEM_0fc5 & 1) != 0) {
        bVar1 = DPX;
        DPX = bVar1 & 0xfe;
        FUN_CODE_a643();
      }
    }
  }
  else {
    if ((DAT_EXTMEM_0fc2 >> 3 & 1) != 0) {
      bVar1 = DAT_SFR_92;
      DAT_SFR_92 = bVar1 & 0xf7;
      return;
    }
    bVar1 = DAT_SFR_92;
    DAT_SFR_92 = bVar1 & 0xe7;
    bVar1 = DAT_SFR_92;
    DAT_SFR_92 = bVar1 & 0x9f;
    if ((char)DAT_EXTMEM_0fc2 < '\0') {
      bVar1 = DAT_SFR_92;
      DAT_SFR_92 = bVar1 & 0x7f;
      FUN_CODE_ae09();
      return;
    }
    if ((DAT_EXTMEM_0fc2 >> 4 & 1) != 0) {
      FUN_CODE_9b66();
      return;
    }
    if ((DAT_EXTMEM_0fc2 >> 2 & 1) != 0) {
      bVar1 = DAT_SFR_92;
      DAT_SFR_92 = bVar1 & 0xfb;
      return;
    }
    if ((DAT_EXTMEM_0fc2 >> 1 & 1) != 0) {
      bVar1 = DAT_SFR_92;
      DAT_SFR_92 = bVar1 & 0xfd;
      FUN_CODE_ae4d();
      return;
    }
    if ((DAT_EXTMEM_0fc2 & 1) != 0) {
      bVar1 = DAT_SFR_92;
      DAT_SFR_92 = bVar1 & 0xfe;
      bVar1 = DAT_SFR_91;
      DAT_SFR_91 = bVar1 | 0x20;
      nop();
      nop();
      nop();
      nop();
      nop();
      nop();
      bVar1 = DAT_SFR_91;
      DAT_SFR_91 = bVar1 & 0xdf;
      FUN_CODE_ae09();
LAB_CODE_95c9:
      bVar1 = DAT_SFR_92;
      DAT_SFR_92 = bVar1 & 0xbf;
      bVar1 = HADDR;
      HADDR = bVar1 | 1;
      return;
    }
  }
  return;
}



// ==== CODE:b03d FUN_CODE_b03d ====
// callers: FUN_CODE_0200@CODE:0200, FUN_CODE_05b9@CODE:05b9
// callees: 

void FUN_CODE_b03d(void)

{
  byte bVar1;
  
  bVar1 = DAT_SFR_9e;
  DAT_SFR_9e = bVar1 & 0xf0;
  bVar1 = HADDR;
  HADDR = bVar1 | 4;
  bVar1 = DAT_SFR_92;
  DAT_SFR_92 = bVar1 & 0xbf;
  bVar1 = HADDR;
  HADDR = bVar1 | 1;
  do {
    bVar1 = DPX;
  } while ((bVar1 >> 4 & 1) == 0);
  bVar1 = DPX;
  DPX = bVar1 & 0xef;
  return;
}



// ==== CODE:9fdf vec_0003_target ====
// callers: 
// callees: FUN_CODE_05ea@CODE:05ea, FUN_CODE_1de2@CODE:1de2

undefined1 vec_0003_target(undefined1 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  
  uVar12 = BANK0_R7;
  uVar11 = BANK0_R6;
  uVar10 = BANK0_R5;
  uVar9 = BANK0_R4;
  uVar8 = BANK0_R3;
  uVar7 = BANK0_R2;
  uVar6 = BANK0_R1;
  uVar5 = BANK0_R0;
  uVar3 = DAT_SFR_86;
  uVar4 = WCON;
  uVar1 = DPXL;
  uVar2 = DAT_SFR_85;
  DAT_SFR_86 = 0;
  WCON = 0;
  TR2 = 0;
  if (((_c_0 != '\x01') && (_c_2 != '\x01')) && (_b_1 != '\x01')) {
    if (_7_2 != '\x01') {
      FUN_CODE_1de2();
    }
    if (DAT_EXTMEM_031c != '\0') {
      FUN_CODE_05ea();
    }
  }
  TF2 = 0;
  DAT_SFR_86 = 0;
  DAT_SFR_85 = uVar2;
  DPXL = uVar1;
  WCON = uVar4;
  DAT_SFR_86 = uVar3;
  BANK0_R7 = uVar12;
  BANK0_R6 = uVar11;
  BANK0_R5 = uVar10;
  BANK0_R4 = uVar9;
  BANK0_R3 = uVar8;
  BANK0_R2 = uVar7;
  BANK0_R1 = uVar6;
  BANK0_R0 = uVar5;
  return param_1;
}



// ==== CODE:0f6d FUN_CODE_0f6d ====
// callers: FUN_CODE_05ea@CODE:05ea
// callees: FUN_CODE_3108@CODE:3108

void FUN_CODE_0f6d(void)

{
  byte bVar1;
  
  FUN_CODE_3108();
  if (_c_1 != '\x01') {
    bVar1 = EPCON;
    EPCON = bVar1 & 0xfb;
    P0_2 = 1;
  }
  return;
}


