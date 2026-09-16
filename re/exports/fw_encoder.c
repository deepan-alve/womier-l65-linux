
// ==== CODE:2021 FUN_CODE_2021 ====
// callers: FUN_CODE_1212@CODE:1212
// callees: FUN_CODE_2cff@CODE:2cff, FUN_CODE_62ca@CODE:62ca, FUN_CODE_8033@CODE:8033, FUN_CODE_95ef@CODE:95ef, FUN_CODE_a1e4@CODE:a1e4, FUN_CODE_aeed@CODE:aeed, FUN_CODE_ec0a@CODE:ec0a

/* WARNING: Instruction at (CODE,0x2022) overlaps instruction at (CODE,0x2021)
    */

void FUN_CODE_2021(byte param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte in_PSW;
  char *pcVar5;
  undefined2 uStack_1;
  
  do {
    *(undefined1 *)
     CONCAT11(param_1 + ('\x0e' - ((char)((in_PSW >> 7 & param_1 >> 4 & 1) << 7) >> 7)),param_2) = 0
    ;
    _8_2 = 0;
    DAT_EXTMEM_0945 = 1;
    DAT_EXTMEM_02e0 = BANK1_R1;
    cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
    uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
    *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) & DAT_CODE_b172;
    FUN_CODE_aeed();
    FUN_CODE_8033(1,BANK1_R0);
    bVar2 = _2_1;
    if (_1_1 != 0) {
      bVar2 = _2_1 & 1 ^ 1;
    }
    if ((char)(bVar2 << 7) < '\0') {
      _e_3 = _0_1 & 1;
      FUN_CODE_95ef(1,BANK1_R0);
    }
    do {
      pcVar5 = (char *)CONCAT11('\x0e' - (((0xd7 < BANK1_R0 * '\x06') << 7) >> 7),
                                BANK1_R0 * '\x06' + 0x28);
      *pcVar5 = *pcVar5 + '\x01';
      cVar3 = BANK1_R0 * '\x06' + 0x9f;
      cVar4 = -(((0x60 < BANK1_R0 * '\x06') << 7) >> 7);
      while( true ) {
        *(undefined1 *)CONCAT11(cVar4,cVar3) = 0;
        do {
          BANK1_R1 = BANK1_R1 + '\x01';
          bVar2 = _1_2;
          if (_2_2 != 0) {
            bVar2 = _1_2 & 1 ^ 1;
          }
          if ((char)((bVar2 & 1 | _0_2) << 7) < '\0') {
            if (_2_2 == 1) {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11(-(((0x5f < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0xa0)) {
                *(undefined1 *)
                 CONCAT11(-(((0x5f < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0xa0) = 0;
                _8_2 = 1;
                DAT_EXTMEM_0945 = 0x81;
                DAT_EXTMEM_02e0 = BANK1_R1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
                *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) | DAT_CODE_b17b;
                _e_3 = _0_2 & 1;
                FUN_CODE_62ca(2,BANK1_R0);
                bVar2 = _2_2;
                if (_1_2 != 0) {
                  bVar2 = _2_2 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_2 & 1;
                  FUN_CODE_95ef(2,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11(-(((0x5f < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0xa0);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0x29;
              cVar4 = '\x0e' - (((0xd6 < BANK1_R0 * '\x06') << 7) >> 7);
            }
            else {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11('\x0e' - (((0xd6 < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0x29)) {
                *(undefined1 *)
                 CONCAT11('\x0e' - (((0xd6 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x29
                         ) = 0;
                _8_2 = 0;
                DAT_EXTMEM_0945 = 1;
                DAT_EXTMEM_02e0 = BANK1_R1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
                *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) & DAT_CODE_b173;
                FUN_CODE_aeed();
                FUN_CODE_8033(2,BANK1_R0);
                bVar2 = _2_2;
                if (_1_2 != 0) {
                  bVar2 = _2_2 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_2 & 1;
                  FUN_CODE_95ef(2,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11('\x0e' - (((0xd6 < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0x29);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0xa0;
              cVar4 = -(((0x5f < BANK1_R0 * '\x06') << 7) >> 7);
            }
            *(undefined1 *)CONCAT11(cVar4,cVar3) = 0;
          }
          BANK1_R1 = BANK1_R1 + '\x01';
          bVar2 = _1_3;
          if (_2_3 != 0) {
            bVar2 = _1_3 & 1 ^ 1;
          }
          if ((char)((bVar2 & 1 | _0_3) << 7) < '\0') {
            if (_2_3 == 1) {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11(-(((0x5e < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0xa1)) {
                *(undefined1 *)
                 CONCAT11(-(((0x5e < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0xa1) = 0;
                _8_2 = 1;
                DAT_EXTMEM_0945 = 0x81;
                DAT_EXTMEM_02e0 = BANK1_R1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
                *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) | DAT_CODE_b17c;
                _e_3 = _0_3 & 1;
                FUN_CODE_62ca(3,BANK1_R0);
                bVar2 = _2_3;
                if (_1_3 != 0) {
                  bVar2 = _2_3 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_3 & 1;
                  FUN_CODE_95ef(3,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11(-(((0x5e < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0xa1);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0x2a;
              cVar4 = '\x0e' - (((0xd5 < BANK1_R0 * '\x06') << 7) >> 7);
            }
            else {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11('\x0e' - (((0xd5 < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0x2a)) {
                *(undefined1 *)
                 CONCAT11('\x0e' - (((0xd5 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x2a
                         ) = 0;
                _8_2 = 0;
                DAT_EXTMEM_0945 = 1;
                DAT_EXTMEM_02e0 = BANK1_R1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
                *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) & DAT_CODE_b174;
                FUN_CODE_aeed();
                FUN_CODE_8033(3,BANK1_R0);
                bVar2 = _2_3;
                if (_1_3 != 0) {
                  bVar2 = _2_3 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_3 & 1;
                  FUN_CODE_95ef(3,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11('\x0e' - (((0xd5 < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0x2a);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0xa1;
              cVar4 = -(((0x5e < BANK1_R0 * '\x06') << 7) >> 7);
            }
            *(undefined1 *)CONCAT11(cVar4,cVar3) = 0;
          }
          BANK1_R1 = BANK1_R1 + '\x01';
          bVar2 = _1_4;
          if (_2_4 != 0) {
            bVar2 = _1_4 & 1 ^ 1;
          }
          if ((char)((bVar2 & 1 | _0_4) << 7) < '\0') {
            if (_2_4 == 1) {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11(-(((0x5d < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0xa2)) {
                *(undefined1 *)
                 CONCAT11(-(((0x5d < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0xa2) = 0;
                _8_2 = 1;
                DAT_EXTMEM_0945 = 0x81;
                DAT_EXTMEM_02e0 = BANK1_R1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
                *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) | DAT_CODE_b17d;
                _e_3 = _0_4 & 1;
                FUN_CODE_62ca(4,BANK1_R0);
                bVar2 = _2_4;
                if (_1_4 != 0) {
                  bVar2 = _2_4 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_4 & 1;
                  FUN_CODE_95ef(4,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11(-(((0x5d < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0xa2);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0x2b;
              cVar4 = '\x0e' - (((0xd4 < BANK1_R0 * '\x06') << 7) >> 7);
            }
            else {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11('\x0e' - (((0xd4 < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0x2b)) {
                *(undefined1 *)
                 CONCAT11('\x0e' - (((0xd4 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x2b
                         ) = 0;
                _8_2 = 0;
                DAT_EXTMEM_0945 = 1;
                DAT_EXTMEM_02e0 = BANK1_R1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
                *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) & DAT_CODE_b175;
                FUN_CODE_aeed();
                FUN_CODE_8033(4,BANK1_R0);
                bVar2 = _2_4;
                if (_1_4 != 0) {
                  bVar2 = _2_4 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_4 & 1;
                  FUN_CODE_95ef(4,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11('\x0e' - (((0xd4 < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0x2b);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0xa2;
              cVar4 = -(((0x5d < BANK1_R0 * '\x06') << 7) >> 7);
            }
            *(undefined1 *)CONCAT11(cVar4,cVar3) = 0;
          }
          BANK1_R1 = BANK1_R1 + '\x01';
          bVar2 = _1_5;
          if (_2_5 != 0) {
            bVar2 = _1_5 & 1 ^ 1;
          }
          if ((char)((bVar2 & 1 | _0_5) << 7) < '\0') {
            if (_2_5 == 1) {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11(-(((0x5c < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0xa3)) {
                *(undefined1 *)
                 CONCAT11(-(((0x5c < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0xa3) = 0;
                _8_2 = 1;
                DAT_EXTMEM_0945 = 0x81;
                DAT_EXTMEM_02e0 = BANK1_R1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
                *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) | DAT_CODE_b17e;
                _e_3 = _0_5 & 1;
                FUN_CODE_62ca(5,BANK1_R0);
                bVar2 = _2_5;
                if (_1_5 != 0) {
                  bVar2 = _2_5 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_5 & 1;
                  FUN_CODE_95ef(5,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11(-(((0x5c < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0xa3);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0x2c;
              cVar4 = '\x0e' - (((0xd3 < BANK1_R0 * '\x06') << 7) >> 7);
            }
            else {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11('\x0e' - (((0xd3 < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0x2c)) {
                *(undefined1 *)
                 CONCAT11('\x0e' - (((0xd3 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x2c
                         ) = 0;
                _8_2 = 0;
                DAT_EXTMEM_0945 = 1;
                DAT_EXTMEM_02e0 = BANK1_R1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
                *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) & DAT_CODE_b176;
                FUN_CODE_aeed();
                FUN_CODE_8033(5,BANK1_R0);
                bVar2 = _2_5;
                if (_1_5 != 0) {
                  bVar2 = _2_5 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_5 & 1;
                  FUN_CODE_95ef(5,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11('\x0e' - (((0xd3 < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0x2c);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0xa3;
              cVar4 = -(((0x5c < BANK1_R0 * '\x06') << 7) >> 7);
            }
            *(undefined1 *)CONCAT11(cVar4,cVar3) = 0;
          }
          bVar2 = BANK1_R0;
          BANK1_R0 = BANK1_R0 + 1;
          if (0x14 < BANK1_R0) {
            FUN_CODE_aeed(bVar2 - 0x14);
            cVar4 = DAT_EXTMEM_0328;
            if (DAT_EXTMEM_0328 == '\0') {
              if (((_5_6 != '\0') && (_5_5 != '\x01')) && (_a_0 != '\x01')) {
                _5_6 = '\0';
                if (_5_7 == '\0') {
                  DAT_EXTMEM_0a41 = 0xea;
                }
                else {
                  DAT_EXTMEM_0a41 = 0xe9;
                }
                cVar4 = '\0';
                DAT_EXTMEM_0a42 = 0;
                _a_0 = '\x01';
                _5_5 = '\x01';
                DAT_INTMEM_6f = 0;
              }
              if ((_5_5 != '\0') && (_a_0 != '\x01')) {
                bVar2 = DAT_INTMEM_6f + 1;
                cVar4 = DAT_INTMEM_6f - 9;
                DAT_INTMEM_6f = bVar2;
                if (9 < bVar2) {
                  cVar4 = '\0';
                  DAT_INTMEM_6f = 0;
                  _5_5 = '\0';
                  DAT_EXTMEM_0a41 = 0;
                  DAT_EXTMEM_0a42 = 0;
                  _a_0 = '\x01';
                }
              }
            }
            if (_7_7 != '\0') {
              _7_7 = '\0';
              FUN_CODE_a1e4(cVar4);
            }
            if (DAT_EXTMEM_031c == '\0') {
              FUN_CODE_ec0a();
              return;
            }
            FUN_CODE_2cff();
            return;
          }
          DAT_INTMEM_22 =
               *(undefined1 *)CONCAT11('\n' - (((0xe9 < BANK1_R0) << 7) >> 7),bVar2 + 0x17);
          DAT_INTMEM_21 =
               *(undefined1 *)CONCAT11('\t' - (((0x19 < BANK1_R0) << 7) >> 7),bVar2 - 0x19);
          DAT_INTMEM_20 =
               *(undefined1 *)CONCAT11('\t' - (((0xe2 < BANK1_R0) << 7) >> 7),bVar2 + 0x1e);
          BANK1_R1 = BANK1_R0 * '\x06';
          bVar1 = _1_0;
          if (_2_0 != 0) {
            bVar1 = _1_0 & 1 ^ 1;
          }
          if ((char)((bVar1 & 1 | _0_0) << 7) < '\0') {
            if (_2_0 == 1) {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11(-(((0x61 < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0x9e)) {
                *(undefined1 *)
                 CONCAT11(-(((0x61 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x9e) = 0;
                _8_2 = 1;
                DAT_EXTMEM_0945 = 0x81;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,bVar2 - 0x19);
                DAT_EXTMEM_02e0 = BANK1_R1;
                *uStack_1 = *(byte *)CONCAT11(cVar4,bVar2 - 0x19) | DAT_CODE_b179;
                _e_3 = _0_0 & 1;
                FUN_CODE_62ca(0,BANK1_R0);
                bVar2 = _2_0;
                if (_1_0 != 0) {
                  bVar2 = _2_0 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_0 & 1;
                  FUN_CODE_95ef(0,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11(-(((0x61 < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0x9e);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0x27;
              cVar4 = '\x0e' - (((0xd8 < BANK1_R0 * '\x06') << 7) >> 7);
            }
            else {
              if (BANK1_R6 <=
                  *(byte *)CONCAT11('\x0e' - (((0xd8 < BANK1_R0 * '\x06') << 7) >> 7),
                                    BANK1_R0 * '\x06' + 0x27)) {
                *(undefined1 *)
                 CONCAT11('\x0e' - (((0xd8 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x27
                         ) = 0;
                _8_2 = 0;
                DAT_EXTMEM_0945 = 1;
                cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
                uStack_1 = (byte *)CONCAT11(cVar4,bVar2 - 0x19);
                DAT_EXTMEM_02e0 = BANK1_R1;
                *uStack_1 = *(byte *)CONCAT11(cVar4,bVar2 - 0x19) & DAT_CODE_b171;
                FUN_CODE_aeed();
                FUN_CODE_8033(0,BANK1_R0);
                bVar2 = _2_0;
                if (_1_0 != 0) {
                  bVar2 = _2_0 & 1 ^ 1;
                }
                if ((char)(bVar2 << 7) < '\0') {
                  _e_3 = _0_0 & 1;
                  FUN_CODE_95ef(0,BANK1_R0);
                }
              }
              pcVar5 = (char *)CONCAT11('\x0e' - (((0xd8 < BANK1_R0 * '\x06') << 7) >> 7),
                                        BANK1_R0 * '\x06' + 0x27);
              *pcVar5 = *pcVar5 + '\x01';
              cVar3 = BANK1_R0 * '\x06' + 0x9e;
              cVar4 = -(((0x61 < BANK1_R0 * '\x06') << 7) >> 7);
            }
            *(undefined1 *)CONCAT11(cVar4,cVar3) = 0;
          }
          BANK1_R1 = BANK1_R1 + '\x01';
          bVar2 = _1_1;
          if (_2_1 != 0) {
            bVar2 = _1_1 & 1 ^ 1;
          }
        } while (-1 < (char)((bVar2 & 1 | _0_1) << 7));
        if (_2_1 != 1) break;
        if (BANK1_R6 <=
            *(byte *)CONCAT11(-(((0x60 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x9f)) {
          *(undefined1 *)
           CONCAT11(-(((0x60 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x9f) = 0;
          _8_2 = 1;
          DAT_EXTMEM_0945 = 0x81;
          DAT_EXTMEM_02e0 = BANK1_R1;
          cVar4 = '\t' - (((0x19 < BANK1_R0) << 7) >> 7);
          uStack_1 = (byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a);
          *uStack_1 = *(byte *)CONCAT11(cVar4,BANK1_R0 - 0x1a) | DAT_CODE_b17a;
          _e_3 = _0_1 & 1;
          FUN_CODE_62ca(1,BANK1_R0);
          bVar2 = _2_1;
          if (_1_1 != 0) {
            bVar2 = _2_1 & 1 ^ 1;
          }
          if ((char)(bVar2 << 7) < '\0') {
            _e_3 = _0_1 & 1;
            FUN_CODE_95ef(1,BANK1_R0);
          }
        }
        pcVar5 = (char *)CONCAT11(-(((0x60 < BANK1_R0 * '\x06') << 7) >> 7),BANK1_R0 * '\x06' + 0x9f
                                 );
        *pcVar5 = *pcVar5 + '\x01';
        cVar3 = BANK1_R0 * '\x06' + 0x28;
        cVar4 = '\x0e' - (((0xd7 < BANK1_R0 * '\x06') << 7) >> 7);
      }
    } while ((*(byte *)CONCAT11('\x0e' - (((0xd7 < BANK1_R0 * '\x06') << 7) >> 7),
                                BANK1_R0 * '\x06' + 0x28) < BANK1_R6) << 7 < '\0');
    in_PSW = (0xd7 < BANK1_R0 * '\x06') << 7;
    param_2 = BANK1_R0 * '\x06' + 0x28;
    param_1 = 0;
  } while( true );
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


