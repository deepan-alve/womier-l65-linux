
// ==== CODE:04ad cmd_0x04ad ====

void cmd_0x04ad(void)

{
  if (DAT_EXTMEM_038e == '\x01') {
    DAT_EXTMEM_0139 = 0xd0;
  }
  else if (DAT_EXTMEM_038e == '\x02') {
    DAT_EXTMEM_0139 = 0xd4;
  }
  else if (DAT_EXTMEM_038e == '\x03') {
    DAT_EXTMEM_0139 = 0xd8;
  }
  else {
    if (DAT_EXTMEM_038e != '\0') goto LAB_CODE_04dc;
    DAT_EXTMEM_0139 = 0xcc;
  }
  DAT_EXTMEM_013a = 0;
LAB_CODE_04dc:
  FUN_CODE_b08e();
  return;
}



// ==== CODE:04df cmd_0x04df ====

void cmd_0x04df(void)

{
  FUN_CODE_b161();
  _c_2 = 1;
  return;
}



// ==== CODE:04e5 cmd_0x04e5 ====

void cmd_0x04e5(void)

{
  DAT_EXTMEM_013a = 0;
  DAT_EXTMEM_0139 = DAT_EXTMEM_0d98 * '\x02' + -0x24;
  FUN_CODE_b08e();
  return;
}



// ==== CODE:0505 cmd_0x0505 ====

void cmd_0x0505(void)

{
  DAT_EXTMEM_013a = 0;
  DAT_EXTMEM_0139 = DAT_EXTMEM_0d98 * '\x02' + -0x36;
  DAT_EXTMEM_0f9c = '\x01';
  DAT_EXTMEM_0f9d = 0x7a;
  do {
    *(undefined1 *)
     CONCAT11((DAT_EXTMEM_0f9c - (((0xbc < DAT_EXTMEM_0f9d) << 7) >> 7)) + '\n',
              DAT_EXTMEM_0f9d + 0x43) =
         *(undefined1 *)
          CONCAT11(DAT_EXTMEM_0139 +
                   (DAT_EXTMEM_0f9c - ((CARRY1(DAT_EXTMEM_013a,DAT_EXTMEM_0f9d) << 7) >> 7)),
                   DAT_EXTMEM_013a + DAT_EXTMEM_0f9d);
    DAT_EXTMEM_0f9d = DAT_EXTMEM_0f9d + 1;
    if (DAT_EXTMEM_0f9d == 0) {
      DAT_EXTMEM_0f9c = DAT_EXTMEM_0f9c + '\x01';
    }
  } while ((DAT_EXTMEM_0f9c != '\x02') || (DAT_EXTMEM_0f9d != 0));
  FUN_CODE_b08e();
  return;
}



// ==== CODE:056e cmd_0x056e ====

void cmd_0x056e(void)

{
  if (DAT_EXTMEM_031c == '\0') {
    _a_2 = 1;
    _a_3 = 1;
    DAT_EXTMEM_0e25 = DAT_EXTMEM_031c;
    DAT_EXTMEM_0e26 = DAT_EXTMEM_031c;
    return;
  }
  _a_2 = 0;
  _a_3 = 0;
  return;
}



// ==== CODE:0584 cmd_0x0584 ====

void cmd_0x0584(void)

{
  DAT_EXTMEM_013a = 0;
  DAT_EXTMEM_0139 = DAT_EXTMEM_0d98 * '\x02' + -0x38;
  _a_1 = 1;
  _4_1 = 1;
  FUN_CODE_b08e();
  return;
}


// note: CODE:05e9 was inside FUN_CODE_05de, splitting

// ==== CODE:05e9 cmd_0x05e9 ====

void cmd_0x05e9(void)

{
  return;
}


