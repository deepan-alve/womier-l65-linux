
// ==== 0049b4b0 FUN_0049b4b0 ====
// callers: FUN_0049bad0@0049bad0
// callees: 

undefined4 FUN_0049b4b0(int param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined1 uVar5;
  int in_EAX;
  char *pcVar6;
  undefined1 uVar7;
  byte *pbVar8;
  int iVar9;
  int unaff_ESI;
  uint uVar10;
  byte *pbVar11;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar2 = *(int *)(*(int *)(in_EAX + 0x10) + 0x24);
  bVar4 = *(byte *)(param_1 + 0x243c);
  iVar9 = iVar2 + 0x18;
  if (((param_2 & 0x20) != 0) && (*(int *)(iVar2 + 0x2d95) != 0)) {
    (*DAT_0065d3e0)(L"ResetItem:");
    pcVar6 = (char *)(iVar2 + 0x2d96);
    local_8 = 2;
    do {
      uVar10 = (uint)(byte)pcVar6[-1];
      cVar1 = *pcVar6;
      if ((uVar10 != 0) || (cVar1 != '\0')) {
        (*DAT_0065d3e0)(L"Cfg[%d]=%02x",uVar10,cVar1);
        *(char *)(uVar10 + unaff_ESI) = cVar1;
      }
      pcVar6 = pcVar6 + 2;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if ((param_2 & 2) != 0) {
    *(undefined1 *)(unaff_ESI + 0x21) = *(undefined1 *)(iVar2 + (uint)bVar4 * 0x28 + 0x2fd6);
    pbVar11 = (byte *)(iVar2 + 0x2fd6);
    local_c = 1;
    pbVar8 = (byte *)(param_1 + 0x2f88);
    local_4 = 0x13;
    do {
      if (((*(uint *)(iVar2 + 0x2d44) & local_c) == 0) && (*pbVar11 != 0)) {
        uVar7 = *(undefined1 *)(pbVar8[1] + 0x2e10 + iVar9);
        if (pbVar8[2] == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = *(byte *)(iVar2 + 0x2fa1);
        }
        iVar3 = (uint)*pbVar11 * 2;
        bVar4 = bVar4 & 0xf | *(char *)(*pbVar8 + 0x2df0 + iVar9) << 4;
        *(undefined1 *)(iVar3 + 0x53 + unaff_ESI) = uVar7;
        *(byte *)(iVar3 + 0x54 + unaff_ESI) = bVar4;
        if (*(byte *)(unaff_ESI + 0x21) == *pbVar11) {
          *(undefined1 *)(unaff_ESI + 0x22) = uVar7;
          *(byte *)(unaff_ESI + 0x23) = bVar4;
          *(byte *)(unaff_ESI + 6) = pbVar8[3];
        }
      }
      pbVar11 = pbVar11 + 0x28;
      pbVar8 = pbVar8 + 0x24;
      local_c = local_c << 1 | (uint)((int)local_c < 0);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  if (*(int *)(iVar2 + 0x2d40) != 0) {
    uVar7 = *(undefined1 *)(param_1 + 0x3340);
    *(undefined1 *)(unaff_ESI + 3) = uVar7;
    *(undefined1 *)(unaff_ESI + 2) = uVar7;
  }
  if (*(int *)(param_1 + 0x3334) == 0) {
    uVar7 = (undefined1)*(undefined4 *)(param_1 + 0x3338);
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(unaff_ESI + 8) = uVar7;
  if (*(short *)(param_1 + 0x333c) == 0) {
    uVar5 = *(undefined1 *)(*(ushort *)(param_1 + 0x333e) + 0x2dd4 + iVar9);
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(unaff_ESI + 9) = uVar5;
  *(undefined1 *)(unaff_ESI + 5) = 0;
  if ((*(byte *)(iVar2 + 0x2d94) & 1) != 0) {
    *(byte *)(unaff_ESI + 0xb) = *(byte *)(param_1 + 0x3330) & 1;
  }
  (*DAT_0065d3e0)(L"FillCfg_LowDaly: Cfg[2](Debounce)=%d, Cfg[8](Tap)=%d, Cfg[9](Sleep)=%d",
                  *(undefined1 *)(unaff_ESI + 2),uVar7,uVar5);
  return 1;
}



// ==== 0049b6a0 FUN_0049b6a0 ====
// callers: FUN_0049bad0@0049bad0
// callees: 

undefined4 FUN_0049b6a0(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int unaff_EBX;
  uint uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  int iStack_c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x24);
  bVar3 = *(byte *)(param_2 + 0x243c);
  iVar10 = iVar2 + 0x18;
  if (((param_3 & 0x20) != 0) && (*(int *)(iVar2 + 0x2d95) != 0)) {
    (*DAT_0065d3e0)(L"ResetItem:");
    pcVar11 = (char *)(iVar2 + 0x2d96);
    iStack_c = 2;
    do {
      uVar7 = (uint)(byte)pcVar11[-1];
      cVar1 = *pcVar11;
      if ((uVar7 != 0) || (cVar1 != '\0')) {
        (*DAT_0065d3e0)(L"Cfg[%d]=%02x",uVar7,cVar1);
        *(char *)(unaff_EBX + uVar7) = cVar1;
      }
      pcVar11 = pcVar11 + 2;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  if ((param_3 & 2) != 0) {
    *(bool *)(unaff_EBX + 9) = *(byte *)(iVar2 + 0x2ebc) == bVar3;
    *(undefined1 *)(unaff_EBX + 10) = *(undefined1 *)(iVar2 + (uint)bVar3 * 0x28 + 0x2fd6);
    pbVar12 = (byte *)(unaff_EBX + 0x3b);
    *(char *)(unaff_EBX + 0xb) = *(char *)(iVar2 + 0x2f8e) + *(char *)(param_2 + 0x2440);
    *(undefined1 *)(unaff_EBX + 0x39) = 0xff;
    *(undefined1 *)(unaff_EBX + 0x38) = 0xff;
    pbVar8 = (byte *)(param_2 + 0x2f88);
    param_3 = 0x13;
    do {
      cVar1 = *(char *)(*pbVar8 + 0x2df0 + iVar10);
      if (pbVar8[2] == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = *(byte *)(iVar2 + 0x2fa1);
      }
      pbVar12[-1] = *(byte *)(pbVar8[1] + 0x2e10 + iVar10);
      *pbVar12 = bVar3 & 0xf | cVar1 << 4;
      pbVar12 = pbVar12 + 2;
      pbVar8 = pbVar8 + 0x24;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (*(int *)(iVar2 + 0x2d40) != 0) {
    *(undefined1 *)(unaff_EBX + 3) = *(undefined1 *)(param_2 + 0x3340);
  }
  if (*(int *)(param_2 + 0x3334) == 0) {
    uVar5 = (undefined1)*(undefined4 *)(param_2 + 0x3338);
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(unaff_EBX + 0x16) = uVar5;
  if (*(char *)(iVar2 + 0x2d58) == '\x01') {
    *(bool *)(unaff_EBX + 0x17) = *(char *)(param_2 + 0x3342) == '\0';
  }
  if (*(short *)(param_2 + 0x333c) == 0) {
    uVar5 = *(undefined1 *)(*(ushort *)(param_2 + 0x333e) + 0x2dd4 + iVar10);
  }
  else {
    uVar5 = 0;
  }
  *(undefined1 *)(unaff_EBX + 0x18) = uVar5;
  if (*(int *)(iVar2 + 0x2d9c) != 0) {
    uVar5 = 0;
    iVar6 = 0;
    do {
      uVar7 = (uint)*(byte *)(iVar2 + 0x2da0 + iVar6);
      if (uVar7 != 0) {
        iVar4 = uVar7 * 0x10;
        if (*(int *)(iVar4 + 0x38 + param_2) != *(int *)(iVar4 + iVar10)) {
          uVar5 = *(undefined1 *)(iVar2 + 0x2d9c);
          break;
        }
        if (((char)((uint)*(int *)(iVar4 + iVar10) >> 0x18) == '\x02') &&
           (*(int *)(iVar4 + 0x3c + param_2) != *(int *)(iVar4 + 4 + iVar10))) {
          uVar5 = *(undefined1 *)(iVar2 + 0x2d9c);
          break;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    (*DAT_0065d3e0)(L"nWheelMode=%d",uVar5);
    *(undefined1 *)(unaff_EBX + 0x1a) = uVar5;
  }
  if (*(char *)(iVar2 + 0x2d81) != '\0') {
    uVar7 = (uint)*(byte *)(param_2 + 0x3344);
    iVar10 = iVar2 + 0x3394 + uVar7 * 0x28;
    iVar6 = param_2 + 0x243c + uVar7 * 0x24;
    iVar4 = *(int *)(iVar6 + 0xf10);
    uVar5 = 0;
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x18) == 0x1a) {
      if (iVar4 != 0xff00) {
        if (iVar4 == 0xff) {
          uVar5 = 1;
        }
        else if (iVar4 == 0xff0000) {
          uVar5 = 2;
        }
        else if (iVar4 == 0xffff) {
          uVar5 = 3;
        }
        else if (iVar4 == 0xffff00) {
          uVar5 = 4;
        }
        else if (iVar4 == 0xff00ff) {
          uVar5 = 5;
        }
        else if (iVar4 == 0xffffff) {
          uVar5 = 6;
        }
      }
      if (*(char *)(iVar6 + 0xf0e) != '\0') {
        uVar5 = 7;
      }
      *(undefined1 *)(unaff_EBX + 0x32) = uVar5;
      puVar9 = (undefined1 *)(param_2 + 0x243c + (uVar7 * 9 + 0x3c3) * 4);
      *(undefined1 *)(unaff_EBX + 0x33) = *(undefined1 *)(iVar6 + 0xf0d);
      *(undefined1 *)(unaff_EBX + 0x34) = *puVar9;
      *(undefined1 *)(unaff_EBX + 0x35) = *(undefined1 *)(iVar10 + 2);
    }
    else {
      if (iVar4 == 0xff00) {
        uVar5 = 1;
      }
      else if (iVar4 == 0xff) {
        uVar5 = 0;
      }
      else if (iVar4 == 0xff0000) {
        uVar5 = 2;
      }
      else if (iVar4 == 0xffff) {
        uVar5 = 3;
      }
      else if (iVar4 == 0xffff00) {
        uVar5 = 5;
      }
      else if (iVar4 == 0xff00ff) {
        uVar5 = 4;
      }
      else if (iVar4 == 0xffffff) {
        uVar5 = 6;
      }
      if (*(char *)(iVar6 + 0xf0e) != '\0') {
        uVar5 = 7;
      }
      *(undefined1 *)(unaff_EBX + 0x12) = *(undefined1 *)(iVar10 + 2);
      *(undefined1 *)(unaff_EBX + 0x13) = uVar5;
      puVar9 = (undefined1 *)(param_2 + 0x243c + (uVar7 * 9 + 0x3c3) * 4);
      *(undefined1 *)(unaff_EBX + 0x14) = *(undefined1 *)(iVar6 + 0xf0d);
      *(undefined1 *)(unaff_EBX + 0x15) = *puVar9;
    }
    (*DAT_0065d3e0)(L"SideLED: mode=%d, nLight=%d, nSpeed=%d, nColor=%d",*(undefined1 *)(iVar10 + 2)
                    ,*(undefined1 *)(iVar6 + 0xf0d),*puVar9,uVar5);
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (uVar7 = *(uint *)(iVar2 + 0x2d64), uVar7 != 0)) {
    *(char *)((uVar7 & 0xff) + unaff_EBX) = (char)(uVar7 >> 8);
    (*DAT_0065d3e0)(L"Cfg[%d] = 0x%x",uVar7 & 0xff,(int)uVar7 >> 8 & 0xff);
  }
  if (*(char *)(iVar2 + 0x2f95) != '\0') {
    *(undefined1 *)(unaff_EBX + 0x7e) = 0x5a;
    *(undefined1 *)(unaff_EBX + 0x7f) = 0xa5;
  }
  return 1;
}



// ==== 0049af70 FUN_0049af70 ====
// callers: FUN_0049bad0@0049bad0
// callees: FUN_004494c0@004494c0, FUN_004799c0@004799c0, FUN_00479ca0@00479ca0, FUN_0049aba0@0049aba0, MessageBoxW@EXTERNAL:0000015e, Sleep@EXTERNAL:00000009, __alloca_probe@005b0f00, __security_check_cookie@005ab271, _memcpy@005b2660, _memset@005af380

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void __fastcall
FUN_0049af70(int param_1,int *param_2,int *param_3,int param_4,void *param_5,int *param_6)

{
  size_t _Size;
  ushort uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int *extraout_EDX;
  int iVar6;
  int *extraout_EDX_00;
  int iVar7;
  short sVar8;
  uint *puVar9;
  int iVar10;
  byte *pbVar11;
  uint _Size_00;
  int local_21d4;
  uint local_21d0;
  int local_21cc;
  uint *local_21c8;
  uint *local_21c4;
  int local_21c0;
  byte *pbStack_21bc;
  int local_21b8;
  int *local_21b4;
  undefined1 *puStack_21b0;
  int iStack_21ac;
  int *local_21a8;
  int local_21a4;
  int *local_21a0;
  void *local_219c;
  int *local_2198;
  ushort auStack_2194 [200];
  undefined1 uStack_2004;
  undefined1 auStack_2003 [8191];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21d4;
  local_219c = param_5;
  local_21b4 = param_3;
  local_21a0 = param_6;
  local_21cc = param_1;
  local_21a8 = param_2;
  if (((param_4 == 0) || (param_1 == 0)) || (param_3[4] == 0)) goto LAB_0049b1d0;
  local_21a4 = *param_2;
  iVar7 = param_3[0xa5];
  iVar4 = *(int *)(param_3[4] + 0x24);
  iVar10 = iVar4 + 0x18;
  local_2198 = (int *)0x0;
  local_21c0 = iVar10;
  if (*(char *)(iVar4 + 0x2f96) != '\0') {
    Sleep(0x1e);
  }
  puVar9 = (uint *)(param_4 + 0x38);
  local_21b8 = iVar7 * 4;
  local_21d0 = 0;
  local_21d4 = local_21cc;
  local_21c4 = puVar9;
  do {
    local_21c8 = puVar9;
    if ((*(uint *)(iVar10 + 0x2d3c) & 1 << ((byte)local_21d0 & 0x1f)) == 0) {
      iVar7 = 0;
      pbVar11 = (byte *)(iVar10 + 0xc);
      do {
        if (*puVar9 != 0) {
          iVar4 = (**(code **)(*param_3 + 0x98))(puVar9,param_3[4]);
          uVar5 = (uint)*pbVar11;
          if ((iVar4 == -1) || (0x8f < uVar5)) {
            FUN_004494c0(L"Invaild keycode, Layer=%d, Key[%d](Major=%x, Minor=%x, Combo{modify=%x, vk1=%x, vk2=%x}, Parameter=%x), MatrixInx=%d, "
                         ,local_21d0,iVar7,(int)*puVar9 >> 0x18 & 0xff,*puVar9 & 0xffffff,
                         (char)puVar9[1],*(undefined1 *)((int)puVar9 + 5),
                         *(undefined1 *)((int)puVar9 + 6),puVar9[2],uVar5);
            param_2 = extraout_EDX;
            goto LAB_0049b1d0;
          }
          *(int *)(local_21d4 + uVar5 * 4) = iVar4;
        }
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 4;
        pbVar11 = pbVar11 + 0x10;
      } while (iVar7 < 0x90);
      iVar10 = local_21c0;
      if (*(char *)(local_21c0 + 0x2f7d) != '\0') {
        *(undefined4 *)(local_21d4 + -4 + local_21b8) = 0xa55a0000;
      }
    }
    local_21d4 = local_21d4 + local_21b8;
    local_21d0 = local_21d0 + 1;
    puVar9 = local_21c8 + 0x240;
  } while ((int)local_21d0 < 4);
  uStack_2004 = 0;
  local_21c8 = puVar9;
  _memset(auStack_2003,0,0x1fff);
  auStack_2194[0] = 0;
  _memset(auStack_2194 + 1,0,0x18e);
  iVar7 = 0;
  puStack_21b0 = &uStack_2004;
  iStack_21ac = 1;
  local_21d0 = 0;
  local_21d4 = 0;
  local_21c8 = local_21c4;
  do {
    iVar4 = local_21d4;
    if ((*(uint *)(local_21c0 + 0x2d3c) & 1 << ((byte)local_21d4 & 0x1f)) == 0) {
      iVar10 = 0;
      pbStack_21bc = (byte *)(local_21c0 + 0xc);
      local_21c4 = local_21c8;
      do {
        if (*(char *)((int)local_21c4 + 3) == '\x05') {
          iVar6 = DAT_0066f9a4;
          if (local_21c4[1] != 0xffff0100) {
            iVar6 = FUN_004799c0(*(undefined4 *)(DAT_0066f9a4 + 0x10),local_21c4[1]);
          }
          if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x14), iVar6 == 0)) {
            (*DAT_0065d3e0)(L"Key[%d][%d] Set To Macro NULL",iVar4,iVar10);
          }
          else {
            (*DAT_0065d3e0)(L"Key[%d][%d] Set To Macro %s(0x%08x), Macro_Buffer_ID=%d",iVar4,iVar10,
                            iVar6 + 0x14,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x50));
            uVar5 = (uint)*pbStack_21bc;
            if (uVar5 < 0x90) {
              if (*(int *)(iVar6 + 0x50) < 1) {
                if (local_21a4 <= (int)(local_21d0 & 0xffff)) {
                  (*DAT_0065d3e0)(L"!!!!Macro buffer too small");
                  iVar4 = local_21d4;
                  break;
                }
                *(int *)(iVar6 + 0x50) = iStack_21ac;
                iStack_21ac = iStack_21ac + 1;
                (*DAT_0065d3e0)(L"New Assign Buffer_ID= %d",*(undefined4 *)(iVar6 + 0x50));
                iVar4 = FUN_0049aba0(local_21b4,puStack_21b0);
                auStack_2194[iVar7 * 2] = (short)local_21d0;
                local_21d0 = local_21d0 + iVar4;
                auStack_2194[iVar7 * 2U + 1] = (short)iVar4;
                iVar7 = iVar7 + 1;
                puStack_21b0 = puStack_21b0 + iVar4;
              }
              *(undefined1 *)(local_21cc + 3 + uVar5 * 4) = 0;
              puVar9 = (uint *)(local_21cc + uVar5 * 4);
              *puVar9 = *puVar9 | *(int *)(iVar6 + 0x50) * 0x1000000 - 0x1000000U;
              iVar4 = local_21d4;
            }
            else {
              MessageBoxW((HWND)0x0,L"Matrix inx warning",L"Warning",0);
              iVar4 = local_21d4;
            }
          }
        }
        pbStack_21bc = pbStack_21bc + 0x10;
        iVar10 = iVar10 + 1;
        local_21c4 = local_21c4 + 4;
      } while (iVar10 < 0x90);
    }
    pvVar3 = local_219c;
    local_21cc = local_21cc + local_21b8;
    local_21c8 = local_21c8 + 0x240;
    local_21d4 = iVar4 + 1;
  } while (local_21d4 < 4);
  if (iVar7 < 1) {
LAB_0049b3d8:
    param_2 = (int *)0x1;
  }
  else {
    iVar10 = 0;
    iVar6 = 0;
    iVar4 = 0;
    local_21b4 = (int *)0x0;
    _Size = iVar7 * 4;
    sVar8 = (short)_Size;
    if (1 < iVar7) {
      do {
        uVar1 = auStack_2194[iVar4 * 2U + 1];
        auStack_2194[iVar4 * 2] = auStack_2194[iVar4 * 2] + sVar8;
        auStack_2194[iVar4 * 2U + 2] = auStack_2194[iVar4 * 2U + 2] + sVar8;
        iVar10 = iVar10 + (uint)uVar1;
        uVar2 = iVar4 * 2;
        iVar4 = iVar4 + 2;
        iVar6 = iVar6 + (uint)auStack_2194[uVar2 + 3];
      } while (iVar4 < iVar7 + -1);
    }
    uVar5 = 0;
    if (iVar4 < iVar7) {
      auStack_2194[iVar4 * 2] = auStack_2194[iVar4 * 2] + sVar8;
      uVar5 = (uint)auStack_2194[iVar4 * 2U + 1];
    }
    _Size_00 = local_21d0 & 0xffff;
    if (iVar6 + iVar10 + uVar5 == _Size_00) {
      _memcpy(local_219c,auStack_2194,_Size);
      _memcpy((void *)((int)pvVar3 + _Size),&uStack_2004,_Size_00);
      *local_21a8 = _Size_00 + _Size;
      if (local_21a0 != (int *)0x0) {
        *local_21a0 = iVar7;
      }
      goto LAB_0049b3d8;
    }
    (*DAT_0065d3e0)(L"!!!!nTotalSize!=nAddr");
    param_2 = local_2198;
  }
  if (DAT_0066f9a4 != 0) {
    FUN_00479ca0(*(undefined4 *)(DAT_0066f9a4 + 0x10));
    param_2 = extraout_EDX_00;
  }
LAB_0049b1d0:
  __security_check_cookie(local_4 ^ (uint)&local_21d4,param_2);
  return;
}



// ==== 0049ba90 FUN_0049ba90 ====
// callers: FUN_0049bad0@0049bad0
// callees: 

int __fastcall FUN_0049ba90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  param_1 = param_1 + 0x20;
  iVar2 = 0x18;
  do {
    if (*(char *)(param_1 + -0x1d) == '\x05') {
      iVar1 = iVar1 + 1;
    }
    if (*(char *)(param_1 + -0xd) == '\x05') {
      iVar1 = iVar1 + 1;
    }
    if (*(char *)(param_1 + 3) == '\x05') {
      iVar1 = iVar1 + 1;
    }
    if (*(char *)(param_1 + 0x13) == '\x05') {
      iVar1 = iVar1 + 1;
    }
    if (*(char *)(param_1 + 0x23) == '\x05') {
      iVar1 = iVar1 + 1;
    }
    if (*(char *)(param_1 + 0x33) == '\x05') {
      iVar1 = iVar1 + 1;
    }
    param_1 = param_1 + 0x60;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar1;
}



// ==== 0049b400 FUN_0049b400 ====
// callers: FUN_0049bad0@0049bad0
// callees: FUN_00407e30@00407e30, __security_check_cookie@005ab271, __snwprintf_s@005abae0

void FUN_0049b400(int param_1,uint param_2,uint param_3)

{
  int unaff_EBX;
  int iVar1;
  uint uVar2;
  wchar_t local_cc [100];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)local_cc;
  if (DAT_0065d3dc != 0) {
    iVar1 = 0;
    uVar2 = 1;
    do {
      if (((param_2 & uVar2) == 0) && ((param_3 & uVar2) != 0)) {
        __snwprintf_s(local_cc,100,99,L"Key Layer%d ---------------------",iVar1 + 1);
        (*DAT_0065d3e0)(local_cc);
        FUN_00407e30(param_1 + *(int *)(unaff_EBX + 0x294) * iVar1 * 4,
                     *(int *)(unaff_EBX + 0x294) * 4,0x28,4);
      }
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (iVar1 < 4);
  }
  __security_check_cookie(local_4 ^ (uint)local_cc);
  return;
}



// ==== 004988f0 FUN_004988f0 ====
// callers: FUN_0049c6e0@0049c6e0, FUN_0049ca80@0049ca80
// callees: FUN_00492f40@00492f40

undefined4 FUN_004988f0(void)

{
  int iVar1;
  int iVar2;
  char *unaff_EDI;
  
  if (unaff_EDI == (char *)0x0) {
    return 0xfffffffd;
  }
  iVar2 = 0;
  iVar1 = FUN_00492f40(unaff_EDI,8,8000,0);
  while( true ) {
    if (iVar1 < 1) {
      return 0xfffffffe;
    }
    if (*unaff_EDI == -1) {
      return 0xfffffffc;
    }
    if (unaff_EDI[1] == '\n') {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    iVar1 = FUN_00492f40(unaff_EDI,8,8000,0);
  }
  return 0xffffffff;
}



// ==== 004051e0 FUN_004051e0 ====
// callers: FUN_00493920@00493920, FUN_004947b0@004947b0, FUN_00497b90@00497b90, FUN_00498f60@00498f60, FUN_004991e0@004991e0, FUN_00499440@00499440, FUN_00499690@00499690, FUN_004998f0@004998f0, FUN_00499b00@00499b00, FUN_00499d30@00499d30, FUN_00499fd0@00499fd0, FUN_0049a160@0049a160, FUN_0049c6e0@0049c6e0, FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40
// callees: QueryPerformanceCounter@EXTERNAL:00000013, QueryPerformanceFrequency@EXTERNAL:00000012

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004051e0(int param_1)

{
  int local_38;
  LARGE_INTEGER local_34;
  int local_28;
  LARGE_INTEGER local_24;
  int local_1c;
  int iStack_18;
  double local_14;
  LARGE_INTEGER local_c;
  
  QueryPerformanceFrequency(&local_34);
  QueryPerformanceCounter(&local_24);
  do {
    local_28 = 0;
    for (local_38 = 0; local_38 < 100; local_38 = local_38 + 1) {
      local_28 = local_28 + 1;
    }
    QueryPerformanceCounter(&local_c);
    local_1c = local_c.s.LowPart - local_24._0_4_;
    iStack_18 = (local_c.s.HighPart - local_24._4_4_) -
                (uint)(local_c.s.LowPart < local_24.s.LowPart);
    local_14 = ((double)CONCAT44(iStack_18,local_1c) / (double)(longlong)local_34) * _DAT_00625b78;
  } while (local_14 < (double)param_1);
  return;
}


