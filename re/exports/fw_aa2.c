
// ==== CODE:304b FUN_CODE_304b ====
// callers: FUN_CODE_a284@CODE:a284
// callees: 

void FUN_CODE_304b(void)

{
  byte *pbVar1;
  
  if (_8_2 != '\0') {
    return;
  }
  if (DAT_EXTMEM_0d99 != '\0') {
    if (DAT_EXTMEM_0d99 != '\x01') {
      DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
      DAT_EXTMEM_0941 = 0;
      DAT_EXTMEM_0942 = 1;
      _7_4 = 1;
      _7_7 = 1;
      _c_0 = 1;
      return;
    }
    if (DAT_EXTMEM_0327 != '\0') {
      DAT_EXTMEM_0327 = 0;
      DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
      DAT_EXTMEM_0941 = 0;
      DAT_EXTMEM_0942 = 1;
      _7_4 = 1;
      _7_7 = 1;
      _c_0 = 1;
      return;
    }
    DAT_EXTMEM_0327 = 1;
    DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
    DAT_EXTMEM_0941 = 0;
    DAT_EXTMEM_0942 = 1;
    _7_4 = 1;
    _7_7 = 1;
    _c_0 = 1;
    return;
  }
  if (DAT_EXTMEM_0317 != '\0') {
    DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
    DAT_EXTMEM_0941 = 0;
    DAT_EXTMEM_0942 = 1;
    _7_4 = 1;
    _7_7 = 1;
    _c_0 = 1;
    return;
  }
  if (DAT_EXTMEM_0d9a != '\0') {
    DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
    DAT_EXTMEM_0941 = 0;
    DAT_EXTMEM_0942 = 1;
    _7_4 = 1;
    _7_7 = 1;
    _c_0 = 1;
    return;
  }
  if (DAT_EXTMEM_0313 == '\0') {
    if ((((DAT_EXTMEM_009d != 6) && (DAT_EXTMEM_009d != 0xb)) && (DAT_EXTMEM_009d != 0xf)) &&
       (DAT_EXTMEM_009d != 0x10)) {
      DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
      DAT_EXTMEM_0941 = 0;
      DAT_EXTMEM_0942 = 1;
      _7_4 = 1;
      _7_7 = 1;
      _c_0 = 1;
      return;
    }
    _4_3 = _4_3 ^ 1;
    if (_4_3 == 1) {
      pbVar1 = (byte *)CONCAT11((-(((0xb9 < DAT_EXTMEM_009d * '\x02') << 7) >> 7) -
                                ((CARRY1(DAT_EXTMEM_009d,DAT_EXTMEM_009d) << 7) >> 7)) + '\x03',
                                DAT_EXTMEM_009d * '\x02' + 0x46);
      goto LAB_CODE_30c0;
    }
    pbVar1 = (byte *)CONCAT11((-(((0xb9 < DAT_EXTMEM_009d * '\x02') << 7) >> 7) -
                              ((CARRY1(DAT_EXTMEM_009d,DAT_EXTMEM_009d) << 7) >> 7)) + '\x03',
                              DAT_EXTMEM_009d * '\x02' + 0x46);
  }
  else {
    pbVar1 = &DAT_EXTMEM_0316;
    if (-1 < DAT_EXTMEM_0316) {
      pbVar1 = &DAT_EXTMEM_0316;
LAB_CODE_30c0:
      *pbVar1 = *pbVar1 | 0x80;
      DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
      DAT_EXTMEM_0941 = 0;
      DAT_EXTMEM_0942 = 1;
      _7_4 = 1;
      _7_7 = 1;
      _c_0 = 1;
      return;
    }
  }
  *pbVar1 = *pbVar1 & 0x7f;
  _c_0 = 1;
  _7_7 = 1;
  _7_4 = 1;
  DAT_EXTMEM_0942 = 1;
  DAT_EXTMEM_0941 = 0;
  DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
  return;
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



// ==== CODE:831e FUN_CODE_831e ====
// callers: FUN_CODE_a290@CODE:a290
// callees: 

void FUN_CODE_831e(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  undefined2 uStack_1;
  
  if (_8_2 != '\0') {
    return;
  }
  if (DAT_EXTMEM_0d99 != '\0') {
    DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
    DAT_EXTMEM_0941 = 0;
    DAT_EXTMEM_0942 = 1;
    _7_4 = 1;
    _7_7 = 1;
    return;
  }
  if (DAT_EXTMEM_0d9a == '\x01') {
    if (DAT_EXTMEM_0d9d < (byte)(&DAT_CODE_a0eb)[DAT_EXTMEM_009d]) {
      DAT_EXTMEM_0d9d = DAT_EXTMEM_0d9d + 1;
      _6_5 = 1;
    }
    if (DAT_EXTMEM_0d9d != (&DAT_CODE_a0eb)[DAT_EXTMEM_009d]) goto LAB_CODE_8394;
  }
  else {
    if (DAT_EXTMEM_0d9a != '\x02') {
      if (DAT_EXTMEM_0d9a == '\0') {
        DAT_EXTMEM_0d9d = DAT_EXTMEM_0d9d + 1;
        if ((&DAT_CODE_a0eb)[DAT_EXTMEM_009d] + 1 <= DAT_EXTMEM_0d9d) {
          DAT_EXTMEM_0d9d = 0;
        }
        _6_5 = 1;
      }
      goto LAB_CODE_8394;
    }
    if (DAT_EXTMEM_0d9d != 0) {
      DAT_EXTMEM_0d9d = DAT_EXTMEM_0d9d - 1;
      _6_5 = 1;
    }
    if (DAT_EXTMEM_0d9d != 0) goto LAB_CODE_8394;
  }
  _b_6 = 1;
  DAT_EXTMEM_0da0 = 6;
  DAT_EXTMEM_0ea5 = 0;
  DAT_EXTMEM_0ea6 = 0;
LAB_CODE_8394:
  if (DAT_EXTMEM_0313 == '\0') {
    if (DAT_EXTMEM_0317 == '\0') {
      bVar1 = CARRY1(DAT_EXTMEM_009d,DAT_EXTMEM_009d);
      bVar2 = DAT_EXTMEM_009d * '\x02';
      pbVar4 = (byte *)CONCAT11((bVar1 - (((0xb9 < bVar2) << 7) >> 7)) + '\x03',bVar2 + 0x46);
      *pbVar4 = *pbVar4 & 0x80;
      cVar3 = (bVar1 - (((0xb9 < bVar2) << 7) >> 7)) + '\x03';
      uStack_1 = (byte *)CONCAT11(cVar3,bVar2 + 0x46);
      *uStack_1 = *(byte *)CONCAT11(cVar3,bVar2 + 0x46) | DAT_EXTMEM_0d9d;
    }
    else {
      *(byte *)CONCAT11('\x03' - (((0x9c < DAT_EXTMEM_009d) << 7) >> 7),DAT_EXTMEM_009d + 99) =
           DAT_EXTMEM_0d9d;
    }
  }
  else {
    DAT_EXTMEM_0314 = DAT_EXTMEM_0d9d;
  }
  _7_7 = 1;
  _7_4 = 1;
  DAT_EXTMEM_0942 = 1;
  DAT_EXTMEM_0941 = 0;
  DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
  return;
}



// ==== CODE:ac63 FUN_CODE_ac63 ====
// callers: 
// callees: 

void FUN_CODE_ac63(void)

{
  DAT_EXTMEM_0941 = 0;
  DAT_EXTMEM_0942 = 0;
  if (_8_2 != '\x01') {
    DAT_EXTMEM_0941 = DAT_EXTMEM_0d9a;
    DAT_EXTMEM_0942 = DAT_EXTMEM_0d99;
  }
  DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
  _7_4 = 1;
  return;
}



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



// ==== CODE:85d3 FUN_CODE_85d3 ====
// callers: FUN_CODE_a296@CODE:a296
// callees: FUN_CODE_86b5@CODE:86b5

void FUN_CODE_85d3(void)

{
  if (_8_2 != '\0') {
    FUN_CODE_86b5();
    return;
  }
  if (DAT_EXTMEM_0d99 != '\0') {
    DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
    DAT_EXTMEM_0941 = 0;
    DAT_EXTMEM_0942 = 1;
    _7_4 = 1;
    _7_7 = 1;
    return;
  }
  if (DAT_EXTMEM_009d == 1) {
    FUN_CODE_86b5();
    return;
  }
  if (DAT_EXTMEM_0d9a == '\x01') {
    if (DAT_EXTMEM_0e23 < (byte)(&DAT_CODE_a0d2)[DAT_EXTMEM_009d]) {
      DAT_EXTMEM_0e23 = DAT_EXTMEM_0e23 + 1;
      _6_5 = 1;
    }
    if (DAT_EXTMEM_0e23 != (&DAT_CODE_a0d2)[DAT_EXTMEM_009d]) goto LAB_CODE_8654;
  }
  else {
    if (DAT_EXTMEM_0d9a != '\x02') {
      if (DAT_EXTMEM_0d9a == '\0') {
        DAT_EXTMEM_0e23 = DAT_EXTMEM_0e23 + 1;
        if ((&DAT_CODE_a0d2)[DAT_EXTMEM_009d] + 1 <= DAT_EXTMEM_0e23) {
          DAT_EXTMEM_0e23 = 0;
        }
        _6_5 = 1;
      }
      goto LAB_CODE_8654;
    }
    if (DAT_EXTMEM_0e23 != 0) {
      DAT_EXTMEM_0e23 = DAT_EXTMEM_0e23 - 1;
      _6_5 = 1;
    }
    if (DAT_EXTMEM_0e23 != 0) goto LAB_CODE_8654;
  }
  _b_6 = 1;
  DAT_EXTMEM_0da0 = 6;
  DAT_EXTMEM_0ea5 = 0;
  DAT_EXTMEM_0ea6 = 0;
LAB_CODE_8654:
  if (DAT_EXTMEM_0313 == '\0') {
    *(undefined1 *)
     CONCAT11((CARRY1(DAT_EXTMEM_009d,DAT_EXTMEM_009d) -
              (((0xb8 < DAT_EXTMEM_009d * '\x02') << 7) >> 7)) + '\x03',
              DAT_EXTMEM_009d * '\x02' + 0x47) = BANK0_R7;
  }
  else {
    DAT_EXTMEM_0315 = DAT_EXTMEM_0e23;
  }
  DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
  DAT_EXTMEM_0941 = 0;
  DAT_EXTMEM_0942 = 1;
  _7_4 = 1;
  _7_7 = 1;
  return;
}



// ==== CODE:8ed3 FUN_CODE_8ed3 ====
// callers: FUN_CODE_a28a@CODE:a28a
// callees: FUN_CODE_8f93@CODE:8f93

void FUN_CODE_8ed3(void)

{
  byte bVar1;
  
  if (_8_2 != '\0') {
    FUN_CODE_8f93();
    return;
  }
  if (DAT_EXTMEM_0d99 == '\0') {
    if (DAT_EXTMEM_009d == 3) {
      FUN_CODE_8f93();
      return;
    }
    if (0xe < DAT_EXTMEM_009d) {
      FUN_CODE_8f93(DAT_EXTMEM_009d - 0xf);
      return;
    }
    if ((DAT_EXTMEM_0d9a == '\0') &&
       (DAT_EXTMEM_011c = DAT_EXTMEM_011c + 1,
       (&DAT_CODE_a0b9)[DAT_EXTMEM_009d] + 1 <= DAT_EXTMEM_011c)) {
      DAT_EXTMEM_011c = 0;
    }
    if (DAT_EXTMEM_0313 == '\0') {
      bVar1 = DAT_EXTMEM_009d * '\x02';
      *(byte *)CONCAT11((CARRY1(DAT_EXTMEM_009d,DAT_EXTMEM_009d) - (((0xb8 < bVar1) << 7) >> 7)) +
                        '\x03',bVar1 + 0x47) =
           DAT_EXTMEM_011c |
           *(byte *)CONCAT11((CARRY1(DAT_EXTMEM_009d,DAT_EXTMEM_009d) - (((0xb8 < bVar1) << 7) >> 7)
                             ) + '\x03',bVar1 + 0x47) & 0xf0;
    }
    else {
      DAT_EXTMEM_0316 = DAT_EXTMEM_011c | DAT_EXTMEM_0316 & 0x80;
    }
    _c_0 = 1;
  }
  else if (((DAT_EXTMEM_0d99 == '\x01') && (DAT_EXTMEM_0d9a == '\0')) &&
          ((DAT_EXTMEM_0320 == '\x03' || (DAT_EXTMEM_0320 == '\x04')))) {
    DAT_EXTMEM_0321 = DAT_EXTMEM_0321 + 1;
    if (6 < DAT_EXTMEM_0321) {
      DAT_EXTMEM_0321 = 0;
    }
    _6_5 = 1;
  }
  DAT_EXTMEM_0940 = DAT_EXTMEM_0d9c;
  DAT_EXTMEM_0941 = 0;
  DAT_EXTMEM_0942 = 1;
  _7_4 = 1;
  _7_7 = 1;
  return;
}


