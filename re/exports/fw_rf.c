
// ==== CODE:a68d FUN_CODE_a68d ====
// callers: FUN_CODE_a9bb@CODE:a9bb, FUN_CODE_ec0a@CODE:ec0a
// callees: 

void FUN_CODE_a68d(void)

{
  byte bVar1;
  
  bVar1 = SBUF;
  if (((bVar1 >> 2 & 1) != 1) && (DAT_EXTMEM_031c == '\0')) {
    if (_7_0 != '\0') {
      _7_0 = '\0';
      DAT_EXTMEM_0fcd = '\x11';
      DAT_EXTMEM_0fce = 0x20;
      bVar1 = 0;
      do {
        *(undefined1 *)
         CONCAT11(DAT_EXTMEM_0fcd - ((CARRY1(DAT_EXTMEM_0fce,bVar1) << 7) >> 7),
                  DAT_EXTMEM_0fce + bVar1) =
             *(undefined1 *)CONCAT11('\t' - (((0xcd < bVar1) << 7) >> 7),bVar1 + 0x32);
        bVar1 = bVar1 + 1;
      } while (bVar1 != 8);
      DAT_SFR_9c = 8;
      bVar1 = SBUF;
      SBUF = bVar1 | 4;
    }
    _6_7 = 0;
  }
  return;
}



// ==== CODE:1212 FUN_CODE_1212 ====
// callers: FUN_CODE_7c00@CODE:7c00
// callees: FUN_CODE_1019@CODE:1019, FUN_CODE_1b73@CODE:1b73, FUN_CODE_1d88@CODE:1d88, FUN_CODE_2021@CODE:2021, FUN_CODE_3f46@CODE:3f46, FUN_CODE_3f52@CODE:3f52, FUN_CODE_842e@CODE:842e, FUN_CODE_a97f@CODE:a97f, FUN_CODE_b027@CODE:b027, FUN_CODE_b0be@CODE:b0be

/* WARNING: Instruction at (CODE,0x1756) overlaps instruction at (CODE,0x1754)
    */

char * FUN_CODE_1212(undefined1 *param_1,char *param_2,char *param_3,char param_4,char *param_5,
                    char *param_6)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined2 uVar11;
  byte *pbVar12;
  undefined2 uStack_1;
  
code_c0x1212:
  pcVar6 = (char *)*param_1;
LAB_CODE_1213:
  if (pcVar6 == (char *)0x0) goto LAB_CODE_1253;
  DAT_EXTMEM_0f62 = (char *)0x0;
  DAT_EXTMEM_0f63 = (char *)0x0;
  while (DAT_EXTMEM_0f62 < (char *)('\x01' - (((DAT_EXTMEM_0f63 < &DAT_INTMEM_7a) << 7) >> 7))) {
    *(undefined1 *)
     CONCAT11(DAT_EXTMEM_0f62 + ('\x01' - ((((char *)0xad < DAT_EXTMEM_0f63) << 7) >> 7)),
              DAT_EXTMEM_0f63 + 'R') = 0;
    DAT_EXTMEM_0f63 = DAT_EXTMEM_0f63 + '\x01';
    if (DAT_EXTMEM_0f63 == (char *)0x0) {
      DAT_EXTMEM_0f62 = DAT_EXTMEM_0f62 + '\x01';
    }
  }
  _a_2 = '\x01';
  _a_3 = '\x01';
  puVar10 = &DAT_EXTMEM_0e25;
  do {
    *puVar10 = 0;
    puVar10[1] = 0;
LAB_CODE_1253:
    while( true ) {
      pcVar6 = DAT_EXTMEM_0304;
      if (DAT_EXTMEM_0304 == (char *)0x0) {
        pcVar6 = DAT_EXTMEM_0305;
      }
      if (pcVar6 == (char *)0x0) {
        bVar5 = DAT_EXTMEM_0919 + 1;
        pcVar6 = (char *)(DAT_EXTMEM_0919 - 2);
        DAT_EXTMEM_0919 = bVar5;
        if (2 < bVar5) {
          pcVar6 = (char *)0x0;
          DAT_EXTMEM_0919 = 0;
        }
        goto LAB_CODE_13fb;
      }
      DAT_EXTMEM_011d =
           *(undefined1 *)
            CONCAT11((DAT_EXTMEM_0f64 - (((0xbc < DAT_EXTMEM_0f65) << 7) >> 7)) + '\n',
                     DAT_EXTMEM_0f65 + 0x43);
      if (DAT_EXTMEM_0f65 == 0xff) {
        DAT_EXTMEM_0f64 = DAT_EXTMEM_0f64 + '\x01';
      }
      uEXTMEM0000 = *(undefined1 *)
                     CONCAT11((DAT_EXTMEM_0f64 - (((0xbc < DAT_EXTMEM_0f65 + 1) << 7) >> 7)) + '\n',
                              DAT_EXTMEM_0f65 + 0x44);
      if (DAT_EXTMEM_0f65 == 0xfe) {
        DAT_EXTMEM_0f64 = DAT_EXTMEM_0f64 + '\x01';
      }
      DAT_EXTMEM_0eab =
           *(undefined1 *)
            CONCAT11((DAT_EXTMEM_0f64 - (((0xbc < DAT_EXTMEM_0f65 + 2) << 7) >> 7)) + '\n',
                     DAT_EXTMEM_0f65 + 0x45);
      if (DAT_EXTMEM_0f65 == 0xfd) {
        DAT_EXTMEM_0f64 = DAT_EXTMEM_0f64 + '\x01';
      }
      DAT_EXTMEM_0cd8 =
           *(char **)CONCAT11((DAT_EXTMEM_0f64 - (((0xbc < DAT_EXTMEM_0f65 + 3) << 7) >> 7)) + '\n',
                              DAT_EXTMEM_0f65 + 0x46);
      DAT_EXTMEM_0f65 = DAT_EXTMEM_0f65 + 4;
      if (DAT_EXTMEM_0f65 == 0) {
        DAT_EXTMEM_0f64 = DAT_EXTMEM_0f64 + '\x01';
      }
      DAT_EXTMEM_0f62 = (char *)0x0;
      DAT_EXTMEM_0f63 = (char *)0x0;
      while ((DAT_EXTMEM_0f62 < (char *)-(((DAT_EXTMEM_0f63 < DAT_EXTMEM_0cd8) << 7) >> 7)) << 7 <
             '\0') {
        bVar5 = *(byte *)CONCAT11((DAT_EXTMEM_0f64 - (((0xbc < DAT_EXTMEM_0f65) << 7) >> 7)) + '\n',
                                  DAT_EXTMEM_0f65 + 0x43) / 6;
        bVar8 = *(byte *)CONCAT11((DAT_EXTMEM_0f64 - (((0xbc < DAT_EXTMEM_0f65) << 7) >> 7)) + '\n',
                                  DAT_EXTMEM_0f65 + 0x43) % 6;
        if ((bVar5 < 0x15) && (bVar8 < 6)) {
          bVar4 = (byte)((ushort)bVar5 * 0x12);
          puVar10 = (undefined1 *)
                    CONCAT11((char)((ushort)bVar5 * 0x12 >> 8) +
                             ('\x01' - (((0xad < bVar4) << 7) >> 7)),bVar4 + 0x52);
          uVar3 = DAT_EXTMEM_011d;
          FUN_CODE_3f46(bVar8,3);
          *puVar10 = uVar3;
          bVar4 = (byte)((ushort)bVar5 * 0x12);
          puVar10 = (undefined1 *)
                    CONCAT11((char)((ushort)bVar5 * 0x12 >> 8) +
                             ('\x01' - (((0xac < bVar4) << 7) >> 7)),bVar4 + 0x53);
          uVar3 = uEXTMEM0000;
          FUN_CODE_3f46(bVar8,3);
          *puVar10 = uVar3;
          bVar4 = (byte)((ushort)bVar5 * 0x12);
          puVar10 = (undefined1 *)
                    CONCAT11((char)((ushort)bVar5 * 0x12 >> 8) +
                             ('\x01' - (((0xab < bVar4) << 7) >> 7)),bVar4 + 0x54);
          uVar3 = DAT_EXTMEM_0eab;
          FUN_CODE_3f46(bVar8,3);
          *puVar10 = uVar3;
        }
        DAT_EXTMEM_0f65 = DAT_EXTMEM_0f65 + 1;
        if (DAT_EXTMEM_0f65 == 0) {
          DAT_EXTMEM_0f64 = DAT_EXTMEM_0f64 + '\x01';
        }
        DAT_EXTMEM_0f63 = DAT_EXTMEM_0f63 + '\x01';
        if (DAT_EXTMEM_0f63 == (char *)0x0) {
          DAT_EXTMEM_0f62 = DAT_EXTMEM_0f62 + '\x01';
        }
      }
      param_3 = DAT_EXTMEM_0cd8;
      param_5 = DAT_EXTMEM_0304;
      param_6 = DAT_EXTMEM_0305;
      if ((DAT_EXTMEM_0304 <
          (char *)(("\x02" < DAT_EXTMEM_0cd8) -
                  (((DAT_EXTMEM_0305 < DAT_EXTMEM_0cd8 + '\x04') << 7) >> 7))) << 7 < '\0') break;
      DAT_EXTMEM_0304 =
           DAT_EXTMEM_0304 +
           -(("\x02" < DAT_EXTMEM_0cd8) - (((DAT_EXTMEM_0305 < DAT_EXTMEM_0cd8 + '\x04') << 7) >> 7)
            );
      DAT_EXTMEM_0305 = DAT_EXTMEM_0305 + -(char)(DAT_EXTMEM_0cd8 + '\x04');
    }
    puVar10 = &DAT_EXTMEM_0304;
  } while( true );
LAB_CODE_13fb:
  pcVar1 = param_2;
  if (_a_2 == '\x01') {
    _a_2 = '\0';
    DAT_EXTMEM_0f62 = (char *)0x0;
    DAT_EXTMEM_0f63 = (char *)0x0;
    do {
      for (DAT_EXTMEM_0f5d = (char *)0x0; (DAT_EXTMEM_0f5d < &BANK0_R6) << 7 < '\0';
          DAT_EXTMEM_0f5d = DAT_EXTMEM_0f5d + '\x01') {
        IEN1 = 0;
        param_6 = DAT_EXTMEM_0f63;
        pcVar6 = DAT_EXTMEM_0f5d;
        FUN_CODE_842e(DAT_EXTMEM_0f63);
        if (pcVar6 == (char *)0x0) {
          uVar11 = 0x152;
          pcVar6 = DAT_EXTMEM_0f62;
          FUN_CODE_3f46(DAT_EXTMEM_0f63,0x12);
          uStack_1 = (byte *)CONCAT11((char)pcVar6 * '\x12' + (char)((ushort)uVar11 >> 8),
                                      (char)uVar11);
          pcVar1 = DAT_EXTMEM_0f5d;
          FUN_CODE_3f46(3);
          bVar5 = (byte)((ushort)*uStack_1 * 4);
          bVar8 = *(byte *)CONCAT11('%' - (((0x24U < (byte)((char)pcVar1 * '\x03')) << 7) >> 7),
                                    (char)pcVar1 * '\x03' - 0x25);
          cVar7 = bVar8 + bVar5;
          cVar2 = (char)((ushort)*uStack_1 * 4 >> 8) - ((CARRY1(bVar8,bVar5) << 7) >> 7);
          uVar11 = 0x622;
          pcVar6 = DAT_EXTMEM_0f62;
          FUN_CODE_3f46(DAT_EXTMEM_0f63,0x24);
          uStack_1 = (byte *)CONCAT11((char)pcVar6 * '$' + (char)((ushort)uVar11 >> 8),(char)uVar11)
          ;
          FUN_CODE_3f46(DAT_EXTMEM_0f5d,6);
          *uStack_1 = cVar2;
          uStack_1[1] = cVar7;
          uVar11 = 0x153;
          pcVar6 = DAT_EXTMEM_0f62;
          FUN_CODE_3f46(DAT_EXTMEM_0f63,0x12);
          pbVar12 = (byte *)CONCAT11((char)pcVar6 * '\x12' + (char)((ushort)uVar11 >> 8),
                                     (char)uVar11);
          FUN_CODE_3f46(pcVar1,3);
          bVar5 = (byte)((ushort)*pbVar12 * 4);
          bVar8 = *(byte *)CONCAT11('%' - (((0x23U < (byte)((char)pcVar1 * '\x03')) << 7) >> 7),
                                    (char)pcVar1 * '\x03' - 0x24);
          cVar7 = bVar8 + bVar5;
          cVar2 = (char)((ushort)*pbVar12 * 4 >> 8) - ((CARRY1(bVar8,bVar5) << 7) >> 7);
          uVar11 = 0x624;
          pcVar6 = DAT_EXTMEM_0f62;
          FUN_CODE_3f46(DAT_EXTMEM_0f63,0x24);
          uStack_1 = (byte *)CONCAT11((char)pcVar6 * '$' + (char)((ushort)uVar11 >> 8),(char)uVar11)
          ;
          param_6 = DAT_EXTMEM_0f5d;
          FUN_CODE_3f46(6);
          *uStack_1 = cVar2;
          uStack_1[1] = cVar7;
          uVar11 = 0x154;
          pcVar6 = DAT_EXTMEM_0f62;
          FUN_CODE_3f46(DAT_EXTMEM_0f63,0x12);
          pbVar12 = (byte *)CONCAT11((char)pcVar6 * '\x12' + (char)((ushort)uVar11 >> 8),
                                     (char)uVar11);
          FUN_CODE_3f46(param_6,3);
          bVar5 = (byte)((ushort)*pbVar12 * 4);
          bVar8 = *(byte *)CONCAT11('%' - (((0x22U < (byte)((char)param_6 * '\x03')) << 7) >> 7),
                                    (char)param_6 * '\x03' - 0x23);
          cVar7 = bVar8 + bVar5;
          cVar2 = (char)((ushort)*pbVar12 * 4 >> 8) - ((CARRY1(bVar8,bVar5) << 7) >> 7);
          uVar11 = 0x626;
          param_5 = DAT_EXTMEM_0f62;
          FUN_CODE_3f46(DAT_EXTMEM_0f63,0x24);
          uStack_1 = (byte *)CONCAT11((char)param_5 * '$' + (char)((ushort)uVar11 >> 8),(char)uVar11
                                     );
          FUN_CODE_3f46(DAT_EXTMEM_0f5d,6);
          *uStack_1 = cVar2;
          uStack_1[1] = cVar7;
        }
      }
      DAT_EXTMEM_0f63 = DAT_EXTMEM_0f63 + '\x01';
      if (DAT_EXTMEM_0f63 == (char *)0x0) {
        DAT_EXTMEM_0f62 = DAT_EXTMEM_0f62 + '\x01';
      }
      cVar2 = ((DAT_EXTMEM_0f63 < &BANK2_R5) << 7) >> 7;
      pcVar6 = DAT_EXTMEM_0f62 + cVar2;
      pcVar1 = param_2;
    } while (DAT_EXTMEM_0f62 < (char *)-cVar2);
  }
  pcVar9 = DAT_EXTMEM_011c;
  if ((_a_3 != '\0') || (_b_1 != '\0')) {
    return pcVar6;
  }
  if ((_6_3 != '\x01') && (_3_5 != '\0')) {
    pcVar6 = (char *)FUN_CODE_1b73(pcVar6);
    return pcVar6;
  }
  if (_7_1 != '\0') {
    cVar2 = ((DAT_EXTMEM_0301 < 100) << 7) >> 7;
    pcVar6 = (char *)(DAT_EXTMEM_0300 + cVar2);
    if (DAT_EXTMEM_0300 < (byte)-cVar2) {
      return pcVar6;
    }
    FUN_CODE_a97f(pcVar6,0xff,0xff,0xff);
    pcVar6 = (char *)FUN_CODE_1d88();
    return pcVar6;
  }
  if ((&DAT_CODE_a0d2)[ZEXT12(DAT_EXTMEM_009d)] + 1 <= DAT_EXTMEM_0e23) {
    DAT_EXTMEM_0e23 = (&DAT_CODE_a0d2)[ZEXT12(DAT_EXTMEM_009d)];
  }
  if ((char *)(&DAT_CODE_a0eb)[ZEXT12(DAT_EXTMEM_009d)] + '\x01' <= DAT_EXTMEM_0d9d) {
    DAT_EXTMEM_0d9d = (char *)(&DAT_CODE_a0eb)[ZEXT12(DAT_EXTMEM_009d)];
  }
  DAT_EXTMEM_0f56 = DAT_EXTMEM_009d;
  DAT_EXTMEM_0f59 = DAT_EXTMEM_0d9d;
  DAT_EXTMEM_0f5a = DAT_EXTMEM_0e23;
  if (_3_3 != '\0') {
    DAT_EXTMEM_0f56 = (char *)0x0;
  }
  if (_d_4 != '\0') {
    DAT_EXTMEM_0f56 = (char *)0x0;
  }
  if (_b_3 != '\0') {
    DAT_EXTMEM_0f56 = (char *)0x0;
  }
  if (((((DAT_EXTMEM_0f56 == &BANK0_R4) || ((char **)DAT_EXTMEM_0f56 == &BANK0_R7)) ||
       (DAT_EXTMEM_0f56 == &BANK1_R1)) ||
      ((DAT_EXTMEM_0f56 == &BANK1_R4 || (DAT_EXTMEM_0f56 == &DAT_INTMEM_2d)))) &&
     (param_6 = *(char **)CONCAT11('\x03' - (((0x5e < DAT_EXTMEM_09e5) << 7) >> 7),
                                   DAT_EXTMEM_09e5 + 0xa1), param_6 < (char *)0x7e)) {
    DAT_EXTMEM_0f67 = 0;
    DAT_EXTMEM_0f66 = param_6;
    *(undefined1 *)CONCAT11('\x03' - (((0x5e < DAT_EXTMEM_09e5) << 7) >> 7),DAT_EXTMEM_09e5 + 0xa1)
         = 0xff;
    _a_1 = '\x01';
    DAT_EXTMEM_09e5 = DAT_EXTMEM_09e5 + 1;
    if (9 < DAT_EXTMEM_09e5) {
      DAT_EXTMEM_09e5 = 0;
    }
    DAT_EXTMEM_0300 = 0;
    DAT_EXTMEM_0301 = 0;
    DAT_EXTMEM_09fe = 0;
  }
  if (((_a_1 != '\x01') && (DAT_EXTMEM_0916 == BANK0_R6)) &&
     ((DAT_EXTMEM_0917 == BANK0_R7 &&
      ((DAT_EXTMEM_0a33 == BANK0_R6 && (DAT_EXTMEM_0306 == DAT_EXTMEM_0f5a)))))) {
    pcVar6 = (char *)0x0;
LAB_CODE_1b02:
    if (_4_2 != '\x01') {
      return pcVar6;
    }
    if (DAT_EXTMEM_0916 == &DAT_INTMEM_20) {
      pcVar6 = (char *)FUN_CODE_1dca();
      return pcVar6;
    }
    if (DAT_EXTMEM_0916 == &DAT_INTMEM_26) {
      pcVar6 = (char *)FUN_CODE_1d1d();
      return pcVar6;
    }
    if (&BANK2_R2 <= DAT_EXTMEM_0916) {
      return DAT_EXTMEM_0916;
    }
                    /* WARNING: Could not recover jumptable at 0x1b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar6 = (char *)(*(code *)((ushort)(byte)((char)DAT_EXTMEM_0916 * '\x03') + 0x1b2b))();
    return pcVar6;
  }
  _a_1 = '\0';
  if ((DAT_EXTMEM_0916 != BANK0_R6) || (DAT_EXTMEM_0917 != pcVar9)) {
    DAT_EXTMEM_0916 = DAT_EXTMEM_0f56;
    DAT_EXTMEM_0917 = pcVar9;
    _4_1 = 1;
    _4_2 = '\0';
    FUN_CODE_b027(0);
    FUN_CODE_b0be();
  }
  bVar5 = (DAT_EXTMEM_0a33 < BANK0_R7) << 7;
  pcVar6 = DAT_EXTMEM_0f59;
  if (((DAT_EXTMEM_0a33 != BANK0_R7) || (DAT_EXTMEM_0306 != DAT_EXTMEM_0f5a)) &&
     ((DAT_EXTMEM_0f56 == &BANK0_R1 ||
      ((DAT_EXTMEM_0f56 == &BANK1_R0 ||
       (bVar5 = (DAT_EXTMEM_0f56 < &DAT_INTMEM_20) << 7, DAT_EXTMEM_0f56 >= &DAT_INTMEM_20)))))) {
    _4_1 = 1;
  }
  while( true ) {
    DAT_EXTMEM_0306 = DAT_EXTMEM_0f5a;
    puVar10 = (undefined1 *)0xf56;
    DAT_EXTMEM_0a33 = pcVar6;
    cVar7 = FUN_CODE_3f52(DAT_EXTMEM_0f56);
    *param_3 = *param_3 + -1;
    BANK0_R0 = *param_3;
    *param_3 = *param_3 + -1;
    *param_3 = *param_3 + -1;
    _0_2 = _0_2 ^ 1;
    *param_3 = *param_3 + -1;
    *param_3 = *param_3 + -1;
    param_2 = pcVar1 + -1;
    BANK0_R5 = BANK0_R5 | 0x18;
    *param_2 = *param_2 + '\x01';
    bVar8 = *(char *)ZEXT12(pcVar1) + 1U & (byte)param_3 ^ (byte)param_5;
    *param_3 = *param_3 + '\x01';
    cVar2 = cVar7 + '\x01';
    if (_1_3 == '\x01') {
      nop();
      nop();
      pcVar6 = (char *)FUN_CODE_2021(param_6 + bVar8 + *param_2,cVar7,param_4 + -1,param_5 + -1);
      return pcVar6;
    }
    pcVar9 = param_2 + (bVar8 - ((char)((bVar5 >> 7 | _0_1 ^ 1) << 7) >> 7));
    param_5 = param_5 + '\x01';
    param_3 = (char *)(bVar8 - 3);
    param_6 = param_6 + '\x01';
    bVar5 = (param_5 < BANK1_R7) << 7;
    if (param_5 != BANK1_R7) {
      pcVar6 = (char *)((byte)param_5 >> 1 | (char)param_5 * -0x80);
      goto LAB_CODE_1b02;
    }
    if (_3_2 == '\0') break;
    _3_2 = '\0';
    pcVar1 = pcVar1 + -2;
  }
  while( true ) {
    cVar2 = cVar2 + -1;
    FUN_CODE_1019(pcVar9,cVar2);
    if (_3_1 != '\x01') break;
    pcVar9 = *(char **)ZEXT12(param_3);
  }
  *puVar10 = 0;
  if (DAT_EXTMEM_0313 == '\0') {
    if (DAT_EXTMEM_0317 == '\0') {
      bVar5 = (char)DAT_EXTMEM_009d * '\x02';
      _4_3 = *(byte *)CONCAT11((CARRY1((byte)DAT_EXTMEM_009d,(byte)DAT_EXTMEM_009d) -
                               (((0xb9 < bVar5) << 7) >> 7)) + '\x03',bVar5 + 0x46) >> 7;
      DAT_EXTMEM_011c =
           (char *)(*(byte *)CONCAT11((CARRY1((byte)DAT_EXTMEM_009d,(byte)DAT_EXTMEM_009d) -
                                      (((0xb8 < bVar5) << 7) >> 7)) + '\x03',bVar5 + 0x47) & 0xf);
      bVar5 = (char)DAT_EXTMEM_009d * '\x02';
      DAT_EXTMEM_0d9d =
           (char *)(*(byte *)CONCAT11((CARRY1((byte)DAT_EXTMEM_009d,(byte)DAT_EXTMEM_009d) -
                                      (((0xb9 < bVar5) << 7) >> 7)) + '\x03',bVar5 + 0x46) & 0x1f);
      bVar5 = *(byte *)CONCAT11((CARRY1((byte)DAT_EXTMEM_009d,(byte)DAT_EXTMEM_009d) -
                                (((0xb8 < bVar5) << 7) >> 7)) + '\x03',bVar5 + 0x47) & 0xf0;
      param_5 = (char *)0x0;
      param_6 = (char *)0x0;
      param_2 = &BANK0_R4;
      FUN_CODE_3ee5(0);
      DAT_EXTMEM_0e23 = bVar5;
    }
    else {
      DAT_EXTMEM_0d9d =
           *(char **)CONCAT11('\x03' - ((((char *)0x9c < DAT_EXTMEM_009d) << 7) >> 7),
                              DAT_EXTMEM_009d + 'c');
    }
  }
  else {
    _4_3 = DAT_EXTMEM_0316 >> 7;
    DAT_EXTMEM_0d9d = DAT_EXTMEM_0314;
    DAT_EXTMEM_0e23 = DAT_EXTMEM_0315;
    DAT_EXTMEM_011c = (char *)(DAT_EXTMEM_0316 & 0xf);
  }
  if (DAT_EXTMEM_0d9f != '\0') goto LAB_CODE_11c2;
  pcVar6 = (char *)0x0;
  goto LAB_CODE_13fb;
LAB_CODE_11c2:
  DAT_EXTMEM_0d9f = DAT_EXTMEM_0d9f + -1;
  DAT_EXTMEM_0f65 = (byte)((ushort)DAT_EXTMEM_0919 * 200);
  DAT_EXTMEM_0f64 = (char)((ushort)DAT_EXTMEM_0919 * 200 >> 8);
  param_6 = *(char **)CONCAT11((DAT_EXTMEM_0f64 - (((0xbc < DAT_EXTMEM_0f65) << 7) >> 7)) + '\n',
                               DAT_EXTMEM_0f65 + 0x43);
  DAT_EXTMEM_0304 = (char *)0x0;
  DAT_EXTMEM_0305 = param_6;
  *(undefined1 *)
   CONCAT11((DAT_EXTMEM_0f64 - (((0xbc < DAT_EXTMEM_0f65) << 7) >> 7)) + '\n',DAT_EXTMEM_0f65 + 0x43
           ) = 0;
  DAT_EXTMEM_0f65 = DAT_EXTMEM_0f65 + 1;
  if (DAT_EXTMEM_0f65 == 0) {
    DAT_EXTMEM_0f64 = DAT_EXTMEM_0f64 + '\x01';
  }
  pcVar6 = DAT_EXTMEM_0304;
  if (DAT_EXTMEM_0304 == (char *)0x0) goto code_c0x1211;
  goto LAB_CODE_1213;
code_c0x1211:
  param_1 = &DAT_EXTMEM_0305;
  goto code_c0x1212;
}



// ==== CODE:a55f FUN_CODE_a55f ====
// callers: FUN_CODE_461b@CODE:461b, FUN_CODE_5847@CODE:5847, FUN_CODE_6bb6@CODE:6bb6, FUN_CODE_8231@CODE:8231, FUN_CODE_974a@CODE:974a
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



// ==== CODE:726e FUN_CODE_726e ====
// callers: FUN_CODE_8954@CODE:8954
// callees: 

/* WARNING: Instruction at (CODE,0x75b7) overlaps instruction at (CODE,0x75b6)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x741a: Changing call to branch */

char * FUN_CODE_726e(char *param_1,char *param_2,char *param_3,byte param_4,byte param_5,
                    byte param_6,char *param_7)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 *puVar11;
  byte bVar12;
  char *pcVar13;
  byte *pbVar14;
  
  puVar11 = (undefined1 *)0x0;
  if ((_8_1 != '\x01') || (_9_0 != '\0')) {
    return param_1;
  }
  _8_1 = 0;
  pcVar3 = (char *)0x0;
LAB_CODE_727e:
  bVar7 = BANK0_R0;
  if (*(char *)CONCAT11('\f' - ((((char *)0x44 < pcVar3) << 7) >> 7),pcVar3 + -0x45) == '\0') {
LAB_CODE_73b1:
    bVar12 = (&DAT_INTMEM_36 < pcVar3) << 7;
    pbVar14 = (byte *)ZEXT12(pcVar3 + -0x37);
    pcVar8 = (char *)0x0;
code_c0x73b7:
    pbVar14 = (byte *)CONCAT11(pcVar8 + ('\f' - ((char)bVar12 >> 7)),(char)pbVar14);
switchD_CODE_72e5_caseD_47:
                    /* WARNING: This code block may not be properly labeled as switch case */
    *pbVar14 = 0;
    bVar12 = (&DAT_INTMEM_6e < pcVar3) << 7;
    pcVar9 = pcVar3 + -0x6f;
code_c0x73c0:
    pbVar14 = (byte *)ZEXT12(pcVar9);
    pcVar8 = (char *)0x0;
code_c0x73c3:
    pbVar14 = (byte *)CONCAT11(pcVar8 + ('\x03' - ((char)bVar12 >> 7)),(char)pbVar14);
switchD_CODE_72e5_caseD_4b:
                    /* WARNING: This code block may not be properly labeled as switch case */
    *pbVar14 = 0;
  }
  else {
    _8_1 = 1;
    if (*(char *)CONCAT11('\f' - (((&DAT_INTMEM_36 < pcVar3) << 7) >> 7),pcVar3 + -0x37) == '\0') {
      _9_0 = '\x01';
      *(undefined1 *)CONCAT11('\f' - (((&DAT_INTMEM_36 < pcVar3) << 7) >> 7),pcVar3 + -0x37) =
           *(undefined1 *)CONCAT11('\x03' - (((&DAT_INTMEM_6e < pcVar3) << 7) >> 7),pcVar3 + -0x6f);
      pcVar9 = pcVar3 + '\x01';
      bVar12 = ((char *)0x44 < pcVar3) << 7;
      pcVar8 = pcVar3 + -0x45;
code_c0x72c0:
      pcVar10 = pcVar3;
      if ((*(byte *)CONCAT11('\f' - ((char)bVar12 >> 7),pcVar8) & 1) != 1)
      goto switchD_CODE_72e5_caseD_26;
      if (&BANK1_R4 < pcVar3) goto LAB_CODE_736f;
      pcVar8 = (char *)(ZEXT12(pcVar3) * 3);
      bVar5 = (byte)(ZEXT12(pcVar3) * 3 >> 8);
      bVar1 = 0x8d < bVar5;
      bVar12 = bVar1 << 7;
      pbVar14 = (byte *)CONCAT11(bVar5 + 0x72,0xe6);
      cVar2 = (char)bVar12 >> 7;
      pcVar10 = pcVar8;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(pcVar3) {
      default:
        break;
      case (char *)0x1:
        break;
      case (char *)0x2:
        break;
      case (char *)0x3:
        break;
      case (char *)0x4:
        break;
      case (char *)0x5:
LAB_CODE_731d:
        pbVar14 = &DAT_EXTMEM_0a3b;
                    /* WARNING: This code block may not be properly labeled as switch case */
LAB_CODE_732a:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = 1;
        goto LAB_CODE_736f;
      case (char *)0x6:
switchD_CODE_72e5_caseD_14:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14 = (byte *)0xa3b;
switchD_CODE_72e5_caseD_15:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto LAB_CODE_7332;
      case (char *)0x7:
        pbVar14 = &DAT_EXTMEM_0a3a;
        goto LAB_CODE_732a;
      case (char *)0x8:
        pbVar14 = &DAT_EXTMEM_0a3a;
        goto LAB_CODE_7332;
      case (char *)0x9:
switchD_CODE_72e5_caseD_1b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14 = (byte *)0xa36;
switchD_CODE_72e5_caseD_1c:
                    /* WARNING: This code block may not be properly labeled as switch case */
LAB_CODE_7344:
        pcVar8 = (char *)0xff;
switchD_CODE_72e5_caseD_20:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = (byte)pcVar8;
        pbVar14[1] = (byte)pcVar8;
switchD_CODE_72e5_caseD_21:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto LAB_CODE_736f;
      case (char *)0xa:
LAB_CODE_733c:
        pbVar14 = &DAT_EXTMEM_0a36;
        goto LAB_CODE_734e;
      case (char *)0xb:
LAB_CODE_7341:
        pbVar14 = &DAT_EXTMEM_0a38;
        goto LAB_CODE_7344;
      case (char *)0xc:
        pbVar14 = &DAT_EXTMEM_0a38;
LAB_CODE_734e:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = 1;
        pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_24:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14[1] = (byte)pcVar8;
        goto LAB_CODE_736f;
      case (char *)0xe:
        goto switchD_CODE_72e5_caseD_e;
      case (char *)0xf:
        goto switchD_CODE_72e5_caseD_f;
      case (char *)0x10:
        goto switchD_CODE_72e5_caseD_10;
      case (char *)0x11:
        goto switchD_CODE_72e5_caseD_11;
      case (char *)0x12:
        goto LAB_CODE_731d;
      case (char *)0x13:
        goto LAB_CODE_731d;
      case (char *)0x14:
        goto switchD_CODE_72e5_caseD_14;
      case (char *)0x15:
        goto switchD_CODE_72e5_caseD_15;
      case (char *)0x16:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_4 = param_4 + 1;
        goto LAB_CODE_732a;
      case (char *)0x17:
        _8_1 = 1;
        _9_0 = 1;
        halt_baddata();
      case (char *)0x18:
        goto switchD_CODE_72e5_caseD_18;
      case (char *)0x19:
        goto switchD_CODE_72e5_caseD_19;
      case (char *)0x1a:
        goto switchD_CODE_72e5_caseD_1a;
      case (char *)0x1b:
        goto switchD_CODE_72e5_caseD_1b;
      case (char *)0x1c:
        goto switchD_CODE_72e5_caseD_1c;
      case (char *)0x1d:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_4 = param_4 + 1;
        goto LAB_CODE_733c;
      case (char *)0x1e:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_6 = param_6 + 1;
        goto LAB_CODE_7341;
      case (char *)0x1f:
        goto LAB_CODE_7344;
      case (char *)0x20:
        goto switchD_CODE_72e5_caseD_20;
      case (char *)0x21:
        goto switchD_CODE_72e5_caseD_21;
      case (char *)0x22:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_4 = param_4 + 1;
        goto LAB_CODE_734e;
      case (char *)0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (char *)0x24:
        goto switchD_CODE_72e5_caseD_24;
      case (char *)0x25:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_3 = param_3 + -1;
        pcVar10 = pcVar3;
      case (char *)0x26:
switchD_CODE_72e5_caseD_26:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (pcVar10 < &BANK0_R5) {
switchD_CODE_72e5_caseD_28:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pbVar14 = &DAT_EXTMEM_0a35;
switchD_CODE_72e5_caseD_29:
                    /* WARNING: This code block may not be properly labeled as switch case */
          param_7 = (char *)*pbVar14;
          pcVar8 = pcVar3;
switchD_CODE_72e5_caseD_2a:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pbVar14 = &DAT_CODE_b171;
switchD_CODE_72e5_caseD_2b:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar9 = (char *)pbVar14[ZEXT12(pcVar8)];
          pcVar10 = param_7;
          goto switchD_CODE_72e5_caseD_2c;
        }
        goto LAB_CODE_736f;
      case (char *)0x27:
        FUN_CODE_6d88(BANK0_R6);
        FUN_CODE_3dc4(1,DAT_EXTMEM_0f6b,DAT_EXTMEM_0f6a,DAT_EXTMEM_0f69);
        bVar7 = FUN_CODE_3d7e();
        pcVar3 = (char *)(bVar7 - 8);
        if (7 < bVar7) {
          pcVar3 = (char *)FUN_CODE_3de6(0);
        }
        return pcVar3;
      case (char *)0x28:
        goto switchD_CODE_72e5_caseD_28;
      case (char *)0x29:
        goto switchD_CODE_72e5_caseD_29;
      case (char *)0x2a:
        goto switchD_CODE_72e5_caseD_2a;
      case (char *)0x2b:
        goto switchD_CODE_72e5_caseD_2b;
      case (char *)0x2c:
        goto switchD_CODE_72e5_caseD_2c;
      case (char *)0x2d:
        goto LAB_CODE_736f;
      case (char *)0x2e:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = (param_5 < 0x2c) << 7;
        pcVar9 = pcVar8;
        pcVar10 = param_7;
        if (param_5 == 0x2c) goto switchD_CODE_72e5_caseD_2f;
switchD_CODE_72e5_caseD_2c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_EXTMEM_0a35 = (byte)pcVar10 & (byte)pcVar9;
        goto LAB_CODE_736f;
      case (char *)0x2f:
switchD_CODE_72e5_caseD_2f:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = (bVar12 >> 7 & (byte)pcVar8 >> 4 & 1) << 7;
        goto code_c0x7375;
      case (char *)0x30:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar3 = pcVar3 + '\x01';
        goto code_c0x7375;
      case (char *)0x31:
        goto switchD_CODE_72e5_caseD_31;
      case (char *)0x32:
        goto switchD_CODE_72e5_caseD_32;
      case (char *)0x33:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_7 = param_7 + '\x01';
        goto code_c0x7380;
      case (char *)0x34:
        goto switchD_CODE_72e5_caseD_34;
      case (char *)0x35:
        goto switchD_CODE_72e5_caseD_35;
      case (char *)0x36:
        goto switchD_CODE_72e5_caseD_36;
      case (char *)0x37:
        goto switchD_CODE_72e5_caseD_37;
      case (char *)0x38:
        goto LAB_CODE_738f;
      case (char *)0x39:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_7 = pcVar8 + '\x01';
        goto code_c0x7393;
      case (char *)0x3a:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = (param_5 < 0x2c) << 7;
        if (param_5 == 0x2c) goto switchD_CODE_72e5_caseD_3b;
        goto code_c0x738c;
      case (char *)0x3b:
switchD_CODE_72e5_caseD_3b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar1 = (bool)(bVar12 >> 7 & (byte)pcVar8 >> 4 & 1);
        goto code_c0x7399;
      case (char *)0x3c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar3 = pcVar3 + '\x01';
        goto code_c0x739b;
      case (char *)0x3d:
        goto switchD_CODE_72e5_caseD_3d;
      case (char *)0x3e:
        goto switchD_CODE_72e5_caseD_3e;
      case (char *)0x3f:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = (param_5 < 0x2c) << 7;
        if (param_5 == 0x2c) goto switchD_CODE_72e5_caseD_40;
        goto code_c0x739b;
      case (char *)0x40:
switchD_CODE_72e5_caseD_40:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = (bVar12 >> 7 & (byte)pcVar8 >> 4 & 1) << 7;
        goto code_c0x73a8;
      case (char *)0x41:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar3 = pcVar3 + '\x01';
        goto code_c0x73a8;
      case (char *)0x42:
        goto switchD_CODE_72e5_caseD_42;
      case (char *)0x43:
        goto switchD_CODE_72e5_caseD_43;
      case (char *)0x44:
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_3 = pcVar8;
        goto LAB_CODE_73b1;
      case (char *)0x45:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = (bVar1 & (byte)pcVar8 >> 4 & 1) << 7;
        goto code_c0x73b7;
      case (char *)0x46:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar3 = pcVar3 + '\x01';
        goto code_c0x73b7;
      case (char *)0x47:
        goto switchD_CODE_72e5_caseD_47;
      case (char *)0x48:
                    /* WARNING: Call to offcut address within same function */
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar9 = (char *)func_0x742c();
        goto code_c0x73c0;
      case (char *)0x49:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = (bVar1 & (byte)pcVar8 >> 4 & 1) << 7;
        goto code_c0x73c3;
      case (char *)0x4a:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)((byte)pcVar8 >> 1 | (char)pcVar8 << 7);
        goto code_c0x73c3;
      case (char *)0x4b:
        goto switchD_CODE_72e5_caseD_4b;
      case (char *)0x4c:
        goto switchD_CODE_72e5_caseD_4c;
      case (char *)0x4d:
        goto switchD_CODE_72e5_caseD_4d;
      case (char *)0x4e:
        _8_1 = 1;
        _9_0 = 1;
        return pcVar8;
      case (char *)0x4f:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_CODE_b0af();
      case (char *)0x50:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_CODE_af0c(200);
code_c0x73db:
        pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_52:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14 = &DAT_EXTMEM_0fb8;
switchD_CODE_72e5_caseD_53:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = (byte)pcVar8;
        pbVar14[1] = (byte)pcVar8;
switchD_CODE_72e5_caseD_54:
                    /* WARNING: This code block may not be properly labeled as switch case */
        _6_7 = 0;
        pcVar8 = DAT_EXTMEM_0ec1;
switchD_CODE_72e5_caseD_56:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (pcVar8 != (char *)0x0) {
          FUN_CODE_af0c(0x14);
          goto code_c0x73f8;
        }
code_c0x73ec:
        pcVar8 = (char *)FUN_CODE_af0c();
      case (char *)0x59:
switchD_CODE_72e5_caseD_59:
                    /* WARNING: This code block may not be properly labeled as switch case */
LAB_CODE_7404:
        pcVar8 = (char *)FUN_CODE_acde(pcVar8);
switchD_CODE_72e5_caseD_61:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_CODE_af0c(pcVar8);
switchD_CODE_72e5_caseD_62:
        bVar7 = SADDR;
                    /* WARNING: This code block may not be properly labeled as switch case */
        SADDR = bVar7 & 0xbf;
switchD_CODE_72e5_caseD_63:
        bVar7 = CCON;
                    /* WARNING: This code block may not be properly labeled as switch case */
        CCON = bVar7 & 0xbf;
switchD_CODE_72e5_caseD_64:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_CODE_ab30();
switchD_CODE_72e5_caseD_65:
                    /* WARNING: This code block may not be properly labeled as switch case */
        EA = 0;
        EX0 = 0;
        bVar7 = DAT_SFR_91;
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_91 = bVar7 & 0x3f;
code_c0x741c:
        _f_5 = '\0';
switchD_CODE_72e5_caseD_68:
        bVar7 = CCON;
                    /* WARNING: This code block may not be properly labeled as switch case */
        CCON = bVar7 & 0xbf;
switchD_CODE_72e5_caseD_69:
        bVar7 = SADDR;
                    /* WARNING: This code block may not be properly labeled as switch case */
        SADDR = bVar7 & 0xbf;
switchD_CODE_72e5_caseD_6a:
        bVar7 = SADDR;
                    /* WARNING: This code block may not be properly labeled as switch case */
        SADDR = bVar7 & 0xbf;
switchD_CODE_72e5_caseD_6b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_CODE_99be();
switchD_CODE_72e5_caseD_6c:
        bVar7 = CL;
                    /* WARNING: This code block may not be properly labeled as switch case */
        CL = bVar7 & 0xfc;
switchD_CODE_72e5_caseD_6d:
        bVar7 = EPCON;
                    /* WARNING: This code block may not be properly labeled as switch case */
        EPCON = bVar7 | 3;
switchD_CODE_72e5_caseD_6e:
        bVar7 = P0;
                    /* WARNING: This code block may not be properly labeled as switch case */
        P0 = bVar7 & 0xfc;
switchD_CODE_72e5_caseD_6f:
        bVar7 = CL;
                    /* WARNING: This code block may not be properly labeled as switch case */
        CL = bVar7 & 0xf;
switchD_CODE_72e5_caseD_70:
        bVar7 = EPCON;
                    /* WARNING: This code block may not be properly labeled as switch case */
        EPCON = bVar7 | 0xf0;
switchD_CODE_72e5_caseD_71:
        bVar7 = P0;
                    /* WARNING: This code block may not be properly labeled as switch case */
        P0 = bVar7 & 0xf;
switchD_CODE_72e5_caseD_72:
        bVar7 = CCAP3L;
                    /* WARNING: This code block may not be properly labeled as switch case */
        CCAP3L = bVar7 & 0xbf;
switchD_CODE_72e5_caseD_73:
        bVar7 = RXFLG;
                    /* WARNING: This code block may not be properly labeled as switch case */
        RXFLG = bVar7 | 0x40;
switchD_CODE_72e5_caseD_74:
        bVar7 = P3;
                    /* WARNING: This code block may not be properly labeled as switch case */
        P3 = bVar7 & 0xbf;
switchD_CODE_72e5_caseD_75:
        bVar7 = CMOD;
                    /* WARNING: This code block may not be properly labeled as switch case */
        CMOD = bVar7 & 0xef;
switchD_CODE_72e5_caseD_76:
        bVar7 = PSW1;
                    /* WARNING: This code block may not be properly labeled as switch case */
        PSW1 = bVar7 | 0x10;
switchD_CODE_72e5_caseD_77:
        bVar7 = DAT_SFR_f8;
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_f8 = bVar7 & 0xef;
switchD_CODE_72e5_caseD_78:
                    /* WARNING: This code block may not be properly labeled as switch case */
        TXD = 1;
        P0_3 = 0;
code_c0x7452:
        param_2 = (char *)0x0;
        HIFLG = 0;
code_c0x7455:
        DAT_SFR_ba = 0xf3;
code_c0x7458:
        DAT_SFR_b6 = 0x40;
        bVar7 = IE;
        IE = bVar7 | 2;
        pcVar8 = param_2;
code_c0x745e:
        bVar7 = IE;
        IE = bVar7 | 2;
        bVar7 = DAT_SFR_91;
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_91 = bVar7 & 0x3f;
code_c0x7464:
        nop();
        nop();
switchD_CODE_72e5_caseD_80:
                    /* WARNING: This code block may not be properly labeled as switch case */
        nop();
        nop();
        EA = 1;
        bVar7 = DAT_SFR_91;
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_91 = bVar7 | 1;
code_c0x746d:
        bVar7 = IPL1;
        IPL1 = bVar7 & 0xfb;
code_c0x7470:
        bVar7 = DAT_SFR_bc;
        DAT_SFR_bc = bVar7 & 0xfe;
code_c0x7473:
        bVar7 = DAT_SFR_bc;
        DAT_SFR_bc = bVar7 & 0xfd;
code_c0x7476:
        bVar7 = IPL1;
        IPL1 = bVar7 & 0xf7;
code_c0x7479:
        bVar7 = DAT_SFR_94;
        DAT_SFR_94 = bVar7 | 0x85;
        bVar7 = DAT_SFR_92;
        DAT_SFR_92 = bVar7 & 0x7a;
                    /* WARNING: This code block may not be properly labeled as switch case */
        SADDR = pcVar8;
switchD_CODE_72e5_caseD_89:
        bVar7 = DAT_SFR_91;
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_91 = bVar7 & 0x3b;
switchD_CODE_72e5_caseD_8a:
        bVar7 = FADDR;
                    /* WARNING: This code block may not be properly labeled as switch case */
        FADDR = bVar7 & 0xfe;
switchD_CODE_72e5_caseD_8b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        nop();
        nop();
        nop();
switchD_CODE_72e5_caseD_8c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        nop();
        nop();
        nop();
switchD_CODE_72e5_caseD_8d:
                    /* WARNING: This code block may not be properly labeled as switch case */
        nop();
        nop();
        nop();
switchD_CODE_72e5_caseD_8e:
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_8e = 0x55;
switchD_CODE_72e5_caseD_8f:
        bVar7 = PCON;
                    /* WARNING: This code block may not be properly labeled as switch case */
        PCON = bVar7 | 2;
switchD_CODE_72e5_caseD_90:
                    /* WARNING: This code block may not be properly labeled as switch case */
        nop();
        nop();
        nop();
switchD_CODE_72e5_caseD_91:
                    /* WARNING: This code block may not be properly labeled as switch case */
        nop();
        nop();
        nop();
switchD_CODE_72e5_caseD_92:
                    /* WARNING: This code block may not be properly labeled as switch case */
        puVar11['\x01'] = 0x9f;
        puVar11['\x02'] = 0x74;
        FUN_CODE_a7ee();
switchD_CODE_72e5_caseD_93:
                    /* WARNING: This code block may not be properly labeled as switch case */
        IEN1 = 0;
switchD_CODE_72e5_caseD_94:
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_bc = 3;
switchD_CODE_72e5_caseD_95:
                    /* WARNING: This code block may not be properly labeled as switch case */
        IPL1 = 0xc;
switchD_CODE_72e5_caseD_96:
        bVar7 = DAT_SFR_92;
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_92 = bVar7 & 0xfd;
switchD_CODE_72e5_caseD_97:
        bVar7 = DAT_SFR_91;
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_91 = bVar7 & 0xfe;
switchD_CODE_72e5_caseD_98:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (_f_5 != '\0') {
switchD_CODE_72e5_caseD_99:
          bVar7 = DAT_SFR_91;
                    /* WARNING: This code block may not be properly labeled as switch case */
          DAT_SFR_91 = bVar7 | 2;
switchD_CODE_72e5_caseD_9a:
                    /* WARNING: This code block may not be properly labeled as switch case */
          _f_5 = '\0';
        }
        pcVar8 = (char *)0x0;
        goto switchD_CODE_72e5_caseD_9b;
      case (char *)0x51:
        goto code_c0x73db;
      case (char *)0x52:
        goto switchD_CODE_72e5_caseD_52;
      case (char *)0x53:
        goto switchD_CODE_72e5_caseD_53;
      case (char *)0x54:
        goto switchD_CODE_72e5_caseD_54;
      case (char *)0x55:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar9 = pcVar3 + '\x02';
        DAT_EXTMEM_0946 = DAT_EXTMEM_0946 + 1;
        cVar2 = (DAT_EXTMEM_0946 < (byte)(&DAT_CODE_ac57)[BANK1_R3]) << 7;
        pcVar3 = (char *)(DAT_EXTMEM_0946 - (&DAT_CODE_ac57)[BANK1_R3]);
        if (cVar2 < '\0') goto LAB_CODE_7732;
        DAT_EXTMEM_0946 = 0;
        BANK2_R7 = BANK2_R7 + '\x01';
        if (0x14U - (cVar2 >> 7) <= BANK1_R4) {
          BANK2_R7 = DAT_EXTMEM_0151;
        }
        goto LAB_CODE_7705;
      case (char *)0x56:
        goto switchD_CODE_72e5_caseD_56;
      case (char *)0x57:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *param_3 = *param_3 + '\x01';
        goto code_c0x73ec;
      case (char *)0x58:
        goto switchD_CODE_72e5_caseD_59;
      case (char *)0x5a:
        goto code_c0x73f8;
      case (char *)0x5b:
code_c0x73f8:
        pcVar9 = &BANK0_R7;
switchD_CODE_72e5_caseD_5c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_CODE_aa9c(pcVar9);
switchD_CODE_72e5_caseD_5d:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_CODE_af0c(0x14);
code_c0x7402:
        pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_5f:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto LAB_CODE_7404;
      case (char *)0x5c:
        goto switchD_CODE_72e5_caseD_5c;
      case (char *)0x5d:
        goto switchD_CODE_72e5_caseD_5d;
      case (char *)0x5e:
        goto code_c0x7402;
      case (char *)0x5f:
        goto switchD_CODE_72e5_caseD_5f;
      case (char *)0x60:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((char **)pcVar9 == &BANK0_R1) {
          pcVar8 = pcVar8 + -1;
          goto switchD_CODE_72e5_caseD_61;
        }
        goto switchD_CODE_72e5_caseD_8b;
      case (char *)0x61:
        goto switchD_CODE_72e5_caseD_61;
      case "\"\x02\x0fy":
        goto switchD_CODE_72e5_caseD_62;
      case (char *)0x63:
        goto switchD_CODE_72e5_caseD_63;
      case (char *)0x64:
        goto switchD_CODE_72e5_caseD_64;
      case (char *)0x65:
        goto switchD_CODE_72e5_caseD_65;
      case (char *)0x66:
        puVar11 = &BANK0_R2;
        goto switchD_CODE_72e5_caseD_73;
      case (char *)0x67:
        goto code_c0x741c;
      case (char *)0x68:
        goto switchD_CODE_72e5_caseD_68;
      case (char *)0x69:
        goto switchD_CODE_72e5_caseD_69;
      case (char *)0x6a:
        goto switchD_CODE_72e5_caseD_6a;
      case (char *)0x6b:
        goto switchD_CODE_72e5_caseD_6b;
      case (char *)0x6c:
        goto switchD_CODE_72e5_caseD_6c;
      case (char *)0x6d:
        goto switchD_CODE_72e5_caseD_6d;
      case (char *)0x6e:
        goto switchD_CODE_72e5_caseD_6e;
      case (char *)0x6f:
        goto switchD_CODE_72e5_caseD_6f;
      case (char *)0x70:
        goto switchD_CODE_72e5_caseD_70;
      case (char *)0x71:
        goto switchD_CODE_72e5_caseD_71;
      case (char *)0x72:
        goto switchD_CODE_72e5_caseD_72;
      case (char *)0x73:
        goto switchD_CODE_72e5_caseD_73;
      case (char *)0x74:
        goto switchD_CODE_72e5_caseD_74;
      case (char *)0x75:
        goto switchD_CODE_72e5_caseD_75;
      case (char *)0x76:
        goto switchD_CODE_72e5_caseD_76;
      case (char *)0x77:
        goto switchD_CODE_72e5_caseD_77;
      case (char *)0x78:
        goto switchD_CODE_72e5_caseD_78;
      case (char *)0x79:
        goto code_c0x7452;
      case (char *)0x7a:
        goto code_c0x7455;
      case (char *)0x7b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(char **)ZEXT12(param_3) = pcVar8;
        param_2 = pcVar8;
        goto code_c0x7458;
      case (char *)0x7c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if ((char)bVar12 < '\0') goto switchD_CODE_72e5_caseD_93;
        goto code_c0x745e;
      case (char *)0x7d:
        bVar7 = *pbVar14;
                    /* WARNING: This code block may not be properly labeled as switch case */
        while( true ) {
          DAT_EXTMEM_0eab = *(byte *)CONCAT11(bVar5 + ('\'' - ((char)bVar12 >> 7)),bVar7);
          bVar6 = param_4 + 9;
          if (0xbf < bVar6) {
            bVar6 = param_4 + 0x49;
          }
          FUN_CODE_9bf1(param_4 + 0x49);
          bVar7 = (byte)((ushort)DAT_EXTMEM_011d * 4);
          pcVar13 = (char *)CONCAT11('\x03' - (((0x53 < param_5 * '\x06') << 7) >> 7),
                                     param_5 * '\x06' + 0xac);
          *pcVar13 = (char)((ushort)DAT_EXTMEM_011d * 4 >> 8) -
                     ((CARRY1(DAT_CODE_25ed,bVar7) << 7) >> 7);
          pcVar13[1] = DAT_CODE_25ed + bVar7;
          bVar7 = (byte)((ushort)bEXTMEM0000 * 4);
          pcVar13 = (char *)CONCAT11('\x03' - (((0x51 < param_5 * '\x06') << 7) >> 7),
                                     param_5 * '\x06' + 0xae);
          *pcVar13 = (char)((ushort)bEXTMEM0000 * 4 >> 8) -
                     ((CARRY1(DAT_CODE_25ee,bVar7) << 7) >> 7);
          pcVar13[1] = DAT_CODE_25ee + bVar7;
          bVar7 = (byte)((ushort)DAT_EXTMEM_0eab * 4);
          pcVar13 = (char *)CONCAT11('\x03' - (((0x4f < param_5 * '\x06') << 7) >> 7),
                                     param_5 * '\x06' + 0xb0);
          *pcVar13 = (char)((ushort)DAT_EXTMEM_0eab * 4 >> 8) -
                     ((CARRY1(DAT_CODE_25ef,bVar7) << 7) >> 7);
          pcVar13[1] = DAT_CODE_25ef + bVar7;
          param_5 = param_5 + 1;
          if (param_5 == 0x15) break;
          bVar7 = (byte)((ushort)bVar6 * 3);
          DAT_EXTMEM_011d =
               *(byte *)CONCAT11((char)((ushort)bVar6 * 3 >> 8) +
                                 ('\'' - (((0x21 < bVar7) << 7) >> 7)),bVar7 - 0x22);
          bVar7 = (byte)((ushort)bVar6 * 3);
          bEXTMEM0000 = *(byte *)CONCAT11((char)((ushort)bVar6 * 3 >> 8) +
                                          ('\'' - (((0x20 < bVar7) << 7) >> 7)),bVar7 - 0x21);
          bVar7 = (byte)((ushort)bVar6 * 3);
          bVar5 = (byte)((ushort)bVar6 * 3 >> 8);
          bVar12 = (0x1f < bVar7) << 7;
          bVar7 = bVar7 - 0x20;
          param_4 = bVar6;
        }
        DAT_EXTMEM_0a12 = 0;
        if (_d_0 == '\x01') {
          _d_0 = '\0';
          cVar2 = '\0';
          do {
            bVar7 = (byte)((ushort)DAT_EXTMEM_011d * 4);
            pcVar13 = (char *)CONCAT11('\x03' - (((0x53U < (byte)(cVar2 * '\x06')) << 7) >> 7),
                                       cVar2 * '\x06' + 0xac);
            *pcVar13 = (char)((ushort)DAT_EXTMEM_011d * 4 >> 8) -
                       ((CARRY1(DAT_CODE_25ed,bVar7) << 7) >> 7);
            pcVar13[1] = DAT_CODE_25ed + bVar7;
            bVar7 = (byte)((ushort)bEXTMEM0000 * 4);
            pcVar13 = (char *)CONCAT11('\x03' - (((0x51U < (byte)(cVar2 * '\x06')) << 7) >> 7),
                                       cVar2 * '\x06' + 0xae);
            *pcVar13 = (char)((ushort)bEXTMEM0000 * 4 >> 8) -
                       ((CARRY1(DAT_CODE_25ee,bVar7) << 7) >> 7);
            pcVar13[1] = DAT_CODE_25ee + bVar7;
            bVar7 = (byte)((ushort)DAT_EXTMEM_0eab * 4);
            pcVar13 = (char *)CONCAT11('\x03' - (((0x4fU < (byte)(cVar2 * '\x06')) << 7) >> 7),
                                       cVar2 * '\x06' + 0xb0);
            *pcVar13 = (char)((ushort)DAT_EXTMEM_0eab * 4 >> 8) -
                       ((CARRY1(DAT_CODE_25ef,bVar7) << 7) >> 7);
            pcVar13[1] = DAT_CODE_25ef + bVar7;
            cVar2 = cVar2 + '\x01';
          } while (cVar2 != '\x15');
        }
        return (char *)0x0;
      case (char *)0x7e:
        nop();
        BANK0_R0 = BANK0_R0 ^ 0x68;
        nop();
        nop();
        bVar5 = bVar7 >> 1 | bVar7 << 7;
        if (_0_0 == '\0') {
          bVar12 = (bVar5 < (byte)((char)BANK0_R1 - cVar2)) << 7;
          bVar5 = bVar5 - ((char)BANK0_R1 - cVar2);
        }
        else {
          nop();
          if (_0_0 != '\0') goto LAB_CODE_53a4;
        }
        BANK1_R0 = 0x15;
        nop();
        nop();
        BANK0_R7 = BANK0_R7 + '\x01';
        nop();
        param_7 = (char *)(((bVar5 >> 1 | bVar5 << 7) - (BANK0_R6 - ((char)bVar12 >> 7))) + *param_2
                          + param_4 + 1);
        nop();
LAB_CODE_53a4:
        nop();
        if (_0_3 == '\0') {
          nop();
          nop();
          if (_0_0 != '\x01') {
            nop();
            nop();
            nop();
            BANK0_R1 = BANK0_R1 + '\x01';
            BANK0_R0 = bVar7;
            *param_2 = *param_2 + '\x01';
          }
          nop();
          DAT_EXTMEM_0fd4 = 0x11;
          DAT_EXTMEM_0fd5 = 0;
          DAT_EXTMEM_0fae = DAT_EXTMEM_1100;
          DAT_EXTMEM_0faf = DAT_EXTMEM_1101;
          DAT_EXTMEM_0fb0 = DAT_EXTMEM_1102;
          DAT_EXTMEM_0fb1 = DAT_EXTMEM_1103;
          DAT_EXTMEM_0fb2 = uEXTMEM1104;
          DAT_EXTMEM_0fb3 = uEXTMEM1105;
          DAT_EXTMEM_0fb4 = uEXTMEM1106;
          DAT_EXTMEM_0fb5 = pcEXTMEM1107;
          return pcEXTMEM1107;
        }
        _0_3 = 0;
        BANK0_R1 = (char *)0x5;
        param_7 = param_7 + '\x01';
        while( true ) {
          bVar7 = *pbVar14;
          *(byte *)CONCAT11('\x01' - (((0xc4 < bVar7) << 7) >> 7),bVar7 + 0x3b) =
               *(byte *)CONCAT11('\x02' - (((0x17 < bVar7) << 7) >> 7),bVar7 - 0x18) | (byte)param_7
          ;
          *(byte *)CONCAT11(-(((0xfe < DAT_EXTMEM_0f68) << 7) >> 7),DAT_EXTMEM_0f68 + 1) =
               *(byte *)CONCAT11('\x02' - (((0x17 < DAT_EXTMEM_0f68) << 7) >> 7),
                                 DAT_EXTMEM_0f68 - 0x18) |
               *(byte *)CONCAT11(-(((0xfe < DAT_EXTMEM_0f68) << 7) >> 7),DAT_EXTMEM_0f68 + 1) |
               *(byte *)CONCAT11('\t' - (((0xb8 < DAT_EXTMEM_0f68) << 7) >> 7),
                                 DAT_EXTMEM_0f68 + 0x47);
          bVar7 = DAT_EXTMEM_0f68;
          DAT_EXTMEM_0f68 = DAT_EXTMEM_0f68 + 1;
          if (DAT_EXTMEM_0f68 == 0x10) break;
          param_7 = (char *)(*(byte *)CONCAT11('\x01' - (((0xc4 < DAT_EXTMEM_0f68) << 7) >> 7),
                                               bVar7 + 0x3c) |
                            *(byte *)CONCAT11('\t' - (((0xb8 < DAT_EXTMEM_0f68) << 7) >> 7),
                                              bVar7 + 0x48));
          pbVar14 = &DAT_EXTMEM_0f68;
        }
        if (DAT_EXTMEM_0f6d != '\0') {
          _f_7 = 1;
        }
        pcVar3 = (char *)(DAT_EXTMEM_0916 ^ 0xd);
        if (pcVar3 == (char *)0x0) {
          bVar7 = DAT_EXTMEM_093e + 1;
          pcVar3 = (char *)(DAT_EXTMEM_093e - 5);
          DAT_EXTMEM_093e = bVar7;
          if (5 < bVar7) {
            DAT_EXTMEM_093e = 0;
            if (_4_7 != '\0') {
              _4_7 = 0;
              DAT_EXTMEM_094d = DAT_EXTMEM_094d | 1;
              DAT_EXTMEM_02ee = DAT_EXTMEM_02ee | 1;
              DAT_EXTMEM_0141 = DAT_EXTMEM_0141 | 1;
              DAT_EXTMEM_0007 = (char *)((byte)DAT_EXTMEM_0007 | 1);
              return DAT_EXTMEM_0007;
            }
            _4_7 = '\x01';
            DAT_EXTMEM_094d = DAT_EXTMEM_094d | 0x20;
            DAT_EXTMEM_02ee = DAT_EXTMEM_02ee | 0x20;
            DAT_EXTMEM_0141 = DAT_EXTMEM_0141 | 0x20;
            pcVar3 = (char *)((byte)DAT_EXTMEM_0007 | 0x20);
            DAT_EXTMEM_0007 = pcVar3;
          }
        }
        return pcVar3;
      case (char *)0x7f:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = pcVar8 + ((char)param_7 - cVar2);
        goto code_c0x7464;
      case (char *)0x80:
        goto switchD_CODE_72e5_caseD_80;
      case (char *)0x81:
                    /* WARNING: Call to offcut address within same function */
        pcVar8 = (char *)func_0x7401(DAT_INTMEM_43);
        goto code_c0x746d;
      case (char *)0x82:
                    /* WARNING: This code block may not be properly labeled as switch case */
        while( true ) {
          *(undefined1 *)
           CONCAT11(pcVar9 + ('\n' - ((((char *)0xbc < param_7) << 7) >> 7)),param_7 + 'C') =
               *(undefined1 *)CONCAT11(pcVar8,(char)pbVar14);
          param_7 = param_7 + '\x01';
          if (param_7 == (char *)0x0) {
            pcVar9 = pcVar9 + '\x01';
          }
          if ((BANK0_R7 == '\0') && (pcVar9 == &BANK0_R2)) break;
          pbVar14 = (byte *)ZEXT12(param_7);
          pcVar8 = pcVar9 + -0x3e;
        }
        pcVar3 = (char *)FUN_CODE_a6d5(0x6d,0xda,0);
        return pcVar3;
      case (char *)0x83:
        goto code_c0x7470;
      case (char *)0x84:
        goto code_c0x7473;
      case (char *)0x85:
        goto code_c0x7476;
      case (char *)0x86:
switchD_CODE_72e5_caseD_86:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *param_3 = (char)pcVar8;
        goto code_c0x7479;
      case (char *)0x87:
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_92 = DAT_INTMEM_53;
      case (char *)0x88:
                    /* WARNING: Call to offcut address within same function */
        func_0x743b(DAT_INTMEM_53,0xf5);
        goto switchD_CODE_72e5_caseD_8a;
      case (char *)0x89:
        goto switchD_CODE_72e5_caseD_89;
      case "":
        goto switchD_CODE_72e5_caseD_8a;
      case (char *)0x8b:
        goto switchD_CODE_72e5_caseD_8b;
      case (char *)0x8c:
        goto switchD_CODE_72e5_caseD_8c;
      case (char *)0x8d:
        goto switchD_CODE_72e5_caseD_8d;
      case (char *)0x8e:
        goto switchD_CODE_72e5_caseD_8e;
      case (char *)0x8f:
        goto switchD_CODE_72e5_caseD_8f;
      case (char *)0x90:
        goto switchD_CODE_72e5_caseD_90;
      case (char *)0x91:
        goto switchD_CODE_72e5_caseD_91;
      case (char *)0x92:
        goto switchD_CODE_72e5_caseD_92;
      case (char *)0x93:
        goto switchD_CODE_72e5_caseD_93;
      case (char *)0x94:
        goto switchD_CODE_72e5_caseD_94;
      case (char *)0x95:
        goto switchD_CODE_72e5_caseD_95;
      case (char *)0x96:
        goto switchD_CODE_72e5_caseD_96;
      case (char *)0x97:
        goto switchD_CODE_72e5_caseD_97;
      case (char *)0x98:
        goto switchD_CODE_72e5_caseD_98;
      case (char *)0x99:
        goto switchD_CODE_72e5_caseD_99;
      case (char *)0x9a:
        goto switchD_CODE_72e5_caseD_9a;
      case (char *)0x9b:
        goto switchD_CODE_72e5_caseD_9b;
      case (char *)0x9c:
                    /* WARNING: This code block may not be properly labeled as switch case */
        BANK0_R1 = param_7;
        goto switchD_CODE_72e5_caseD_9b;
      case (char *)0x9d:
switchD_CODE_72e5_caseD_9b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        IEN1 = pcVar8;
        bVar7 = FADDR;
        FADDR = bVar7 | 1;
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar9 = (char *)&BANK0_R1;
switchD_CODE_72e5_caseD_9e:
                    /* WARNING: This code block may not be properly labeled as switch case */
        puVar11['\x01'] = 0xc3;
        puVar11['\x02'] = 0x74;
        FUN_CODE_a804(pcVar8,pcVar9);
switchD_CODE_72e5_caseD_9f:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)0x0;
        IEN1 = 0;
switchD_CODE_72e5_caseD_a0:
        bVar7 = SADDR;
                    /* WARNING: This code block may not be properly labeled as switch case */
        SADDR = bVar7 | 1;
switchD_CODE_72e5_caseD_a1:
                    /* WARNING: This code block may not be properly labeled as switch case */
        puVar11['\x01'] = 0xcc;
        puVar11['\x02'] = 0x74;
        FUN_CODE_a3b6(pcVar8);
switchD_CODE_72e5_caseD_a2:
        bVar7 = DAT_SFR_91;
                    /* WARNING: This code block may not be properly labeled as switch case */
        DAT_SFR_91 = bVar7 | 0x40;
switchD_CODE_72e5_caseD_a3:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)0x0;
        DAT_EXTMEM_0fb8 = 0;
        pbVar14 = &DAT_EXTMEM_0fb9;
switchD_CODE_72e5_caseD_a5:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = (byte)pcVar8;
        _f_1 = 0;
switchD_CODE_72e5_caseD_a6:
                    /* WARNING: This code block may not be properly labeled as switch case */
        EA = 1;
        EX0 = 1;
        _6_7 = 0;
switchD_CODE_72e5_caseD_a8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        puVar11['\x01'] = 0xe1;
        puVar11['\x02'] = 0x74;
        FUN_CODE_55f0(pcVar8);
switchD_CODE_72e5_caseD_a9:
                    /* WARNING: This code block may not be properly labeled as switch case */
        puVar11['\x01'] = 0xe4;
        puVar11['\x02'] = 0x74;
        FUN_CODE_af97();
switchD_CODE_72e5_caseD_aa:
                    /* WARNING: This code block may not be properly labeled as switch case */
        puVar11['\x01'] = 0xe7;
        puVar11['\x02'] = 0x74;
        pcVar8 = (char *)FUN_CODE_ade6();
switchD_CODE_72e5_caseD_ab:
                    /* WARNING: This code block may not be properly labeled as switch case */
        P0_2 = 0;
        bVar7 = EPCON;
        EPCON = bVar7 | 4;
                    /* WARNING: This code block may not be properly labeled as switch case */
        P0_2 = 0;
                    /* WARNING: This code block may not be properly labeled as switch case */
        param_2 = &DAT_INTMEM_31;
switchD_CODE_72e5_caseD_ae:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *param_2 = '\b';
code_c0x74f4:
        puVar11['\x01'] = 0xf7;
        puVar11['\x02'] = 0x74;
        FUN_CODE_af0c(pcVar8);
code_c0x74f7:
        pcVar8 = (char *)0x0;
        pbVar14 = &DAT_EXTMEM_0a31;
        DAT_EXTMEM_0a31 = 0;
switchD_CODE_72e5_caseD_b2:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14[1] = (byte)pcVar8;
        _9_1 = 0;
code_c0x7500:
        _f_1 = 0;
switchD_CODE_72e5_caseD_b4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14 = &DAT_EXTMEM_0fb8;
switchD_CODE_72e5_caseD_b5:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = (byte)pcVar8;
        pbVar14[1] = (byte)pcVar8;
switchD_CODE_72e5_caseD_b6:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14 = &DAT_EXTMEM_02e3;
switchD_CODE_72e5_caseD_b7:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = (byte)pcVar8;
code_c0x750c:
        pbVar14[1] = (byte)pcVar8;
switchD_CODE_72e5_caseD_b8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14 = &DAT_EXTMEM_091c;
switchD_CODE_72e5_caseD_b9:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = (byte)pcVar8;
switchD_CODE_72e5_caseD_ba:
                    /* WARNING: This code block may not be properly labeled as switch case */
        puVar11['\x01'] = 0x17;
        puVar11['\x02'] = 0x75;
        FUN_CODE_af0c();
switchD_CODE_72e5_caseD_bb:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)0x0;
        DAT_EXTMEM_0150 = 0;
        pcVar3 = pcVar8;
code_c0x751e:
        BANK3_R0 = pcVar3;
        _b_3 = 0;
switchD_CODE_72e5_caseD_be:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pbVar14 = &DAT_EXTMEM_02fe;
switchD_CODE_72e5_caseD_bf:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = (byte)pcVar8;
        pbVar14 = &DAT_EXTMEM_02fd;
code_c0x7527:
        *pbVar14 = (byte)pcVar8;
        return pcVar8;
      case (char *)0x9e:
        goto switchD_CODE_72e5_caseD_9e;
      case (char *)0x9f:
        goto switchD_CODE_72e5_caseD_9f;
      case (char *)0xa0:
        goto switchD_CODE_72e5_caseD_a0;
      case (char *)0xa1:
        goto switchD_CODE_72e5_caseD_a1;
      case (char *)0xa2:
        goto switchD_CODE_72e5_caseD_a2;
      case (char *)0xa3:
        goto switchD_CODE_72e5_caseD_a3;
      case (char *)0xa4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (param_2 != (char *)0xf0) goto switchD_CODE_72e5_caseD_86;
      case (char *)0xa5:
        goto switchD_CODE_72e5_caseD_a5;
      case (char *)0xa6:
        goto switchD_CODE_72e5_caseD_a6;
      case (char *)0xa7:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar4 = UNK_SFR_c2;
        pcVar8 = pcVar8 + (*param_3 - cVar2);
      case (char *)0xa8:
        goto switchD_CODE_72e5_caseD_a8;
      case (char *)0xa9:
        goto switchD_CODE_72e5_caseD_a9;
      case (char *)0xaa:
        goto switchD_CODE_72e5_caseD_aa;
      case (char *)0xab:
        goto switchD_CODE_72e5_caseD_ab;
      case (char *)0xac:
        *param_3 = *param_3 + -1;
LAB_CODE_7705:
        pcVar3 = BANK2_R7;
        if (BANK2_R7 == (char *)0x64) {
          if (_d_3 == '\0') {
            BANK2_R7 = (char *)0x64;
          }
          else {
            BANK2_R7 = &DAT_INTMEM_63;
          }
        }
        _3_7 = '\x01';
LAB_CODE_7732:
        if ((((_d_3 != '\x01') && (_6_3 != '\x01')) &&
            (pcVar3 = BANK2_R7 + -0x5f, (char *)0x5e < BANK2_R7)) &&
           (pcVar3 = BANK2_R7 + -100, BANK2_R7 < (char *)0x64)) {
          BANK2_R7 = (char *)0x64;
          _3_7 = '\x01';
        }
        cVar2 = RD;
        if (((cVar2 != '\0') && (_c_1 != '\x01')) && (_3_7 != '\0')) {
          _3_7 = '\0';
          FUN_CODE_ad07(pcVar3,pcVar9,BANK2_R7);
          DAT_EXTMEM_0cba = BANK2_R7;
          _b_2 = 1;
          pcVar3 = BANK2_R7;
        }
        return pcVar3;
      case (char *)0xad:
        pcVar8 = (char *)func_0x7176();
        param_2 = param_2 + '\x01';
      case (char *)0xae:
        goto switchD_CODE_72e5_caseD_ae;
      case (char *)0xaf:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = pcVar8 + -1;
        goto code_c0x74f4;
      case (char *)0xb0:
        goto code_c0x74f7;
      case (char *)0xb1:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)func_0x71f0(param_4 + 1);
      case "":
        goto switchD_CODE_72e5_caseD_b2;
      case (char *)0xb3:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)((byte)pcVar8 | (byte)param_3);
        goto code_c0x7500;
      case (char *)0xb4:
        goto switchD_CODE_72e5_caseD_b4;
      case (char *)0xb5:
        goto switchD_CODE_72e5_caseD_b5;
      case (char *)0xb6:
        goto switchD_CODE_72e5_caseD_b6;
      case (char *)0xb7:
        goto switchD_CODE_72e5_caseD_b7;
      case (char *)0xb8:
        goto switchD_CODE_72e5_caseD_b8;
      case (char *)0xb9:
        goto switchD_CODE_72e5_caseD_b9;
      case (char *)0xba:
        goto switchD_CODE_72e5_caseD_ba;
      case (char *)0xbb:
        goto switchD_CODE_72e5_caseD_bb;
      case (char *)0xbc:
        pcVar3 = pcVar8;
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (bVar1) goto code_c0x751e;
        goto code_c0x750c;
      case (char *)0xbd:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar3 = BANK3_R0;
        goto code_c0x751e;
      case (char *)0xbe:
        goto switchD_CODE_72e5_caseD_be;
      case (char *)0xbf:
        goto switchD_CODE_72e5_caseD_bf;
      case (char *)0xc0:
        goto code_c0x7527;
      case (char *)0xc1:
                    /* WARNING: This code block may not be properly labeled as switch case */
        IEN1 = 0;
      case (char *)0xc2:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = 0;
        pbVar14 = &DAT_EXTMEM_09e4;
code_c0x7530:
        bVar12 = (*pbVar14 < 0xb8U - ((char)bVar12 >> 7)) << 7;
        pbVar14 = &DAT_EXTMEM_09e3;
code_c0x7536:
        bVar12 = (*pbVar14 < 0xbU - ((char)bVar12 >> 7)) << 7;
code_c0x7539:
        if ((char)bVar12 < '\0') {
switchD_CODE_72e5_caseD_c7:
                    /* WARNING: This code block may not be properly labeled as switch case */
          goto LAB_CODE_7659;
        }
      case (char *)0xc8:
switchD_CODE_72e5_caseD_c8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)0x0;
        *pbVar14 = 0;
        pbVar14 = pbVar14 + 1;
switchD_CODE_72e5_caseD_c9:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *pbVar14 = (byte)pcVar8;
        if (_b_7 == '\x01') {
LAB_CODE_7548:
          _b_7 = '\0';
switchD_CODE_72e5_caseD_cc:
                    /* WARNING: This code block may not be properly labeled as switch case */
          _b_4 = 1;
          FUN_CODE_50e9();
code_c0x754f:
          FUN_CODE_b0af();
code_c0x7552:
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_cf:
                    /* WARNING: This code block may not be properly labeled as switch case */
switchD_CODE_72e5_caseD_d0:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_a97f(pcVar8);
switchD_CODE_72e5_caseD_d1:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_d2:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)FUN_CODE_006e(pcVar8);
switchD_CODE_72e5_caseD_d4:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_ac8c(pcVar8);
switchD_CODE_72e5_caseD_d5:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_af0c(0x32);
code_c0x756a:
          FUN_CODE_9c7b();
          pcVar8 = (char *)FUN_CODE_8af5();
code_c0x7570:
          FUN_CODE_6ef2(pcVar8);
code_c0x7573:
          pcVar10 = (char *)0x0;
switchD_CODE_72e5_caseD_da:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)0xff;
code_c0x7578:
          FUN_CODE_a97f(pcVar10,pcVar8);
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_dc:
                    /* WARNING: This code block may not be properly labeled as switch case */
switchD_CODE_72e5_caseD_dd:
                    /* WARNING: This code block may not be properly labeled as switch case */
switchD_CODE_72e5_caseD_de:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_006e(pcVar8);
switchD_CODE_72e5_caseD_df:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_af0c(200);
code_c0x7588:
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_e1:
                    /* WARNING: This code block may not be properly labeled as switch case */
switchD_CODE_72e5_caseD_e2:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_a97f(pcVar8);
switchD_CODE_72e5_caseD_e3:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_e4:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)FUN_CODE_006e(pcVar8);
switchD_CODE_72e5_caseD_e6:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_af0c(pcVar8);
switchD_CODE_72e5_caseD_e7:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)0x0;
code_c0x759f:
          FUN_CODE_a97f(pcVar8);
code_c0x75a3:
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_ea:
                    /* WARNING: This code block may not be properly labeled as switch case */
switchD_CODE_72e5_caseD_eb:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)FUN_CODE_006e(pcVar8);
switchD_CODE_72e5_caseD_ed:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_af0c(pcVar8);
switchD_CODE_72e5_caseD_ee:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_ef:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_a97f(pcVar8);
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_f0:
                    /* WARNING: This code block may not be properly labeled as switch case */
switchD_CODE_72e5_caseD_f1:
                    /* WARNING: This code block may not be properly labeled as switch case */
          param_2 = (char *)FUN_CODE_006e(pcVar8,pcVar8);
code_c0x75c0:
          FUN_CODE_af0c(param_2);
switchD_CODE_72e5_caseD_f5:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_f6:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_a97f(pcVar8);
switchD_CODE_72e5_caseD_f7:
                    /* WARNING: This code block may not be properly labeled as switch case */
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_f8:
                    /* WARNING: This code block may not be properly labeled as switch case */
          param_2 = (char *)FUN_CODE_006e(pcVar8,pcVar8);
code_c0x75d5:
          FUN_CODE_af0c(param_2);
code_c0x75d8:
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_fc:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_a97f(pcVar8,pcVar8);
code_c0x75df:
          pcVar8 = (char *)0x0;
switchD_CODE_72e5_caseD_fe:
                    /* WARNING: This code block may not be properly labeled as switch case */
switchD_CODE_72e5_caseD_ff:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_CODE_006e(pcVar8);
          FUN_CODE_af0c(200);
          _b_4 = 0;
          _a_1 = 1;
          _4_1 = 1;
          _c_5 = '\0';
          _7_1 = 0;
          _3_3 = 0;
          _9_7 = 0;
          _d_2 = 0;
          _4_6 = 0;
        }
LAB_CODE_75fd:
        if (_c_5 != '\0') {
          DAT_EXTMEM_0ec1 = (char *)0x0;
          _c_5 = '\0';
          FUN_CODE_b0af();
          uVar4 = DAT_EXTMEM_031a;
          if (DAT_EXTMEM_031c != '\x02') {
            if (DAT_EXTMEM_031c != '\x01') goto LAB_CODE_7626;
            uVar4 = 0;
          }
          FUN_CODE_b1d6(uVar4,1);
        }
LAB_CODE_7626:
        if (_5_4 != '\0') {
          _5_4 = '\0';
          _3_1 = 1;
          DAT_EXTMEM_0328 = DAT_EXTMEM_0328 == '\0';
          DAT_EXTMEM_0a3c = 0;
          DAT_EXTMEM_0a3d = 0;
          _c_0 = 1;
          DAT_EXTMEM_0309 = 1;
          DAT_EXTMEM_0303 = 6;
          DAT_EXTMEM_030a = 0;
          DAT_EXTMEM_030b = 0;
        }
LAB_CODE_7659:
        bVar7 = 0x1f - (((DAT_EXTMEM_0cd7 < 0x40) << 7) >> 7);
        pcVar3 = (char *)(DAT_EXTMEM_0cd6 - bVar7);
        if (bVar7 <= DAT_EXTMEM_0cd6) {
          pcVar3 = (char *)0x0;
          DAT_EXTMEM_0cd6 = 0;
          DAT_EXTMEM_0cd7 = 0;
          if (_7_6 != '\0') {
            _7_6 = '\0';
            _c_4 = 1;
            pcVar3 = (char *)FUN_CODE_ac8c(3);
            _3_3 = 1;
          }
        }
        return pcVar3;
      case (char *)0xc3:
        goto code_c0x7530;
      case (char *)0xc4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        bVar12 = (param_2 < (char *)0x90) << 7;
        if (param_2 == (char *)0x90) goto switchD_CODE_72e5_caseD_c5;
        goto switchD_CODE_72e5_caseD_c8;
      case (char *)0xc5:
switchD_CODE_72e5_caseD_c5:
                    /* WARNING: This code block may not be properly labeled as switch case */
        goto code_c0x7536;
      case (char *)0xc6:
switchD_CODE_72e5_caseD_c6:
        goto code_c0x7539;
      case (char *)0xc7:
        goto switchD_CODE_72e5_caseD_c7;
      case (char *)0xc9:
        goto switchD_CODE_72e5_caseD_c9;
      case (char *)0xca:
        goto LAB_CODE_75fd;
      case (char *)0xcb:
        goto LAB_CODE_7548;
      case (char *)0xcc:
        goto switchD_CODE_72e5_caseD_cc;
      case (char *)0xcd:
                    /* WARNING: This code block may not be properly labeled as switch case */
        if (!bVar1) goto switchD_CODE_72e5_caseD_c6;
        goto code_c0x754f;
      case (char *)0xce:
                    /* WARNING: This code block may not be properly labeled as switch case */
        uVar4 = EA;
        goto code_c0x7552;
      case (char *)0xcf:
        goto switchD_CODE_72e5_caseD_cf;
      case (char *)0xd0:
        goto switchD_CODE_72e5_caseD_d0;
      case (char *)0xd1:
        goto switchD_CODE_72e5_caseD_d1;
      case (char *)0xd2:
        goto switchD_CODE_72e5_caseD_d2;
      case (char *)0xd3:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)((byte)pcVar8 ^ (byte)pcVar9);
      case (char *)0xd4:
        goto switchD_CODE_72e5_caseD_d4;
      case (char *)0xd5:
        goto switchD_CODE_72e5_caseD_d5;
      case (char *)0xd6:
        goto code_c0x756a;
      case (char *)0xd7:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = pcVar8 + -((char)pcVar3 - cVar2);
      case (char *)0xd8:
                    /* WARNING: This code block may not be properly labeled as switch case */
        TXFLG = param_4;
        goto code_c0x7570;
      case (char *)0xd9:
                    /* WARNING: This code block may not be properly labeled as switch case */
        *(byte *)ZEXT12(param_2) = (byte)pcVar8 ^ (byte)pcVar9;
        goto code_c0x7573;
      case "":
        goto switchD_CODE_72e5_caseD_da;
      case (char *)0xdb:
        goto code_c0x7578;
      case (char *)0xdc:
        goto switchD_CODE_72e5_caseD_dc;
      case (char *)0xdd:
        goto switchD_CODE_72e5_caseD_dd;
      case (char *)0xde:
        goto switchD_CODE_72e5_caseD_de;
      case (char *)0xdf:
        goto switchD_CODE_72e5_caseD_df;
      case (char *)0xe0:
        goto code_c0x7588;
      case (char *)0xe1:
        goto switchD_CODE_72e5_caseD_e1;
      case (char *)0xe2:
        goto switchD_CODE_72e5_caseD_e2;
      case (char *)0xe3:
        goto switchD_CODE_72e5_caseD_e3;
      case (char *)0xe4:
        goto switchD_CODE_72e5_caseD_e4;
      case (char *)0xe5:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)((byte)pcVar8 ^ (byte)pcVar9);
      case (char *)0xe6:
        goto switchD_CODE_72e5_caseD_e6;
      case (char *)0xe7:
        goto switchD_CODE_72e5_caseD_e7;
      case (char *)0xe8:
        goto code_c0x759f;
      case (char *)0xe9:
        goto code_c0x75a3;
      case (char *)0xea:
        goto switchD_CODE_72e5_caseD_ea;
      case (char *)0xeb:
        goto switchD_CODE_72e5_caseD_eb;
      case (char *)0xec:
                    /* WARNING: This code block may not be properly labeled as switch case */
        pcVar8 = (char *)((byte)pcVar8 ^ (byte)pcVar9);
      case (char *)0xed:
        goto switchD_CODE_72e5_caseD_ed;
      case (char *)0xee:
        goto switchD_CODE_72e5_caseD_ee;
      case (char *)0xef:
        goto switchD_CODE_72e5_caseD_ef;
      case (char *)0xf0:
        goto switchD_CODE_72e5_caseD_f0;
      case (char *)0xf1:
        goto switchD_CODE_72e5_caseD_f1;
      case (char *)0xf2:
                    /* WARNING: This code block may not be properly labeled as switch case */
        nop();
        param_2 = (char *)((byte)pcVar8 ^ (byte)pcVar9);
        goto code_c0x75c0;
      case (char *)0xf3:
        goto code_c0x75c0;
      case (char *)0xf4:
      case (char *)0xf5:
        goto switchD_CODE_72e5_caseD_f5;
      case (char *)0xf6:
        goto switchD_CODE_72e5_caseD_f6;
      case "d\x15`\x03\x02":
        goto switchD_CODE_72e5_caseD_f7;
      case "\x15`\x03\x02":
        goto switchD_CODE_72e5_caseD_f8;
      case "`\x03\x02":
                    /* WARNING: This code block may not be properly labeled as switch case */
        nop();
        param_2 = (char *)((byte)pcVar8 ^ (byte)pcVar9);
        goto code_c0x75d5;
      case "\x03\x02":
        goto code_c0x75d5;
      case "\x02":
        goto code_c0x75d8;
      case "":
        goto switchD_CODE_72e5_caseD_fc;
      case "w\"":
        goto code_c0x75df;
      case "\"":
        goto switchD_CODE_72e5_caseD_fe;
      case (char *)0xff:
        goto switchD_CODE_72e5_caseD_ff;
      }
      pbVar14 = &DAT_EXTMEM_0a35;
switchD_CODE_72e5_caseD_e:
                    /* WARNING: This code block may not be properly labeled as switch case */
      pcVar9 = (char *)*pbVar14;
      pcVar8 = pcVar3;
switchD_CODE_72e5_caseD_f:
                    /* WARNING: This code block may not be properly labeled as switch case */
      pbVar14 = &DAT_CODE_b171;
switchD_CODE_72e5_caseD_10:
                    /* WARNING: This code block may not be properly labeled as switch case */
      param_6 = ~pbVar14[ZEXT12(pcVar8)];
switchD_CODE_72e5_caseD_11:
                    /* WARNING: This code block may not be properly labeled as switch case */
      DAT_EXTMEM_0a35 = (byte)pcVar9 | param_6;
      goto LAB_CODE_736f;
    }
  }
  goto LAB_CODE_73c9;
switchD_CODE_72e5_caseD_18:
                    /* WARNING: This code block may not be properly labeled as switch case */
  if (!bVar1) {
    param_4 = param_4 + 1;
switchD_CODE_72e5_caseD_19:
                    /* WARNING: This code block may not be properly labeled as switch case */
LAB_CODE_7332:
    pcVar8 = (char *)0xff;
switchD_CODE_72e5_caseD_1a:
                    /* WARNING: This code block may not be properly labeled as switch case */
    *pbVar14 = (byte)pcVar8;
LAB_CODE_736f:
    bVar12 = ((char *)0x44 < pcVar3) << 7;
    pbVar14 = (byte *)ZEXT12(pcVar3 + -0x45);
    pcVar8 = (char *)0x0;
code_c0x7375:
    pbVar14 = (byte *)CONCAT11(pcVar8 + ('\f' - ((char)bVar12 >> 7)),(char)pbVar14);
switchD_CODE_72e5_caseD_31:
                    /* WARNING: This code block may not be properly labeled as switch case */
    param_7 = (char *)*pbVar14;
    bVar12 = 0;
    pcVar8 = param_7;
switchD_CODE_72e5_caseD_32:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (pcVar8 < (char *)(-2 - ((char)bVar12 >> 7))) {
code_c0x7380:
      pcVar8 = (char *)0xbb;
switchD_CODE_72e5_caseD_34:
                    /* WARNING: This code block may not be properly labeled as switch case */
      bVar12 = CARRY1((byte)pcVar8,(byte)pcVar3) << 7;
      pbVar14 = (byte *)ZEXT12(pcVar8 + (char)pcVar3);
      goto switchD_CODE_72e5_caseD_35;
    }
LAB_CODE_738f:
    if (param_7 == (char *)0xff) {
code_c0x7393:
      bVar1 = (char *)0x44 < pcVar3;
      pbVar14 = (byte *)ZEXT12(pcVar3 + -0x45);
      pcVar8 = (char *)0x0;
code_c0x7399:
      pcVar8 = pcVar8 + ('\f' - ((bVar1 << 7) >> 7));
code_c0x739b:
      pbVar14 = (byte *)CONCAT11(pcVar8,(char)pbVar14);
switchD_CODE_72e5_caseD_3d:
                    /* WARNING: This code block may not be properly labeled as switch case */
      *pbVar14 = 0xfe;
      goto switchD_CODE_72e5_caseD_3e;
    }
    bVar12 = ((char *)0x44 < pcVar3) << 7;
    pbVar14 = (byte *)ZEXT12(pcVar3 + -0x45);
    pcVar8 = (char *)0x0;
code_c0x73a8:
    pbVar14 = (byte *)CONCAT11(pcVar8 + ('\f' - ((char)bVar12 >> 7)),(char)pbVar14);
switchD_CODE_72e5_caseD_42:
                    /* WARNING: This code block may not be properly labeled as switch case */
    *pbVar14 = 0xff;
    goto switchD_CODE_72e5_caseD_43;
  }
  goto code_c0x72c0;
switchD_CODE_72e5_caseD_35:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pcVar8 = (char *)('\f' - ((char)bVar12 >> 7));
switchD_CODE_72e5_caseD_36:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pbVar14 = (byte *)CONCAT11(pcVar8,(char)pbVar14);
  pcVar8 = (char *)*pbVar14;
switchD_CODE_72e5_caseD_37:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pcVar8 = pcVar8 + -1;
code_c0x738c:
  *pbVar14 = (byte)pcVar8;
LAB_CODE_73c9:
  pcVar3 = pcVar3 + '\x01';
switchD_CODE_72e5_caseD_4c:
                    /* WARNING: This code block may not be properly labeled as switch case */
  pcVar8 = (char *)((byte)pcVar3 ^ 0xd);
  goto switchD_CODE_72e5_caseD_4d;
switchD_CODE_72e5_caseD_3e:
                    /* WARNING: This code block may not be properly labeled as switch case */
  goto LAB_CODE_73c9;
switchD_CODE_72e5_caseD_43:
                    /* WARNING: This code block may not be properly labeled as switch case */
  goto LAB_CODE_73c9;
switchD_CODE_72e5_caseD_4d:
                    /* WARNING: This code block may not be properly labeled as switch case */
  if (pcVar8 == (char *)0x0) {
    return (char *)0x0;
  }
  goto LAB_CODE_727e;
}


