
// ==== CODE:a643 FUN_CODE_a643 ====
// callers: FUN_CODE_9540@CODE:9540
// callees: FUN_CODE_969d@CODE:969d

char FUN_CODE_a643(void)

{
  byte bVar1;
  char cVar2;
  
  if (DAT_EXTMEM_0fd3 == '\x01') {
    cVar2 = FUN_CODE_969d();
    bVar1 = HADDR;
    HADDR = bVar1 | 4;
    bVar1 = DAT_SFR_92;
    DAT_SFR_92 = bVar1 & 0xbf;
    bVar1 = HADDR;
    HADDR = bVar1 | 1;
    return cVar2;
  }
  if ((DAT_EXTMEM_0fd3 != '\x02') && (DAT_EXTMEM_0fd3 != '\t')) {
    DAT_EXTMEM_0fd3 = 0;
    bVar1 = HADDR;
    HADDR = bVar1 | 8;
    bVar1 = DAT_SFR_92;
    DAT_SFR_92 = bVar1 & 0xbf;
    bVar1 = HADDR;
    HADDR = bVar1 | 1;
    cVar2 = DAT_EXTMEM_0fae;
    if ((DAT_EXTMEM_0fae == '\0') && (cVar2 = DAT_EXTMEM_0faf, DAT_EXTMEM_0faf == '\x05')) {
      DAT_SFR_96 = DAT_EXTMEM_0fb0;
      cVar2 = DAT_EXTMEM_0fb0;
    }
    return cVar2;
  }
  bVar1 = DAT_SFR_92;
  DAT_SFR_92 = bVar1 & 0xbf;
  bVar1 = HADDR;
  HADDR = bVar1 | 1;
  bVar1 = HADDR;
  HADDR = bVar1 | 8;
  return DAT_EXTMEM_0fd3;
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



// ==== CODE:ec00 FUN_CODE_ec00 ====
// callers: FUN_CODE_0200@CODE:0200, FUN_CODE_05ea@CODE:05ea
// callees: 

void FUN_CODE_ec00(void)

{
  byte bVar1;
  
  FIFLG = 0xff;
  bVar1 = TCON;
  TCON = bVar1 | 0x87;
  bVar1 = P3;
  P3 = bVar1 | 0x2d;
  return;
}



// ==== CODE:3f46 FUN_CODE_3f46 ====
// callers: FUN_CODE_0dbb@CODE:0dbb, FUN_CODE_1108@CODE:1108, FUN_CODE_461b@CODE:461b, FUN_CODE_5108@CODE:5108, FUN_CODE_5847@CODE:5847, FUN_CODE_5a80@CODE:5a80, FUN_CODE_5eb7@CODE:5eb7, FUN_CODE_60c2@CODE:60c2, FUN_CODE_62ca@CODE:62ca, FUN_CODE_64b1@CODE:64b1, FUN_CODE_6a02@CODE:6a02, FUN_CODE_6bb6@CODE:6bb6, FUN_CODE_6d88@CODE:6d88, FUN_CODE_7108@CODE:7108, FUN_CODE_7d34@CODE:7d34, FUN_CODE_8033@CODE:8033, FUN_CODE_8d4e@CODE:8d4e, FUN_CODE_9e0d@CODE:9e0d, FUN_CODE_a2a3@CODE:a2a3
// callees: 

char FUN_CODE_3f46(byte param_1,undefined2 param_2,byte param_3)

{
  return (char)((ushort)param_1 * (ushort)param_3 >> 8) +
         ((char)((ushort)param_2 >> 8) -
         ((CARRY1((byte)((ushort)param_1 * (ushort)param_3),(byte)param_2) << 7) >> 7));
}



// ==== CODE:ae09 FUN_CODE_ae09 ====
// callers: FUN_CODE_78f4@CODE:78f4, FUN_CODE_8954@CODE:8954, FUN_CODE_8c88@CODE:8c88, FUN_CODE_9540@CODE:9540
// callees: 

void FUN_CODE_ae09(void)

{
  if (DAT_EXTMEM_031c == '\0') {
    DAT_SFR_96 = 0;
    DAT_SFR_94 = 0x5f;
    DAT_SFR_95 = 0x77;
    DAT_SFR_91 = 0xc4;
    DAT_EXTMEM_0fba = 1;
    DAT_EXTMEM_0fbc = 1;
    DAT_EXTMEM_0fb8 = 0;
    DAT_EXTMEM_0fb9 = 0;
  }
  return;
}



// ==== CODE:9b66 FUN_CODE_9b66 ====
// callers: FUN_CODE_9540@CODE:9540
// callees: FUN_CODE_0100@CODE:0100, FUN_CODE_3f78@CODE:3f78

void FUN_CODE_9b66(void)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  
  DAT_EXTMEM_0f9a = 0x55;
  DAT_EXTMEM_0f9b = 0xb1;
  DAT_EXTMEM_0fc8 = 0;
  FUN_CODE_0100();
  DAT_EXTMEM_0fd1 = '\0';
  while( true ) {
    bVar2 = DAT_EXTMEM_0f9a;
    if ((*(char *)CONCAT11(DAT_EXTMEM_0f9a,DAT_EXTMEM_0f9b) == BANK0_R4) &&
       (bVar2 = DAT_EXTMEM_0faf,
       *(char *)(CONCAT11(DAT_EXTMEM_0f9a,DAT_EXTMEM_0f9b) + 1) == BANK0_R6)) break;
    bVar1 = 0xfc < DAT_EXTMEM_0f9b;
    DAT_EXTMEM_0f9b = DAT_EXTMEM_0f9b + 3;
    DAT_EXTMEM_0f9a = DAT_EXTMEM_0f9a - ((bVar1 << 7) >> 7);
    if (0x55U - (((DAT_EXTMEM_0f9b < 0xf0) << 7) >> 7) <= DAT_EXTMEM_0f9a) {
LAB_CODE_9bd5:
      sVar3 = CONCAT11('U' - (((0x8dU < (byte)(DAT_EXTMEM_0fd1 * '\x03')) << 7) >> 7),
                       DAT_EXTMEM_0fd1 * '\x03' + 0x72);
      FUN_CODE_3f78(*(undefined1 *)(sVar3 + 2),*(undefined1 *)(sVar3 + 1),DAT_EXTMEM_0fae,bVar2);
      return;
    }
  }
  DAT_EXTMEM_0fd1 = *(char *)(CONCAT11(DAT_EXTMEM_0f9a,DAT_EXTMEM_0f9b) + 2);
  bVar2 = DAT_EXTMEM_0f9a;
  goto LAB_CODE_9bd5;
}


