
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



// ==== CODE:41db FUN_CODE_41db ====
// callers: FUN_CODE_3fb6@CODE:3fb6
// callees: FUN_CODE_429e@CODE:429e, FUN_CODE_42c3@CODE:42c3, FUN_CODE_42d3@CODE:42d3

void FUN_CODE_41db(void)

{
  byte bVar1;
  
  if (DAT_EXTMEM_0d99 == '\x04') {
    DAT_EXTMEM_09e3 = 0;
    DAT_EXTMEM_09e4 = 0;
    if (_b_7 != '\0') {
      _b_7 = 0;
      return;
    }
  }
  else {
    if (DAT_EXTMEM_0d99 == '\x05') {
      FUN_CODE_429e();
      return;
    }
    if (DAT_EXTMEM_0d99 == '\x06') {
      FUN_CODE_429e();
      return;
    }
    if (DAT_EXTMEM_0d99 == '\a') {
      FUN_CODE_429e();
      return;
    }
    if (DAT_EXTMEM_0d99 == '\b') {
      if ((_9_5 != '\x01') && (_a_5 != '\x01')) {
        _c_5 = 0;
        return;
      }
    }
    else {
      if (DAT_EXTMEM_0d99 == '\n') {
        FUN_CODE_42c3();
        return;
      }
      if (DAT_EXTMEM_0d99 == '\x11') {
        FUN_CODE_42d3();
        return;
      }
      if (((DAT_EXTMEM_0d99 == '\x1d') && (_9_5 == '\0')) && (_a_5 == '\0')) {
        if ((_3_1 != '\x01') && (_5_4 != '\0')) {
          if (DAT_EXTMEM_0328 == '\0') {
            DAT_EXTMEM_0a41 = 0xe2;
            DAT_EXTMEM_0a42 = 0;
            DAT_EXTMEM_095c = 0;
            DAT_INTMEM_6f = 0;
            _a_0 = 1;
            _5_5 = 1;
          }
          else if ((DAT_EXTMEM_0328 != '\0') && (_a_3 != '\x01')) {
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
            DAT_EXTMEM_0317 = DAT_EXTMEM_0318 == 0x12;
            if ((bool)DAT_EXTMEM_0317) {
              DAT_EXTMEM_009d = 0x20;
            }
            _c_0 = 1;
          }
        }
        _5_4 = 0;
        _3_1 = 0;
        return;
      }
    }
  }
  return;
}



// ==== CODE:0ab2 FUN_CODE_0ab2 ====
// callers: FUN_CODE_05ea@CODE:05ea
// callees: FUN_CODE_af0c@CODE:af0c, FUN_CODE_b08e@CODE:b08e

void FUN_CODE_0ab2(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  sVar3 = (ushort)DAT_EXTMEM_0d98 * 0xe;
  while( true ) {
    DAT_EXTMEM_0139 = (char)((ushort)sVar3 >> 8);
    DAT_EXTMEM_013a = (byte)sVar3;
    bVar2 = BANK1_R1 - (((DAT_EXTMEM_0390 < BANK1_R2 + 1) << 7) >> 7);
    if (DAT_EXTMEM_038f < bVar2) break;
    *(undefined1 *)
     CONCAT11(((DAT_EXTMEM_0139 + (BANK1_R1 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7))) -
              (((0xbc < DAT_EXTMEM_013a + BANK1_R2) << 7) >> 7)) + '\n',
              DAT_EXTMEM_013a + BANK1_R2 + 0x43) =
         *(undefined1 *)
          CONCAT11((BANK1_R1 - (((0xd9 < BANK1_R2) << 7) >> 7)) + '\x01',BANK1_R2 + 0x26);
    BANK1_R2 = BANK1_R2 + 1;
    sVar3 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
      sVar3 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    }
  }
  FUN_CODE_af0c(DAT_EXTMEM_038f - bVar2,1);
  if (DAT_EXTMEM_0d98 != DAT_EXTMEM_02e2) goto LAB_CODE_0b8a;
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
LAB_CODE_0b8a:
  BANK1_R1 = '\0';
  BANK1_R2 = 2;
  do {
    cVar4 = BANK1_R2 + 0x1f;
    cVar1 = BANK1_R1 - (((0xe0 < BANK1_R2) << 7) >> 7);
    *(undefined1 *)(BANK1_R2 + 0x33) = BANK0_R7;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x16 || BANK1_R1 != '\0');
  FUN_CODE_acb5(*(undefined1 *)CONCAT11(cVar1 + '\x01',cVar4));
  if (_c_1 != '\x01') {
    bVar2 = EPCON;
    EPCON = bVar2 & 0xfb;
    P0_2 = 1;
  }
  return;
}



// ==== CODE:0ab2 FUN_CODE_0ab2 ====
// callers: FUN_CODE_05ea@CODE:05ea
// callees: FUN_CODE_af0c@CODE:af0c, FUN_CODE_b08e@CODE:b08e

void FUN_CODE_0ab2(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  
  BANK1_R1 = '\0';
  BANK1_R2 = 0;
  sVar3 = (ushort)DAT_EXTMEM_0d98 * 0xe;
  while( true ) {
    DAT_EXTMEM_0139 = (char)((ushort)sVar3 >> 8);
    DAT_EXTMEM_013a = (byte)sVar3;
    bVar2 = BANK1_R1 - (((DAT_EXTMEM_0390 < BANK1_R2 + 1) << 7) >> 7);
    if (DAT_EXTMEM_038f < bVar2) break;
    *(undefined1 *)
     CONCAT11(((DAT_EXTMEM_0139 + (BANK1_R1 - ((CARRY1(DAT_EXTMEM_013a,BANK1_R2) << 7) >> 7))) -
              (((0xbc < DAT_EXTMEM_013a + BANK1_R2) << 7) >> 7)) + '\n',
              DAT_EXTMEM_013a + BANK1_R2 + 0x43) =
         *(undefined1 *)
          CONCAT11((BANK1_R1 - (((0xd9 < BANK1_R2) << 7) >> 7)) + '\x01',BANK1_R2 + 0x26);
    BANK1_R2 = BANK1_R2 + 1;
    sVar3 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
      sVar3 = CONCAT11(DAT_EXTMEM_0139,DAT_EXTMEM_013a);
    }
  }
  FUN_CODE_af0c(DAT_EXTMEM_038f - bVar2,1);
  if (DAT_EXTMEM_0d98 != DAT_EXTMEM_02e2) goto LAB_CODE_0b8a;
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
LAB_CODE_0b8a:
  BANK1_R1 = '\0';
  BANK1_R2 = 2;
  do {
    cVar4 = BANK1_R2 + 0x1f;
    cVar1 = BANK1_R1 - (((0xe0 < BANK1_R2) << 7) >> 7);
    *(undefined1 *)(BANK1_R2 + 0x33) = BANK0_R7;
    BANK1_R2 = BANK1_R2 + 1;
    if (BANK1_R2 == 0) {
      BANK1_R1 = BANK1_R1 + '\x01';
    }
  } while (BANK1_R2 != 0x16 || BANK1_R1 != '\0');
  FUN_CODE_acb5(*(undefined1 *)CONCAT11(cVar1 + '\x01',cVar4));
  if (_c_1 != '\x01') {
    bVar2 = EPCON;
    EPCON = bVar2 & 0xfb;
    P0_2 = 1;
  }
  return;
}



// ==== CODE:32fa FUN_CODE_32fa ====
// callers: FUN_CODE_32bc@CODE:32bc
// callees: 

void FUN_CODE_32fa(char param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  
  DAT_INTMEM_35 = 0x13;
  DAT_INTMEM_36 = 0x43;
  DAT_INTMEM_37 = DAT_EXTMEM_02e2;
  DAT_INTMEM_38 = DAT_EXTMEM_0d98;
  DAT_INTMEM_39 = param_1 << 4 | DAT_EXTMEM_0390;
  DAT_EXTMEM_013a = (byte)((ushort)DAT_EXTMEM_0d98 * 0xe);
  DAT_EXTMEM_0139 = (char)((ushort)DAT_EXTMEM_0d98 * 0xe >> 8) + -0x1e;
  bVar2 = 0;
  do {
    bVar1 = CARRY1(DAT_EXTMEM_013a,bVar2);
    cVar3 = DAT_EXTMEM_013a + bVar2;
    *(undefined1 *)(bVar2 + 0x3a) = BANK0_R7;
    bVar2 = bVar2 + 1;
  } while (bVar2 != 0xe);
  FUN_CODE_acb5(*(undefined1 *)CONCAT11(DAT_EXTMEM_0139 - ((bVar1 << 7) >> 7),cVar3));
  if (DAT_EXTMEM_0d98 == 0x23) {
    DAT_EXTMEM_0390 = 8;
  }
  else {
    DAT_EXTMEM_0390 = 0xe;
  }
  DAT_EXTMEM_038f = 0;
  DAT_EXTMEM_095c = 9;
  DAT_EXTMEM_0d98 = DAT_EXTMEM_0d98 + 1;
  if (DAT_EXTMEM_0d98 != DAT_EXTMEM_02e2) {
    return;
  }
  FUN_CODE_34d2();
  return;
}



// ==== CODE:3316 FUN_CODE_3316 ====
// callers: FUN_CODE_32bc@CODE:32bc
// callees: FUN_CODE_34d2@CODE:34d2, FUN_CODE_acb5@CODE:acb5

void FUN_CODE_3316(char param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  
  DAT_INTMEM_35 = 0x13;
  DAT_INTMEM_36 = 0x43;
  DAT_INTMEM_37 = DAT_EXTMEM_02e2;
  DAT_INTMEM_38 = DAT_EXTMEM_0d98;
  DAT_INTMEM_39 = param_1 << 4 | DAT_EXTMEM_0390;
  DAT_EXTMEM_013a = (byte)((ushort)DAT_EXTMEM_0d98 * 0xe);
  DAT_EXTMEM_0139 = (char)((ushort)DAT_EXTMEM_0d98 * 0xe >> 8) + -0x16;
  bVar2 = 0;
  do {
    bVar1 = CARRY1(DAT_EXTMEM_013a,bVar2);
    cVar3 = DAT_EXTMEM_013a + bVar2;
    *(undefined1 *)(bVar2 + 0x3a) = BANK0_R7;
    bVar2 = bVar2 + 1;
  } while (bVar2 != 0xe);
  FUN_CODE_acb5(*(undefined1 *)CONCAT11(DAT_EXTMEM_0139 - ((bVar1 << 7) >> 7),cVar3));
  if (DAT_EXTMEM_0d98 == 0x23) {
    DAT_EXTMEM_0390 = 8;
  }
  else {
    DAT_EXTMEM_0390 = 0xe;
  }
  DAT_EXTMEM_038f = 0;
  DAT_EXTMEM_095c = 9;
  DAT_EXTMEM_0d98 = DAT_EXTMEM_0d98 + 1;
  if (DAT_EXTMEM_0d98 != DAT_EXTMEM_02e2) {
    return;
  }
  FUN_CODE_34d2();
  return;
}


