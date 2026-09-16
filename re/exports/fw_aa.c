
// ==== 0xac68: no function ====

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



// ==== CODE:9f70 FUN_CODE_9f70 ====
// callers: 
// callees: 

void FUN_CODE_9f70(void)

{
  if (_8_2 != '\x01') {
    if ((DAT_EXTMEM_0d9b == '\x05') || (DAT_EXTMEM_0d9b == '\a')) {
      if ((DAT_EXTMEM_009d == ' ') && (_a_5 != '\x01')) {
        _4_5 = 1;
        _a_5 = 1;
        _4_1 = 1;
        _7_7 = 1;
        DAT_EXTMEM_0eaa = DAT_EXTMEM_009d;
        DAT_EXTMEM_009d = 0x2d;
        return;
      }
      if (DAT_EXTMEM_0d9b != '\a') {
        return;
      }
    }
    else if (DAT_EXTMEM_0d9b != '\x06') {
      return;
    }
    if ((DAT_EXTMEM_009d == '-') && (_a_5 != '\0')) {
      _c_7 = 1;
      _a_5 = '\0';
      _4_5 = 0;
      DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
      DAT_EXTMEM_0941 = 0;
      DAT_EXTMEM_0942 = 2;
      _7_4 = 1;
      _c_0 = 0;
    }
  }
  return;
}



// ==== 0x30de: no function ====

// ==== 0x7e20: no function ====

// ==== 0x83f8: no function ====

// ==== CODE:b08e FUN_CODE_b08e ====
// callers: FUN_CODE_05ea@CODE:05ea, FUN_CODE_0c90@CODE:0c90, cmd_0x0584@CODE:0584
// callees: FUN_CODE_a6d5@CODE:a6d5

void FUN_CODE_b08e(void)

{
  FUN_CODE_a6d5(DAT_EXTMEM_0139 >> 1,DAT_EXTMEM_0139 >> 1,BANK0_R4,BANK0_R5);
  return;
}



// ==== CODE:b161 FUN_CODE_b161 ====
// callers: FUN_CODE_0c06@CODE:0c06, cmd_0x04df@CODE:04df
// callees: FUN_CODE_a6d5@CODE:a6d5

void FUN_CODE_b161(void)

{
  _4_1 = 1;
  FUN_CODE_a6d5(99,99,0xc6,0);
  return;
}


