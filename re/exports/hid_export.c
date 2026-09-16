// Program: OemDrv.exe  image base 00400000
// Import call sites
//   WriteFile  <- FUN_0043fe50@0043fe50, FUN_0046e9c0@0046e9c0, FUN_0047a070@0047a070, FUN_0047abf0@0047abf0, FUN_0047ae80@0047ae80, FUN_0047b070@0047b070, FUN_004947b0@004947b0, FUN_004ac610@004ac610, Write@004b8cce, __NMSG_WRITE@005b3974, __write_nolock@005bb33b
//   ReadFile  <- FUN_00424ba0@00424ba0, FUN_0042be50@0042be50, FUN_00440050@00440050, FUN_00456a00@00456a00, FUN_0046b1b0@0046b1b0, FUN_0046eb60@0046eb60, FUN_00479d00@00479d00, FUN_0047aa60@0047aa60, FUN_0047ad80@0047ad80, FUN_0047af60@0047af60, FUN_00493260@00493260, FUN_00494640@00494640, FUN_00497410@00497410, FUN_0049875c@0049875c, FUN_0049cc00@0049cc00, FUN_0049f1c0@0049f1c0, FUN_004ac430@004ac430, Read@004b8c8c, __read_nolock@005bac7c
//   HidD_GetAttributes  <- FUN_0040ba40@0040ba40, FUN_0040c490@0040c490, FUN_00416f00@00416f00, FUN_00493880@00493880, FUN_00495200@00495200, FUN_00497840@00497840, FUN_00498b50@00498b50, FUN_00498eb0@00498eb0, FUN_0049d3b0@0049d3b0, HidD_GetAttributes@005c9aee
//   HidP_GetCaps  <- FUN_00416f00@00416f00, HidP_GetCaps@005c9b00
//   HidD_SetFeature  <- FUN_00495260@00495260, FUN_00495b20@00495b20, FUN_00498f60@00498f60, FUN_004991e0@004991e0, FUN_00499440@00499440, FUN_00499690@00499690, FUN_004998f0@004998f0, FUN_00499b00@00499b00, FUN_00499d30@00499d30, FUN_00499fd0@00499fd0, FUN_0049a160@0049a160, FUN_0049c6e0@0049c6e0, FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40, HidD_SetFeature@005c9b18
//   HidD_GetFeature  <- FUN_004952f0@004952f0, FUN_00498f60@00498f60, FUN_004991e0@004991e0, FUN_00499440@00499440, FUN_00499690@00499690, FUN_004998f0@004998f0, FUN_00499b00@00499b00, FUN_00499d30@00499d30, FUN_00499fd0@00499fd0, FUN_0049a160@0049a160, FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40, HidD_GetFeature@005c9b1e
// Keyword string references
//   0060c978  "Watcher_Thread_3632: GetPSD_3632 Err, hDev=%x"  <- 
//   0060cca0  "Watcher_Thread_Mouse: GetPSD Err"  <- FUN_0040c490@0040c490
//   0060cf10  "OnNewDongle: Find new wireless, vid_pid=%04x_%04x, bBT=%x, nPsd=%02x,%02x,%02x,%02x,%02x,%02x"  <- FUN_0040cb40@0040cb40
//   0060d1c0  "OnNewCombo: GetPSD failed"  <- FUN_0040cd40@0040cd40
//   0060d1f8  "OnNewCombo: can't find dev, devPsd=%x %x %x %x %x %x"  <- FUN_0040cd40@0040cd40
//   0060dd2c  "FwVerNeedToUpdate"  <- FUN_0040fbe0@0040fbe0, FUN_004115f0@004115f0
//   0060dd68  "MacroBufferSize"  <- FUN_0040fbe0@0040fbe0, FUN_004115f0@004115f0
//   0060de20  "RGBIndex"  <- FUN_0040fbe0@0040fbe0, FUN_004115f0@004115f0
//   0060de34  "DPIRGBIndex"  <- FUN_0040fbe0@0040fbe0
//   0060de60  "SleepTime"  <- FUN_0040fbe0@0040fbe0, FUN_004115f0@004115f0
//   0060df24  "LedMask"  <- FUN_0040fbe0@0040fbe0, FUN_004115f0@004115f0
//   0060e04c  "CmdReset"  <- FUN_0040fbe0@0040fbe0, FUN_004115f0@004115f0
//   0060e114  "LedOpt%d"  <- FUN_0040fbe0@0040fbe0, FUN_004115f0@004115f0
//   0060e394  "Psd2"  <- FUN_004112f0@004112f0
//   0060e680  "KbLayout"  <- FUN_004115f0@004115f0
//   0060e754  "ShowDebounce"  <- FUN_004115f0@004115f0
//   0060e7d8  "ChannelMask"  <- FUN_004115f0@004115f0
//   0060e824  "DefLedIndex"  <- FUN_004115f0@004115f0
//   0060e8c4  "IC2481"  <- FUN_004115f0@004115f0
//   0060eb3c  "GameRGBIndex"  <- FUN_004115f0@004115f0
//   0060eb8c  "MusicRGBIndex"  <- FUN_004115f0@004115f0
//   0060ebd4  "GaoshouIndex"  <- FUN_004115f0@004115f0
//   0060ebf0  "GaoshouGroupNum"  <- FUN_004115f0@004115f0
//   0060ec20  "clrGaoshou"  <- FUN_004115f0@004115f0
//   0060ec38  "GaoshouKey%d"  <- FUN_004115f0@004115f0
//   0060ec6c  "SideLedOpt%d"  <- FUN_004115f0@004115f0
//   0060efd8  "http://%s/modifypsd.php"  <- FUN_00418460@00418460
//   0060f000  "oldpsd"  <- FUN_00418460@00418460
//   0060f008  "realpsd"  <- FUN_00418460@00418460
//   0060f012  "dStart modify psd ------"  <- 
//   0060f084  "modify psd success"  <- FUN_00418460@00418460
//   006102a8  "CRC err: 0x01"  <- FUN_00426480@00426480, FUN_00478de0@00478de0
//   006102c4  "CRC err: 0x02"  <- FUN_00426480@00426480, FUN_00478de0@00478de0
//   00611a8e  "auser_logon: psd is not md5"  <- 
//   00618e0c  "pVar->nDefLedIndex=%d"  <- FUN_00458640@00458640
//   00619708  "pOtherDEV=%x, m_bOnline=%x"  <- FUN_0045b600@0045b600
//   0061a2a0  "Update by user click: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x"  <- FUN_00462790@00462790
//   0061a660  "Start check FW, nLocalFwVer=%x, szUID=%s"  <- FUN_00463b40@00463b40
//   0061a71c  "Download FW Err=0x%x\n"  <- FUN_00463b40@00463b40
//   0061a900  "cfgUPD.Dev[%d]: nFwVer=0x%x, UID=%s, szUrl=%s"  <- FUN_00464120@00464120
//   0061c428  "CSettingKBDlg: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x, bWired=%d"  <- FUN_00472570@00472570
//   0061cb4e  "aCSettingMSDlg: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x, bWired=%d"  <- 
//   0061d658  "Error Value: GaoshouKey[%d][%d]=0x%x"  <- FUN_0047a2c0@0047a2c0
//   0061dd8c  "CTipsDlg"  <- FUN_0047dbb0@0047dbb0
//   0061fe4c  "ServiceThread_3632 Start..."  <- FUN_00493260@00493260
//   0061fefc  "ServiceThread ReadFile Err=%d"  <- FUN_00493260@00493260
//   0061ff38  "ServiceThread_3632 Exit"  <- FUN_00493260@00493260
//   0061ffa4  "CDev3632::ClearHandle"  <- FUN_00493650@00493650, FUN_00493820@00493820
//   0061ffd0  "CDev3632::FindHIDDevice for %s"  <- FUN_00493860@00493860
//   00620030  "CDev3632::AccessData param err, m_hDev=%x, nBytesToWrite=%d"  <- FUN_00493920@00493920
//   006200a8  "CDev3632::AccessData Online=0, cmd=0x%x, package=%d, return"  <- FUN_00493920@00493920
//   00620120  "!! CDev3632::AccessData: send package %d err=0x%x"  <- FUN_00493920@00493920
//   00620188  "CDev3632::AccessData: abort by user, cmd=0x%x"  <- FUN_00493920@00493920
//   006201e8  "!! CDev3632::AccessData: package index err, cmd=0x%x, send=0x%x, in=0x%x"  <- FUN_00493920@00493920
//   00620280  "CDev3632::AccessData Online=0, cmd=0x%x, package=%d, no more retry, return"  <- FUN_00493920@00493920
//   00620330  "!! CDev3632::AccessData: %s err, cmd=0x%x, package=%d"  <- FUN_00493920@00493920
//   006203a0  "!! CDev3632::AccessData: read err, cmd=0x%x, nRet=%d, package=%d"  <- FUN_00493920@00493920
//   00620428  "CDev3632::SendCMD Online=0, cmd=0x%x, return"  <- FUN_00493cb0@00493cb0
//   00620488  "!!CDev3632::SendCMD: send err=0x%x, cmd=0x%x"  <- FUN_00493cb0@00493cb0
//   006204e8  "CDev3632::SendCMD: abort by user, cmd=0x%x"  <- FUN_00493cb0@00493cb0
//   00620540  "CDrv3632::SendCMD ignore index(%d) for cmd(0x%x)"  <- FUN_00493cb0@00493cb0
//   006205a8  "CDev3632::SendCMD Online=0, cmd=0x%x, inx=%d, no more retry, return"  <- FUN_00493cb0@00493cb0
//   00620630  "!!CDev3632::SendCMD: timeout, hDev=%x, cmd=0x%x, inx=%d"  <- FUN_00493cb0@00493cb0
//   006206a0  "!!CDev3632::SendCMD: read err, hDev=%x, cmd=0x%x, inx=%d"  <- FUN_00493cb0@00493cb0
//   00620714  "CDev3632::SetMatrix layer=%d"  <- FUN_00493fd0@00493fd0
//   00620750  "CDev3632::GetMatrix layer=%d"  <- FUN_00494010@00494010
//   006207b0  "CDev3632::SetMacro"  <- FUN_004940e0@004940e0
//   006207d8  "SetMacro failed"  <- FUN_004940e0@004940e0, FUN_004981f0@004981f0, FUN_004993f0@004993f0, FUN_0049de00@0049de00
//   006207f8  "CDev3632::SetLED"  <- FUN_00494140@00494140
//   00620838  "CDev3632::GetLED"  <- FUN_00494190@00494190
//   0062085c  "CDev3632::SetOnBoard"  <- FUN_004941c0@004941c0
//   006208ac  "CDev3632::GetOnBoard"  <- FUN_00494210@00494210
//   00620948  "CDev3632::SetScreenParam failed"  <- FUN_00494330@00494330
//   00620988  "CDev3632::SendSelfData failed"  <- FUN_00494370@00494370
//   006209c4  "CDev3632::ReadPower failed"  <- FUN_004943b0@004943b0
//   006209fc  "CDev3632::ReadPower  %d, %d"  <- FUN_004943b0@004943b0
//   00620b50  "!! SendCMD_3632: send err=0x%x, cmd=0x%x"  <- FUN_004948e0@004948e0
//   00620ba8  "SendCMD_3632: cmd unmatch for cmd=0x%x, nRetCmd=0x%x, package_index=%d, reread it"  <- FUN_004948e0@004948e0
//   00620c50  "SendCMD_3632: CRC check err for cmd=0x%x, redo it"  <- FUN_004948e0@004948e0
//   00620cb8  "SendCMD_3632: read length unmatch, cmd=0x%x, recvBytes=%d, nSize=%d"  <- FUN_004948e0@004948e0
//   00620d40  "!! SendCMD_3632: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d"  <- FUN_004948e0@004948e0
//   00620de0  "!! SendCMD_3632: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d"  <- FUN_004948e0@004948e0
//   00620ea8  "CDev3632::ApplySetting: hWnd=%x, nFlag=%x, bBT=%x"  <- FUN_00494c40@00494c40
//   00621050  "CDev916KB::FindHIDDevice for %s, hDev=%x, hCmd=%x, hMusic=%x, bMedia=%d, id=%04x_%04x"  <- FUN_00494ef0@00494ef0
//   00621100  "Psd unmatch: gVar.nPsd=%x,%x,%x,%x,%x,%x, nDevPsd=%x,%x,%x,%x,%x,%x"  <- FUN_00494ef0@00494ef0, FUN_00498b50@00498b50
//   00621290  "keyinfo_to_hardware_code can't find macro id 0x%x"  <- FUN_00495be0@00495be0, FUN_0049a4c0@0049a4c0
//   006212f8  "StMacro_To_HdMacro: get wrong hid"  <- FUN_004961a0@004961a0, FUN_0049abe8@0049abe8
//   00621850  "SetMacroData(%x) error, err=0x%x"  <- FUN_00496a00@00496a00
//   00621a78  "SetProfile error, err=0x%x"  <- FUN_00496a00@00496a00
//   00621b80  "%s bOnline=%x"  <- FUN_004972f0@004972f0
//   00621ba0  "ServiceThread_Combo(%s) Start..."  <- FUN_00497410@00497410
//   00621be8  "ServiceThread_Combo open err=0x%x"  <- FUN_00497410@00497410
//   00621c30  "ServiceThread_Combo: hObject[1] is signal"  <- FUN_00497410@00497410
//   00621c88  "ServiceThread_Combo: WaitForMultipleObjects err=%d"  <- FUN_00497410@00497410
//   00621cf0  "ServiceThread_Combo ReadFile Err=%d"  <- FUN_00497410@00497410
//   00621d38  "ServiceThread_Combo(%s) exit"  <- FUN_00497410@00497410
//   00621d74  "CDevComboFilm::ClearHandle"  <- FUN_00497750@00497750, FUN_004977e0@004977e0
//   00621db0  "CDevComboFilm::FindHIDDevice for %s"  <- FUN_00497820@00497820
//   00621df8  "CDevComboFilm::SyncCfg"  <- FUN_00497840@00497840
//   00621e28  "SyncCfg: GetLED Err: read valid data, retry now"  <- FUN_00497840@00497840, FUN_0049d3b0@0049d3b0
//   00621e88  "SyncCfg: GetLED Err"  <- FUN_00497840@00497840, FUN_0049d3b0@0049d3b0
//   00621eb0  "SyncCfg: nSensor=%d, nCurLevel=%d"  <- FUN_00497840@00497840
//   00621ef8  "SyncCfg: UnSupport Sensor 0x%04x"  <- FUN_00497840@00497840, FUN_0049d3b0@0049d3b0
//   00621f3c  "SyncCfg: GetLED failed"  <- FUN_00497840@00497840, FUN_0049d3b0@0049d3b0
//   00621f6c  "SyncCfg: nCurOnBoard=%d"  <- FUN_00497840@00497840, FUN_0049d3b0@0049d3b0
//   00621f9c  "SyncCfg: Get Wrong OnBoard!!"  <- FUN_00497840@00497840, FUN_0049d3b0@0049d3b0
//   00621fd8  "SyncCfg: GetOnBoard failed"  <- FUN_00497840@00497840, FUN_0049d3b0@0049d3b0
//   00622010  "CDevComboFilm::SendData param err, m_hDev=%x, nBytesToWrite=%d"  <- FUN_00497b90@00497b90
//   00622090  "!! CDevComboFilm::SendData: send package %d err=0x%x"  <- FUN_00497b90@00497b90
//   00622100  "!! CDevComboFilm::SendData: %s err, cmd=0x%x, package=%d"  <- FUN_00497b90@00497b90
//   00622178  "!! CDevComboFilm::SendData: read err, cmd=0x%x, nRet=%d, package=%d"  <- FUN_00497b90@00497b90
//   00622250  "!! ReadData: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d"  <- FUN_00497e50@00497e50
//   006222e8  "!! ReadData: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d"  <- FUN_00497e50@00497e50
//   00622380  "CDevComboFilm::SetMatrix layer=%d"  <- FUN_004980b0@004980b0
//   006223c8  "CDevComboFilm::GetMatrix layer=%d"  <- FUN_00498100@00498100
//   0062240c  "CDevComboFilm::SetMacro"  <- FUN_004981f0@004981f0
//   0062243c  "CDevComboFilm::SetLED"  <- FUN_00498260@00498260
//   00622468  "CDevComboFilm::GetLED"  <- FUN_004982c0@004982c0
//   00622494  "CDevComboFilm::SetOnBoard"  <- FUN_00498300@00498300
//   006224c8  "CDevComboFilm::GetOnBoard"  <- FUN_00498360@00498360
//   00622500  "CDevComboFilm::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, bBT=%x"  <- FUN_00498540@00498540
//   00622624  "ServiceThread_G5 Start..."  <- FUN_0049875c@0049875c
//   00622658  "ServiceThread_G5: hObject[1] is signal"  <- FUN_0049875c@0049875c
//   006226e4  "ServiceThread_G5 Err=%d"  <- FUN_0049875c@0049875c
//   00622714  "ServiceThread_G5 Exit"  <- FUN_0049875c@0049875c
//   00622760  "CDevG5KB::FindHIDDevice CreateFile %s"  <- FUN_00498b50@00498b50
//   006227b0  "CDevG5KB::FindHIDDevice for %s, hDev=%x, nFw=%d, id=%04x_%04x"  <- FUN_00498b50@00498b50
//   00622830  "CDevG5KB::FindHIDDevice bFindMedida=%x, bFindWireless=%x"  <- FUN_00498b50@00498b50
//   006228a8  "CDevG5KB::AccessData Param err, hDev=%x"  <- FUN_00498f60@00498f60, FUN_004991e0@004991e0, FUN_00499440@00499440, FUN_00499690@00499690, FUN_004998f0@004998f0, FUN_00499b00@00499b00, FUN_00499d30@00499d30, FUN_00499fd0@00499fd0, FUN_0049a160@0049a160
//   006228f8  "CDevG5KB::AccessData nOper err"  <- FUN_00498f60@00498f60
//   00622938  "CDevG5KB::AccessData err=%d"  <- FUN_00498f60@00498f60, FUN_004991e0@004991e0, FUN_00499440@00499440, FUN_00499690@00499690, FUN_004998f0@004998f0, FUN_00499b00@00499b00, FUN_00499d30@00499d30, FUN_00499fd0@00499fd0, FUN_0049a160@0049a160
//   00622970  "CDevG5KB::AccessData read err=%d"  <- FUN_00498f60@00498f60, FUN_004991e0@004991e0, FUN_00499440@00499440, FUN_00499690@00499690, FUN_004998f0@004998f0, FUN_00499b00@00499b00, FUN_00499d30@00499d30, FUN_00499fd0@00499fd0, FUN_0049a160@0049a160
//   00622ab4  "CDevG5KB::ReadPower failed"  <- FUN_0049a160@0049a160
//   00622aec  "CDevG5KB::ReadPower  %d, %d"  <- FUN_0049a160@0049a160
//   00622ed0  "CDevG5KB::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, nFw=%d, nMatrixLen=%d, bApplyNoDev=%d"  <- FUN_0049bad0@0049bad0
//   00622f88  "Reset using cmd"  <- FUN_0049bad0@0049bad0
//   00622fa8  "nMacroBufferSize > sizeof(bMacro)"  <- FUN_0049bad0@0049bad0, FUN_0049ff00@0049ff00
//   00623258  "CDevG5KB::AccessData_Page Param err"  <- FUN_0049c6e0@0049c6e0
//   006232b0  "CDevG5KB::AccessData_Page err=%d"  <- FUN_0049c6e0@0049c6e0
//   006232f8  "CDevG5KB::AccessData_Page send package %d ok, dataUnit=%d"  <- FUN_0049c6e0@0049c6e0
//   00623370  "CDevG5KB::AccessData_Page send this page, Buffer=%x %x %x %x %x"  <- FUN_0049c6e0@0049c6e0
//   006233f0  "CDevG5KB::AccessData_Page timeout, k=%d"  <- FUN_0049c6e0@0049c6e0
//   00623440  "CDevG5KB::AccessData_Page cancel by user"  <- FUN_0049c6e0@0049c6e0
//   0062366c  "DevG5MS_ServiceThread Start..."  <- FUN_0049cc00@0049cc00
//   006236b0  "DevG5MS_ServiceThread hObject[1] is signal"  <- FUN_0049cc00@0049cc00
//   00623758  "DevG5MS_ServiceThread ReadFile Err=%d\n"  <- FUN_0049cc00@0049cc00
//   006237a8  "DevG5MS_ServiceThread Exit"  <- FUN_0049cc00@0049cc00
//   00623828  "Psd unmatch: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x"  <- FUN_0049d020@0049d020
//   006238a0  "Psd unmatch 2: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x"  <- FUN_0049d020@0049d020
//   00623938  "CDevG5MS::FindHIDDevice for %s, hDev=%x (%s), id=%04x_%04x"  <- FUN_0049d020@0049d020
//   006239b0  "SyncCfg: FW Version=0x%x"  <- FUN_0049d3b0@0049d3b0
//   006239e8  "SyncCfg: GetVersionNumber failed!"  <- FUN_0049d3b0@0049d3b0
//   00623a2c  "SyncCfg(load):"  <- FUN_0049d3b0@0049d3b0
//   00623a50  "SyncCfg: nSensor=%d, nCurLevel=%d, SyncMask=0x%x"  <- FUN_0049d3b0@0049d3b0
//   00623ab4  "SyncCfg: nCurHZ=%x"  <- FUN_0049d3b0@0049d3b0
//   00623adc  "SyncCfg: nCurLOD=%x"  <- FUN_0049d3b0@0049d3b0
//   00623b08  "CDevG5MS::AccessData Param err, hDev=%x"  <- FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40
//   00623b58  "AccessData CRC err for nCmdID=%x, retry now"  <- FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40
//   00623bb0  "AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x"  <- FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40
//   00623c40  "AccessData: GetFeature nErr=%d, nCmdID=%x"  <- FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40
//   00623c98  "AccessData: SetFeature nErr=%d, nCmdID=%x"  <- FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40
//   00623cf0  "AccessData: retry SetFeature now"  <- FUN_0049d7d0@0049d7d0, FUN_0049db30@0049db30, FUN_0049de50@0049de50, FUN_0049e140@0049e140, FUN_0049e460@0049e460, FUN_0049e730@0049e730, FUN_0049ea20@0049ea20, FUN_0049ec70@0049ec70, FUN_0049ef40@0049ef40
//   00624100  "nMacroBufferSize > hwParam.nMacroBufferSize"  <- FUN_0049ff00@0049ff00
//   00624158  "nMacroNum=%d, nNeedWriteMacro=%d, nKeyDirty=0x%x, nModeNum=%d, hwParam.nMacroBufferSize=%d, nMacroBufferSize=%d"  <- FUN_0049ff00@0049ff00
//   0064aba6  "HidD_SetFeature"  <- 
//   0064abb8  "HidD_GetFeature"  <- 
//   00651db8  ".?AVCTipsDlg@@"  <- 
//   00651efc  ".?AVCDev3632@@"  <- 
//   00651f44  ".?AVCDevComboFilm@@"  <- 
//   00651f60  ".?AVCDevG5KB@@"  <- 
// Function index (153)
//   0040ba40 FUN_0040ba40  [calls HidD_GetAttributes]
//   0040c490 FUN_0040c490  [caller depth 1 of FUN_0049ea20; caller depth 1 of FUN_0049ef40; calls HidD_GetAttributes; string: Watcher_Thread_Mouse: GetPSD Err]
//   0040cb40 FUN_0040cb40  [string: OnNewDongle: Find new wireless, vid_pid=%04x_%04x, bBT=%x, nPsd=%02x,%02x,%02x,%02...]
//   0040cd40 FUN_0040cd40  [string: OnNewCombo: GetPSD failed; string: OnNewCombo: can't find dev, devPsd=%x %x %x %x %x %x]
//   0040fbe0 FUN_0040fbe0  [string: CmdReset; string: DPIRGBIndex; string: FwVerNeedToUpdate; string: LedMask; string: LedOpt%d; string: MacroBufferSize; string: RGBIndex; string: SleepTime]
//   004112f0 FUN_004112f0  [string: Psd2]
//   004115f0 FUN_004115f0  [string: ChannelMask; string: CmdReset; string: DefLedIndex; string: FwVerNeedToUpdate; string: GameRGBIndex; string: GaoshouGroupNum; string: GaoshouIndex; string: GaoshouKey%d; string: IC2481; string: KbLayout; string: LedMask; string: LedOpt%d; string: MacroBufferSize; string: MusicRGBIndex; string: RGBIndex; string: ShowDebounce; string: SideLedOpt%d; string: SleepTime; string: clrGaoshou]
//   00416f00 FUN_00416f00  [calls HidD_GetAttributes; calls HidP_GetCaps]
//   00418460 FUN_00418460  [string: http://%s/modifypsd.php; string: modify psd success; string: oldpsd; string: realpsd]
//   00424ba0 FUN_00424ba0  [calls ReadFile]
//   00426480 FUN_00426480  [string: CRC err: 0x01; string: CRC err: 0x02]
//   0042be50 FUN_0042be50  [calls ReadFile]
//   0043fe50 FUN_0043fe50  [calls WriteFile]
//   00440050 FUN_00440050  [calls ReadFile]
//   00456a00 FUN_00456a00  [calls ReadFile]
//   00458640 FUN_00458640  [string: pVar->nDefLedIndex=%d]
//   0045b600 FUN_0045b600  [string: pOtherDEV=%x, m_bOnline=%x]
//   00462790 FUN_00462790  [string: Update by user click: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x]
//   00463b40 FUN_00463b40  [string: Download FW Err=0x%x; string: Start check FW, nLocalFwVer=%x, szUID=%s]
//   00464120 FUN_00464120  [string: cfgUPD.Dev[%d]: nFwVer=0x%x, UID=%s, szUrl=%s]
//   0046b1b0 FUN_0046b1b0  [calls ReadFile]
//   0046e9c0 FUN_0046e9c0  [calls WriteFile]
//   0046eb60 FUN_0046eb60  [calls ReadFile]
//   00472570 FUN_00472570  [string: CSettingKBDlg: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x, bWired=%d]
//   00478de0 FUN_00478de0  [string: CRC err: 0x01; string: CRC err: 0x02]
//   00479d00 FUN_00479d00  [calls ReadFile]
//   0047a070 FUN_0047a070  [calls WriteFile]
//   0047a2c0 FUN_0047a2c0  [string: Error Value: GaoshouKey[%d][%d]=0x%x]
//   0047aa60 FUN_0047aa60  [calls ReadFile]
//   0047abf0 FUN_0047abf0  [calls WriteFile]
//   0047ad80 FUN_0047ad80  [calls ReadFile]
//   0047ae80 FUN_0047ae80  [calls WriteFile]
//   0047af60 FUN_0047af60  [calls ReadFile]
//   0047b070 FUN_0047b070  [calls WriteFile]
//   0047dbb0 FUN_0047dbb0  [string: CTipsDlg]
//   00493260 FUN_00493260  [calls ReadFile; string: ServiceThread ReadFile Err=%d; string: ServiceThread_3632 Exit; string: ServiceThread_3632 Start...]
//   00493650 FUN_00493650  [string: CDev3632::ClearHandle]
//   00493820 FUN_00493820  [string: CDev3632::ClearHandle]
//   00493860 FUN_00493860  [string: CDev3632::FindHIDDevice for %s]
//   00493880 FUN_00493880  [calls HidD_GetAttributes]
//   00493920 FUN_00493920  [string: !! CDev3632::AccessData: %s err, cmd=0x%x, package=%d; string: !! CDev3632::AccessData: package index err, cmd=0x%x, send=0x%x, in=0x%x; string: !! CDev3632::AccessData: read err, cmd=0x%x, nRet=%d, package=%d; string: !! CDev3632::AccessData: send package %d err=0x%x; string: CDev3632::AccessData Online=0, cmd=0x%x, package=%d, no more retry, return; string: CDev3632::AccessData Online=0, cmd=0x%x, package=%d, return; string: CDev3632::AccessData param err, m_hDev=%x, nBytesToWrite=%d; string: CDev3632::AccessData: abort by user, cmd=0x%x]
//   00493cb0 FUN_00493cb0  [string: !!CDev3632::SendCMD: read err, hDev=%x, cmd=0x%x, inx=%d; string: !!CDev3632::SendCMD: send err=0x%x, cmd=0x%x; string: !!CDev3632::SendCMD: timeout, hDev=%x, cmd=0x%x, inx=%d; string: CDev3632::SendCMD Online=0, cmd=0x%x, inx=%d, no more retry, return; string: CDev3632::SendCMD Online=0, cmd=0x%x, return; string: CDev3632::SendCMD: abort by user, cmd=0x%x; string: CDrv3632::SendCMD ignore index(%d) for cmd(0x%x)]
//   00493fd0 FUN_00493fd0  [string: CDev3632::SetMatrix layer=%d]
//   00494010 FUN_00494010  [string: CDev3632::GetMatrix layer=%d]
//   004940e0 FUN_004940e0  [string: CDev3632::SetMacro; string: SetMacro failed]
//   00494140 FUN_00494140  [string: CDev3632::SetLED]
//   00494190 FUN_00494190  [string: CDev3632::GetLED]
//   004941c0 FUN_004941c0  [string: CDev3632::SetOnBoard]
//   00494210 FUN_00494210  [string: CDev3632::GetOnBoard]
//   00494330 FUN_00494330  [string: CDev3632::SetScreenParam failed]
//   00494370 FUN_00494370  [string: CDev3632::SendSelfData failed]
//   004943b0 FUN_004943b0  [string: CDev3632::ReadPower  %d, %d; string: CDev3632::ReadPower failed]
//   00494640 FUN_00494640  [calls ReadFile]
//   004947b0 FUN_004947b0  [calls WriteFile]
//   004948e0 FUN_004948e0  [string: !! SendCMD_3632: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d; string: !! SendCMD_3632: send err=0x%x, cmd=0x%x; string: !! SendCMD_3632: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d; string: SendCMD_3632: CRC check err for cmd=0x%x, redo it; string: SendCMD_3632: cmd unmatch for cmd=0x%x, nRetCmd=0x%x, package_index=%d, reread it; string: SendCMD_3632: read length unmatch, cmd=0x%x, recvBytes=%d, nSize=%d]
//   00494c40 FUN_00494c40  [string: CDev3632::ApplySetting: hWnd=%x, nFlag=%x, bBT=%x]
//   00494ef0 FUN_00494ef0  [caller depth 2 of FUN_00495380; string: CDev916KB::FindHIDDevice for %s, hDev=%x, hCmd=%x, hMusic=%x, bMedia=%d, id=%04x_%...; string: Psd unmatch: gVar.nPsd=%x,%x,%x,%x,%x,%x, nDevPsd=%x,%x,%x,%x,%x,%x]
//   00495200 FUN_00495200  [calls HidD_GetAttributes]
//   00495260 FUN_00495260  [caller depth 1 of HidD_SetFeature; calls HidD_SetFeature]
//   004952f0 FUN_004952f0  [caller depth 1 of HidD_GetFeature; calls HidD_GetFeature]
//   00495380 FUN_00495380  [caller depth 1 of FUN_00495260; caller depth 1 of FUN_004952f0]
//   00495480 FUN_00495480  [caller depth 1 of FUN_00495260]
//   00495520 FUN_00495520  [caller depth 1 of FUN_00495260; caller depth 1 of FUN_004952f0]
//   00495610 FUN_00495610  [caller depth 1 of FUN_00495260]
//   004956d0 FUN_004956d0  [caller depth 1 of FUN_00495260]
//   00495790 FUN_00495790  [caller depth 1 of FUN_00495260; caller depth 1 of FUN_004952f0]
//   00495880 FUN_00495880  [caller depth 1 of FUN_00495260]
//   00495950 FUN_00495950  [caller depth 1 of FUN_00495260; caller depth 1 of FUN_004952f0]
//   00495a60 FUN_00495a60  [caller depth 1 of FUN_00495260]
//   00495b20 FUN_00495b20  [caller depth 1 of HidD_SetFeature; calls HidD_SetFeature]
//   00495be0 FUN_00495be0  [string: keyinfo_to_hardware_code can't find macro id 0x%x]
//   004961a0 FUN_004961a0  [string: StMacro_To_HdMacro: get wrong hid]
//   004964e0 FUN_004964e0  [caller depth 2 of FUN_00495790]
//   00496a00 FUN_00496a00  [caller depth 2 of FUN_00495480; caller depth 2 of FUN_00495520; caller depth 2 of FUN_00495610; caller depth 2 of FUN_004956d0; caller depth 2 of FUN_00495a60; string: SetMacroData(%x) error, err=0x%x; string: SetProfile error, err=0x%x]
//   004972f0 FUN_004972f0  [string: %s bOnline=%x]
//   00497410 FUN_00497410  [calls ReadFile; string: ServiceThread_Combo ReadFile Err=%d; string: ServiceThread_Combo open err=0x%x; string: ServiceThread_Combo(%s) Start...; string: ServiceThread_Combo(%s) exit; string: ServiceThread_Combo: WaitForMultipleObjects err=%d; string: ServiceThread_Combo: hObject[1] is signal]
//   00497750 FUN_00497750  [string: CDevComboFilm::ClearHandle]
//   004977e0 FUN_004977e0  [string: CDevComboFilm::ClearHandle]
//   00497820 FUN_00497820  [string: CDevComboFilm::FindHIDDevice for %s]
//   00497840 FUN_00497840  [calls HidD_GetAttributes; string: CDevComboFilm::SyncCfg; string: SyncCfg: Get Wrong OnBoard!!; string: SyncCfg: GetLED Err; string: SyncCfg: GetLED Err: read valid data, retry now; string: SyncCfg: GetLED failed; string: SyncCfg: GetOnBoard failed; string: SyncCfg: UnSupport Sensor 0x%04x; string: SyncCfg: nCurOnBoard=%d; string: SyncCfg: nSensor=%d, nCurLevel=%d]
//   00497b90 FUN_00497b90  [string: !! CDevComboFilm::SendData: %s err, cmd=0x%x, package=%d; string: !! CDevComboFilm::SendData: read err, cmd=0x%x, nRet=%d, package=%d; string: !! CDevComboFilm::SendData: send package %d err=0x%x; string: CDevComboFilm::SendData param err, m_hDev=%x, nBytesToWrite=%d]
//   00497e50 FUN_00497e50  [string: !! ReadData: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d; string: !! ReadData: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d]
//   004980b0 FUN_004980b0  [string: CDevComboFilm::SetMatrix layer=%d]
//   00498100 FUN_00498100  [string: CDevComboFilm::GetMatrix layer=%d]
//   004981f0 FUN_004981f0  [string: CDevComboFilm::SetMacro; string: SetMacro failed]
//   00498260 FUN_00498260  [string: CDevComboFilm::SetLED]
//   004982c0 FUN_004982c0  [string: CDevComboFilm::GetLED]
//   00498300 FUN_00498300  [string: CDevComboFilm::SetOnBoard]
//   00498360 FUN_00498360  [string: CDevComboFilm::GetOnBoard]
//   00498540 FUN_00498540  [string: CDevComboFilm::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, bBT=%x]
//   0049875c FUN_0049875c  [calls ReadFile; string: ServiceThread_G5 Err=%d; string: ServiceThread_G5 Exit; string: ServiceThread_G5 Start...; string: ServiceThread_G5: hObject[1] is signal]
//   00498b50 FUN_00498b50  [caller depth 1 of FUN_00499fd0; calls HidD_GetAttributes; string: CDevG5KB::FindHIDDevice CreateFile %s; string: CDevG5KB::FindHIDDevice bFindMedida=%x, bFindWireless=%x; string: CDevG5KB::FindHIDDevice for %s, hDev=%x, nFw=%d, id=%04x_%04x; string: Psd unmatch: gVar.nPsd=%x,%x,%x,%x,%x,%x, nDevPsd=%x,%x,%x,%x,%x,%x]
//   00498eb0 FUN_00498eb0  [calls HidD_GetAttributes]
//   00498f60 FUN_00498f60  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData nOper err; string: CDevG5KB::AccessData read err=%d]
//   004991a0 FUN_004991a0  [caller depth 1 of FUN_00498f60]
//   004991e0 FUN_004991e0  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d]
//   004993f0 FUN_004993f0  [caller depth 1 of FUN_00498f60; string: SetMacro failed]
//   00499440 FUN_00499440  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d]
//   00499640 FUN_00499640  [caller depth 1 of FUN_00498f60]
//   00499690 FUN_00499690  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d]
//   00499890 FUN_00499890  [caller depth 1 of FUN_00498f60]
//   004998f0 FUN_004998f0  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d]
//   00499b00 FUN_00499b00  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d]
//   00499ce0 FUN_00499ce0  [caller depth 1 of FUN_00498f60]
//   00499d30 FUN_00499d30  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d]
//   00499f30 FUN_00499f30  [caller depth 1 of FUN_00498f60]
//   00499f80 FUN_00499f80  [caller depth 1 of FUN_00498f60]
//   00499fd0 FUN_00499fd0  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d]
//   0049a160 FUN_0049a160  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d; string: CDevG5KB::ReadPower  %d, %d; string: CDevG5KB::ReadPower failed]
//   0049a350 FUN_0049a350  [caller depth 1 of FUN_00498f60]
//   0049a380 FUN_0049a380  [caller depth 1 of FUN_00498f60]
//   0049a3b0 FUN_0049a3b0  [caller depth 1 of FUN_00498f60]
//   0049a3e0 FUN_0049a3e0  [caller depth 1 of FUN_00499b00]
//   0049a4c0 FUN_0049a4c0  [string: keyinfo_to_hardware_code can't find macro id 0x%x]
//   0049abe8 FUN_0049abe8  [string: StMacro_To_HdMacro: get wrong hid]
//   0049bad0 FUN_0049bad0  [string: CDevG5KB::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, nFw=%d, nMatrixLen=%d, bApply...; string: Reset using cmd; string: nMacroBufferSize > sizeof(bMacro)]
//   0049c6e0 FUN_0049c6e0  [caller depth 1 of HidD_SetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData_Page Param err; string: CDevG5KB::AccessData_Page cancel by user; string: CDevG5KB::AccessData_Page err=%d; string: CDevG5KB::AccessData_Page send package %d ok, dataUnit=%d; string: CDevG5KB::AccessData_Page send this page, Buffer=%x %x %x %x %x; string: CDevG5KB::AccessData_Page timeout, k=%d]
//   0049ca60 FUN_0049ca60  [caller depth 1 of FUN_0049c6e0]
//   0049ca80 FUN_0049ca80  [caller depth 1 of FUN_00498f60]
//   0049cc00 FUN_0049cc00  [calls ReadFile; string: DevG5MS_ServiceThread Exit; string: DevG5MS_ServiceThread ReadFile Err=%d; string: DevG5MS_ServiceThread Start...; string: DevG5MS_ServiceThread hObject[1] is signal]
//   0049d020 FUN_0049d020  [caller depth 1 of FUN_0049ea20; string: CDevG5MS::FindHIDDevice for %s, hDev=%x (%s), id=%04x_%04x; string: Psd unmatch 2: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x; string: Psd unmatch: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x]
//   0049d3b0 FUN_0049d3b0  [calls HidD_GetAttributes; string: SyncCfg(load):; string: SyncCfg: FW Version=0x%x; string: SyncCfg: Get Wrong OnBoard!!; string: SyncCfg: GetLED Err; string: SyncCfg: GetLED Err: read valid data, retry now; string: SyncCfg: GetLED failed; string: SyncCfg: GetOnBoard failed; string: SyncCfg: GetVersionNumber failed!; string: SyncCfg: UnSupport Sensor 0x%04x; string: SyncCfg: nCurHZ=%x; string: SyncCfg: nCurLOD=%x; string: SyncCfg: nCurOnBoard=%d; string: SyncCfg: nSensor=%d, nCurLevel=%d, SyncMask=0x%x]
//   0049d7d0 FUN_0049d7d0  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049daf0 FUN_0049daf0  [caller depth 1 of FUN_0049d7d0]
//   0049db30 FUN_0049db30  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049de00 FUN_0049de00  [caller depth 1 of FUN_0049d7d0; string: SetMacro failed]
//   0049de50 FUN_0049de50  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049e0f0 FUN_0049e0f0  [caller depth 1 of FUN_0049d7d0]
//   0049e140 FUN_0049e140  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049e400 FUN_0049e400  [caller depth 1 of FUN_0049d7d0]
//   0049e460 FUN_0049e460  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049e6e0 FUN_0049e6e0  [caller depth 1 of FUN_0049d7d0]
//   0049e730 FUN_0049e730  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049e9e0 FUN_0049e9e0  [caller depth 1 of FUN_0049d7d0]
//   0049ea20 FUN_0049ea20  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049ec70 FUN_0049ec70  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049ef00 FUN_0049ef00  [caller depth 1 of FUN_0049d7d0]
//   0049ef40 FUN_0049ef40  [caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x]
//   0049f1c0 FUN_0049f1c0  [calls ReadFile]
//   0049f300 FUN_0049f300  [caller depth 1 of FUN_0049d7d0]
//   0049f340 FUN_0049f340  [caller depth 1 of FUN_0049e730]
//   0049ff00 FUN_0049ff00  [caller depth 2 of FUN_0049ef00; string: nMacroBufferSize > hwParam.nMacroBufferSize; string: nMacroBufferSize > sizeof(bMacro); string: nMacroNum=%d, nNeedWriteMacro=%d, nKeyDirty=0x%x, nModeNum=%d, hwParam.nMacroBuffe...]
//   004ac430 FUN_004ac430  [calls ReadFile]
//   004ac610 FUN_004ac610  [calls WriteFile]
//   004b8c8c Read  [calls ReadFile]
//   004b8cce Write  [calls WriteFile]
//   005b3974 __NMSG_WRITE  [calls WriteFile]
//   005bac7c __read_nolock  [calls ReadFile]
//   005bb33b __write_nolock  [calls WriteFile]
//   005c9aee HidD_GetAttributes  [calls HidD_GetAttributes]
//   005c9b00 HidP_GetCaps  [calls HidP_GetCaps]
//   005c9b18 HidD_SetFeature  [calls HidD_SetFeature]
//   005c9b1e HidD_GetFeature  [calls HidD_GetFeature]

// ==== 0040ba40 FUN_0040ba40 ====
// why: calls HidD_GetAttributes

undefined4 FUN_0040ba40(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_c [12];
  
  iVar2 = FUN_00479590();
  if ((iVar2 != 0) && (*(int **)(iVar2 + 0x1c) != (int *)0x0)) {
    uVar3 = (**(code **)(**(int **)(iVar2 + 0x1c) + 0x14))();
    cVar1 = HidD_GetAttributes(uVar3,auStack_c);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(**(int **)(iVar2 + 0x1c) + 0x14))();
      (*DAT_0065d3e0)(L"clear_dev_by_path: name=%s, dev=0x%x, path=%s",iVar2 + 0x46,uVar3);
      if (iVar2 == DAT_00651534) {
        DAT_00651534 = 0;
      }
      (**(code **)(**(int **)(iVar2 + 0x1c) + 0x18))();
      Sleep(0x32);
      if (*(undefined4 **)(iVar2 + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar2 + 0x1c))(1);
      }
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      FUN_00409080();
    }
    return 1;
  }
  return 0;
}



// ==== 0040c490 FUN_0040c490 ====
// why: caller depth 1 of FUN_0049ea20; caller depth 1 of FUN_0049ef40; calls HidD_GetAttributes; string: Watcher_Thread_Mouse: GetPSD Err

void FUN_0040c490(uint param_1)

{
  char cVar1;
  HANDLE pvVar2;
  int iVar3;
  uint uVar4;
  WPARAM wParam;
  undefined4 uVar5;
  void *_Dst;
  wchar_t *pwVar6;
  undefined1 auStack_4fc [3];
  char cStack_4f9;
  HANDLE local_4f8;
  uint local_4f4;
  undefined1 auStack_4ec [4];
  ushort uStack_4e8;
  undefined **ppuStack_4e0;
  undefined4 uStack_4dc;
  HANDLE pvStack_4d4;
  undefined4 uStack_4d0;
  undefined2 uStack_4b4;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined1 uStack_230;
  undefined4 uStack_22f;
  ushort uStack_22b;
  undefined1 uStack_229;
  wchar_t awStack_228 [262];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005d787b;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)auStack_4fc;
  ExceptionList = &local_14;
  local_4f8 = (HANDLE)*DAT_0065e860;
  local_4f4 = param_1;
  (*DAT_0065d3e0)(L"Watcher_Thread_Mouse start, hDev=%x",local_4f8,
                  DAT_0064f674 ^ (uint)&stack0xfffffaf8);
  _wcsncpy_s(awStack_228,0x104,(wchar_t *)(DAT_0065e860 + 1),0xffffffff);
  (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: szDevPath=%s",awStack_228);
  FUN_004930c0();
  ppuStack_4e0 = CDevG5MS::vftable;
  uStack_4dc = 0x8805;
  uStack_238 = 0;
  pvStack_4d4 = (HANDLE)0x0;
  uStack_4d0 = 0;
  uStack_23c = 0x14;
  uStack_4b4 = 0;
  uStack_24c = 0;
  uStack_250 = 0;
  uStack_254 = 0;
  uStack_c = 0;
  pvVar2 = CreateFileW(awStack_228,0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0);
  if (pvVar2 == (HANDLE)0xffffffff) {
    pwVar6 = L"Watcher_Thread_Mouse: Open device failed";
  }
  else {
    cStack_4f9 = '\0';
    pvStack_4d4 = pvVar2;
    FUN_0049ef40(&cStack_4f9);
    if (cStack_4f9 == '\0') {
      do {
        uStack_230 = 0;
        uStack_22f = 0;
        uStack_22b = 0;
        uStack_229 = 0;
        iVar3 = FUN_0049f1c0();
        if (iVar3 != 0) {
          pwVar6 = L"Watcher_Thread_Mouse: failed";
          goto LAB_0040c75d;
        }
        FUN_00407c90(&uStack_230,8,0,L"Watcher_Thread_Mouse recv: ");
      } while ((((char)uStack_22f != '\n') || (uStack_22f._1_1_ != '\x02')) ||
              (uStack_22f._2_1_ != '\x01'));
      Sleep(200);
      (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: device connected, hDev=%x",local_4f8);
      param_1 = local_4f4;
    }
    Sleep(0x14);
    uStack_230 = 0;
    uStack_22f = 0;
    uStack_22b = uStack_22b & 0xff00;
    iVar3 = FUN_0049ea20(&ppuStack_4e0,pvVar2);
    if (iVar3 != 0) {
      local_4f4 = 0;
      cVar1 = HidD_GetAttributes(pvVar2,auStack_4ec);
      uVar4 = local_4f4;
      if (cVar1 != '\0') {
        uVar4 = (uint)uStack_4e8;
      }
      wParam = FUN_0040cb40(param_1,uVar4,local_4f8,0,0x8805);
      (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: OnNewDongle return %x",wParam);
      if (wParam == 0) {
        CloseHandle(local_4f8);
      }
      else {
        _wcsncpy_s((wchar_t *)(*(int *)(wParam + 0x1c) + 0x2c),0x104,awStack_228,0xffffffff);
        if (param_1 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(param_1 + 0x20);
        }
        (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: send WM_NEW_WIRELESS to hwnd=%x",uVar5);
        if (param_1 == 0) {
          PostMessageW((HWND)0x0,0x458,wParam,0);
        }
        else {
          PostMessageW(*(HWND *)(param_1 + 0x20),0x458,wParam,0);
        }
      }
      goto LAB_0040c766;
    }
    pwVar6 = L"Watcher_Thread_Mouse: GetPSD Err";
  }
LAB_0040c75d:
  (*DAT_0065d3e0)(pwVar6);
LAB_0040c766:
  _Dst = (void *)FUN_0040c220();
  if (_Dst != (void *)0x0) {
    (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: clear szDevPath=%s",(int)_Dst + 4);
    _memset(_Dst,0,0x20c);
  }
  (*DAT_0065d3e0)(L"Watcher_Thread_Mouse eixt, hDev=%x",local_4f8);
  uStack_c = 0xffffffff;
  ppuStack_4e0 = CDevG5MS::vftable;
  FUN_0049cfa0();
  if (pvStack_4d4 != (HANDLE)0x0) {
    CloseHandle(pvStack_4d4);
    pvStack_4d4 = (HANDLE)0x0;
  }
  uStack_4b4 = 0;
  ppuStack_4e0 = CHidDev::vftable;
  FUN_0046afa0();
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_4fc);
  return;
}



// ==== 0040cb40 FUN_0040cb40 ====
// why: string: OnNewDongle: Find new wireless, vid_pid=%04x_%04x, bBT=%x, nPsd=%02x,%02x,%02x,%02...

int __fastcall
FUN_0040cb40(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005d7846;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (*DAT_0065d3e0)(L"OnNewDongle: Find new wireless, vid_pid=%04x_%04x, bBT=%x, nPsd=%02x,%02x,%02x,%02x,%02x,%02x"
                  ,param_4,param_2,param_6,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                  param_1[5],DAT_0064f674 ^ (uint)&stack0xffffffe4);
  if (param_6 != 0) {
    param_2 = 0;
    param_4 = 0;
  }
  iVar2 = FUN_00479480(param_4,param_2);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"OnNewDongle: it\'s unsupported device");
    iVar2 = 0;
  }
  else {
    (*DAT_0065d3e0)(L"OnNewDongle: pDEV=%s",iVar2 + 0x46);
    if (*(int *)(iVar2 + 0x1c) != 0) {
      (*DAT_0065d3e0)(L"OnNewDongle: pDEV->pHidDev->m_bWireless=%d, pDEV->bBT=%d",
                      *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x234),*(undefined4 *)(iVar2 + 0x30c)
                     );
      puVar1 = *(undefined4 **)(iVar2 + 0x1c);
      if ((puVar1[0x8d] == 1) || ((*(int *)(iVar2 + 0x30c) == 1 && (param_6 != 0)))) {
        (*DAT_0065d3e0)(L"OnNewDongle: CHidDev object has init, ignore this dongle");
        ExceptionList = local_c;
        return 0;
      }
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    if (param_7 == 0x3632) {
      iVar3 = FUN_004ad0e9(0x2a4);
      uStack_4 = 0;
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_00493590(iVar3);
      }
      piVar4[3] = param_5;
    }
    else {
      if (param_7 != 0x8805) {
        (*DAT_0065d3e0)(L"OnNewDongle: new error");
        ExceptionList = local_c;
        return 0;
      }
      iVar3 = FUN_004ad0e9(0x2ac);
      uStack_4 = 1;
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0049ce30(0);
      }
      piVar4[3] = param_5;
    }
    uStack_4 = 0xffffffff;
    piVar4[2] = param_3;
    piVar4[0x8d] = 2;
    piVar4[4] = iVar2;
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_3 + 0x20);
    }
    (**(code **)(*piVar4 + 0xc))(uVar5);
    *(int **)(iVar2 + 0x1c) = piVar4;
    *(uint *)(iVar2 + 0x30c) = (uint)(param_6 != 0);
    if (DAT_00651534 == 0) {
      DAT_00651534 = iVar2;
    }
  }
  ExceptionList = local_c;
  return iVar2;
}



// ==== 0040cd40 FUN_0040cd40 ====
// why: string: OnNewCombo: GetPSD failed; string: OnNewCombo: can't find dev, devPsd=%x %x %x %x %x %x

void FUN_0040cd40(int param_1,byte param_2)

{
  uint uType;
  HANDLE hObject;
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_20;
  int local_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005d77fb;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_20;
  uType = DAT_0064f674 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  uVar5 = (uint)param_2;
  local_1c = param_1;
  (*DAT_0065d3e0)(L"OnNewCombo: nDevTy=%x",uVar5);
  if (uVar5 == 1) {
    iVar2 = *(int *)(param_1 + 4);
  }
  else {
    if (uVar5 != 0) goto LAB_0040cf68;
    iVar2 = *(int *)(param_1 + 8);
  }
  if (iVar2 == 0) {
    hObject = CreateFileW((LPCWSTR)(param_1 + 0xc),0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                          0x40000000,(HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) {
      DVar1 = GetLastError();
      (*DAT_0065d3e0)(L"OnNewCombo: open err=%x",DVar1);
    }
    else {
      uStack_17 = 0;
      uStack_16 = 0;
      uStack_15 = 0;
      uStack_14 = 0;
      uStack_13 = 0;
      uStack_18 = 0;
      iVar2 = FUN_004948e0(0x15,(-(uVar5 != 1) & 0x10U) + 5,&uStack_18,6,0,5);
      if (iVar2 == 0) {
        (*DAT_0065d3e0)(L"OnNewCombo: GetPSD failed");
      }
      else {
        iVar2 = FUN_00479480(0,0);
        if ((iVar2 != 0) && (uVar5 == *(uint *)(iVar2 + 0x14))) {
          iVar3 = FUN_004ad0e9(0x28c);
          uStack_18 = (undefined1)iVar3;
          uStack_17 = (undefined1)((uint)iVar3 >> 8);
          uStack_16 = (undefined1)((uint)iVar3 >> 0x10);
          uStack_15 = (undefined1)((uint)iVar3 >> 0x18);
          uStack_4 = 0;
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_004976c0(iVar3);
          }
          uStack_4 = 0xffffffff;
          *(int *)(iVar2 + 0x1c) = iVar3;
          *(int *)(iVar3 + 0x10) = iVar2;
          if (uVar5 == 1) {
            *(int *)(local_1c + 4) = iVar2;
          }
          else if ((uVar5 == 0) && (*(int *)(local_1c + 8) = iVar2, *(int *)(iVar2 + 0x18) != 0x1c))
          {
            FID_conflict_MessageBoxW((HWND)&DAT_0060d264,(LPCWSTR)0x0,(LPCWSTR)0x0,uType);
          }
          *(HANDLE *)(*(int *)(iVar2 + 0x1c) + 0xc) = hObject;
          *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x234) = 2;
          if (DAT_00651534 == 0) {
            DAT_00651534 = iVar2;
          }
          *(int *)(*(int *)(iVar2 + 0x1c) + 8) = local_20;
          if (local_20 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(local_20 + 0x20);
          }
          (**(code **)(**(int **)(iVar2 + 0x1c) + 0xc))(uVar4);
          SetTimer(*(HWND *)(local_20 + 0x20),0x611,1000,(TIMERPROC)0x0);
          (*DAT_0065d3e0)(L"OnNewCombo: init ok, pDEV=%x(%s)",iVar2,iVar2 + 0x28);
          goto LAB_0040cf68;
        }
        (*DAT_0065d3e0)(L"OnNewCombo: can\'t find dev, devPsd=%x %x %x %x %x %x",uStack_18,uStack_17
                        ,uStack_16,uStack_15,uStack_14,uStack_13,uStack_12);
      }
      CloseHandle(hObject);
    }
  }
LAB_0040cf68:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_20);
  return;
}



// ==== 0040fbe0 FUN_0040fbe0 ====
// why: string: CmdReset; string: DPIRGBIndex; string: FwVerNeedToUpdate; string: LedMask; string: LedOpt%d; string: MacroBufferSize; string: RGBIndex; string: SleepTime

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040fbe0(LPCWSTR param_1,int param_2)

{
  int iVar1;
  char cVar2;
  void *_Dst;
  UINT UVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined2 *puVar10;
  short *psVar11;
  ushort *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  LPCWSTR pWVar18;
  uint uVar19;
  int *piVar20;
  LPCWSTR local_1d4c;
  uint local_1d48;
  void *local_1d44;
  int local_1d40;
  int local_1d3c;
  uint local_1d38 [3];
  undefined4 local_1d2c;
  undefined4 local_1d28;
  undefined4 local_1d24;
  undefined4 local_1d20;
  undefined4 local_1d1c;
  int local_1d18;
  int local_1d14 [12];
  undefined2 uStack_1ce3;
  undefined4 local_1ce4;
  undefined4 local_1ce0;
  undefined4 local_1cdc;
  undefined4 local_1cd8;
  undefined4 local_1cd4;
  undefined1 local_1cd0;
  undefined2 uStack_1ccf;
  undefined1 uStack_1ccd;
  undefined4 local_1ccc;
  undefined4 local_1cc8;
  undefined4 local_1cc4;
  undefined4 local_1cc0;
  uint local_1cbc [18];
  wchar_t local_1c74 [260];
  uint local_1a6c [5];
  int local_1a58;
  int local_1a54;
  int local_1a50;
  int local_1a4c;
  int local_1a48;
  WCHAR local_124c [1040];
  wchar_t local_a2c [1300];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_1d4c;
  local_1cc4 = local_1cc4 & 0xffffff00;
  local_1d4c = param_1;
  local_1d18 = param_2;
  _memset((void *)((int)&local_1cc4 + 1),0,0x27);
  if (*(int *)(param_2 + 0x24) == 0) {
    _Dst = _malloc(0x3484);
    *(void **)(param_2 + 0x24) = _Dst;
    if (_Dst == (void *)0x0) {
      __security_check_cookie(local_4 ^ (uint)&local_1d4c);
      return;
    }
    _memset(_Dst,0,0x3484);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  iVar13 = iVar1 + 0x18;
  GetPrivateProfileStringW(L"OPT",L"UID",(LPCWSTR)0x0,(LPWSTR)(param_2 + 0xb2),0xf,param_1);
  UVar3 = GetPrivateProfileIntW(L"OPT",L"FwVerNeedToUpdate",0,param_1);
  *(UINT *)(param_2 + 0x2d8) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ForceUpdate",0,param_1);
  *(UINT *)(param_2 + 0x2dc) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"MacroBufferSize",0x1000,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 4) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"Sensor",0,param_1);
  *(UINT *)(iVar1 + 0x41c) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowLED",1,param_1);
  *(char *)(iVar1 + 0x2697) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowDpiColor",1,param_1);
  *(char *)(iVar1 + 0x2695) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowEffect",0,param_1);
  *(char *)(iVar1 + 0x2694) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowPower",0,param_1);
  *(char *)(iVar1 + 0x269d) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowPowerText",0,param_1);
  *(char *)(iVar1 + 0x269e) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"DR",0x500,param_1);
  *(UINT *)(iVar1 + 0x26b4) = UVar3;
  GetPrivateProfileStringW(L"OPT",L"RATE",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
  if (((WCHAR)local_1a6c[0] == L'\0') || (iVar4 = FUN_004658b0(local_1a6c,4), iVar4 < 1)) {
    *(undefined4 *)(iVar1 + 0x26b8) = 0x125;
    *(undefined4 *)(iVar1 + 0x26bc) = 0x250;
    *(undefined4 *)(iVar1 + 0x26c0) = 0x500;
    *(undefined4 *)(iVar1 + 0x26c4) = 0x1000;
  }
  GetPrivateProfileStringW(L"OPT",L"RGBIndex",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
  if (((WCHAR)local_1a6c[0] == L'\0') || (iVar4 = FUN_00465980(local_1a6c,3), iVar4 < 1)) {
    *(undefined1 *)(iVar1 + 0x2674) = 0;
    *(undefined1 *)(iVar1 + 0x2675) = 1;
    *(undefined1 *)(iVar1 + 0x2676) = 2;
  }
  GetPrivateProfileStringW(L"OPT",L"DPIRGBIndex",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
  if (((WCHAR)local_1a6c[0] == L'\0') || (iVar4 = FUN_00465980(local_1a6c,3), iVar4 < 1)) {
    *(undefined1 *)(iVar1 + 0x2678) = 0;
    *(undefined1 *)(iVar1 + 0x2679) = 1;
    *(undefined1 *)(iVar1 + 0x267a) = 2;
  }
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowSleep",1,param_1);
  *(char *)(iVar1 + 0x26d8) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"SleepTime",5,param_1);
  *(char *)(iVar1 + 0x26d9) = (char)UVar3;
  GetPrivateProfileStringW(L"OPT",L"SleepUI",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
  if ((WCHAR)local_1a6c[0] == L'\0') {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_004658b0(local_1a6c,0x10);
  }
  *(char *)(iVar1 + 0x26da) = cVar2;
  if (cVar2 == '\0') {
    local_1d38[0] = 1;
    local_1d38[1] = 2;
    local_1d38[2] = 3;
    local_1d2c = 4;
    local_1d28 = 5;
    local_1d24 = 10;
    local_1d20 = 0xf;
    local_1d1c = 0x14;
    *(undefined1 *)(iVar1 + 0x26da) = 8;
    iVar4 = 0;
    puVar8 = (uint *)(iVar1 + 0x26dc);
    do {
      uVar5 = local_1d38[iVar4];
      *puVar8 = uVar5;
      *(char *)(iVar4 + 0x2704 + iVar13) = (char)uVar5;
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(iVar1 + 0x26da));
  }
  else {
    GetPrivateProfileStringW(L"OPT",L"SleepHW",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
    if ((WCHAR)local_1a6c[0] == L'\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00465980(local_1a6c,0x10);
    }
    if (uVar5 != *(byte *)(iVar1 + 0x26da)) {
      MessageBoxW((HWND)0x0,L"SleepUI!=SleepHW",L"Warning",0);
    }
  }
  UVar3 = GetPrivateProfileIntW(L"OPT",L"Debounce",0,param_1);
  *(UINT *)(iVar1 + 0x272c) = UVar3;
  if (0 < (int)UVar3) {
    GetPrivateProfileStringW(L"OPT",L"DebounceUI",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
    if ((WCHAR)local_1a6c[0] != L'\0') {
      FUN_00465980(local_1a6c,0xc);
    }
    GetPrivateProfileStringW(L"OPT",L"DebounceHW",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
    if ((WCHAR)local_1a6c[0] != L'\0') {
      FUN_00465980(local_1a6c,0xc);
    }
  }
  pWVar18 = local_1d4c;
  FUN_00465b00(0x14,L"ptKeyMarkDlg");
  FUN_00465b00(0x50,L"ptKey");
  UVar3 = GetPrivateProfileIntW(L"OPT",L"LedMask",0,pWVar18);
  *(UINT *)(iVar1 + 0x268c) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowModeSW",1,pWVar18);
  *(char *)(iVar1 + 0x269b) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowRGBSw",1,pWVar18);
  *(char *)(iVar1 + 0x2699) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"Enhance",-1,pWVar18);
  *(UINT *)(iVar1 + 0x267c) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowSys",1,pWVar18);
  *(char *)(iVar1 + 0x26a0) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"OnBoardNum",1,pWVar18);
  *(UINT *)(iVar1 + 0x2680) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowColorAddDec",1,pWVar18);
  *(char *)(iVar1 + 0x269f) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ApplyDpiForClick",1,pWVar18);
  *(char *)(iVar1 + 0x26a1) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ChangeDpiColor",1,pWVar18);
  *(char *)(iVar1 + 0x26a2) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowSleep",0,pWVar18);
  *(char *)(iVar1 + 0x26d8) = (char)UVar3;
  GetPrivateProfileStringW(L"OPT",L"SteadyLEDPos",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,pWVar18);
  if ((WCHAR)local_1a6c[0] != L'\0') {
    FUN_00465980(local_1a6c,8);
    pWVar18 = local_1d4c;
  }
  UVar3 = GetPrivateProfileIntW(L"OPT",L"SendTimeOnOpenKB",0,pWVar18);
  *(char *)(iVar1 + 0x2b95) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"KeyMask",0,pWVar18);
  *(UINT *)(iVar1 + 0x2684) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"CmdReset",0,pWVar18);
  *(char *)(iVar1 + 0x2b96) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"SyncMask",0,pWVar18);
  *(char *)(iVar1 + 0x2b97) = (char)UVar3;
  GetPrivateProfileStringW(L"OPT",L"ShowSideKeySw",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
  if ((local_124c[0] != L'\0') && (iVar4 = FUN_004658b0(local_124c,2), 0 < iVar4)) {
    *(uint *)(iVar1 + 0x26a4) = local_1a6c[1] << 0x10 | local_1a6c[0];
  }
  pWVar18 = local_1d4c;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowMusic",0,local_1d4c);
  *(char *)(iVar1 + 0x2b94) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"LightBarNum",1,pWVar18);
  *(UINT *)(iVar1 + 0x2b3c) = UVar3;
  GetPrivateProfileStringW(L"OPT",L"LightBarLedNum",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
  if (local_124c[0] != L'\0') {
    FUN_00465980(local_124c,4);
  }
  local_1d44 = (void *)(iVar1 + 0x2b44);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    __snwprintf_s(local_1c74,0x1e,0x1d,L"LightBarLedPos%d",iVar4);
    GetPrivateProfileStringW(L"OPT",local_1c74,(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    if (local_124c[0] != L'\0') {
      _Size = FUN_00465980(local_124c,0x28);
      if (0 < (int)_Size) {
        _memcpy(local_1d44,&local_1cc4,_Size);
      }
    }
    local_1d44 = (void *)((int)local_1d44 + 0x14);
  } while (iVar4 < 4);
  UVar3 = GetPrivateProfileIntW(L"OPT",L"EffectNum",0,local_1d4c);
  *(UINT *)(iVar1 + 0x26a8) = UVar3;
  *(undefined1 *)(iVar1 + 0x277c) = 1;
  *(undefined1 *)(iVar1 + 0x277e) = 0;
  *(undefined1 *)(iVar1 + 0x277d) = 5;
  *(undefined1 *)(iVar1 + 0x277f) = 1;
  *(undefined1 *)(iVar1 + 0x2780) = 0;
  *(undefined1 *)(iVar1 + 0x2781) = 1;
  *(undefined1 *)(iVar1 + 0x2782) = 0;
  *(undefined1 *)(iVar1 + 0x2783) = 0;
  local_1d14[5] = 0xffff00;
  local_1d14[6] = 0xffff;
  local_1d14[7] = 0xff00ff;
  local_1d48 = 0xff00ff;
  local_1cd8 = 0xffff;
  local_1cd4 = 0xffff00;
  local_1cc8 = 0xff00ff;
  local_1d2c = 0xffff00;
  local_1d28 = 0xffff;
  local_1d14[1] = 0xff00ff;
  local_1d14[9] = 0;
  local_1d14[10] = 0;
  local_1d14[0xb] = 0;
  local_1d14[2] = 0xff;
  local_1d14[3] = 0xff00;
  local_1d14[4] = 0xff0000;
  local_1d14[8] = 0xffffff;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x2784);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x27a4) = 1;
  *(undefined1 *)(iVar1 + 0x27a6) = 1;
  *(undefined1 *)(iVar1 + 0x27a5) = 1;
  *(undefined1 *)(iVar1 + 0x27a7) = 0;
  *(undefined1 *)(iVar1 + 0x27a8) = 1;
  *(undefined1 *)(iVar1 + 0x27a9) = 0;
  *(undefined1 *)(iVar1 + 0x27aa) = 0;
  *(undefined1 *)(iVar1 + 0x27ab) = 1;
  puVar8 = &local_1d48;
  puVar7 = (uint *)(iVar1 + 0x27ac);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1d38[0] = 0xff;
  local_1ce4 = 0xff;
  local_1d38[1] = 0xff00;
  local_1d38[2] = 0xff0000;
  local_1d24 = 0xfa00fa;
  local_1d20 = 0xffffff;
  local_1d1c = 0;
  *(undefined1 *)(iVar1 + 0x27cc) = 1;
  *(undefined1 *)(iVar1 + 0x27ce) = 2;
  *(undefined1 *)(iVar1 + 0x27cd) = 3;
  *(undefined1 *)(iVar1 + 0x27cf) = 1;
  *(undefined1 *)(iVar1 + 0x27d0) = 0;
  *(undefined1 *)(iVar1 + 0x27d1) = 0;
  *(undefined1 *)(iVar1 + 0x27d2) = 0;
  *(undefined1 *)(iVar1 + 0x27d3) = 7;
  puVar8 = local_1d38;
  puVar7 = (uint *)(iVar1 + 0x27d4);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1ce0 = 0xff00;
  local_1cdc = 0xff0000;
  local_1cd0 = 0xff;
  uStack_1ccf = 0xffff;
  uStack_1ccd = 0;
  local_1ccc = 0x80fa;
  local_1d14[0] = 0xff00;
  *(undefined1 *)(iVar1 + 0x27f4) = 1;
  *(undefined1 *)(iVar1 + 0x27f6) = 3;
  *(undefined1 *)(iVar1 + 0x27f5) = 0;
  *(undefined1 *)(iVar1 + 0x27f7) = 1;
  *(undefined1 *)(iVar1 + 0x27f8) = 0;
  *(undefined1 *)(iVar1 + 0x27f9) = 0;
  *(undefined1 *)(iVar1 + 0x27fa) = 0;
  *(undefined1 *)(iVar1 + 0x27fb) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x27fc);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x281c) = 1;
  *(undefined1 *)(iVar1 + 0x281e) = 4;
  *(undefined1 *)(iVar1 + 0x281d) = 2;
  *(undefined1 *)(iVar1 + 0x281f) = 1;
  *(undefined1 *)(iVar1 + 0x2820) = 0;
  *(undefined1 *)(iVar1 + 0x2821) = 0;
  *(undefined1 *)(iVar1 + 0x2822) = 0;
  *(undefined1 *)(iVar1 + 0x2823) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x2824);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x2844) = 1;
  *(undefined1 *)(iVar1 + 0x2846) = 5;
  *(undefined1 *)(iVar1 + 0x2845) = 0;
  *(undefined1 *)(iVar1 + 0x2847) = 0;
  *(undefined1 *)(iVar1 + 0x2848) = 0;
  *(undefined1 *)(iVar1 + 0x2849) = 0;
  *(undefined1 *)(iVar1 + 0x284a) = 0;
  *(undefined1 *)(iVar1 + 0x284b) = 8;
  puVar14 = &stack0xffffe31c;
  puVar17 = (undefined4 *)(iVar1 + 0x284c);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)(iVar1 + 0x286c) = 1;
  *(undefined1 *)(iVar1 + 0x286e) = 6;
  *(undefined1 *)(iVar1 + 0x286d) = 4;
  *(undefined1 *)(iVar1 + 0x286f) = 0;
  *(undefined1 *)(iVar1 + 0x2870) = 0;
  *(undefined1 *)(iVar1 + 0x2871) = 0;
  *(undefined1 *)(iVar1 + 0x2872) = 0;
  *(undefined1 *)(iVar1 + 0x2873) = 2;
  piVar16 = local_1d14;
  piVar20 = (int *)(iVar1 + 0x2874);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x2894) = 1;
  *(undefined1 *)(iVar1 + 0x2896) = 7;
  *(undefined1 *)(iVar1 + 0x2895) = 0;
  *(undefined1 *)(iVar1 + 0x2897) = 1;
  *(undefined1 *)(iVar1 + 0x2898) = 0;
  *(undefined1 *)(iVar1 + 0x2899) = 0;
  *(undefined1 *)(iVar1 + 0x289a) = 0;
  *(undefined1 *)(iVar1 + 0x289b) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x289c);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x28bc) = 1;
  *(undefined1 *)(iVar1 + 0x28be) = 8;
  *(undefined1 *)(iVar1 + 0x28bd) = 9;
  *(undefined1 *)(iVar1 + 0x28bf) = 1;
  *(undefined1 *)(iVar1 + 0x28c0) = 0;
  *(undefined1 *)(iVar1 + 0x28c1) = 0;
  *(undefined1 *)(iVar1 + 0x28c2) = 0;
  *(undefined1 *)(iVar1 + 0x28c3) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x28c4);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x28e4) = 1;
  *(undefined1 *)(iVar1 + 0x28e6) = 0;
  *(undefined1 *)(iVar1 + 0x28e5) = 0;
  *(undefined1 *)(iVar1 + 0x28e7) = 0;
  *(undefined1 *)(iVar1 + 0x28e8) = 0;
  *(undefined1 *)(iVar1 + 0x28e9) = 0;
  *(undefined1 *)(iVar1 + 0x28ea) = 0;
  *(undefined1 *)(iVar1 + 0x28eb) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x28ec);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  local_1d48 = 0;
  puVar15 = (undefined1 *)(iVar1 + 0x277d);
  do {
    local_1d48 = local_1d48 + 1;
    __snwprintf_s(local_1c74,0x1e,0x1d,L"LedOpt%d",local_1d48);
    GetPrivateProfileStringW(L"OPT",local_1c74,(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    if (local_124c[0] != L'\0') {
      iVar4 = 10;
      iVar6 = FUN_00465980(local_124c,0x28);
      if (0 < iVar6) {
        *puVar15 = local_1cc4._1_1_;
        puVar15[1] = (undefined1)local_1cc4;
        puVar15[3] = local_1cc4._3_1_;
        puVar15[2] = local_1cc4._2_1_;
        puVar15[5] = local_1cc0._1_1_;
        puVar15[-1] = 1;
        puVar15[4] = (undefined1)local_1cc0;
        cVar2 = local_1cc0._2_1_;
        if (local_1cc0._2_1_ == -0x80) {
          cVar2 = '\0';
        }
        puVar15[6] = cVar2;
        if (7 < iVar6) {
          puVar7 = local_1cbc;
          puVar8 = (uint *)(puVar15 + 7);
          do {
            *puVar8 = (uint)CONCAT21((short)*puVar7,*(undefined1 *)((int)puVar7 + -1));
            puVar8 = puVar8 + 1;
            puVar7 = (uint *)((int)puVar7 + 3);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    pWVar18 = local_1d4c;
    puVar15 = puVar15 + 0x28;
  } while ((int)local_1d48 < 0x18);
  UVar3 = GetPrivateProfileIntW(L"KEY",L"MDNUM",3,local_1d4c);
  *(int *)(iVar1 + 0x26cc) = (int)UVar3 / 3;
  UVar3 = GetPrivateProfileIntW(L"KEY",L"KEYH",10,pWVar18);
  *(UINT *)(iVar1 + 0x418) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"KEY",L"KM",0,pWVar18);
  *(int *)(iVar1 + 0x26c8) = (int)UVar3 / 2;
  local_1d48 = 0;
  puVar8 = (uint *)(iVar1 + 700);
  do {
    local_1d48 = local_1d48 + 1;
    __snwprintf_s(local_1c74,0x14,0x13,L"Mark%d",local_1d48);
    GetPrivateProfileStringW(L"KEY",local_1c74,(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    if ((local_124c[0] == L'\0') || (iVar4 = FUN_00465980(local_124c,0x28), iVar4 < 1)) break;
    uVar5 = local_1cc4 >> 8 & 0xff;
    puVar8[-1] = local_1cc4 & 0xff;
    puVar8[2] = (local_1cc4 >> 0x18) + uVar5;
    *puVar8 = uVar5;
    puVar8[1] = (local_1cc4 >> 0x10 & 0xff) + (local_1cc4 & 0xff);
    puVar8 = puVar8 + 4;
  } while ((int)local_1d48 < 0x15);
  local_1d40 = 0;
  local_1d44 = (void *)0x0;
  do {
    local_1d40 = local_1d40 + 1;
    uVar5 = 0;
    do {
      local_1d48 = uVar5 + 1;
      __snwprintf_s(local_1c74,0x14,0x13,L"K%d_%d",local_1d48,local_1d40);
      GetPrivateProfileStringW(L"KEY",local_1c74,(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
      if ((local_124c[0] != L'\0') && (iVar4 = FUN_004658b0(local_124c,4), 0 < iVar4)) {
        puVar8 = (uint *)(((int)local_1d44 + uVar5) * 0x10 + iVar13);
        *(undefined1 *)(puVar8 + 3) = (undefined1)local_1d2c;
        *puVar8 = local_1d38[1] & 0xff | local_1d38[0] << 0x18;
        cVar2 = (char)local_1d38[1];
        if ((char)local_1d38[0] == '\b') {
          if (cVar2 == -0x5a) {
            puVar8[2] = local_1d38[2];
          }
          else if (cVar2 == -0x5c) {
            puVar8[2] = local_1d38[2];
          }
        }
        else if ((char)local_1d38[0] == '\x02') {
          *(char *)((int)puVar8 + 5) = cVar2;
          *puVar8 = 0x2000000;
          *(char *)((int)puVar8 + 6) = (char)(local_1d38[1] >> 8);
          if ((local_1d38[2] & 1) != 0) {
            *(byte *)(puVar8 + 1) = (byte)puVar8[1] | 1;
          }
          if ((local_1d38[2] & 2) != 0) {
            *(byte *)(puVar8 + 1) = (byte)puVar8[1] | 2;
          }
          if ((local_1d38[2] & 4) != 0) {
            *(byte *)(puVar8 + 1) = (byte)puVar8[1] | 4;
          }
          if ((local_1d38[2] & 8) != 0) {
            *(byte *)(puVar8 + 1) = (byte)puVar8[1] | 8;
          }
        }
        else if (((char)local_1d38[0] == '\f') || ((char)local_1d38[0] == '\x05')) {
          *puVar8 = local_1d38[0] << 0x18;
          puVar8[1] = local_1d38[2];
        }
        else if ((char)local_1d38[0] == '\t') {
          *puVar8 = local_1d38[1] & 0xff | 0x9000000;
          puVar8[2] = local_1d38[2];
        }
      }
      uVar5 = local_1d48;
    } while ((int)local_1d48 < 0x15);
    local_1d44 = (void *)((int)local_1d44 + 0x15);
  } while ((int)local_1d44 < 0x2a);
  local_1d40 = 0;
  do {
    iVar4 = local_1d40;
    local_1d14[0] = local_1d40 + 1;
    __snwprintf_s(local_1c74,0x1e,0x1d,L"SENSOR_%d",local_1d14[0]);
    pWVar18 = local_1d4c;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"Sensor",0,local_1d4c);
    iVar4 = iVar4 * 0x890 + iVar13;
    *(UINT *)(iVar4 + 0x408) = UVar3;
    local_1d3c = iVar4;
    if (UVar3 == 0) break;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"DM",6,pWVar18);
    *(UINT *)(iVar4 + 0x40c) = UVar3;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"DpiUILevels",UVar3,pWVar18);
    *(UINT *)(iVar4 + 0x410) = UVar3;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"DEFLEVEL",0,pWVar18);
    *(UINT *)(iVar4 + 0x414) = UVar3;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"DPIH",0x10,pWVar18);
    *(UINT *)(iVar4 + 0x458) = UVar3;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"ShowLOD",0,pWVar18);
    *(UINT *)(iVar4 + 0xc84) = UVar3;
    if (0 < (int)UVar3) {
      GetPrivateProfileStringW(local_1c74,L"LodUI",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
      if (local_124c[0] != L'\0') {
        FUN_00465980(local_124c,8);
        pWVar18 = local_1d4c;
      }
      GetPrivateProfileStringW(local_1c74,L"LodHW",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
      if (local_124c[0] != L'\0') {
        FUN_00465980(local_124c,8);
        pWVar18 = local_1d4c;
      }
    }
    *(undefined4 *)(iVar4 + 0x45c) = *(undefined4 *)(iVar4 + 0x408);
    local_1cc4 = 0;
    _memset(&local_1cc0,0,0x4c);
    GetPrivateProfileStringW(local_1c74,L"DPIRANGEALIAS",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
    if (local_124c[0] == L'\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004658b0(local_124c,0x208);
      pWVar18 = local_1d4c;
    }
    local_1d48 = iVar6 / 2;
    iVar6 = 0;
    if (0 < (int)local_1d48) {
      puVar8 = local_1a6c;
      do {
        (&local_1cc4)[iVar6 * 2] = *puVar8;
        local_1cbc[iVar6 * 2 + -1] = puVar8[1];
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 2;
      } while (iVar6 < (int)local_1d48);
    }
    _memset(local_1a6c,0,0x50);
    GetPrivateProfileStringW(local_1c74,L"DPIRANGE",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
    if (local_124c[0] == L'\0') {
LAB_00410f09:
      GetPrivateProfileStringW(local_1c74,L"DPISET",(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
      if (local_124c[0] == L'\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004658b0(local_124c,0x208);
      }
      local_1d48 = (uint)(0 < iVar6);
      if (iVar6 < 1) {
        FUN_004139b0();
        if (*(int *)(iVar4 + 0x460) < 1) {
          __snwprintf_s(local_a2c,0x104,0x103,L"Unassigned %x value for dev: %s",
                        *(undefined4 *)(iVar4 + 0x408),local_1d18 + 0x46);
          MessageBoxW((HWND)0x0,local_a2c,L"Warning",0);
        }
      }
      else {
        iVar9 = 0;
        *(int *)(iVar4 + 0x460) = iVar6;
        if (0 < iVar6) {
          puVar10 = (undefined2 *)(iVar4 + 0x464);
          do {
            *puVar10 = (short)local_1a6c[iVar9];
            iVar9 = iVar9 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar9 < iVar6);
        }
      }
      GetPrivateProfileStringW(local_1c74,L"DPIHW",(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
      if ((local_124c[0] == L'\0') || (iVar6 = FUN_004658b0(local_124c,0x208), iVar6 < 1)) {
        if ((local_1d48 != 0) && (iVar6 = 0, 0 < *(int *)(iVar4 + 0x460))) {
          psVar11 = (short *)(iVar4 + 0x874);
          do {
            *psVar11 = (short)iVar6 + 1;
            iVar6 = iVar6 + 1;
            psVar11 = psVar11 + 1;
          } while (iVar6 < *(int *)(iVar4 + 0x460));
        }
      }
      else {
        puVar12 = (ushort *)(iVar4 + 0x874);
        _memset(puVar12,0,0x410);
        iVar9 = 0;
        if (0 < iVar6) {
          do {
            *puVar12 = (ushort)(byte)local_1a6c[iVar9];
            iVar9 = iVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar9 < iVar6);
        }
        if (*(int *)(iVar4 + 0x460) != iVar6) {
          MessageBoxW((HWND)0x0,L"DPISET Num != DPIHW Num",L"Warning",0);
        }
      }
    }
    else {
      local_1d44 = (void *)FUN_004658b0(local_124c,0x14);
      if ((int)local_1d44 < 1) goto LAB_00410f09;
      if ((int)local_1d44 < 5) {
        MessageBoxW((HWND)0x0,L"Wrong DPIRANGE",L"Warning",0);
      }
      iVar6 = 0;
      puVar10 = (undefined2 *)(iVar4 + 0x464);
      uVar5 = local_1a6c[0];
      uVar19 = local_1a6c[3];
      do {
        iVar4 = 0;
        if (0 < (int)local_1d48) {
          do {
            if ((&local_1cc4)[iVar4 * 2] == uVar5) {
              if (local_1cbc[iVar4 * 2 + -1] != 0xffffffff) {
                *puVar10 = (short)local_1cbc[iVar4 * 2 + -1];
                goto LAB_00410e21;
              }
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_1d48);
        }
        *puVar10 = (short)uVar5;
LAB_00410e21:
        uVar5 = uVar5 + local_1a6c[2];
        puVar10[0x208] = (short)uVar19;
        iVar6 = iVar6 + 1;
        uVar19 = uVar19 + local_1a6c[4];
        puVar10 = puVar10 + 1;
      } while ((iVar6 < 0x208) && ((int)uVar5 <= (int)local_1a6c[1]));
      if (5 < (int)local_1d44) {
        if (local_1a4c != 0) {
          uVar19 = local_1a4c;
        }
        if (local_1a48 == 0) {
          local_1a48 = local_1a6c[4];
        }
        puVar10 = (undefined2 *)(local_1d3c + 0x464 + iVar6 * 2);
        iVar4 = local_1a58;
        do {
          if (0x207 < iVar6) break;
          iVar9 = 0;
          if (0 < (int)local_1d48) {
            do {
              if ((&local_1cc4)[iVar9 * 2] == iVar4) {
                if (local_1cbc[iVar9 * 2 + -1] != 0xffffffff) {
                  *puVar10 = (short)local_1cbc[iVar9 * 2 + -1];
                  goto LAB_00410ec7;
                }
                break;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)local_1d48);
          }
          *puVar10 = (short)iVar4;
LAB_00410ec7:
          iVar4 = iVar4 + local_1a50;
          puVar10[0x208] = (short)uVar19;
          uVar19 = uVar19 + local_1a48;
          iVar6 = iVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar4 <= local_1a54);
      }
      *(int *)(local_1d3c + 0x460) = iVar6;
      iVar4 = local_1d3c;
    }
    GetPrivateProfileStringW(local_1c74,L"DPI",(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    iVar6 = 0;
    if (local_124c[0] != L'\0') {
      iVar6 = FUN_004658b0(local_124c,8);
    }
    local_1d44 = (void *)iVar6;
    if ((iVar6 == *(int *)(iVar4 + 0x40c)) && (iVar9 = 0, 0 < iVar6)) {
      do {
        iVar6 = 0;
        if (0 < *(int *)(iVar4 + 0x460)) {
          puVar12 = (ushort *)(iVar4 + 0x464);
          do {
            if ((uint)*puVar12 == local_1d38[iVar9]) {
              *(uint *)(iVar1 + 0x430 + (local_1d40 * 0x224 + iVar9) * 4) = local_1d38[iVar9];
              goto LAB_004111a9;
            }
            iVar6 = iVar6 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar6 < *(int *)(iVar4 + 0x460));
        }
        __snwprintf_s(local_a2c,0x104,0x103,L"Wrong default dpi value %d for sensor %04x",
                      local_1d38[iVar9],*(undefined4 *)(iVar4 + 0x45c));
        MessageBoxW((HWND)0x0,local_a2c,L"Warning",0);
LAB_004111a9:
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)local_1d44);
    }
    local_1ce0 = 0;
    local_1cdc = 0;
    local_1cd8 = 0;
    local_1cd4 = 0;
    local_1cd0 = 0;
    uStack_1ccf = 0;
    uStack_1ccd = 0;
    local_1ce4 = 0;
    GetPrivateProfileStringW(local_1c74,L"DC",(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    if ((local_124c[0] == L'\0') || (iVar6 = FUN_00465980(local_124c,0x18), iVar6 < 1)) {
      piVar16 = local_1d14 + 2;
      piVar20 = (int *)(iVar4 + 0x438);
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar20 = *piVar16;
        piVar16 = piVar16 + 1;
        piVar20 = piVar20 + 1;
      }
    }
    else {
      iVar6 = iVar6 / 3;
      if (0 < iVar6) {
        puVar10 = &uStack_1ce3;
        puVar8 = (uint *)(iVar4 + 0x438);
        do {
          *puVar8 = (uint)CONCAT21(*puVar10,*(undefined1 *)((int)puVar10 + -1));
          puVar8 = puVar8 + 1;
          puVar10 = (undefined2 *)((int)puVar10 + 3);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    local_1d40 = local_1d14[0];
  } while (local_1d14[0] < 4);
  *(undefined4 *)(local_1d18 + 0x300) = *(undefined4 *)(iVar1 + 0x41c);
  __security_check_cookie(local_4 ^ (uint)&local_1d4c);
  return;
}



// ==== 004112f0 FUN_004112f0 ====
// why: string: Psd2

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004112f0(wchar_t *param_1,int param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  UINT UVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  ushort local_1358;
  ushort local_1356;
  ushort local_1354;
  ushort local_1352;
  undefined1 auStack_1348 [4];
  int local_1344;
  UINT local_1340;
  WCHAR local_1312 [69];
  wchar_t local_1288 [260];
  undefined2 local_1080;
  short asStack_105c [10];
  UINT local_1048;
  WCHAR local_1044 [1040];
  wchar_t local_824 [1040];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_1358;
  local_1358 = 0;
  _memset(&local_1356,0,0x312);
  pcVar6 = GetPrivateProfileStringW_exref;
  GetPrivateProfileStringW(L"OPT",L"Name",(LPCWSTR)0x0,local_1312,0x36,param_1);
  if ((DAT_00658350 == 0) || (iVar1 = __wcsnicmp(local_1312,&DAT_00658350,0x1e), iVar1 == 0)) {
    local_1344 = param_2;
    if ((param_1 != (wchar_t *)0x0) && (local_1288 != (wchar_t *)0x0)) {
      _wcsncpy_s(local_1288,0x104,param_1,0xffffffff);
      pwVar2 = _wcsrchr(local_1288,L'\\');
      if (pwVar2 == (wchar_t *)0x0) {
        local_1080 = 0;
      }
      else {
        *pwVar2 = L'\0';
      }
    }
    UVar3 = GetPrivateProfileIntW(L"OPT",L"VID",0,param_1);
    local_1358 = (ushort)UVar3;
    UVar3 = GetPrivateProfileIntW(L"OPT",L"PID",0,param_1);
    local_1356 = (ushort)UVar3;
    UVar3 = GetPrivateProfileIntW(L"OPT",L"VID_Wireless",0,param_1);
    local_1354 = (ushort)UVar3;
    UVar3 = GetPrivateProfileIntW(L"OPT",L"PID_Wireless",0,param_1);
    local_1352 = (ushort)UVar3;
    local_1340 = GetPrivateProfileIntW(L"OPT",L"Fw",0,param_1);
    GetPrivateProfileStringW(L"OPT",L"Psd",(LPCWSTR)0x0,local_1044,0x410,param_1);
    if (local_1044[0] != L'\0') {
      FUN_00465980(local_1044,6);
      pcVar6 = GetPrivateProfileStringW_exref;
    }
    (*pcVar6)(&DAT_0060d6d4,L"Psd2",0,local_1044,0x410,param_1);
    if (asStack_105c[0] != 0) {
      FUN_00465980(asStack_105c,6);
      pcVar6 = GetPrivateProfileStringW_exref;
    }
    (*pcVar6)(&DAT_0060d6d4,L"ShortName",0,auStack_1348,0xf,param_1);
    if (((local_1358 == 0) || (local_1356 == 0)) && ((uint)local_1352 + (uint)local_1354 == 0)) {
      __snwprintf_s(local_824,0x104,0x103,L"Unassigned VID or PID for ini: %s",param_1);
      MessageBoxW((HWND)0x0,local_824,L"Warning",0);
    }
    if (((local_1354 == 0) || (local_1352 == 0)) && ((uint)local_1356 + (uint)local_1358 == 0)) {
      __snwprintf_s(local_824,0x104,0x103,L"Unassigned VID or PID for ini: %s",param_1);
      MessageBoxW((HWND)0x0,local_824,L"Warning",0);
    }
    local_1048 = GetPrivateProfileIntW(L"OPT",L"ShowScreen",0,param_1);
    puVar4 = _malloc(0x314);
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = &local_1358;
      puVar7 = puVar4;
      for (iVar1 = 0xc5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *(undefined4 *)puVar5;
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 1;
      }
      iVar1 = FUN_0044e0a0(puVar4);
      if ((iVar1 != 0) && (param_2 == 0)) {
        FUN_0040fbe0();
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_1358);
  return;
}



// ==== 004115f0 FUN_004115f0 ====
// why: string: ChannelMask; string: CmdReset; string: DefLedIndex; string: FwVerNeedToUpdate; string: GameRGBIndex; string: GaoshouGroupNum; string: GaoshouIndex; string: GaoshouKey%d; string: IC2481; string: KbLayout; string: LedMask; string: LedOpt%d; string: MacroBufferSize; string: MusicRGBIndex; string: RGBIndex; string: ShowDebounce; string: SideLedOpt%d; string: SleepTime; string: clrGaoshou

void __fastcall FUN_004115f0(LPCWSTR param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  LPCWSTR pWVar3;
  char cVar4;
  void *_Dst;
  UINT UVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  size_t sVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int *piVar19;
  wchar_t *lpText;
  undefined4 local_d0c;
  LPCWSTR local_d08;
  int local_d04;
  int local_d00;
  int local_cfc [30];
  undefined1 local_c84;
  undefined4 local_c83;
  undefined4 local_c7f;
  undefined4 local_c7b;
  undefined4 local_c77;
  undefined4 local_c73;
  undefined4 local_c6f;
  undefined4 local_c6b;
  undefined2 local_c67;
  undefined1 local_c65;
  int local_c64 [10];
  WCHAR local_c3c [1040];
  WCHAR local_41c [260];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_0064f674 ^ (uint)&local_d0c;
  local_c84 = 0;
  local_c83 = 0;
  local_c7f = 0;
  local_c7b = 0;
  local_c77 = 0;
  local_c73 = 0;
  local_c6f = 0;
  local_c6b = 0;
  local_c67 = 0;
  local_c65 = 0;
  local_d08 = param_1;
  local_d04 = param_2;
  if (*(int *)(param_2 + 0x24) == 0) {
    _Dst = _malloc(0x3484);
    *(void **)(param_2 + 0x24) = _Dst;
    if (_Dst == (void *)0x0) goto LAB_00413217;
    _memset(_Dst,0,0x3484);
  }
  iVar11 = *(int *)(param_2 + 0x24);
  iVar17 = iVar11 + 0x18;
  GetPrivateProfileStringW(L"OPT",L"UID",(LPCWSTR)0x0,(LPWSTR)(param_2 + 0xb2),0xf,param_1);
  UVar5 = GetPrivateProfileIntW(L"OPT",L"FwVerNeedToUpdate",0,param_1);
  *(UINT *)(param_2 + 0x2d8) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ForceUpdate",0,param_1);
  *(UINT *)(param_2 + 0x2dc) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MacroBufferSize",0x1000,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 4) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxLoopCnt",0,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 0xc) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxDelay",0,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 0x10) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxAction",0,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 0x14) = UVar5;
  GetPrivateProfileStringW(L"OPT",L"clrKeyOv",(LPCWSTR)0x0,local_41c,0x104,param_1);
  if (local_41c[0] == L'\0') {
    uVar6 = 0xffffff;
  }
  else {
    local_d0c = (int *)((uint)local_d0c & 0xff000000);
    FUN_00465980(local_41c,3);
    uVar6 = (uint)local_d0c & 0xffffff;
    param_1 = local_d08;
  }
  *(uint *)(iVar11 + 0x2d18) = uVar6;
  GetPrivateProfileStringW(L"OPT",L"clrKeyDn",(LPCWSTR)0x0,local_41c,0x104,param_1);
  if (local_41c[0] == L'\0') {
    uVar6 = 0xffffff;
  }
  else {
    local_d0c = (int *)((uint)local_d0c & 0xff000000);
    FUN_00465980(local_41c,3);
    uVar6 = (uint)local_d0c & 0xffffff;
    param_1 = local_d08;
  }
  *(uint *)(iVar11 + 0x2d1c) = uVar6;
  GetPrivateProfileStringW(L"OPT",L"clrKeyHasFunc",(LPCWSTR)0x0,local_41c,0x104,param_1);
  if (local_41c[0] == L'\0') {
    uVar6 = 0x1d45e8;
  }
  else {
    local_d0c = (int *)((uint)local_d0c & 0xff000000);
    FUN_00465980(local_41c,3);
    uVar6 = (uint)local_d0c & 0xffffff;
    param_1 = local_d08;
  }
  *(uint *)(iVar11 + 0x2d20) = uVar6;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowSleep",1,param_1);
  *(char *)(iVar11 + 0x2da4) = (char)UVar5;
  GetPrivateProfileStringW(L"OPT",L"SleepUI",(LPCWSTR)0x0,local_c3c,0x410,param_1);
  if (local_c3c[0] == L'\0') {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_004658b0(local_c3c,0x10);
    param_1 = local_d08;
  }
  *(char *)(iVar11 + 0x2da5) = cVar4;
  if (cVar4 == '\0') {
    iVar7 = *(int *)(param_2 + 0x18);
    *(undefined1 *)(iVar11 + 0x2da5) = 10;
    if (iVar7 == 0x16) {
      iVar7 = 0;
      local_d0c = (int *)(1 - (iVar11 + 0x2dec));
      puVar12 = (undefined4 *)(iVar11 + 0x2dac);
      do {
        pcVar1 = (char *)(iVar7 + 0x2dd4 + iVar17);
        *puVar12 = (char *)((int)local_d0c + (int)pcVar1);
        *pcVar1 = (char)iVar7 + '\x01';
        iVar7 = iVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar7 < (int)(uint)*(byte *)(iVar11 + 0x2da5));
    }
    else {
      local_c64[0] = 0x1e;
      local_c64[1] = 0x3c;
      local_c64[2] = 0x5a;
      local_c64[3] = 0x78;
      local_c64[4] = 0xb4;
      local_c64[5] = 0xf0;
      local_c64[6] = 300;
      local_c64[7] = 600;
      local_c64[8] = 900;
      local_c64[9] = 0x4b0;
      iVar7 = 0;
      local_d0c = (int *)(iVar11 + 0x2dac);
      do {
        iVar13 = local_c64[iVar7];
        piVar14 = local_d0c + 1;
        *local_d0c = iVar13;
        *(char *)(iVar7 + 0x2dd4 + iVar17) =
             ((char)(iVar13 / 0x1e) + (char)(iVar13 >> 0x1f)) -
             (char)((longlong)iVar13 * 0x88888889 >> 0x3f);
        iVar7 = iVar7 + 1;
        local_d0c = piVar14;
      } while (iVar7 < (int)(uint)*(byte *)(iVar11 + 0x2da5));
    }
  }
  else {
    GetPrivateProfileStringW(L"OPT",L"SleepHW",(LPCWSTR)0x0,local_c3c,0x410,param_1);
    if (local_c3c[0] == L'\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00465980(local_c3c,0x10);
      param_1 = local_d08;
    }
    if (uVar6 != *(byte *)(iVar11 + 0x2da5)) {
      MessageBoxW((HWND)0x0,L"SleepUI!=SleepHW",L"Warning",0);
    }
  }
  GetPrivateProfileStringW(L"OPT",L"Speed",(LPCWSTR)0x0,local_c3c,0x410,param_1);
  iVar7 = 0;
  if (local_c3c[0] != L'\0') {
    iVar7 = FUN_00465980(local_c3c,8);
    param_1 = local_d08;
  }
  *(int *)(iVar11 + 0x2dfc) = iVar7;
  if (iVar7 < 1) {
    local_d0c = (int *)0x4030201;
    *(undefined4 *)(iVar11 + 0x2e00) = 0x4030201;
    *(undefined4 *)(iVar11 + 0x2e08) = 0x4030201;
    *(undefined4 *)(iVar11 + 0x2dfc) = 4;
  }
  else {
    GetPrivateProfileStringW(L"OPT",L"SpeedHW",(LPCWSTR)0x0,local_c3c,0x410,param_1);
    if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,8), iVar7 < 1)) {
      *(undefined4 *)(iVar11 + 0x2e08) = *(undefined4 *)(iVar11 + 0x2e00);
      *(undefined4 *)(iVar11 + 0x2e0c) = *(undefined4 *)(iVar11 + 0x2e04);
    }
    else if (iVar7 != *(int *)(iVar11 + 0x2dfc)) {
      MessageBoxW((HWND)0x0,L"SpeedUI!=SpeedHW",L"Warning",0);
    }
  }
  GetPrivateProfileStringW(L"OPT",L"Light",(LPCWSTR)0x0,local_c3c,0x410,local_d08);
  iVar7 = 0;
  if (local_c3c[0] != L'\0') {
    iVar7 = FUN_00465980(local_c3c,0x14);
  }
  *(int *)(iVar11 + 0x2e10) = iVar7;
  if (iVar7 < 1) {
    iVar7 = 0;
    do {
      *(char *)((int)local_c64 + iVar7) = (char)iVar7 + '\x01';
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
    *(int *)(iVar11 + 0x2e14) = local_c64[0];
    *(int *)(iVar11 + 0x2e28) = local_c64[0];
    *(int *)(iVar11 + 0x2e18) = local_c64[1];
    *(int *)(iVar11 + 0x2e2c) = local_c64[1];
    *(int *)(iVar11 + 0x2e1c) = local_c64[2];
    *(int *)(iVar11 + 0x2e30) = local_c64[2];
    *(int *)(iVar11 + 0x2e20) = local_c64[3];
    *(int *)(iVar11 + 0x2e34) = local_c64[3];
    *(int *)(iVar11 + 0x2e24) = local_c64[4];
    *(int *)(iVar11 + 0x2e38) = local_c64[4];
    *(undefined4 *)(iVar11 + 0x2e10) = 0x14;
  }
  else {
    GetPrivateProfileStringW(L"OPT",L"LightHW",(LPCWSTR)0x0,local_c3c,0x410,local_d08);
    if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,0x14), iVar7 < 1)) {
      *(undefined4 *)(iVar11 + 0x2e28) = *(undefined4 *)(iVar11 + 0x2e14);
      *(undefined4 *)(iVar11 + 0x2e2c) = *(undefined4 *)(iVar11 + 0x2e18);
      *(undefined4 *)(iVar11 + 0x2e30) = *(undefined4 *)(iVar11 + 0x2e1c);
      *(undefined4 *)(iVar11 + 0x2e34) = *(undefined4 *)(iVar11 + 0x2e20);
      *(undefined4 *)(iVar11 + 0x2e38) = *(undefined4 *)(iVar11 + 0x2e24);
    }
    else if (iVar7 != *(int *)(iVar11 + 0x2e10)) {
      MessageBoxW((HWND)0x0,L"LightUI!=LightHW",L"Warning",0);
    }
  }
  pWVar3 = local_d08;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SideLightNum",5,local_d08);
  *(UINT *)(iVar11 + 0x2e3c) = UVar5;
  FUN_00465b00(0,L"ptKB");
  GetPrivateProfileStringW(L"OPT",L"LedParam",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] == L'\0') {
LAB_00412454:
    pbVar8 = (byte *)(iVar11 + 0x2fa3);
    iVar7 = 0x18;
    do {
      pbVar8[-1] = *(char *)(iVar11 + 0x2e10) - 1;
      *pbVar8 = (*(char *)(iVar11 + 0x2dfc) + -1) * '\x10' | 7;
      pbVar8 = pbVar8 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    iVar7 = FUN_00465980(local_c3c,0x30);
    if (iVar7 < 1) goto LAB_00412454;
    iVar13 = 0;
    if (0 < iVar7 / 2) {
      do {
        if (*(int *)(iVar11 + 0x2e10) + -1 < (int)(uint)*(byte *)(iVar11 + 0x2fa2 + iVar13)) {
          lpText = L"LedParam: wrong light >= pVar->nLightNum";
LAB_00411e4c:
          MessageBoxW((HWND)0x0,lpText,L"Error",0);
          break;
        }
        if (*(int *)(iVar11 + 0x2dfc) + -1 < (int)(uint)(*(byte *)(iVar13 + 0x2f8b + iVar17) >> 4))
        {
          lpText = L"LedParam: wrong speed >= pVar->nSpeedNum";
          goto LAB_00411e4c;
        }
        iVar13 = iVar13 + 2;
      } while (iVar13 < iVar7 / 2);
    }
  }
  pWVar3 = local_d08;
  GetPrivateProfileStringW(L"OPT",L"UnRectKey",(LPCWSTR)0x0,local_c3c,0x410,local_d08);
  if (((local_c3c[0] != L'\0') && (iVar7 = FUN_004658b0(local_c3c,0x1e), 0 < iVar7)) &&
     (iVar7 = iVar7 + -1, 3 < iVar7 / 2)) {
    iVar16 = 0;
    *(int *)(iVar11 + 0x2e58) = local_cfc[0];
    iVar13 = 1;
    if (1 < iVar7) {
      piVar14 = (int *)(iVar11 + 0x2e60);
      while (local_cfc[iVar13] != 0) {
        piVar14[-1] = local_cfc[iVar13];
        *piVar14 = local_cfc[iVar13 + 1];
        iVar16 = iVar16 + 1;
        piVar14 = piVar14 + 2;
        if ((7 < iVar16) || (iVar13 = iVar13 + 2, iVar7 <= iVar13)) break;
      }
    }
    if ((*(int *)(iVar11 + 0x2e5c) != *(int *)(iVar11 + 0x2e54 + iVar16 * 8)) ||
       (*(int *)(iVar11 + 0x2e60) != *(int *)(iVar11 + 0x2e58 + iVar16 * 8))) {
      MessageBoxW((HWND)0x0,L"EnterPt[0]!=EnterPt[Last] ",L"Error",0);
    }
  }
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowAutoDetect",0,pWVar3);
  *(short *)(iVar11 + 0x2d58) = (short)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"CfgVal",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d64) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"KbLayout",0,pWVar3);
  *(UINT *)(iVar11 + 0x2ea8) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"KbDrawType",0,pWVar3);
  *(UINT *)(iVar11 + 0x2eac) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"FillKeyWhenHasFunc",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d24) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"RespireType",0,pWVar3);
  *(UINT *)(iVar11 + 0x2ea0) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"KbLanguage",0,pWVar3);
  *(UINT *)(iVar11 + 0x2eb0) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SyncKB",1,pWVar3);
  *(char *)(iVar11 + 0x2f96) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"LightBarMusicCmd",0,pWVar3);
  *(char *)(iVar11 + 0x2f97) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowEffect",0xffffff,pWVar3);
  *(UINT *)(iVar11 + 0x2d34) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowLED",1,pWVar3);
  *(char *)(iVar11 + 0x2d38) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowMusic",1,pWVar3);
  *(char *)(iVar11 + 0x2d39) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowRtEffect",0,pWVar3);
  *(char *)(iVar11 + 0x2d3c) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowPower",0,pWVar3);
  *(char *)(iVar11 + 0x2d3a) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowPowerText",1,pWVar3);
  *(char *)(iVar11 + 0x2d3b) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowDebounce",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d40) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"RandomVal",7,pWVar3);
  *(char *)(iVar11 + 0x2fa1) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MusicUI",0,pWVar3);
  *(UINT *)(iVar11 + 0x2eb4) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxFnNum",0x30,pWVar3);
  *(char *)(iVar11 + 0x2f93) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MatrixLen",0x80,pWVar3);
  *(char *)(iVar11 + 0x2f94) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"CRC",1,pWVar3);
  *(char *)(iVar11 + 0x2f95) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"LayerMask",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d54) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SleepTime",0x78,pWVar3);
  *(UINT *)(iVar11 + 0x2da8) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"LedMask",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d44) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ChannelMask",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d4c) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MusicMask",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d50) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxEftKeyIndex",0,pWVar3);
  *(UINT *)(iVar11 + 0x2e9c) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"DefLedIndex",0,pWVar3);
  *(char *)(iVar11 + 0x2ebb) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"WheelMode",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d9c) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"FnAlign",1,pWVar3);
  *(char *)(iVar11 + 0x2d5a) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowTapTip",0,pWVar3);
  *(char *)(iVar11 + 0x2d7f) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowSideLED",0,pWVar3);
  *(char *)(iVar11 + 0x2d81) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowDevTy",1,pWVar3);
  *(char *)(iVar11 + 0x2d82) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"RGB",1,pWVar3);
  *(char *)(iVar11 + 0x2d8b) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"FnNotToSet",1,pWVar3);
  *(char *)(iVar11 + 0x2d8c) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"IC2481",0,pWVar3);
  *(char *)(iVar11 + 0x2d8d) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"XYDirect",1,pWVar3);
  *(char *)(iVar11 + 0x2d8e) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SubFw",0,pWVar3);
  *(char *)(iVar11 + 0x2d8f) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"CmdReset",0,pWVar3);
  *(char *)(iVar11 + 0x2d90) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"VirtualKB",0,pWVar3);
  *(char *)(iVar11 + 0x2d91) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"RoundGrid",0,pWVar3);
  *(char *)(iVar11 + 0x2d92) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowGameTip",0,pWVar3);
  *(char *)(iVar11 + 0x2d93) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"DefSideLedIndex",0,pWVar3);
  *(char *)(iVar11 + 0x2d80) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowKbOption",0,pWVar3);
  *(char *)(iVar11 + 0x2d94) = (char)UVar5;
  GetPrivateProfileStringW(L"OPT",L"ResetItem",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] != L'\0') {
    FUN_00465980(local_c3c,4);
  }
  GetPrivateProfileStringW(L"OPT",L"KeyLineStart",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] != L'\0') {
    FUN_00465980(local_c3c,6);
  }
  GetPrivateProfileStringW(L"OPT",L"KnobIndex",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] != L'\0') {
    FUN_00465980(local_c3c,4);
  }
  GetPrivateProfileStringW(L"OPT",L"NaviInx",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,8), iVar7 < 1)) {
    uVar6 = 0;
    do {
      *(char *)(uVar6 + 0x2d6b + iVar17) = (char)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
  }
  GetPrivateProfileStringW(L"OPT",L"LightBarLedPos",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] == L'\0') {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_00465980(local_c3c,0x16);
  }
  *(char *)(iVar11 + 0x2d7e) = cVar4;
  if (cVar4 == '\0') {
    *(undefined1 *)(iVar11 + 0x2d7e) = 10;
    iVar7 = 0;
    do {
      *(char *)(iVar7 + 0x2d50 + iVar17) = (char)iVar7 + '\x01';
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(iVar11 + 0x2d7e));
  }
  *(undefined4 *)(iVar11 + 0x2e40) = 0xffffffff;
  *(undefined4 *)(iVar11 + 0x2e44) = 0xffffffff;
  *(undefined4 *)(iVar11 + 0x2e48) = 0xffffffff;
  *(undefined4 *)(iVar11 + 0x2e4c) = 0xffffffff;
  *(undefined4 *)(iVar11 + 0x2e50) = 0xffffffff;
  GetPrivateProfileStringW(L"OPT",L"KeyNotToSet",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] != L'\0') && (sVar9 = FUN_00465980(local_c3c,0x20), 0 < (int)sVar9)) {
    if (0x14 < sVar9) {
      sVar9 = 0x14;
    }
    if (0 < (int)sVar9) {
      _memcpy((void *)(iVar11 + 0x2e40),&local_c84,sVar9);
    }
  }
  *(undefined4 *)(iVar11 + 0x2e54) = 0xffffffff;
  GetPrivateProfileStringW(L"OPT",L"KeyNotToSetColor",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] != L'\0') && (sVar9 = FUN_00465980(local_c3c,0x20), 0 < (int)sVar9)) {
    if (4 < sVar9) {
      sVar9 = 4;
    }
    if (0 < (int)sVar9) {
      _memcpy((void *)(iVar11 + 0x2e54),&local_c84,sVar9);
    }
  }
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SendSysParam",0,pWVar3);
  *(short *)(iVar11 + 0x345c) = (short)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SyncMask",7,pWVar3);
  *(short *)(iVar11 + 0x345e) = (short)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SendTimeOnOpenKB",0,pWVar3);
  *(char *)(iVar11 + 0x3460) = (char)UVar5;
  if (*(int *)(local_d04 + 0x310) != 0) {
    UVar5 = GetPrivateProfileIntW(L"OPT",L"RGBScreen",1,pWVar3);
    *(char *)(iVar11 + 0x3461) = (char)UVar5;
    UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxScreenFrame",0x10,pWVar3);
    *(UINT *)(iVar11 + 0x347c) = UVar5;
    UVar5 = GetPrivateProfileIntW(L"OPT",L"LatticeW",1,pWVar3);
    *(char *)(iVar11 + 0x3462) = (char)UVar5;
    UVar5 = GetPrivateProfileIntW(L"OPT",L"DrawLatticeLine",1,pWVar3);
    *(char *)(iVar11 + 0x3463) = (char)UVar5;
    UVar5 = GetPrivateProfileIntW(L"OPT",L"DrawFrameTime",0,pWVar3);
    *(UINT *)(iVar11 + 0x3480) = UVar5;
    GetPrivateProfileStringW(L"OPT",L"siScreen",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
    if ((local_c3c[0] != L'\0') && (iVar7 = FUN_004658b0(local_c3c,2), 0 < iVar7)) {
      *(int *)(iVar11 + 0x3474) = local_cfc[0];
      *(int *)(iVar11 + 0x3478) = local_cfc[1];
    }
    GetPrivateProfileStringW(L"OPT",L"FrameViewPos",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
    if ((local_c3c[0] != L'\0') && (iVar7 = FUN_004658b0(local_c3c,3), 0 < iVar7)) {
      if (iVar7 != 3) {
        MessageBoxW((HWND)0x0,L"FrameViewPos只能有3个值",L"Error",0);
      }
      *(int *)(iVar11 + 0x3464) = local_cfc[0];
      *(int *)(iVar11 + 0x3468) = local_cfc[1];
      *(int *)(iVar11 + 0x346c) = local_cfc[2] + local_cfc[0];
    }
  }
  local_d0c = (int *)((uint)local_d0c & 0xff000000);
  GetPrivateProfileStringW(L"OPT",L"RGBIndex",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,3), iVar7 < 1)) {
    *(undefined1 *)(iVar11 + 0x2f98) = 2;
    *(undefined1 *)(iVar11 + 0x2f99) = 1;
    *(undefined1 *)(iVar11 + 0x2f9a) = 0;
  }
  else {
    bVar2 = local_d0c._2_1_;
    if ((uint)local_d0c._2_1_ + ((uint)local_d0c >> 8 & 0xff) + ((uint)local_d0c & 0xff) != 3) {
      MessageBoxW((HWND)0x0,L"R G B Index Error",L"Warning",0);
    }
    *(byte *)(iVar11 + 0x2f9a) = bVar2;
    *(undefined1 *)(iVar11 + 0x2f98) = (undefined1)local_d0c;
    *(undefined1 *)(iVar11 + 0x2f99) = local_d0c._1_1_;
  }
  GetPrivateProfileStringW(L"OPT",L"GameRGBIndex",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,3), iVar7 < 1)) {
    *(undefined1 *)(iVar11 + 0x2f9b) = 2;
    *(undefined1 *)(iVar11 + 0x2f9c) = 1;
    *(undefined1 *)(iVar11 + 0x2f9d) = 0;
  }
  else {
    bVar2 = local_d0c._2_1_;
    if ((uint)local_d0c._2_1_ + ((uint)local_d0c >> 8 & 0xff) + ((uint)local_d0c & 0xff) != 3) {
      MessageBoxW((HWND)0x0,L"clrGmKey RGB Index Error",L"Warning",0);
    }
    *(byte *)(iVar11 + 0x2f9d) = bVar2;
    *(undefined1 *)(iVar11 + 0x2f9b) = (undefined1)local_d0c;
    *(undefined1 *)(iVar11 + 0x2f9c) = local_d0c._1_1_;
  }
  GetPrivateProfileStringW(L"OPT",L"MusicRGBIndex",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,3), iVar7 < 1)) {
    *(undefined1 *)(iVar11 + 0x2f9e) = *(undefined1 *)(iVar11 + 0x2f98);
    *(undefined1 *)(iVar11 + 0x2f9f) = *(undefined1 *)(iVar11 + 0x2f99);
    *(undefined1 *)(iVar11 + 0x2fa0) = *(undefined1 *)(iVar11 + 0x2f9a);
  }
  else {
    bVar2 = local_d0c._2_1_;
    if ((uint)local_d0c._2_1_ + ((uint)local_d0c >> 8 & 0xff) + ((uint)local_d0c & 0xff) != 3) {
      MessageBoxW((HWND)0x0,L"Music RGB Index Error",L"Warning",0);
    }
    *(byte *)(iVar11 + 0x2fa0) = bVar2;
    *(undefined1 *)(iVar11 + 0x2f9e) = (undefined1)local_d0c;
    *(undefined1 *)(iVar11 + 0x2f9f) = local_d0c._1_1_;
  }
  UVar5 = GetPrivateProfileIntW(L"OPT",L"GaoshouIndex",-1,pWVar3);
  *(char *)(iVar11 + 0x2ebc) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"GaoshouGroupNum",5,pWVar3);
  *(char *)(iVar11 + 0x2f8c) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"StartGp",0x20,pWVar3);
  *(char *)(iVar11 + 0x2f8e) = (char)UVar5;
  GetPrivateProfileStringW(L"OPT",L"clrGaoshou",(LPCWSTR)0x0,local_41c,0x104,pWVar3);
  if (local_41c[0] == L'\0') {
    uVar6 = 0xffffff;
  }
  else {
    local_d0c = (int *)((uint)local_d0c & 0xff000000);
    FUN_00465980(local_41c,3);
    uVar6 = (uint)local_d0c & 0xffffff;
  }
  iVar7 = 0;
  *(uint *)(iVar11 + 0x2f88) = uVar6;
  if (*(char *)(iVar11 + 0x2f8c) != '\0') {
    local_d0c = (int *)(iVar11 + 0x2ebd);
    do {
      iVar7 = iVar7 + 1;
      local_d00 = iVar7;
      __snwprintf_s(local_214,0x14,0x13,L"GaoshouKey%d",iVar7);
      GetPrivateProfileStringW(L"OPT",local_214,(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
      if (local_c3c[0] != L'\0') {
        FUN_00465980(local_c3c,0x28);
        iVar7 = local_d00;
      }
      local_d0c = (int *)((int)local_d0c + 0x28);
    } while (iVar7 < (int)(uint)*(byte *)(iVar11 + 0x2f8c));
  }
  uVar10 = FUN_00413230(pWVar3,1);
  iVar7 = local_d04;
  *(undefined4 *)(iVar11 + 0x2d28) = uVar10;
  FUN_004135f0(local_d04);
  FUN_004135f0(iVar7);
  FUN_004135f0(iVar7);
  *(undefined1 *)(iVar11 + 0x2fd4) = 1;
  *(undefined1 *)(iVar11 + 0x2fd6) = 0;
  *(undefined1 *)(iVar11 + 0x2fd5) = 5;
  *(undefined1 *)(iVar11 + 0x2fd7) = 1;
  *(undefined1 *)(iVar11 + 0x2fd8) = 1;
  *(undefined1 *)(iVar11 + 0x2fd9) = 0;
  *(undefined1 *)(iVar11 + 0x2fda) = 1;
  *(undefined1 *)(iVar11 + 0x2fdb) = 1;
  local_c64[0] = 0xff;
  local_c64[1] = 0xff00;
  local_c64[2] = 0xff0000;
  local_c64[3] = 0xffff;
  local_c64[4] = 0xff00ff;
  local_c64[5] = 0xffff00;
  local_c64[6] = 0xffffff;
  local_c64[7] = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x2fdc);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x2ffc) = 1;
  *(undefined1 *)(iVar11 + 0x2ffe) = 1;
  *(undefined1 *)(iVar11 + 0x2ffd) = 7;
  *(undefined1 *)(iVar11 + 0x2fff) = 1;
  *(undefined1 *)(iVar11 + 0x3000) = 0;
  *(undefined1 *)(iVar11 + 0x3001) = 0;
  *(undefined1 *)(iVar11 + 0x3002) = 0;
  *(undefined1 *)(iVar11 + 0x3003) = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x3004);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x3024) = 1;
  *(undefined1 *)(iVar11 + 0x3026) = 2;
  *(undefined1 *)(iVar11 + 0x3025) = 0x11;
  *(undefined1 *)(iVar11 + 0x3027) = 1;
  *(undefined1 *)(iVar11 + 0x3028) = 1;
  *(undefined1 *)(iVar11 + 0x3029) = 0;
  *(undefined1 *)(iVar11 + 0x302a) = 1;
  *(undefined1 *)(iVar11 + 0x302b) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x302c);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x304c) = 1;
  *(undefined1 *)(iVar11 + 0x304e) = 3;
  *(undefined1 *)(iVar11 + 0x304d) = 0xc;
  *(undefined1 *)(iVar11 + 0x304f) = 1;
  *(undefined1 *)(iVar11 + 0x3050) = 1;
  *(undefined1 *)(iVar11 + 0x3051) = 0;
  *(undefined1 *)(iVar11 + 0x3052) = 1;
  *(undefined1 *)(iVar11 + 0x3053) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x3054);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x3074) = 1;
  *(undefined1 *)(iVar11 + 0x3076) = 4;
  *(undefined1 *)(iVar11 + 0x3075) = 1;
  *(undefined1 *)(iVar11 + 0x3077) = 0;
  *(undefined1 *)(iVar11 + 0x3078) = 1;
  *(undefined1 *)(iVar11 + 0x3079) = 0;
  *(undefined1 *)(iVar11 + 0x307a) = 1;
  *(undefined1 *)(iVar11 + 0x307b) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x307c);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x309c) = 1;
  *(undefined1 *)(iVar11 + 0x309e) = 5;
  *(undefined1 *)(iVar11 + 0x309d) = 3;
  *(undefined1 *)(iVar11 + 0x309f) = 1;
  *(undefined1 *)(iVar11 + 0x30a0) = 0;
  *(undefined1 *)(iVar11 + 0x30a1) = 0;
  *(undefined1 *)(iVar11 + 0x30a2) = 1;
  *(undefined1 *)(iVar11 + 0x30a3) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x30a4);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x30c4) = 1;
  *(undefined1 *)(iVar11 + 0x30c6) = 6;
  *(undefined1 *)(iVar11 + 0x30c5) = 2;
  *(undefined1 *)(iVar11 + 0x30c7) = 1;
  *(undefined1 *)(iVar11 + 0x30c8) = 0;
  *(undefined1 *)(iVar11 + 0x30c9) = 0;
  *(undefined1 *)(iVar11 + 0x30ca) = 0;
  *(undefined1 *)(iVar11 + 0x30cb) = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x30cc);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x30ec) = 1;
  *(undefined1 *)(iVar11 + 0x30ee) = 7;
  *(undefined1 *)(iVar11 + 0x30ed) = 0x13;
  *(undefined1 *)(iVar11 + 0x30ef) = 1;
  *(undefined1 *)(iVar11 + 0x30f0) = 1;
  *(undefined1 *)(iVar11 + 0x30f1) = 0;
  *(undefined1 *)(iVar11 + 0x30f2) = 1;
  *(undefined1 *)(iVar11 + 0x30f3) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x30f4);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x3114) = 1;
  *(undefined1 *)(iVar11 + 0x3116) = 8;
  *(undefined1 *)(iVar11 + 0x3115) = 0xf;
  *(undefined1 *)(iVar11 + 0x3117) = 1;
  *(undefined1 *)(iVar11 + 0x3118) = 1;
  *(undefined1 *)(iVar11 + 0x3119) = 0;
  *(undefined1 *)(iVar11 + 0x311a) = 1;
  *(undefined1 *)(iVar11 + 0x311b) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x311c);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x313c) = 1;
  *(undefined1 *)(iVar11 + 0x313e) = 9;
  *(undefined1 *)(iVar11 + 0x313d) = 0xd;
  *(undefined1 *)(iVar11 + 0x313f) = 1;
  *(undefined1 *)(iVar11 + 0x3140) = 0;
  *(undefined1 *)(iVar11 + 0x3141) = 0;
  *(undefined1 *)(iVar11 + 0x3142) = 0;
  *(undefined1 *)(iVar11 + 0x3143) = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x3144);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x3164) = 1;
  *(undefined1 *)(iVar11 + 0x3166) = 10;
  *(undefined1 *)(iVar11 + 0x3165) = 0x14;
  *(undefined1 *)(iVar11 + 0x3167) = 1;
  *(undefined1 *)(iVar11 + 0x3168) = 1;
  *(undefined1 *)(iVar11 + 0x3169) = 0;
  *(undefined1 *)(iVar11 + 0x316a) = 1;
  *(undefined1 *)(iVar11 + 0x316b) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x316c);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x318c) = 1;
  *(undefined1 *)(iVar11 + 0x318e) = 0xb;
  *(undefined1 *)(iVar11 + 0x318d) = 0x10;
  *(undefined1 *)(iVar11 + 0x318f) = 1;
  *(undefined1 *)(iVar11 + 0x3190) = 1;
  *(undefined1 *)(iVar11 + 0x3191) = 0;
  *(undefined1 *)(iVar11 + 0x3192) = 0;
  *(undefined1 *)(iVar11 + 0x3193) = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x3194);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  local_d0c = (int *)(iVar11 + 0x2fd5);
  *(undefined1 *)(iVar11 + 0x31b6) = 0xc;
  *(undefined1 *)(iVar11 + 0x31b4) = 1;
  *(undefined1 *)(iVar11 + 0x31b5) = 0x12;
  *(undefined1 *)(iVar11 + 0x31b7) = 1;
  *(undefined1 *)(iVar11 + 0x31b8) = 1;
  *(undefined1 *)(iVar11 + 0x31b9) = 0;
  *(undefined1 *)(iVar11 + 0x31ba) = 1;
  *(undefined1 *)(iVar11 + 0x31bb) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x31bc);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  local_d00 = 0;
  local_d04 = 0xbf1;
  do {
    local_d00 = local_d00 + 1;
    __snwprintf_s(local_214,0x1e,0x1d,L"LedOpt%d",local_d00);
    GetPrivateProfileStringW(L"OPT",local_214,(LPCWSTR)0x0,local_c3c,0x410,local_d08);
    if ((local_c3c[0] != L'\0') && (iVar7 = FUN_00465980(local_c3c,0x20), 0 < iVar7)) {
      *(undefined1 *)((int)local_d0c + 1) = local_c84;
      *(undefined1 *)local_d0c = (undefined1)local_c83;
      *(undefined1 *)((int)local_d0c + 2) = local_c83._1_1_;
      *(undefined1 *)((int)local_d0c + 3) = local_c83._2_1_;
      *(undefined1 *)(local_d0c + 1) = local_c83._3_1_;
      *(undefined1 *)((int)local_d0c + -1) = 1;
      *(undefined1 *)((int)local_d0c + 5) = (undefined1)local_c7f;
      cVar4 = local_c7f._1_1_;
      if (local_c7f._1_1_ == -0x80) {
        cVar4 = '\0';
      }
      *(char *)((int)local_d0c + 6) = cVar4;
      piVar14 = local_c64;
      piVar19 = (int *)((int)local_d0c + 7);
      for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar19 = *piVar14;
        piVar14 = piVar14 + 1;
        piVar19 = piVar19 + 1;
      }
      if (7 < iVar7) {
        iVar7 = 0;
        puVar12 = &local_c7f;
        do {
          if (*(uint3 *)((int)puVar12 + 2) == 0) break;
          iVar13 = iVar7 + local_d04;
          iVar7 = iVar7 + 1;
          *(uint *)(iVar17 + iVar13 * 4) = (uint)*(uint3 *)((int)puVar12 + 2);
          puVar12 = (undefined4 *)((int)puVar12 + 3);
        } while (iVar7 < 8);
      }
    }
    local_d0c = local_d0c + 10;
    local_d04 = local_d04 + 10;
  } while (local_d04 < 0xce1);
  if (*(char *)(iVar11 + 0x2d81) != '\0') {
    uVar6 = 0;
    puVar18 = (undefined1 *)(iVar11 + 0x3395);
    do {
      uVar6 = uVar6 + 1;
      __snwprintf_s(local_214,0x1e,0x1d,L"SideLedOpt%d",uVar6);
      GetPrivateProfileStringW(L"OPT",local_214,(LPCWSTR)0x0,local_c3c,0x410,local_d08);
      if ((local_c3c[0] != L'\0') && (iVar11 = FUN_00465980(local_c3c,0x20), 0 < iVar11)) {
        puVar18[1] = local_c84;
        *puVar18 = (undefined1)local_c83;
        puVar18[2] = local_c83._1_1_;
        puVar18[3] = local_c83._2_1_;
        puVar18[4] = local_c83._3_1_;
        puVar18[-1] = 1;
        puVar18[5] = (undefined1)local_c7f;
        cVar4 = local_c7f._1_1_;
        if (local_c7f._1_1_ == -0x80) {
          cVar4 = '\0';
        }
        puVar18[6] = cVar4;
        if (7 < iVar11) {
          puVar15 = (uint *)(puVar18 + 7);
          iVar11 = 8;
          puVar12 = &local_c7f;
          do {
            *puVar15 = (uint)*(uint3 *)((int)puVar12 + 2);
            puVar15 = puVar15 + 1;
            iVar11 = iVar11 + -1;
            puVar12 = (undefined4 *)((int)puVar12 + 3);
          } while (iVar11 != 0);
        }
      }
      puVar18 = puVar18 + 0x28;
    } while (uVar6 < 5);
  }
LAB_00413217:
  __security_check_cookie(local_8 ^ (uint)&local_d0c);
  return;
}



// ==== 00416f00 FUN_00416f00 ====
// why: calls HidD_GetAttributes; calls HidP_GetCaps

void __fastcall FUN_00416f00(HDEVINFO param_1,PSP_DEVICE_INTERFACE_DATA param_2)

{
  WCHAR *lpFileName;
  char cVar1;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W DeviceInterfaceDetailData;
  BOOL BVar2;
  HANDLE hObject;
  int iVar3;
  uint uVar4;
  wchar_t *_DstBuf;
  HANDLE local_64;
  HANDLE local_60;
  undefined4 local_5c;
  undefined1 local_58 [4];
  ushort local_54;
  ushort local_52;
  ushort local_4c;
  ushort local_4a;
  ushort local_48;
  ushort local_46;
  ushort local_44;
  uint local_8;
  
  local_8 = DAT_0064f674 ^ (uint)&local_64;
  local_60 = (HANDLE)0x0;
  SetupDiGetDeviceInterfaceDetailW
            (param_1,param_2,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,(PDWORD)&local_60,
             (PSP_DEVINFO_DATA)0x0);
  local_64 = local_60;
  DeviceInterfaceDetailData = _malloc((size_t)local_60);
  if (DeviceInterfaceDetailData != (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0) {
    DeviceInterfaceDetailData->cbSize = 6;
    BVar2 = SetupDiGetDeviceInterfaceDetailW
                      (param_1,param_2,DeviceInterfaceDetailData,(DWORD)local_64,(PDWORD)&local_60,
                       (PSP_DEVINFO_DATA)0x0);
    if (BVar2 == 0) {
      OutputDebugStringW(L"Error: SetupDiGetInterfaceDeviceDetail failed");
    }
    else {
      lpFileName = DeviceInterfaceDetailData->DevicePath;
      if (DAT_00669628 == 0) {
        hObject = CreateFileW(lpFileName,0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      }
      else {
        hObject = CreateFileW(lpFileName,0,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      }
      local_64 = hObject;
      if (hObject != (HANDLE)0xffffffff) {
        cVar1 = HidD_GetPreparsedData(hObject,&local_5c);
        if (cVar1 != '\0') {
          HidD_GetAttributes(hObject,local_58);
          iVar3 = HidP_GetCaps(local_5c,&local_4c);
          if (iVar3 == 0) {
            HidD_FreePreparsedData(local_5c);
          }
          else {
            uVar4 = FUN_00417100(&local_4c);
            _DstBuf = (wchar_t *)FUN_00416e10();
            hObject = local_64;
            if (_DstBuf != (wchar_t *)0x0) {
              if ((local_54 == 0) || (local_52 == 0)) {
                (*DAT_0065d3e0)(L"HidFind: find 0 id dev: %s",lpFileName);
                hObject = local_64;
              }
              else {
                __snwprintf_s(_DstBuf,0x104,0x103,L"%s",lpFileName);
                *(uint *)(_DstBuf + 0x104) = uVar4 & 0xffff;
                *(uint *)(_DstBuf + 0x106) = (uint)local_48;
                *(uint *)(_DstBuf + 0x108) = (uint)local_46;
                *(uint *)(_DstBuf + 0x10a) = (uint)local_44;
                *(uint *)(_DstBuf + 0x10c) = (uint)local_4a;
                *(uint *)(_DstBuf + 0x10e) = (uint)local_4c;
                *(uint *)(_DstBuf + 0x110) = (uint)local_54;
                *(uint *)(_DstBuf + 0x112) = (uint)local_52;
                hObject = local_64;
              }
            }
          }
        }
        CloseHandle(hObject);
      }
    }
    _free(DeviceInterfaceDetailData);
    __security_check_cookie(local_8 ^ (uint)&local_64);
    return;
  }
  OutputDebugStringW(L"Error: OpenDeviceInterface: malloc failed");
  __security_check_cookie(local_8 ^ (uint)&local_64);
  return;
}



// ==== 00418460 FUN_00418460 ====
// why: string: http://%s/modifypsd.php; string: modify psd success; string: oldpsd; string: realpsd

void __thiscall FUN_00418460(CWnd *param_1,uint param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  HWND pHVar3;
  byte *pbVar4;
  int iVar5;
  char *_Dest;
  char *pcVar6;
  int iVar7;
  LPSTR pCVar8;
  byte *pbVar9;
  CWnd *pCVar10;
  LPCWSTR unaff_EDI;
  bool bVar11;
  CWnd *local_ce4;
  undefined1 local_ce0;
  undefined4 local_cdf;
  undefined4 local_cdb;
  undefined4 local_cd7;
  undefined2 local_cd3;
  undefined1 local_cd1;
  byte local_cd0 [64];
  char local_c90 [64];
  byte local_c50 [64];
  char local_c10 [1024];
  CHAR local_810;
  undefined1 local_80f [1023];
  char local_410 [1028];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)&local_ce4;
  local_810 = '\0';
  local_ce4 = param_1;
  _memset(local_80f,0,0x3ff);
  iVar5 = 0;
  if (param_1 != (CWnd *)0xfffff950) {
    iVar5 = *(int *)(param_1 + 0x6d0);
  }
  if (param_3 == iVar5) {
    pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
    CWnd::FromHandle(pHVar3);
    local_ce4 = (CWnd *)&stack0xfffff304;
    DAT_0066fa08 = 0;
    ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_0066fefc + -0x10));
    FUN_0045e4a0();
    FUN_0045a560();
  }
  else {
    iVar5 = 0;
    if (param_1 != (CWnd *)0xffffff80) {
      iVar5 = *(int *)(param_1 + 0xa0);
    }
    if (param_3 == iVar5) {
      FUN_00418dd0();
    }
    else {
      iVar5 = 0;
      if (param_1 != (CWnd *)0xfffffdf4) {
        iVar5 = *(int *)(param_1 + 0x22c);
      }
      if (param_3 == iVar5) {
        FUN_00418a20();
      }
      else {
        iVar5 = 0;
        if (param_1 != (CWnd *)0xfffffc68) {
          iVar5 = *(int *)(param_1 + 0x3b8);
        }
        if (param_3 == iVar5) {
          local_ce0 = 0;
          local_cdf = 0;
          local_cdb = 0;
          local_cd7 = 0;
          local_cd3 = 0;
          local_cd1 = 0;
          _sprintf(local_410,"http://%s/modifypsd.php");
          _strncpy_s(local_c90,0x40,(char *)(param_1 + 0x94c),0xffffffff);
          _strncpy_s((char *)local_cd0,0x40,(char *)(param_1 + 0xa18),0xffffffff);
          _strncpy_s((char *)local_c50,0x40,(char *)(param_1 + 0xae4),0xffffffff);
          pbVar4 = local_cd0;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (bVar1 != 0);
          if ((uint)((int)pbVar4 - (int)(local_cd0 + 1)) < 6) {
            *(undefined4 *)(param_1 + 0xb84) = 5;
            InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
            __security_check_cookie(local_c ^ (uint)&local_ce4);
            return;
          }
          pbVar9 = local_c50;
          pbVar4 = local_cd0;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_00418650:
              iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00418655;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_00418650;
            pbVar4 = pbVar4 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00418655:
          if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0xb84) = 4;
            InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
            __security_check_cookie(local_c ^ (uint)&local_ce4);
            return;
          }
          _sprintf(local_c10,"{");
          pcVar6 = local_c10;
          do {
            _Dest = pcVar6;
            pcVar6 = _Dest + 1;
          } while (*_Dest != '\0');
          _sprintf(_Dest,"\"%s\":\"%s\"");
          pcVar6 = local_c90;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_004a17d0();
          FUN_00478c80();
          pcVar6 = local_c10;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          iVar5 = _sprintf(pcVar6 + (int)(local_c10 + -(int)(local_c10 + 1)),",");
          _sprintf(pcVar6 + (int)(local_c10 + (iVar5 - (int)(local_c10 + 1))),"\"%s\":\"%s\"");
          pcVar6 = local_c10;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          iVar5 = _sprintf(pcVar6 + (int)(local_c10 + -(int)(local_c10 + 1)),",");
          _sprintf(pcVar6 + (int)(local_c10 + (iVar5 - (int)(local_c10 + 1))),"\"%s\":\"%s\"");
          pbVar4 = local_cd0;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (bVar1 != 0);
          FUN_004a17d0();
          FUN_00478c80();
          pcVar6 = local_c10;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          iVar5 = _sprintf(pcVar6 + (int)(local_c10 + -(int)(local_c10 + 1)),",");
          iVar5 = iVar5 - (int)(local_c10 + 1);
          iVar7 = _sprintf(pcVar6 + (int)(local_c10 + iVar5),"\"%s\":\"%s\"");
          _sprintf(pcVar6 + (int)(local_c10 + iVar7 + iVar5),"}");
          (*DAT_0065d3e0)(L"Start modify psd ------");
          param_1 = local_ce4;
          *(undefined4 *)(local_ce4 + 0xb84) = 7;
          iVar5 = FUN_004a0b90();
          if (iVar5 != 0) {
            if (local_810 == '\0') {
              (*DAT_0065d3e4)();
            }
            else {
              pCVar8 = StrStrIA(&local_810,"error");
              if (pCVar8 == (LPSTR)0x0) {
                pCVar8 = StrStrIA(&local_810,"modify success");
                if (pCVar8 != (LPSTR)0x0) {
                  (*DAT_0065d3e0)();
                  *(undefined4 *)(param_1 + 0xb84) = 0;
                  _strncpy_s(&DAT_0066fa1b,0x40,(char *)local_cd0,0xffffffff);
                  FUN_0047b070();
                  FUN_00448e50();
                  InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
                  FID_conflict_SetWindowTextW((HWND)&DAT_0060b0b0,unaff_EDI);
                  FID_conflict_SetWindowTextW((HWND)&DAT_0060b0b0,unaff_EDI);
                  FID_conflict_SetWindowTextW((HWND)&DAT_0060b0b0,unaff_EDI);
                }
              }
              else {
                (*DAT_0065d3e4)();
                *(undefined4 *)(param_1 + 0xb84) = 8;
              }
            }
          }
          if (*(int *)(param_1 + 0xb84) != 0) {
            InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
          }
        }
        else {
          iVar5 = 0;
          if (param_1 != (CWnd *)0xfffffadc) {
            iVar5 = *(int *)(param_1 + 0x544);
          }
          if (param_3 == iVar5) {
            FUN_00418f40();
          }
          else {
            pCVar10 = param_1 + 0xbc0;
            local_ce4 = (CWnd *)0xa;
            do {
              if (pCVar10 == (CWnd *)0x20) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)pCVar10;
              }
              if ((uint)(param_3 == iVar5) != *(uint *)(pCVar10 + 0x88)) {
                *(uint *)(pCVar10 + 0x88) = (uint)(param_3 == iVar5);
                InvalidateRect(*(HWND *)pCVar10,(RECT *)0x0,1);
              }
              pCVar10 = pCVar10 + 0x18c;
              local_ce4 = local_ce4 + -1;
            } while (local_ce4 != (CWnd *)0x0);
            local_ce4 = (CWnd *)0x0;
          }
        }
      }
    }
  }
  CWnd::OnCommand(param_1,param_2,param_3);
  __security_check_cookie(local_c ^ (uint)&local_ce4);
  return;
}



// ==== 00424ba0 FUN_00424ba0 ====
// why: calls ReadFile

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00424ba0(int param_1)

{
  LPCWSTR pWVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  BOOL BVar6;
  int *piVar7;
  undefined4 uVar8;
  _TREEITEM *p_Var9;
  undefined4 *puVar10;
  int iVar11;
  size_t _Size;
  int iVar12;
  int *piVar13;
  code *pcVar14;
  CTreeCtrl *this;
  wchar_t *pwVar15;
  undefined1 auStack_37c8 [4];
  int *local_37c4;
  DWORD local_37c0;
  wchar_t *local_37bc;
  undefined4 *puStack_37b8;
  LPCWSTR local_37b4;
  int local_37b0;
  int iStack_37ac;
  int iStack_37a8;
  int iStack_37a4;
  int aiStack_37a0 [5];
  undefined1 auStack_378c [68];
  int iStack_3748;
  CFileDialog local_3738 [808];
  int local_3410;
  undefined4 local_340c;
  wchar_t local_3408 [25];
  char cStack_33d5;
  int aiStack_33d4 [3313];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de1a1;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)auStack_37c8;
  ExceptionList = &local_c;
  local_37b0 = param_1;
  FUN_004b9e3f(1,L".bcf",L"*.bcf",2,L"bcf(*.bcf)|*.bcf|",param_1,0,1);
  local_4 = 0;
  iVar3 = CFileDialog::DoModal(local_3738);
  if (iVar3 == 1) {
    GetFileTitle(&local_37bc);
    local_4._0_1_ = 1;
    CFileDialog::GetPathName(local_3738);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (1 < *(int *)(local_37b4 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_37b4,*(int *)(local_37b4 + -6));
    }
    piVar4 = CreateFileW(local_37b4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    local_37c4 = piVar4;
    if (piVar4 == (int *)0xffffffff) {
      DVar5 = GetLastError();
      pwVar15 = L"Open profile file failed. error=0x%x";
    }
    else {
      local_3410 = 0;
      _memset(&local_340c,0,0x33f8);
      pcVar14 = ReadFile_exref;
      local_37c0 = 0;
      BVar6 = ReadFile(piVar4,&local_3410,0x33fc,&local_37c0,(LPOVERLAPPED)0x0);
      if (((BVar6 != 0) && (local_37c0 == 0x33fc)) && (local_3410 == -0x355edbb)) {
        (*DAT_0065d3e0)(L"Start import: %s, size=%d",local_3408,0x33fc);
        iVar3 = FUN_004ad0e9(0x18);
        if (iVar3 == 0) {
          puStack_37b8 = (undefined4 *)0x0;
        }
        else {
          puStack_37b8 = (undefined4 *)FUN_0044dfe0();
        }
        puStack_37b8[3] = 0;
        puStack_37b8[1] = 0x10;
        iVar3 = ReadFile(piVar4,aiStack_37a0,0x68,&local_37c0,(LPOVERLAPPED)0x0);
        while (((iVar3 != 0 && (_Size = 0, local_37c0 == 0x68)) && (aiStack_37a0[0] == -0x534665e)))
        {
          if (&stack0x00000000 != (undefined1 *)0x37a0) {
            _Size = iStack_3748 * 0xc + 0x68;
          }
          (*DAT_0065d3e0)(L"read macro: %s, id=%x, size=%d",auStack_378c,aiStack_37a0[1],_Size);
          piVar7 = _malloc(_Size);
          if (piVar7 != (int *)0x0) {
            piVar4 = aiStack_37a0;
            piVar13 = piVar7;
            for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar13 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar13 = piVar13 + 1;
            }
            DVar5 = _Size - 0x68;
            if ((0 < (int)DVar5) &&
               ((BVar6 = ReadFile(local_37c4,piVar7 + 0x1a,DVar5,&local_37c0,(LPOVERLAPPED)0x0),
                piVar4 = local_37c4, BVar6 == 0 || (local_37c0 != DVar5)))) break;
            FUN_0044e0a0(piVar7);
            (*DAT_0065d3e0)(L"    add macro: %s",piVar7 + 5);
            piVar4 = local_37c4;
            pcVar14 = ReadFile_exref;
          }
          iVar3 = (*pcVar14)(piVar4,aiStack_37a0,0x68,&local_37c0,0);
        }
        CloseHandle(piVar4);
        iVar3 = FUN_00402ed0();
        iStack_37ac = iVar3;
        iStack_37a4 = FUN_00402ed0();
        iStack_37a8 = FUN_00479ab0();
        if (iStack_37a8 != 0) {
          local_37c4 = (int *)puStack_37b8[4];
          if (local_37c4 != (int *)0x0) {
            do {
              iVar3 = *local_37c4;
              if (iVar3 != 0) {
                piVar4 = aiStack_33d4;
                iVar12 = 4;
                do {
                  iVar11 = 0x90;
                  do {
                    if ((*(char *)((int)piVar4 + -1) == '\x05') && (*piVar4 == *(int *)(iVar3 + 4)))
                    {
                      if (*(int *)(iVar3 + 0x50) == 0) {
                        Sleep(0x14);
                        uVar8 = FUN_00479770();
                        *(undefined4 *)(iVar3 + 0x50) = uVar8;
                      }
                      *piVar4 = *(int *)(iVar3 + 0x50);
                    }
                    piVar4 = piVar4 + 4;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 0x50);
                *(undefined4 *)(iVar3 + 0x50) = 0;
                FUN_00479b20(iVar3);
              }
              local_37c4 = (int *)local_37c4[1];
            } while (local_37c4 != (int *)0x0);
            local_37c4 = (int *)0x0;
            iVar3 = iStack_37ac;
          }
          Sleep(0xf);
          local_340c = FUN_00479770();
          if (1 < *(int *)(local_37bc + -2)) {
            ATL::CSimpleStringT<wchar_t,0>::Fork
                      ((CSimpleStringT<wchar_t,0> *)&local_37bc,*(int *)(local_37bc + -6));
          }
          _wcsncpy_s(local_3408,0x14,local_37bc,0xffffffff);
          iVar12 = FUN_0047a990(iVar3 + 0xa0);
          iVar3 = local_37b0;
          uVar8 = *(undefined4 *)(local_37b0 + 0x2d14);
          uVar2 = *(undefined4 *)(iVar12 + 4);
          iStack_37ac = *(int *)(local_37b0 + 0x3000);
          this = (CTreeCtrl *)(local_37b0 + 0x2d28);
          for (puVar10 = *(undefined4 **)(local_37b0 + 0x2e3c);
              (puVar10 != (undefined4 *)0x0 && (*(int *)*puVar10 != -0x10000));
              puVar10 = (undefined4 *)puVar10[1]) {
          }
          p_Var9 = CTreeCtrl::InsertItem
                             (this,1,(wchar_t *)(iVar12 + 8),0,0,0,0,0,(_TREEITEM *)0xffff0000,
                              (_TREEITEM *)0xffff0002);
          if (p_Var9 == (_TREEITEM *)0x0) {
LAB_00425017:
            FUN_00480070(this);
          }
          else {
            puVar10 = _malloc(0x24);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = p_Var9;
              puVar10[4] = uVar2;
              puVar10[5] = 0;
              puVar10[1] = iStack_37ac;
              puVar10[3] = 0;
              puVar10[7] = uVar8;
              puVar10[6] = 1;
              puVar10[8] = 0;
              FUN_0044e0a0(puVar10);
              InvalidateRect(*(HWND *)(iVar3 + 0x2d48),(RECT *)0x0,1);
              goto LAB_00425017;
            }
          }
          if ((puStack_37b8[2] != 0) && (*(int *)(iStack_37a4 + 0xab8) != 0)) {
            FUN_0043ea80(0);
            FUN_004259b0();
          }
        }
        puVar10 = puStack_37b8;
        FUN_0044e280();
        (**(code **)*puVar10)(1);
        local_4._0_1_ = 1;
        pWVar1 = local_37b4 + -2;
        LOCK();
        iVar3 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
        if (iVar3 + -1 < 1) {
          (**(code **)(**(int **)(local_37b4 + -8) + 4))(local_37b4 + -8);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        pwVar15 = local_37bc + -2;
        LOCK();
        iVar3 = *(int *)pwVar15;
        *(int *)pwVar15 = *(int *)pwVar15 + -1;
        UNLOCK();
        if (iVar3 == 1 || iVar3 + -1 < 0) {
          (**(code **)(**(int **)(local_37bc + -8) + 4))(local_37bc + -8);
        }
        local_4 = 0xffffffff;
        CFileDialog::~CFileDialog(local_3738);
        goto LAB_00425150;
      }
      CloseHandle(piVar4);
      DVar5 = GetLastError();
      pwVar15 = L"Read profile file failed. error=0x%x";
    }
    FUN_00448ff0(pwVar15,DVar5);
    local_4._0_1_ = 1;
    pWVar1 = local_37b4 + -2;
    LOCK();
    iVar3 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar3 + -1 < 1) {
      (**(code **)(**(int **)(local_37b4 + -8) + 4))(local_37b4 + -8);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    pwVar15 = local_37bc + -2;
    LOCK();
    iVar3 = *(int *)pwVar15;
    *(int *)pwVar15 = *(int *)pwVar15 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(local_37bc + -8) + 4))(local_37bc + -8);
    }
  }
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_3738);
LAB_00425150:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_37c8);
  return;
}



// ==== 00426480 FUN_00426480 ====
// why: string: CRC err: 0x01; string: CRC err: 0x02

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00426480(int param_1)

{
  char cVar1;
  void *_ArgList;
  uint uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  int iVar6;
  LPSTR pCVar7;
  char *_Dest;
  char *pcVar8;
  undefined1 auStack_410a0 [4];
  int iStack_4109c;
  CWnd *pCStack_41098;
  undefined1 *puStack_41094;
  undefined1 uStack_408a0;
  undefined4 uStack_4089f;
  undefined4 uStack_4089b;
  undefined4 uStack_40897;
  undefined2 uStack_40893;
  undefined1 uStack_40891;
  undefined1 uStack_40890;
  undefined1 auStack_4088f [63];
  undefined1 auStack_40850 [64];
  CHAR aCStack_40810 [1024];
  char acStack_40410 [1024];
  char acStack_40010 [65536];
  char acStack_30010 [65536];
  char acStack_20010 [131076];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de0eb;
  local_c = ExceptionList;
  uVar2 = DAT_0064f674 ^ (uint)auStack_410a0;
  ExceptionList = &local_c;
  iStack_4109c = param_1;
  pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
  pCStack_41098 = CWnd::FromHandle(pHVar3);
  if (DAT_0066fa08 == 0) {
    FUN_00437450();
    local_4 = 0;
    iVar5 = FUN_004b79eb();
    if (iVar5 != 1) {
      local_4 = 0xffffffff;
      FUN_00437570();
      goto LAB_00426a5a;
    }
    FUN_00457af0(1);
    local_4 = 0xffffffff;
    FUN_00437570();
  }
  iVar5 = FUN_00426ad0();
  if (iVar5 != 0) {
    uStack_40890 = 0;
    _memset(auStack_4088f,0,0x3f);
    FUN_004a1900(iVar5 + 8,&uStack_40890);
    _sprintf(acStack_20010,"http://%s/queryprofile.php?username=%s&profile=%s","120.79.152.79",
             &DAT_0066fa0c);
    acStack_40010[0] = '\0';
    aCStack_40810[0] = '\0';
    FUN_004a1bb0();
    iVar6 = FUN_004a0b90(acStack_40010,aCStack_40810);
    if ((iVar6 != 0) && (pCVar7 = StrStrIA(aCStack_40810,"exist"), pCVar7 != (LPSTR)0x0)) {
      puStack_41094 = &stack0xfffbef48;
      ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_0066ff64 + -0x10));
      iVar6 = FUN_004493c0(iStack_4109c);
      if (iVar6 == 0) goto LAB_00426a5a;
    }
    _sprintf(acStack_40410,"http://%s/submitprofile.php");
    _sprintf(acStack_40010,"{");
    pcVar8 = acStack_40010;
    do {
      _Dest = pcVar8;
      pcVar8 = _Dest + 1;
    } while (*_Dest != '\0');
    _sprintf(_Dest,"\"%s\":\"%s\"","username");
    pcVar8 = acStack_40010;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar6 = _sprintf(pcVar8 + (int)(acStack_40010 + -(int)(acStack_40010 + 1)),",");
    _sprintf(pcVar8 + (int)(acStack_40010 + (iVar6 - (int)(acStack_40010 + 1))),"\"%s\":\"%s\"",
             &DAT_00610238,&uStack_40890);
    pHVar3 = GetParent(*(HWND *)(iStack_4109c + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    FUN_004a1900(*(int *)(pCVar4 + 0xc0) + 0x46,&uStack_40890);
    pcVar8 = acStack_40010;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar6 = _sprintf(pcVar8 + (int)(acStack_40010 + -(int)(acStack_40010 + 1)),",");
    _sprintf(pcVar8 + (int)(acStack_40010 + (iVar6 - (int)(acStack_40010 + 1))),"\"%s\":\"%s\"",
             "device",&uStack_40890);
    iVar6 = FUN_00478c80(acStack_20010,0x20000,iVar5);
    if (iVar6 == 0) {
      (*DAT_0065d3e0)();
      FUN_00448f10();
    }
    else {
      pcVar8 = acStack_40010;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      iVar6 = _sprintf(pcVar8 + (int)(acStack_40010 + -(int)(acStack_40010 + 1)),",");
      _sprintf(pcVar8 + (int)(acStack_40010 + (iVar6 - (int)(acStack_40010 + 1))),"\"%s\":\"%s\"",
               &DAT_006102a0,acStack_20010);
      acStack_30010[0] = '\0';
      _memset(acStack_30010 + 1,0,0xffff);
      iVar6 = FUN_00478cf0();
      if (iVar6 == 0x33fc) {
        iVar6 = 0;
        do {
          if (acStack_30010[iVar6] != *(char *)(iVar5 + iVar6)) {
            FUN_00448f10();
            goto LAB_00426a5a;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x33fc);
        uStack_408a0 = 0;
        uStack_4089f = 0;
        uStack_4089b = 0;
        uStack_40897 = 0;
        uStack_40893 = 0;
        uStack_40891 = 0;
        FUN_004a17d0(iVar5);
        FUN_00478c80(auStack_40850,0x40,&uStack_408a0);
        pcVar8 = acStack_40010;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar5 = _sprintf(pcVar8 + (int)(acStack_40010 + -(int)(acStack_40010 + 1)),",");
        iVar5 = iVar5 - (int)(acStack_40010 + 1);
        iVar6 = _sprintf(pcVar8 + (int)(acStack_40010 + iVar5),"\"%s\":\"%s\"",&DAT_006102e0,
                         auStack_40850);
        _sprintf(pcVar8 + (int)(acStack_40010 + iVar6 + iVar5),"}");
        (*DAT_0065d3e4)("Upload md5=%s",auStack_40850);
        FUN_004a1980(acStack_40010,0x20000);
        (*DAT_0065d3e0)(L"Start submit profile ------");
        aCStack_40810[0] = '\0';
        iVar5 = FUN_004a0b90(acStack_20010,aCStack_40810);
        if (iVar5 != 0) {
          if (aCStack_40810[0] != '\0') {
            pCVar7 = StrStrIA(aCStack_40810,"submit success");
            if (pCVar7 != (LPSTR)0x0) {
              FUN_00448e50();
              _ArgList = *(void **)(pCStack_41098 + 0xabc);
              if (DAT_0066fa08 != 0) {
                _memset(&DAT_00669630,0,3000);
                __beginthread(FUN_00419460,0,_ArgList);
              }
            }
            goto LAB_00426a5a;
          }
          (*DAT_0065d3e0)();
        }
        FUN_00448e50();
      }
      else {
        FUN_00448f10();
      }
    }
  }
LAB_00426a5a:
  ExceptionList = local_c;
  __security_check_cookie(uVar2 ^ (uint)auStack_410a0);
  return;
}



// ==== 0042be50 FUN_0042be50 ====
// why: calls ReadFile

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0042be50(int param_1)

{
  LPCWSTR pWVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  BOOL BVar6;
  int *piVar7;
  undefined4 uVar8;
  _TREEITEM *p_Var9;
  undefined4 *puVar10;
  int iVar11;
  size_t _Size;
  int iVar12;
  int *piVar13;
  code *pcVar14;
  CTreeCtrl *this;
  wchar_t *pwVar15;
  undefined1 auStack_37c8 [4];
  int *local_37c4;
  DWORD local_37c0;
  wchar_t *local_37bc;
  undefined4 *puStack_37b8;
  LPCWSTR local_37b4;
  int local_37b0;
  int iStack_37ac;
  int iStack_37a8;
  undefined4 uStack_37a4;
  int aiStack_37a0 [5];
  undefined1 auStack_378c [68];
  int iStack_3748;
  CFileDialog local_3738 [808];
  int local_3410;
  undefined4 local_340c;
  wchar_t local_3408 [25];
  char cStack_33d5;
  int aiStack_33d4 [3313];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de1a1;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)auStack_37c8;
  ExceptionList = &local_c;
  local_37b0 = param_1;
  FUN_004b9e3f(1,L".bcf",L"*.bcf",2,L"bcf(*.bcf)|*.bcf|",param_1,0,1);
  local_4 = 0;
  iVar3 = CFileDialog::DoModal(local_3738);
  if (iVar3 == 1) {
    GetFileTitle(&local_37bc);
    local_4._0_1_ = 1;
    CFileDialog::GetPathName(local_3738);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (1 < *(int *)(local_37b4 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_37b4,*(int *)(local_37b4 + -6));
    }
    piVar4 = CreateFileW(local_37b4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    local_37c4 = piVar4;
    if (piVar4 == (int *)0xffffffff) {
      DVar5 = GetLastError();
      pwVar15 = L"Open profile file failed. error=0x%x";
    }
    else {
      local_3410 = 0;
      _memset(&local_340c,0,0x33f8);
      pcVar14 = ReadFile_exref;
      local_37c0 = 0;
      BVar6 = ReadFile(piVar4,&local_3410,0x33fc,&local_37c0,(LPOVERLAPPED)0x0);
      if (((BVar6 != 0) && (local_37c0 == 0x33fc)) && (local_3410 == -0x355edbb)) {
        (*DAT_0065d3e0)(L"Start import: %s, size=%d",local_3408,0x33fc);
        iVar3 = FUN_004ad0e9(0x18);
        if (iVar3 == 0) {
          puStack_37b8 = (undefined4 *)0x0;
        }
        else {
          puStack_37b8 = (undefined4 *)FUN_0044dfe0();
        }
        puStack_37b8[3] = 0;
        puStack_37b8[1] = 0x10;
        iVar3 = ReadFile(piVar4,aiStack_37a0,0x68,&local_37c0,(LPOVERLAPPED)0x0);
        while (((iVar3 != 0 && (_Size = 0, local_37c0 == 0x68)) && (aiStack_37a0[0] == -0x534665e)))
        {
          if (&stack0x00000000 != (undefined1 *)0x37a0) {
            _Size = iStack_3748 * 0xc + 0x68;
          }
          (*DAT_0065d3e0)(L"read macro: %s, id=%x, size=%d",auStack_378c,aiStack_37a0[1],_Size);
          piVar7 = _malloc(_Size);
          if (piVar7 != (int *)0x0) {
            piVar4 = aiStack_37a0;
            piVar13 = piVar7;
            for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar13 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar13 = piVar13 + 1;
            }
            DVar5 = _Size - 0x68;
            if ((0 < (int)DVar5) &&
               ((BVar6 = ReadFile(local_37c4,piVar7 + 0x1a,DVar5,&local_37c0,(LPOVERLAPPED)0x0),
                piVar4 = local_37c4, BVar6 == 0 || (local_37c0 != DVar5)))) break;
            FUN_0044e0a0(piVar7);
            (*DAT_0065d3e0)(L"    add macro: %s",piVar7 + 5);
            piVar4 = local_37c4;
            pcVar14 = ReadFile_exref;
          }
          iVar3 = (*pcVar14)(piVar4,aiStack_37a0,0x68,&local_37c0,0);
        }
        CloseHandle(piVar4);
        iVar3 = FUN_00402ed0();
        iStack_37ac = iVar3;
        uStack_37a4 = FUN_00402ed0();
        iStack_37a8 = FUN_00479ab0();
        if (iStack_37a8 != 0) {
          local_37c4 = (int *)puStack_37b8[4];
          if (local_37c4 != (int *)0x0) {
            do {
              iVar3 = *local_37c4;
              if (iVar3 != 0) {
                piVar4 = aiStack_33d4;
                iVar12 = 4;
                do {
                  iVar11 = 0x90;
                  do {
                    if ((*(char *)((int)piVar4 + -1) == '\x05') && (*piVar4 == *(int *)(iVar3 + 4)))
                    {
                      if (*(int *)(iVar3 + 0x50) == 0) {
                        Sleep(0x14);
                        uVar8 = FUN_00479770();
                        *(undefined4 *)(iVar3 + 0x50) = uVar8;
                      }
                      *piVar4 = *(int *)(iVar3 + 0x50);
                    }
                    piVar4 = piVar4 + 4;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 0x50);
                *(undefined4 *)(iVar3 + 0x50) = 0;
                FUN_00479b20(iVar3);
              }
              local_37c4 = (int *)local_37c4[1];
            } while (local_37c4 != (int *)0x0);
            local_37c4 = (int *)0x0;
            iVar3 = iStack_37ac;
          }
          Sleep(0xf);
          local_340c = FUN_00479770();
          if (1 < *(int *)(local_37bc + -2)) {
            ATL::CSimpleStringT<wchar_t,0>::Fork
                      ((CSimpleStringT<wchar_t,0> *)&local_37bc,*(int *)(local_37bc + -6));
          }
          _wcsncpy_s(local_3408,0x14,local_37bc,0xffffffff);
          iVar12 = FUN_0047a990(iVar3 + 0xa0);
          iVar3 = local_37b0;
          uVar8 = *(undefined4 *)(local_37b0 + 0x32dc);
          uVar2 = *(undefined4 *)(iVar12 + 4);
          iStack_37ac = *(int *)(local_37b0 + 0x32d8);
          this = (CTreeCtrl *)(local_37b0 + 0x3010);
          for (puVar10 = *(undefined4 **)(local_37b0 + 0x3124);
              (puVar10 != (undefined4 *)0x0 && (*(int *)*puVar10 != -0x10000));
              puVar10 = (undefined4 *)puVar10[1]) {
          }
          p_Var9 = CTreeCtrl::InsertItem
                             (this,1,(wchar_t *)(iVar12 + 8),0,0,0,0,0,(_TREEITEM *)0xffff0000,
                              (_TREEITEM *)0xffff0002);
          if (p_Var9 == (_TREEITEM *)0x0) {
LAB_0042c2c7:
            FUN_00480070(this);
          }
          else {
            puVar10 = _malloc(0x24);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = p_Var9;
              puVar10[4] = uVar2;
              puVar10[5] = 0;
              puVar10[1] = iStack_37ac;
              puVar10[3] = 0;
              puVar10[7] = uVar8;
              puVar10[6] = 1;
              puVar10[8] = 0;
              FUN_0044e0a0(puVar10);
              InvalidateRect(*(HWND *)(iVar3 + 0x3030),(RECT *)0x0,1);
              goto LAB_0042c2c7;
            }
          }
          if (puStack_37b8[2] != 0) {
            FUN_0043ea80(0);
          }
        }
        puVar10 = puStack_37b8;
        FUN_0044e280();
        (**(code **)*puVar10)(1);
        local_4._0_1_ = 1;
        pWVar1 = local_37b4 + -2;
        LOCK();
        iVar3 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
        if (iVar3 + -1 < 1) {
          (**(code **)(**(int **)(local_37b4 + -8) + 4))(local_37b4 + -8);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        pwVar15 = local_37bc + -2;
        LOCK();
        iVar3 = *(int *)pwVar15;
        *(int *)pwVar15 = *(int *)pwVar15 + -1;
        UNLOCK();
        if (iVar3 == 1 || iVar3 + -1 < 0) {
          (**(code **)(**(int **)(local_37bc + -8) + 4))(local_37bc + -8);
        }
        local_4 = 0xffffffff;
        CFileDialog::~CFileDialog(local_3738);
        goto LAB_0042c3f3;
      }
      CloseHandle(piVar4);
      DVar5 = GetLastError();
      pwVar15 = L"Read profile file failed. error=0x%x";
    }
    FUN_00448ff0(pwVar15,DVar5);
    local_4._0_1_ = 1;
    pWVar1 = local_37b4 + -2;
    LOCK();
    iVar3 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar3 + -1 < 1) {
      (**(code **)(**(int **)(local_37b4 + -8) + 4))(local_37b4 + -8);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    pwVar15 = local_37bc + -2;
    LOCK();
    iVar3 = *(int *)pwVar15;
    *(int *)pwVar15 = *(int *)pwVar15 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(local_37bc + -8) + 4))(local_37bc + -8);
    }
  }
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_3738);
LAB_0042c3f3:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_37c8);
  return;
}



// ==== 0043fe50 FUN_0043fe50 ====
// why: calls WriteFile

void __fastcall FUN_0043fe50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPCWSTR lpFileName;
  size_t _Size;
  void *lpBuffer;
  BOOL BVar4;
  DWORD DVar5;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar6;
  int local_344;
  DWORD local_340;
  undefined4 local_33c;
  CFileDialog local_338 [808];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ddb16;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_344;
  ExceptionList = &local_c;
  local_33c = param_1;
  iVar2 = FUN_0043e7a0(DAT_0064f674 ^ (uint)&stack0xfffffcac);
  if (iVar2 != 0) {
    FUN_004b9e3f(0,L".mcr",iVar2 + 0x14,2,L"mcr(*.mcr)|*.mcr|",param_1,0,1);
    local_4 = 0;
    iVar3 = CFileDialog::DoModal(local_338);
    if (iVar3 == 1) {
      CFileDialog::GetPathName(local_338);
      local_4._0_1_ = 1;
      iVar3 = DAT_0066f9a4;
      if (*(int *)(iVar2 + 4) != -0xff00) {
        iVar3 = FUN_004799c0(*(undefined4 *)(DAT_0066f9a4 + 0x10),*(int *)(iVar2 + 4));
      }
      if (iVar3 == 0) {
        piVar1 = (int *)(local_344 + -4);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        if ((*(int *)(iVar3 + 0xc) == 0) && (*(int *)(iVar3 + 0x14) != 0)) {
          pvVar6 = (HANDLE)0x0;
          dwFlagsAndAttributes = 0x80;
          dwCreationDisposition = 2;
          lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
          dwShareMode = 3;
          DVar5 = 0x40000000;
          lpFileName = (LPCWSTR)FUN_00405270();
          pvVar6 = CreateFileW(lpFileName,DVar5,dwShareMode,lpSecurityAttributes,
                               dwCreationDisposition,dwFlagsAndAttributes,pvVar6);
          if (pvVar6 != (HANDLE)0xffffffff) {
            _Size = FUN_00479ce0();
            lpBuffer = _malloc(_Size);
            if (lpBuffer != (void *)0x0) {
              *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0x3fffffff;
              FUN_0047a220();
              local_340 = 0;
              BVar4 = WriteFile(pvVar6,lpBuffer,_Size,&local_340,(LPOVERLAPPED)0x0);
              if ((BVar4 == 0) || (local_340 != _Size)) {
                DVar5 = GetLastError();
                FUN_00448ff0(L"Export failed, error=%d",DVar5);
              }
              _free(lpBuffer);
            }
            CloseHandle(pvVar6);
          }
        }
        piVar1 = (int *)(local_344 + -4);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(local_344 + -0x10) + 4))((undefined4 *)(local_344 + -0x10));
      }
    }
    local_4 = 0xffffffff;
    CFileDialog::~CFileDialog(local_338);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_344);
  return;
}



// ==== 00440050 FUN_00440050 ====
// why: calls ReadFile

void __fastcall FUN_00440050(int param_1)

{
  LPCWSTR pWVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  int *piVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  LPCWSTR local_348;
  int *local_344;
  void *local_340;
  DWORD local_33c;
  CFileDialog local_338 [808];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ddad1;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_348;
  ExceptionList = &local_c;
  FUN_004b9e3f(1,L".mcr",L"*.mcr",2,L"mcr(*.mcr)|*.mcr|",param_1,0,1);
  local_4 = 0;
  iVar2 = CFileDialog::DoModal(local_338);
  if (iVar2 == 1) {
    GetFileTitle(&local_344);
    local_4._0_1_ = 1;
    CFileDialog::GetPathName(local_338);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (1 < *(int *)(local_348 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_348,*(int *)(local_348 + -6));
    }
    hFile = CreateFileW(local_348,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      DVar3 = GetLastError();
      FUN_00448ff0(L"Open macro file error=0x%x",DVar3);
    }
    else {
      DVar3 = GetFileSize(hFile,(LPDWORD)0x0);
      piVar4 = local_344;
      if (((DVar3 != 0) && (piVar4 = _malloc(DVar3), piVar4 != (int *)0x0)) &&
         (local_340 = _malloc(DVar3), local_340 != (void *)0x0)) {
        local_33c = 0;
        BVar5 = ReadFile(hFile,local_340,DVar3,&local_33c,(LPOVERLAPPED)0x0);
        if ((BVar5 == 0) || (local_33c != DVar3)) {
          DVar3 = GetLastError();
          FUN_00448ff0(L"Read macro file error=0x%x",DVar3);
        }
        else {
          FUN_0047a270();
          if (*piVar4 == -0x534665e) {
            iVar2 = FUN_00479770();
            piVar4[1] = iVar2;
            FUN_00428140();
            puVar6 = (undefined4 *)FUN_0047f8f0();
            if ((puVar6 != (undefined4 *)0x0) && (puVar6[6] != 2)) {
              FUN_00440670(*puVar6);
              FUN_0047f8f0();
            }
            iVar2 = FUN_00479b20(piVar4);
            if (iVar2 != 0) {
              FUN_0043ea80(*(undefined4 *)(iVar2 + 4));
              FUN_0043f770(iVar2,param_1 + 0x1798);
            }
          }
          else {
            FUN_00448ff0(L"This is not a macro file");
          }
        }
      }
      if (hFile != (HANDLE)0x0) {
        CloseHandle(hFile);
      }
      if (piVar4 != (int *)0x0) {
        _free(piVar4);
      }
      if (local_340 != (void *)0x0) {
        _free(local_340);
      }
    }
    local_4._0_1_ = 1;
    pWVar1 = local_348 + -2;
    LOCK();
    iVar2 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 < 1) {
      (**(code **)(**(int **)(local_348 + -8) + 4))(local_348 + -8);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    piVar4 = local_344 + -1;
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)local_344[-4] + 4))(local_344 + -4);
    }
  }
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_338);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_348);
  return;
}



// ==== 00456a00 FUN_00456a00 ====
// why: calls ReadFile

void FUN_00456a00(LPCWSTR param_1)

{
  HANDLE hFile;
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *unaff_EDI;
  DWORD local_418;
  byte local_414 [4];
  char local_410;
  char local_400;
  ushort auStack_30c [388];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_418;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    (*DAT_0065d3e0)(L"open skn file err");
    __security_check_cookie(local_4 ^ (uint)&local_418);
    return;
  }
  local_418 = 0;
  ReadFile(hFile,local_414,0x208,&local_418,(LPOVERLAPPED)0x0);
  CloseHandle(hFile);
  iVar3 = (int)local_410;
  iVar2 = (int)local_400;
  if ((iVar3 - 0x15U < 0x78) && (iVar2 < 0x65)) {
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        auStack_30c[iVar1 + 0x80] =
             (ushort)(byte)(local_414[iVar1 + iVar3] >> 3 | local_414[iVar1 + iVar3] << 5);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    auStack_30c[iVar2 + 0x80] = 0;
    __snwprintf_s(unaff_EDI,0x104,0x103,L"%s",auStack_30c + 0x80);
    __security_check_cookie(local_4 ^ (uint)&local_418);
    return;
  }
  (*DAT_0065d3e0)(L"Error: nOffset=%d, nSize=%d",iVar3,iVar2);
  __security_check_cookie(local_4 ^ (uint)&local_418);
  return;
}



// ==== 00458640 FUN_00458640 ====
// why: string: pVar->nDefLedIndex=%d

void FUN_00458640(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x43c);
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0xc0) != 0)) &&
      (*(int *)(*(int *)(iVar1 + 0xc0) + 0x24) != 0)) && (*(int *)(iVar1 + 0xa4) != 0)) {
    FUN_00404ee0(&DAT_0066fc50);
    iVar1 = FUN_004493c0();
    if (iVar1 != 0) {
      (*DAT_0065d3e0)(L"pVar->nDefLedIndex=%d");
      FUN_0047a8a0();
      FUN_0047acf0();
      (**(code **)(**(int **)(unaff_ESI + 0x43c) + 0x174))();
      if ((*(int *)(*(int *)(*(int *)(unaff_ESI + 0x43c) + 0xc0) + 0x14) == 1) &&
         (*(int *)(*(int *)(unaff_ESI + 0x43c) + 0x1704) != 0)) {
        FUN_004a8ac0();
      }
      if (DAT_00658b3a != '\0') {
        FUN_00404f00();
        FUN_0046aeb0(0,*(undefined4 *)(DAT_0066cfc0 + 0xab4));
        return;
      }
      FUN_00404f30();
      FUN_00448e50();
    }
  }
  return;
}



// ==== 0045b600 FUN_0045b600 ====
// why: string: pOtherDEV=%x, m_bOnline=%x

undefined4 __thiscall FUN_0045b600(int param_1,uint param_2,WPARAM param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  WPARAM WVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  WVar6 = DAT_00651534;
  if (param_3 == 0) {
    return 1;
  }
  uVar8 = param_2 >> 8 & 0xff;
  uVar9 = param_2 & 0xff;
  (*DAT_0065d3e0)(L"OnDeviceBehavior: Buffer=%x %x, Dev=%s(%x), pCurDev=%x",uVar9,uVar8,
                  param_3 + 0x28,param_3,DAT_00651534);
  if (*(int *)(param_3 + 0x14) == 0) {
    iVar1 = *(int *)(param_3 + 0x20);
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = *(int *)(param_3 + 0x24);
    iVar5 = FUN_00465bb0();
    iVar3 = *(int *)(iVar1 + 0xa4);
    if (iVar3 == 0) {
      return 1;
    }
    if (iVar5 == 0) {
      return 1;
    }
    if (uVar9 != 2) {
      if (uVar9 == 3) {
        if ((uVar8 != 0) && ((int)uVar8 <= *(int *)(iVar5 + 4))) {
          *(uint *)(param_3 + 0x2e4) = uVar8 - 1;
          if (DAT_0066f9d8 != 0) {
            FUN_0045b4b0(*(undefined4 *)((uVar8 + 0x27e) * 0x10 + iVar3));
          }
          FUN_0040a810(*(int *)(iVar1 + 0x1100) + 0x3324);
          return 1;
        }
        (*DAT_0065d3e0)(L"nCurDpiLevel invalid, DpiLevel=%d",*(undefined4 *)(iVar5 + 4));
        return 1;
      }
      if (uVar9 == 4) {
        return 1;
      }
      if (uVar9 != 5) {
        return 1;
      }
      *(uint *)(param_3 + 0x304) = uVar8;
      if (*(char *)(iVar2 + 0x269d) == '\0') {
        return 1;
      }
      if ((*(int *)(iVar1 + 0x1104) != 0) &&
         (iVar1 = *(int *)(*(int *)(iVar1 + 0x1104) + 0x1884), iVar1 != 0)) {
        InvalidateRect(*(HWND *)(iVar1 + 0x20),(RECT *)0x0,1);
      }
      uVar8 = (uint)(uVar8 == 0xff);
LAB_0045b8f5:
      *(uint *)(param_3 + 0x308) = uVar8;
      FUN_0045b920();
      return 1;
    }
    if (uVar8 != 0) {
LAB_0045b869:
      if ((uVar8 == 1) && (*(int *)(param_1 + 0xa84) == 6)) {
        PostMessageW(*(HWND *)(param_1 + 0x20),0x5a6,param_3,0);
        return 1;
      }
      return 1;
    }
    if (WVar6 != param_3) {
      return 1;
    }
    WVar6 = FUN_004795e0();
    if ((WVar6 == 0) || (*(int *)(WVar6 + 0x1c) == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(WVar6 + 0x1c) + 0x238);
    }
    (*DAT_0065d3e0)(L"pOtherDEV=%x, m_bOnline=%x",WVar6,uVar7);
    if (WVar6 == 0) goto LAB_0045b70d;
    iVar1 = *(int *)(*(int *)(WVar6 + 0x1c) + 0x238);
  }
  else {
    if (*(int *)(param_3 + 0x14) != 1) {
      return 1;
    }
    if (*(int *)(param_3 + 0x20) == 0) {
      return 1;
    }
    if (uVar9 != 2) {
      if (uVar9 != 5) {
        return 1;
      }
      *(uint *)(param_3 + 0x304) = uVar8;
      if (*(char *)(*(int *)(param_3 + 0x24) + 0x2d3a) == '\0') {
        return 1;
      }
      iVar1 = *(int *)(*(int *)(param_3 + 0x20) + 0x16f4);
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x1884), iVar1 != 0)) {
        InvalidateRect(*(HWND *)(iVar1 + 0x20),(RECT *)0x0,1);
      }
      uVar8 = (uint)((param_2 & 0xf00000) != 0);
      if ((uVar8 == 1) && ((param_2 & 0xf0000) != 0)) {
        uVar8 = 0;
      }
      goto LAB_0045b8f5;
    }
    if (uVar8 != 0) goto LAB_0045b869;
    if (WVar6 != param_3) {
      return 1;
    }
    piVar4 = *(int **)(WVar6 + 0x1c);
    if ((piVar4 != (int *)0x0) && (piVar4[7] != 0)) {
      (**(code **)(*piVar4 + 0x8c))();
    }
    WVar6 = FUN_004795e0();
    if (WVar6 == 0) goto LAB_0045b70d;
    iVar1 = *(int *)(*(int *)(WVar6 + 0x1c) + 0x238);
  }
  if (iVar1 != 0) {
    PostMessageW(*(HWND *)(param_1 + 0x20),0x5a6,WVar6,0);
    return 1;
  }
LAB_0045b70d:
  FUN_0045a560(6);
  return 1;
}



// ==== 00462790 FUN_00462790 ====
// why: string: Update by user click: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00462790(CWnd *param_1,uint param_2,int param_3)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  tagRECT tStack_22c;
  undefined1 *puStack_21c;
  WCHAR aWStack_218 [262];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)&tStack_22c;
  if ((DAT_0066a21c != (int *)0x0) && (DAT_0066a214 == 0)) {
    (**(code **)(*DAT_0066a21c + 0x60))();
    if (DAT_0066a21c != (int *)0x0) {
      (**(code **)(*DAT_0066a21c + 4))();
    }
    DAT_0066a21c = (int *)0x0;
  }
  if (param_1 == (CWnd *)0xffffe160) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1ec0);
  }
  if (param_3 == iVar3) {
    if (*(int *)(param_1 + 0x1f48) != 1) {
      *(undefined4 *)(param_1 + 0x1f48) = 1;
      InvalidateRect(*(HWND *)(param_1 + 0x1ec0),(RECT *)0x0,1);
    }
    if (*(int *)(param_1 + 0x20d4) != 0) {
      *(undefined4 *)(param_1 + 0x20d4) = 0;
      InvalidateRect(*(HWND *)(param_1 + 0x204c),(RECT *)0x0,1);
    }
    DAT_0066f9cc = 0;
    goto LAB_00462e39;
  }
  if (param_1 == (CWnd *)0xffffdfd4) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x204c);
  }
  if (param_3 == iVar3) {
    if (*(int *)(param_1 + 0x1f48) != 0) {
      *(undefined4 *)(param_1 + 0x1f48) = 0;
      InvalidateRect(*(HWND *)(param_1 + 0x1ec0),(RECT *)0x0,1);
    }
    if (*(int *)(param_1 + 0x20d4) != 1) {
      *(undefined4 *)(param_1 + 0x20d4) = 1;
      InvalidateRect(*(HWND *)(param_1 + 0x204c),(RECT *)0x0,1);
    }
    DAT_0066f9cc = 1;
    goto LAB_00462e39;
  }
  if ((param_1 == (CWnd *)0xffffde48) || (*(int *)(param_1 + 0x21d8) == 0)) {
LAB_00462983:
    if ((param_1 != (CWnd *)0xffffc930) && (*(int *)(param_1 + 0x36f0) != 0)) {
      if (param_1 == (CWnd *)0xffffc930) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x36f0);
      }
      if (param_3 == iVar3) {
        FUN_0045e220();
        *(uint *)(param_1 + 0x38c0) = (uint)(*(int *)(param_1 + 0x3778) == 0);
        InvalidateRect(*(HWND *)(param_1 + 0x387c),(RECT *)0x0,1);
        CWnd::ShowWindow(param_1 + 0x4744,
                         (-(uint)(*(int *)(param_1 + 0x38c0) != 0) & 0xfffffffb) + 5);
        GetWindowRect(*(HWND *)(param_1 + 0x36f0),&tStack_22c);
        CWnd::ScreenToClient(param_1,&tStack_22c);
        SetRect(&tStack_22c,tStack_22c.right,tStack_22c.top + -5,tStack_22c.right + 0x96,
                tStack_22c.bottom + 5);
        InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_22c,1);
        FUN_00463390();
        goto LAB_00462e34;
      }
    }
    if (param_1 == (CWnd *)0xffffe4fc) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1b24);
    }
    if (param_3 == iVar3) {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      pHVar1 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      pHVar1 = GetParent(*(HWND *)(pCVar2 + 0x20));
      CWnd::FromHandle(pHVar1);
      FUN_0045b0e0(*(undefined4 *)(param_1 + 0x1b94));
      goto LAB_00462e39;
    }
    if (param_1 == (CWnd *)0xffffb28c) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4d94);
    }
    if (param_3 == iVar3) {
      FUN_0045e220();
      DAT_0066f9d0 = *(undefined4 *)(param_1 + 0x4e1c);
      goto LAB_00462e39;
    }
    if (param_1 == (CWnd *)0xffffe2ec) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1d34);
    }
    if (param_3 == iVar3) {
      FUN_0045e220();
      DAT_0066f9d4 = *(undefined4 *)(param_1 + 0x1dbc);
      if (*(int *)(param_1 + 0x1dbc) == 0) {
        FUN_00463670();
      }
      else {
        FUN_00463590();
      }
      goto LAB_00462e39;
    }
    if ((param_1 != (CWnd *)0xffffcabc) && (*(int *)(param_1 + 0x3564) != 0)) {
      if (param_1 == (CWnd *)0xffffcabc) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x3564);
      }
      if (param_3 == iVar3) {
        FUN_0045e220();
        DAT_0066f9d8 = *(undefined4 *)(param_1 + 0x35ec);
        goto LAB_00462e39;
      }
    }
    if ((param_1 != (CWnd *)0xffffcc48) && (*(int *)(param_1 + 0x33d8) != 0)) {
      if (param_1 == (CWnd *)0xffffcc48) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x33d8);
      }
      if (param_3 == iVar3) {
        FUN_0045e220();
        FUN_00467be0();
        FUN_00403070(tStack_22c.right,tStack_22c.top + -5,tStack_22c.right + 0x96);
        InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_22c,1);
        FUN_00463390();
        goto LAB_00462e34;
      }
    }
    if (param_1 == (CWnd *)0xffffb730) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x48f0);
    }
    if (param_3 == iVar3) {
      (*DAT_0065d3e0)();
      FUN_00402ed0();
      FUN_00402ed0();
      FUN_00402ed0();
      FUN_00458640();
      goto LAB_00462e39;
    }
    if ((param_1 != (CWnd *)0xffffb418) && (*(int *)(param_1 + 0x4c08) != 0)) {
      if (param_1 == (CWnd *)0xffffb418) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x4c08);
      }
      if (param_3 != iVar3) goto LAB_00462d9b;
      iVar3 = *(int *)(param_1 + 0x6138);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) == 0)) goto LAB_00462e39;
      if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x234) == 2) {
        FUN_00448e50();
        goto LAB_00462e39;
      }
      if (DAT_00658288 != 0) {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x6138) + 0x1c) + 0x18);
        (*DAT_0065d3e0)(L"Update by user click: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x",
                        iVar3);
        if ((iVar3 == 0) || (*(int *)(*(int *)(param_1 + 0x6138) + 0x2d8) < iVar3)) {
          FUN_00448e50();
        }
        else {
          puStack_21c = &stack0xfffffdc4;
          FUN_00404ee0(&DAT_0066fe70);
          iVar3 = FUN_004493c0(param_1);
          if (iVar3 != 0) {
            FUN_00468160();
            ShellExecuteW((HWND)0x0,L"open",aWStack_218,(LPCWSTR)0x0,
                          (LPCWSTR)(*(int *)(param_1 + 0x6138) + 0xd0),1);
            FUN_00402ed0();
            FUN_00402ed0();
            iVar3 = FUN_00402ed0();
            PostMessageW(*(HWND *)(iVar3 + 0x20),0x10,0,0);
          }
        }
        goto LAB_00462e39;
      }
      if (DAT_0066a22c != 0) goto LAB_00462e39;
      _DAT_0065cfa0 = 2;
      _DAT_0065cf9c = iVar3;
LAB_00462dd7:
      _DAT_0065cfa4 = 0;
      _DAT_0065cf98 = param_1;
      __beginthread(FUN_00463b40,0,&DAT_0065cf98);
      goto LAB_00462e39;
    }
LAB_00462d9b:
    if ((param_1 != (CWnd *)0xffffb5a4) && (*(int *)(param_1 + 0x4a7c) != 0)) {
      if (param_1 == (CWnd *)0xffffb5a4) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x4a7c);
      }
      if (param_3 == iVar3) {
        if (DAT_0066a22c != 0) goto LAB_00462e39;
        _DAT_0065cf9c = *(int *)(param_1 + 0x6138);
        _DAT_0065cfa0 = 1;
        goto LAB_00462dd7;
      }
    }
    if ((param_1 == (CWnd *)0xffffb100) || (*(int *)(param_1 + 0x4f20) == 0)) goto LAB_00462e39;
    if (param_1 == (CWnd *)0xffffb100) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4f20);
    }
    if (param_3 != iVar3) goto LAB_00462e39;
    FUN_0045e220();
    FUN_00463390();
  }
  else {
    if (param_1 == (CWnd *)0xffffde48) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x21d8);
    }
    if (param_3 != iVar3) goto LAB_00462983;
    FUN_0045e220();
    *(uint *)(param_1 + 0x23a8) = (uint)(*(int *)(param_1 + 0x2260) == 0);
    InvalidateRect(*(HWND *)(param_1 + 0x2364),(RECT *)0x0,1);
    CWnd::ShowWindow(param_1 + 0x322c,(-(uint)(*(int *)(param_1 + 0x23a8) != 0) & 0xfffffffb) + 5);
    GetWindowRect(*(HWND *)(param_1 + 0x21d8),&tStack_22c);
    CWnd::ScreenToClient(param_1,&tStack_22c);
    SetRect(&tStack_22c,tStack_22c.right,tStack_22c.top + -5,tStack_22c.right + 0x96,
            tStack_22c.bottom + 5);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_22c,1);
    FUN_00463390();
  }
LAB_00462e34:
  FUN_00404f30();
LAB_00462e39:
  CWnd::OnCommand(param_1,param_2,param_3);
  __security_check_cookie(local_c ^ (uint)&tStack_22c);
  return;
}



// ==== 00463b40 FUN_00463b40 ====
// why: string: Download FW Err=0x%x; string: Start check FW, nLocalFwVer=%x, szUID=%s

void FUN_00463b40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPCWSTR pWVar4;
  BOOL BVar5;
  LPWSTR pWVar6;
  int iVar7;
  uint uVar8;
  HWND pHVar9;
  WPARAM wParam;
  LPARAM LVar10;
  int iStack_454;
  uint local_450;
  uint local_44c;
  int *local_448;
  int iStack_444;
  int iStack_440;
  undefined1 *puStack_43c;
  int iStack_438;
  int aiStack_434 [131];
  undefined1 auStack_228 [524];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_005de8f7;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&iStack_454;
  ExceptionList = &local_14;
  local_448 = param_1;
  if ((((param_1 == (int *)0x0) || (param_1[1] == 0)) || (DAT_006581e8 == 0)) || (DAT_0066a22c != 0)
     ) {
    (*DAT_0065d3e0)();
    goto LAB_004640f0;
  }
  DAT_0066a22c = 1;
  if (*param_1 == 0) {
    Sleep(0x9c4);
  }
  local_450 = param_1[2];
  iVar2 = *param_1;
  uVar8 = (uint)(param_1[3] == 0);
  local_44c = uVar8;
  (*DAT_0065d3e0)(L"UpdateThread Start, UpdateType=%d, UpdatByUserClick=%d....",local_450);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&iStack_454);
  iStack_c = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&iStack_440);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&iStack_438);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&iStack_444);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)aiStack_434);
  iStack_c = CONCAT31(iStack_c._1_3_,4);
  if ((DAT_0066a230 == 0) && (iVar3 = FUN_00464120(), iVar3 == 0)) {
    if (uVar8 != 0) {
      LVar10 = 5;
      pHVar9 = *(HWND *)(iVar2 + 0x20);
      wParam = 0;
LAB_00464005:
      PostMessageW(pHVar9,0x458,wParam,LVar10);
    }
  }
  else {
    if ((local_450 & 1) != 0) {
      (*DAT_0065d3e0)();
      (*DAT_0065d3e0)(L"Local Drv Ver=0x%x, Net Drv Ver=0x%x",DAT_006581e4);
      if ((DAT_0066a234 < 1) || (DAT_0066a234 <= DAT_006581e4)) {
        if (uVar8 == 0) goto LAB_00463dff;
        pHVar9 = *(HWND *)(iVar2 + 0x20);
        LVar10 = 3;
      }
      else {
        (*DAT_0065d3e0)();
        if (uVar8 == 0) {
          pHVar9 = *(HWND *)(iVar2 + 0x20);
          LVar10 = 1;
        }
        else {
          puStack_43c = &stack0xfffffb98;
          FUN_00404ee0(&DAT_0066fe74);
          iVar3 = FUN_004493c0(iVar2);
          if (iVar3 == 0) goto LAB_00463dff;
          FUN_004649e0();
          FUN_004031f0(&iStack_454,L"%s%s",&DAT_0065cfa8);
          (*DAT_0065d3e0)(L"Download: %s",&DAT_0066a238);
          pWVar4 = (LPCWSTR)FUN_00405270();
          BVar5 = PathFileExistsW(pWVar4);
          if (BVar5 == 0) {
            FUN_00460e30();
            FUN_00405270();
            iVar3 = FUN_00464870(iVar2,&DAT_0066a238);
            FUN_00460e30();
            if (iVar3 != 0) {
              (*DAT_0065d3e0)(L"Download DRV Err=0x%x\n");
              pWVar4 = (LPCWSTR)FUN_00405270();
              DeleteFileW(pWVar4);
              pHVar9 = *(HWND *)(iVar2 + 0x20);
              LVar10 = 4;
              wParam = 0;
              goto LAB_00464005;
            }
          }
          else {
            (*DAT_0065d3e0)(L"%s already exists");
          }
          FID_conflict_operator_();
          pHVar9 = *(HWND *)(iVar2 + 0x20);
          LVar10 = 2;
        }
      }
      PostMessageW(pHVar9,0x458,1,LVar10);
    }
LAB_00463dff:
    if ((local_450 & 2) != 0) {
      if (DAT_00658288 == 0) {
        if (*(int *)(param_1[1] + 0x1c) == 0) {
          (*DAT_0065d3e0)();
        }
        else {
          local_450 = *(uint *)(*(int *)(param_1[1] + 0x1c) + 0x18);
          (*DAT_0065d3e0)(L"Start check FW, nLocalFwVer=%x, szUID=%s",local_450);
          iVar3 = 0;
          pWVar4 = &DAT_0066a444;
          do {
            if (((*pWVar4 != L'\0') &&
                (pWVar6 = StrStrIW(pWVar4,(LPCWSTR)(local_448[1] + 0xb2)), pWVar6 != (LPWSTR)0x0))
               && ((int)local_450 < *(int *)(pWVar4 + -2))) {
              if (iVar3 != -1) {
                (*DAT_0065d3e0)(L"device %d need update, inx=%d",iVar3);
                if (local_44c == 0) {
                  LVar10 = 1;
                  goto LAB_00463ffa;
                }
                puStack_43c = &stack0xfffffb98;
                FUN_00404ee0(&DAT_0066fe70);
                iVar7 = FUN_004493c0(iVar2);
                if (iVar7 == 0) goto LAB_0046400b;
                FUN_00468130();
                FUN_004649e0();
                FUN_004031f0(&iStack_454,L"%s%s",auStack_228);
                (*DAT_0065d3e0)(L"Download: %s",&DAT_0066a462 + iVar3 * 0x22c);
                pWVar4 = (LPCWSTR)FUN_00405270();
                BVar5 = PathFileExistsW(pWVar4);
                if (BVar5 == 0) {
                  FUN_00460e30();
                  FUN_00405270();
                  iVar3 = FUN_00464870(iVar2,&DAT_0066a462 + iVar3 * 0x22c);
                  FUN_00460e30();
                  if (iVar3 != 0) {
                    (*DAT_0065d3e0)(L"Download FW Err=0x%x\n");
                    pWVar4 = (LPCWSTR)FUN_00405270();
                    DeleteFileW(pWVar4);
                    pHVar9 = *(HWND *)(iVar2 + 0x20);
                    LVar10 = 4;
                    wParam = 0;
                    goto LAB_00464005;
                  }
                }
                else {
                  (*DAT_0065d3e0)(L"%s already exists");
                }
                FID_conflict_operator_();
                pHVar9 = *(HWND *)(iVar2 + 0x20);
                LVar10 = 2;
                wParam = 2;
                goto LAB_00464005;
              }
              break;
            }
            pWVar4 = pWVar4 + 0x116;
            iVar3 = iVar3 + 1;
          } while ((int)pWVar4 < 0x66cfb4);
          (*DAT_0065d3e0)();
          if (local_44c != 0) {
            LVar10 = 3;
LAB_00463ffa:
            pHVar9 = *(HWND *)(iVar2 + 0x20);
            wParam = 2;
            goto LAB_00464005;
          }
        }
      }
      else {
        (*DAT_0065d3e0)();
      }
    }
  }
LAB_0046400b:
  iStack_c._0_1_ = 3;
  DAT_0066a22c = 0;
  piVar1 = (int *)(aiStack_434[0] + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(aiStack_434[0] + -0x10) + 4))();
  }
  iStack_c._0_1_ = 2;
  piVar1 = (int *)(iStack_444 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(iStack_444 + -0x10) + 4))();
  }
  iStack_c._0_1_ = 1;
  piVar1 = (int *)(iStack_438 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(iStack_438 + -0x10) + 4))();
  }
  iStack_c = (uint)iStack_c._1_3_ << 8;
  piVar1 = (int *)(iStack_440 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(iStack_440 + -0x10) + 4))();
  }
  iStack_c = 0xffffffff;
  piVar1 = (int *)(iStack_454 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(iStack_454 + -0x10) + 4))();
  }
LAB_004640f0:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&iStack_454);
  return;
}



// ==== 00464120 FUN_00464120 ====
// why: string: cfgUPD.Dev[%d]: nFwVer=0x%x, UID=%s, szUrl=%s

undefined4 FUN_00464120(int param_1)

{
  short *psVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  wchar_t **_EndPtr;
  wchar_t *pwVar10;
  wchar_t **_Radix;
  undefined4 *puStack_74;
  int iStack_70;
  wchar_t *pwStack_6c;
  int iStack_68;
  short *psStack_64;
  wchar_t *pwStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005de898;
  local_c = ExceptionList;
  if (DAT_0066a230 != 0) {
    return 1;
  }
  if (param_1 != 0) {
    ExceptionList = &local_c;
    _memset(&DAT_0066a230,0,0x2d80);
    (*DAT_0065d3e0)();
    piVar3 = (int *)FUN_004ad163();
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990();
    }
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    psStack_64 = (short *)(iVar4 + 0x10);
    iStack_4 = 0;
    piVar3 = (int *)FUN_004ad163();
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990();
    }
    iStack_68 = (**(code **)(*piVar3 + 0xc))();
    iStack_68 = iStack_68 + 0x10;
    iStack_4._0_1_ = 1;
    piVar3 = (int *)FUN_004ad163();
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990();
    }
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))();
    puStack_74 = puVar5 + 4;
    iStack_4._0_1_ = 2;
    piVar3 = (int *)FUN_004ad163();
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990();
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0xc))();
    pwStack_6c = (wchar_t *)(puVar6 + 4);
    iStack_4._0_1_ = 3;
    piVar3 = (int *)FUN_004ad163();
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990();
    }
    iStack_70 = (**(code **)(*piVar3 + 0xc))();
    iStack_70 = iStack_70 + 0x10;
    iStack_4 = CONCAT31(iStack_4._1_3_,4);
    FUN_004031f0(&psStack_64,L"%s%s",&DAT_0065cfa8);
    FUN_004031f0(&iStack_70,L"%s%s/%s",L"http://120.79.152.79/update/",&DAT_006581e8,
                 L"update_version.xml");
    if (1 < *(int *)(iStack_70 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_70,*(int *)(iStack_70 + -0xc));
    }
    iVar4 = iStack_70;
    (*DAT_0065d3e0)(L"Download %s");
    if (1 < *(int *)(psStack_64 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&psStack_64,*(int *)(psStack_64 + -6));
    }
    psVar1 = psStack_64;
    if (1 < *(int *)(iVar4 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_70,*(int *)(iVar4 + -0xc));
      iVar4 = iStack_70;
    }
    iVar7 = FUN_00464870(0,iVar4);
    if (iVar7 == 0) {
      FUN_0042d2a0();
      iStack_4._0_1_ = 5;
      cVar2 = FUN_00440e10(psVar1,auStack_44);
      if ((cVar2 == '\0') || (cVar2 = FUN_00441c30(), cVar2 == '\0')) {
        (*DAT_0065d3e0)();
        FUN_0042d410();
        FUN_0042d560();
        FUN_0042d560();
        FUN_0042d560();
        FUN_0042d560();
        FUN_0042d560();
        ExceptionList = local_c;
        return 0;
      }
      puStack_50 = &stack0xffffff74;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_2c = 0;
      cVar2 = FUN_004410a0();
      if (cVar2 != '\0') {
        puStack_50 = &stack0xffffff74;
        FUN_0045efa0();
        iStack_4._0_1_ = 6;
        FID_conflict_operator_();
        iStack_4._0_1_ = 5;
        FUN_0042d560();
        puStack_50 = &stack0xffffff74;
        FUN_0045efa0();
        iStack_4._0_1_ = 7;
        FID_conflict_operator_();
        iStack_4._0_1_ = 5;
        FUN_0042d560();
        _Radix = &pwStack_60;
        _EndPtr = (wchar_t **)0x0;
        pwStack_60 = (wchar_t *)0x0;
        pwVar10 = (wchar_t *)func_0x00403800();
        lVar8 = _wcstol(pwVar10,_EndPtr,(int)_Radix);
        if (*psStack_64 != 0) {
          lVar8 = 0;
        }
        DAT_0066a234 = lVar8;
        uVar9 = FUN_00405270();
        __snwprintf_s((wchar_t *)&DAT_0066a238,0x104,0x103,L"%s%s/%s",
                      L"http://120.79.152.79/update/",&DAT_006581e8,uVar9);
        uVar9 = FUN_00405270();
        (*DAT_0065d3e0)(L"cfgUPD: nDrvVer=0x%x, szDrvUrl=%s",lVar8,uVar9);
      }
      iStack_5c = 0;
      pwVar10 = &DAT_0066a444;
      do {
        puStack_4c = &stack0xffffff74;
        cVar2 = FUN_004410a0();
        if (cVar2 == '\0') break;
        puStack_4c = &stack0xffffff74;
        FUN_0045efa0();
        iStack_4._0_1_ = 8;
        FID_conflict_operator_();
        iStack_4._0_1_ = 5;
        piVar3 = (int *)(iStack_58 + -4);
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1 || iVar4 + -1 < 0) {
          (**(code **)(**(int **)(iStack_58 + -0x10) + 4))();
        }
        puStack_4c = &stack0xffffff74;
        FUN_0045efa0();
        iStack_4._0_1_ = 9;
        FID_conflict_operator_();
        iStack_4._0_1_ = 5;
        piVar3 = (int *)(iStack_54 + -4);
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1 || iVar4 + -1 < 0) {
          (**(code **)(**(int **)(iStack_54 + -0x10) + 4))();
        }
        puStack_4c = &stack0xffffff74;
        FUN_0045efa0();
        iStack_4._0_1_ = 10;
        FID_conflict_operator_();
        iStack_4._0_1_ = 5;
        puVar5 = (undefined4 *)(puStack_50 + -0x10);
        piVar3 = (int *)(puStack_50 + -4);
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1 || iVar4 + -1 < 0) {
          (**(code **)(*(int *)*puVar5 + 4))();
        }
        pwStack_60 = (wchar_t *)0x0;
        if ((int)(1U - *(int *)(pwStack_6c + -2) | *(uint *)(pwStack_6c + -4)) < 0) {
          ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT<char,0> *)&pwStack_6c,0);
        }
        lVar8 = _wcstol(pwStack_6c,&pwStack_60,0x10);
        if (*pwStack_60 != L'\0') {
          lVar8 = 0;
        }
        *(long *)(pwVar10 + -2) = lVar8;
        if (1 < *(int *)(iStack_68 + -4)) {
          ATL::CSimpleStringT<wchar_t,0>::Fork
                    ((CSimpleStringT<wchar_t,0> *)&iStack_68,*(int *)(iStack_68 + -0xc));
        }
        __snwprintf_s(pwVar10,0x104,0x103,L"%s");
        if (1 < (int)puStack_74[-1]) {
          ATL::CSimpleStringT<wchar_t,0>::Fork
                    ((CSimpleStringT<wchar_t,0> *)&puStack_74,puStack_74[-3]);
        }
        puVar5 = puStack_74;
        __snwprintf_s(pwVar10 + 0xf,0x104,0x103,L"%s%s/%s",L"http://120.79.152.79/update/",
                      &DAT_006581e8);
        if (1 < (int)puVar5[-1]) {
          ATL::CSimpleStringT<wchar_t,0>::Fork((CSimpleStringT<wchar_t,0> *)&puStack_74,puVar5[-3]);
        }
        iVar4 = iStack_5c;
        (*DAT_0065d3e0)(L"cfgUPD.Dev[%d]: nFwVer=0x%x, UID=%s, szUrl=%s",iStack_5c,lVar8,pwVar10);
        iStack_5c = iVar4 + 1;
        pwVar10 = pwVar10 + 0x116;
      } while ((int)pwVar10 < 0x66cfb4);
      DAT_0066a230 = 1;
      FUN_0042d410();
      FUN_0042d560();
      FUN_0042d560();
      FUN_0042d560();
      FUN_0042d560();
      FUN_0042d560();
      ExceptionList = local_c;
      return 1;
    }
    if (iVar7 == -0x7ff3fffb) {
      pwVar10 = L"url is not exist";
    }
    else if (iVar7 == -0x7ff3fff8) {
      pwVar10 = L"not connect to inet";
    }
    else {
      pwVar10 = L"Download Err=0x%x";
    }
    (*DAT_0065d3e0)(pwVar10);
    iStack_4._0_1_ = 3;
    piVar3 = (int *)(iVar4 + -4);
    LOCK();
    iVar7 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)(iVar4 + -0x10) + 4))();
    }
    iStack_4._0_1_ = 2;
    piVar3 = puVar6 + 3;
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 + -1 < 1) {
      (**(code **)(*(int *)*puVar6 + 4))();
    }
    iStack_4._0_1_ = 1;
    piVar3 = puVar5 + 3;
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 + -1 < 1) {
      (**(code **)(*(int *)*puVar5 + 4))();
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    piVar3 = (int *)(iStack_68 + -4);
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 + -1 < 1) {
      (**(code **)(**(int **)(iStack_68 + -0x10) + 4))();
    }
    iStack_4 = 0xffffffff;
    piVar3 = (int *)(psVar1 + -2);
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(psVar1 + -8) + 4))();
    }
  }
  ExceptionList = local_c;
  return 0;
}



// ==== 0046b1b0 FUN_0046b1b0 ====
// why: calls ReadFile

void FUN_0046b1b0(int param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  undefined1 auStack_8dc [4];
  DWORD local_8d8;
  int local_8d4;
  undefined1 local_8d0 [1208];
  wchar_t local_418 [260];
  wchar_t local_210 [262];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_8dc;
  if ((param_1 != 0) && (local_418 != (wchar_t *)0x0)) {
    __snwprintf_s(local_418,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,param_1 + 0x46);
  }
  __snwprintf_s(local_210,0x104,0x103,L"%seffect.dse",local_418);
  hFile = CreateFileW(local_210,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"Open dse file err=%d",DVar1);
  }
  else {
    FUN_0044e280();
    local_8d8 = 0;
    local_8d4 = 0;
    DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DVar1 != 0) {
      BVar2 = ReadFile(hFile,&local_8d4,4,&local_8d8,(LPOVERLAPPED)0x0);
      if ((BVar2 != 0) && (local_8d8 == 4)) {
        local_8d8 = 0;
        iVar3 = ReadFile(hFile,local_8d0,0x4b8,&local_8d8,(LPOVERLAPPED)0x0);
        while (iVar3 != 0) {
          if (local_8d8 != 0x4b8) goto LAB_0046b323;
          iVar3 = FUN_0046b070(unaff_EBX);
          if (local_8d4 == *(int *)(iVar3 + 4)) {
            *(int *)(unaff_EBX + 0x5568) = iVar3;
          }
          local_8d8 = 0;
          iVar3 = ReadFile(hFile,local_8d0,0x4b8,&local_8d8,(LPOVERLAPPED)0x0);
        }
      }
      DVar1 = GetLastError();
      (*DAT_0065d3e0)(L"Load dse: ReadFile err=%d",DVar1);
    }
LAB_0046b323:
    if (hFile != (HANDLE)0x0) {
      CloseHandle(hFile);
    }
  }
  if (*(int *)(unaff_EBX + 0x5558) == 0) {
    if (1 < *(int *)(DAT_00670010 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&DAT_00670010,*(int *)(DAT_00670010 + -0xc));
    }
    FUN_0046b0c0(DAT_00670010);
    uVar4 = FUN_0046b070(unaff_EBX);
    *(undefined4 *)(unaff_EBX + 0x5568) = uVar4;
  }
  __security_check_cookie(local_4 ^ (uint)auStack_8dc);
  return;
}



// ==== 0046e9c0 FUN_0046e9c0 ====
// why: calls WriteFile

void FUN_0046e9c0(undefined4 param_1)

{
  LPCWSTR pWVar1;
  LPCVOID lpBuffer;
  int iVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  LPCWSTR local_340;
  DWORD local_33c;
  CFileDialog local_338 [808];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de546;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_340;
  ExceptionList = &local_c;
  lpBuffer = (LPCVOID)FUN_0046c620(DAT_0064f674 ^ (uint)&stack0xfffffcb0);
  if (lpBuffer != (LPCVOID)0x0) {
    FUN_004b9e3f(0,L".dse",(int)lpBuffer + 8,2,L"dse(*.dse)|*.dse|",param_1,0,1);
    local_4 = 0;
    iVar2 = CFileDialog::DoModal(local_338);
    if (iVar2 == 1) {
      CFileDialog::GetPathName(local_338);
      local_4._0_1_ = 1;
      if (1 < *(int *)(local_340 + -2)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&local_340,*(int *)(local_340 + -6));
      }
      hFile = CreateFileW(local_340,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      if (hFile == (HANDLE)0xffffffff) {
        pWVar1 = local_340 + -2;
        LOCK();
        iVar2 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
      }
      else {
        local_33c = 0;
        BVar3 = WriteFile(hFile,lpBuffer,0x4b8,&local_33c,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          DVar4 = GetLastError();
          FUN_00448ff0(L"Export failed, error=%d",DVar4);
        }
        CloseHandle(hFile);
        pWVar1 = local_340 + -2;
        LOCK();
        iVar2 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(local_340 + -8) + 4))(local_340 + -8);
      }
    }
    local_4 = 0xffffffff;
    CFileDialog::~CFileDialog(local_338);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_340);
  return;
}



// ==== 0046eb60 FUN_0046eb60 ====
// why: calls ReadFile

void __fastcall FUN_0046eb60(int param_1)

{
  LPCWSTR pWVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  HANDLE hFile;
  DWORD DVar5;
  BOOL BVar6;
  _TREEITEM *p_Var7;
  undefined4 *puVar8;
  wchar_t *pwVar9;
  LPCWSTR local_800;
  int local_7fc;
  DWORD local_7f8;
  undefined4 local_7f4;
  CFileDialog local_7f0 [808];
  int local_4c8;
  undefined4 local_4c4;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de501;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_800;
  ExceptionList = &local_c;
  FUN_004b9e3f(1,L".dse",L"*.dse",2,L"dse(*.dse)|*.dse|",param_1,0,1);
  local_4 = 0;
  iVar4 = CFileDialog::DoModal(local_7f0);
  if (iVar4 != 1) goto LAB_0046ede5;
  GetFileTitle(&local_7fc);
  local_4._0_1_ = 1;
  CFileDialog::GetPathName(local_7f0);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (1 < *(int *)(local_800 + -2)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&local_800,*(int *)(local_800 + -6));
  }
  hFile = CreateFileW(local_800,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar5 = GetLastError();
    pwVar9 = L"Open dse file error=0x%x";
  }
  else {
    local_7f8 = 0;
    BVar6 = ReadFile(hFile,&local_4c8,0x4b8,&local_7f8,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
    if ((BVar6 != 0) && (local_7f8 == 0x4b8)) {
      if (local_4c8 == -0x5f5e6666) {
        local_4c4 = FUN_00479770();
        iVar4 = FUN_0046b070(param_1);
        uVar3 = DAT_00658b30;
        local_7f4 = *(undefined4 *)(iVar4 + 4);
        for (puVar8 = *(undefined4 **)(param_1 + 0x450);
            (puVar8 != (undefined4 *)0x0 && (*(int *)*puVar8 != -0x10000));
            puVar8 = (undefined4 *)puVar8[1]) {
        }
        p_Var7 = CTreeCtrl::InsertItem
                           ((CTreeCtrl *)(param_1 + 0x33c),1,(wchar_t *)(iVar4 + 8),0,0,0,0,0,
                            (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
        if (p_Var7 != (_TREEITEM *)0x0) {
          puVar8 = _malloc(0x24);
          if (puVar8 == (undefined4 *)0x0) goto LAB_0046eca7;
          *puVar8 = p_Var7;
          puVar8[4] = local_7f4;
          puVar8[5] = 0;
          puVar8[1] = 0;
          puVar8[3] = 0;
          puVar8[7] = uVar3;
          puVar8[6] = 1;
          puVar8[8] = 0;
          FUN_0044e0a0(puVar8);
          InvalidateRect(*(HWND *)(param_1 + 0x35c),(RECT *)0x0,1);
        }
        FUN_00480070((CTreeCtrl *)(param_1 + 0x33c));
      }
      else {
        FUN_00448ff0(L"This is not a dse file");
      }
LAB_0046eca7:
      FUN_0042d560();
      FUN_0042d560();
      goto LAB_0046ede5;
    }
    DVar5 = GetLastError();
    pwVar9 = L"Read dse file error=0x%x";
  }
  FUN_00448ff0(pwVar9,DVar5);
  local_4._0_1_ = 1;
  pWVar1 = local_800 + -2;
  LOCK();
  iVar4 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar4 + -1 < 1) {
    (**(code **)(**(int **)(local_800 + -8) + 4))(local_800 + -8);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  piVar2 = (int *)(local_7fc + -4);
  LOCK();
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_7fc + -0x10) + 4))((undefined4 *)(local_7fc + -0x10));
  }
LAB_0046ede5:
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_7f0);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_800);
  return;
}



// ==== 00472570 FUN_00472570 ====
// why: string: CSettingKBDlg: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x, bWired=%d

void __fastcall FUN_00472570(CDialog *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  HANDLE hObject;
  uint uVar4;
  undefined1 *puStack_f10;
  undefined1 auStack_f0c [3248];
  undefined4 uStack_25c;
  undefined4 uStack_248;
  wchar_t awStack_22c [262];
  uint uStack_20;
  uint local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de4ab;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&puStack_f10;
  ExceptionList = &local_14;
  CDialog::OnInitDialog(param_1);
  FUN_00476cc0();
  FUN_00472bd0();
  (**(code **)(*(int *)param_1 + 0x174))();
  if ((DAT_00658288 != 0) && (*(int *)(*(int *)(param_1 + 0xc0) + 0x2d8) != 0)) {
    if ((*(int *)(param_1 + 0xc0) != 0) && (awStack_22c != (wchar_t *)0x0)) {
      __snwprintf_s(awStack_22c,0x104,0x103,L"%s\\Update.exe");
    }
    BVar1 = PathFileExistsW(awStack_22c);
    if (BVar1 == 0) {
      FUN_004494c0(L"File is not exist: %s");
    }
    else if (*(int *)(*(int *)(param_1 + 0xc0) + 0x1c) != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc0) + 0x1c) + 0x28))();
      (*DAT_0065d3e0)(L"CSettingKBDlg: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x, bWired=%d",
                      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x1c) + 0x18),
                      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x2d8));
      iVar3 = *(int *)(param_1 + 0xc0);
      if (((*(int *)(*(int *)(iVar3 + 0x1c) + 0x18) != 0) &&
          (*(int *)(*(int *)(iVar3 + 0x1c) + 0x18) <= *(int *)(iVar3 + 0x2d8))) && (iVar2 == 0)) {
        if (*(int *)(iVar3 + 0x2dc) == 0) {
          puStack_f10 = &stack0xfffff0dc;
          FUN_00404ee0(&DAT_0066fe70);
          iVar3 = FUN_004493c0(param_1);
          if (iVar3 != 0) {
            SetTimer(*(HWND *)(param_1 + 0x20),0x8803,1000,(TIMERPROC)0x0);
          }
        }
        else {
          FUN_00446780(auStack_f0c);
          puStack_10 = (undefined1 *)0x0;
          uStack_25c = 1;
          uStack_248 = 1;
          FID_conflict_operator_();
          FUN_004b79eb();
          SetTimer(*(HWND *)(param_1 + 0x20),0x8803,1000,(TIMERPROC)0x0);
          puStack_10 = (undefined1 *)0xffffffff;
          FUN_00446a20();
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0xc0) != 0) &&
      (iVar3 = *(int *)(*(int *)(param_1 + 0xc0) + 0x24), iVar3 != 0)) &&
     ((*(short *)(iVar3 + 0x345c) != 0 && ((*(byte *)(iVar3 + 0x345e) & 6) != 0)))) {
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_004723b0,param_1,0,
                           (LPDWORD)&stack0xfffff0ec);
    if (hObject != (HANDLE)0x0) {
      CloseHandle(hObject);
    }
  }
  uVar4 = GetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10);
  SetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10,uVar4 | 0x4000000);
  ExceptionList = pvStack_18;
  __security_check_cookie(uStack_20 ^ (uint)&stack0xfffff0ec);
  return;
}



// ==== 00478de0 FUN_00478de0 ====
// why: string: CRC err: 0x01; string: CRC err: 0x02

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00478de0(CWnd *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *_Dest;
  char *pcVar3;
  int iVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_15554 [4];
  int iStack_15550;
  CWnd *pCStack_1554c;
  undefined1 uStack_15548;
  undefined4 uStack_15547;
  undefined4 uStack_15543;
  undefined4 uStack_1553f;
  undefined2 uStack_1553b;
  undefined1 uStack_15539;
  undefined1 uStack_15538;
  undefined1 auStack_15537 [39];
  CHAR aCStack_15510 [256];
  char acStack_15410 [10240];
  char acStack_12c10 [1024];
  char acStack_12810 [10240];
  undefined1 auStack_10010 [65548];
  
  uVar2 = DAT_0064f674 ^ (uint)auStack_15554;
  iVar4 = 0;
  if (param_1 != (CWnd *)0xffffff7c) {
    iVar4 = *(int *)(param_1 + 0xa4);
  }
  pCStack_1554c = param_1;
  if (param_3 != iVar4) {
    iVar4 = 0;
    if (param_1 != (CWnd *)0xfffffc64) {
      iVar4 = *(int *)(param_1 + 0x3bc);
    }
    if (param_3 != iVar4) {
      iVar4 = 0;
      if (param_1 != (CWnd *)0xfffffdf0) {
        iVar4 = *(int *)(param_1 + 0x230);
      }
      if (param_3 == iVar4) {
        uStack_15538 = 0;
        _memset(auStack_15537,0,0x27);
        _sprintf(acStack_12c10,"http://%s/submitmacro.php");
        _sprintf(acStack_15410,"{");
        pcVar3 = acStack_15410;
        do {
          _Dest = pcVar3;
          pcVar3 = _Dest + 1;
        } while (*_Dest != '\0');
        _sprintf(_Dest,"\"%s\":\"%s\"","username");
        FUN_004a1900(*(int *)(param_1 + 0x5ec) + 0x14,&uStack_15538,0x28);
        pcVar3 = acStack_15410;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        iVar4 = _sprintf(pcVar3 + (int)(acStack_15410 + -(int)(acStack_15410 + 1)),",");
        _sprintf(pcVar3 + (int)(acStack_15410 + (iVar4 - (int)(acStack_15410 + 1))),"\"%s\":\"%s\"",
                 &DAT_00610238,&uStack_15538);
        pHVar5 = (HWND)0x0;
        if (param_1 != (CWnd *)0xfffffa84) {
          pHVar5 = *(HWND *)(param_1 + 0x59c);
        }
        GetWindowTextA(pHVar5,aCStack_15510,0x100);
        pcVar3 = acStack_15410;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        iVar4 = _sprintf(pcVar3 + (int)(acStack_15410 + -(int)(acStack_15410 + 1)),",");
        _sprintf(pcVar3 + (int)(acStack_15410 + (iVar4 - (int)(acStack_15410 + 1))),"\"%s\":\"%s\"",
                 &DAT_0061d394,aCStack_15510);
        pHVar5 = (HWND)0x0;
        if (param_1 != (CWnd *)0xfffffad8) {
          pHVar5 = *(HWND *)(param_1 + 0x548);
        }
        GetWindowTextA(pHVar5,aCStack_15510,0x100);
        pcVar3 = acStack_15410;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        iVar4 = _sprintf(pcVar3 + (int)(acStack_15410 + -(int)(acStack_15410 + 1)),",");
        _sprintf(pcVar3 + (int)(acStack_15410 + (iVar4 - (int)(acStack_15410 + 1))),"\"%s\":\"%s\"",
                 "software",aCStack_15510);
        if (*(int *)(param_1 + 0x5ec) == 0) {
          iStack_15550 = 0;
        }
        else {
          iStack_15550 = *(int *)(*(int *)(param_1 + 0x5ec) + 0x58) * 0xc + 0x68;
        }
        iVar4 = FUN_00478c80(auStack_10010,0x10000);
        if (iVar4 == 0) {
          (*DAT_0065d3e0)();
          FUN_00448f10();
          __security_check_cookie(uVar2 ^ (uint)auStack_15554);
          return;
        }
        pcVar3 = acStack_15410;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        iVar4 = _sprintf(pcVar3 + (int)(acStack_15410 + -(int)(acStack_15410 + 1)),",");
        _sprintf(pcVar3 + (int)(acStack_15410 + (iVar4 - (int)(acStack_15410 + 1))),"\"%s\":\"%s\"",
                 &DAT_006102a0,auStack_10010);
        acStack_12810[0] = '\0';
        _memset(acStack_12810 + 1,0,0x27ff);
        iVar4 = *(int *)(param_1 + 0x5ec);
        iVar6 = FUN_00478cf0();
        if (iVar6 != iStack_15550) {
          FUN_00448f10();
          __security_check_cookie(uVar2 ^ (uint)auStack_15554);
          return;
        }
        iVar7 = 0;
        if (0 < iVar6) {
          do {
            if (acStack_12810[iVar7] != *(char *)(iVar4 + iVar7)) {
              FUN_00448f10();
              __security_check_cookie(uVar2 ^ (uint)auStack_15554);
              return;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        iVar4 = FUN_004a0ed0();
        if (iVar4 == 0) {
          FUN_00448f10();
          __security_check_cookie(uVar2 ^ (uint)auStack_15554);
          return;
        }
        pcVar3 = acStack_15410;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        iVar4 = _sprintf(pcVar3 + (int)(acStack_15410 + -(int)(acStack_15410 + 1)),",");
        _sprintf(pcVar3 + (int)(acStack_15410 + (iVar4 - (int)(acStack_15410 + 1))),"\"%s\":\"%s\"",
                 &DAT_0061d3d8,auStack_10010);
        uStack_15547 = 0;
        uStack_15543 = 0;
        uStack_1553f = 0;
        uStack_1553b = 0;
        uStack_15539 = 0;
        uStack_15548 = 0;
        FUN_00478db0();
        iVar4 = FUN_00478c80(auStack_10010,0x10000,&uStack_15548);
        if (iVar4 == 0) {
          (*DAT_0065d3e0)();
          __security_check_cookie(uVar2 ^ (uint)auStack_15554);
          return;
        }
        pcVar3 = acStack_15410;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        iVar4 = _sprintf(pcVar3 + (int)(acStack_15410 + -(int)(acStack_15410 + 1)),",");
        iVar4 = iVar4 - (int)(acStack_15410 + 1);
        iVar6 = _sprintf(pcVar3 + (int)(acStack_15410 + iVar4),"\"%s\":\"%s\"",&DAT_006102e0,
                         auStack_10010);
        _sprintf(pcVar3 + (int)(acStack_15410 + iVar6 + iVar4),"}");
        FUN_004a1980(acStack_15410,0x10000);
        iVar4 = FUN_004a0b90(auStack_10010,"submit success",0);
        if (iVar4 != 0) {
          (*DAT_0065d3e0)();
        }
        FUN_00448e50();
        (**(code **)(*(int *)pCStack_1554c + 0x158))();
        param_1 = pCStack_1554c;
      }
      goto LAB_00479340;
    }
  }
  (**(code **)(*(int *)param_1 + 0x15c))();
LAB_00479340:
  CWnd::OnCommand(param_1,param_2,param_3);
  __security_check_cookie(uVar2 ^ (uint)auStack_15554);
  return;
}



// ==== 00479d00 FUN_00479d00 ====
// why: calls ReadFile

void __thiscall FUN_00479d00(HANDLE param_1,undefined4 *param_2)

{
  int *lpBuffer;
  BOOL BVar1;
  int *_Memory;
  int iVar2;
  int *piVar3;
  size_t _Size;
  DWORD nNumberOfBytesToRead;
  int *piVar4;
  DWORD local_78;
  undefined4 *local_74;
  int local_70 [22];
  int local_18;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_78;
  local_74 = param_2;
  lpBuffer = _malloc(0x58);
  _Size = 0;
  if (lpBuffer == (int *)0x0) goto LAB_00479e80;
  local_78 = 0;
  BVar1 = ReadFile(param_1,lpBuffer,0x58,&local_78,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    if (local_78 == 0x58) goto LAB_00479e77;
LAB_00479e6d:
    *local_74 = 1;
  }
  else {
    if (local_78 != 0x58) goto LAB_00479e6d;
    if (*lpBuffer != -0x5747cccd) goto LAB_00479e77;
    if (lpBuffer[5] == 0) goto LAB_00479e0a;
    local_78 = 0;
    BVar1 = ReadFile(param_1,local_70,0x68,&local_78,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      if (local_78 == 0x68) goto LAB_00479e77;
LAB_00479e5a:
      *local_74 = 1;
    }
    else {
      if (local_78 != 0x68) goto LAB_00479e5a;
      if (local_70[0] == -0x534665e) {
        if (&stack0x00000000 != (undefined1 *)0x70) {
          _Size = local_18 * 0xc + 0x68;
        }
        _Memory = _malloc(_Size);
        if (_Memory != (int *)0x0) {
          nNumberOfBytesToRead = _Size - 0x68;
          if (0 < (int)nNumberOfBytesToRead) {
            local_78 = 0;
            BVar1 = ReadFile(param_1,_Memory + 0x1a,nNumberOfBytesToRead,&local_78,(LPOVERLAPPED)0x0
                            );
            if (BVar1 == 0) {
              if (nNumberOfBytesToRead == local_78) goto LAB_00479e2f;
            }
            else if (nNumberOfBytesToRead == local_78) goto LAB_00479dfa;
            *local_74 = 1;
LAB_00479e2f:
            _free(_Memory);
            _free(lpBuffer);
            __security_check_cookie(local_4 ^ (uint)&local_78);
            return;
          }
LAB_00479dfa:
          piVar3 = local_70;
          piVar4 = _Memory;
          for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar4 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          }
          lpBuffer[5] = (int)_Memory;
LAB_00479e0a:
          __security_check_cookie(local_4 ^ (uint)&local_78);
          return;
        }
      }
    }
  }
LAB_00479e77:
  _free(lpBuffer);
LAB_00479e80:
  __security_check_cookie(local_4 ^ (uint)&local_78);
  return;
}



// ==== 0047a070 FUN_0047a070 ====
// why: calls WriteFile

BOOL FUN_0047a070(void)

{
  uint *puVar1;
  BOOL BVar2;
  LPCVOID unaff_ESI;
  HANDLE unaff_EDI;
  DWORD local_4;
  
  local_4 = 0;
  BVar2 = WriteFile(unaff_EDI,unaff_ESI,0x58,&local_4,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0;
  }
  if (*(int *)((int)unaff_ESI + 0x14) != 0) {
    puVar1 = (uint *)(*(int *)((int)unaff_ESI + 0x14) + 8);
    *puVar1 = *puVar1 & 0x3fffffff;
    if (*(int *)((int)unaff_ESI + 0x14) == 0) {
      BVar2 = WriteFile(unaff_EDI,(LPCVOID)0x0,0,&local_4,(LPOVERLAPPED)0x0);
      return BVar2;
    }
    BVar2 = WriteFile(unaff_EDI,*(LPCVOID *)((int)unaff_ESI + 0x14),
                      *(int *)(*(int *)((int)unaff_ESI + 0x14) + 0x58) * 0xc + 0x68,&local_4,
                      (LPOVERLAPPED)0x0);
    return BVar2;
  }
  return 1;
}



// ==== 0047a2c0 FUN_0047a2c0 ====
// why: string: Error Value: GaoshouKey[%d][%d]=0x%x

void __fastcall FUN_0047a2c0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int in_EAX;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *_Dst;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  char *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (((param_1 != 0) && (in_EAX != 0)) && (iVar3 = *(int *)(in_EAX + 0x24), iVar3 != 0)) {
    _memset((void *)(param_1 + 0x38),0,0x2400);
    *(undefined4 *)(param_1 + 0x34) = 0;
    _memcpy((void *)(param_1 + 0x38),(void *)(iVar3 + 0x18),0x2400);
    *(undefined4 *)(param_1 + 0x30) = 0xf;
    _Dst = (uint *)(param_1 + 0x243c);
    _memset(_Dst,0,0xfc0);
    pbVar9 = (byte *)(iVar3 + 0x2fa3);
    pbVar8 = (byte *)(param_1 + 0x2f88);
    puVar6 = (undefined4 *)(param_1 + 0x2f90);
    puVar4 = (undefined4 *)(iVar3 + 0x2fe0);
    local_8 = 0x18;
    do {
      pbVar8[1] = pbVar9[-1];
      *pbVar8 = *pbVar9 >> 4;
      bVar1 = *pbVar9;
      pbVar8[3] = 0;
      pbVar8[2] = (bVar1 & 0xf) == 7;
      puVar6[-1] = puVar4[-1];
      *puVar6 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = puVar4[2];
      puVar6[3] = puVar4[3];
      puVar6[4] = puVar4[4];
      puVar6[5] = puVar4[5];
      pbVar9 = pbVar9 + 2;
      pbVar8 = pbVar8 + 0x24;
      puVar4 = puVar4 + 10;
      puVar6 = puVar6 + 9;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    *_Dst = (uint)*(byte *)(iVar3 + 0x2ebb);
    puVar6 = (undefined4 *)(iVar3 + 0x2fdc);
    puVar5 = (undefined1 *)(param_1 + 0x3348);
    iVar10 = 5;
    do {
      puVar5[1] = *(char *)(iVar3 + 0x2e3c) + -1;
      *puVar5 = 4;
      puVar5[2] = 1;
      *(undefined4 *)(puVar5 + 4) = *puVar6;
      puVar6 = puVar6 + 10;
      puVar5 = puVar5 + 0x24;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *(uint *)(param_1 + 0x3344) = (uint)*(byte *)(iVar3 + 0x2d80);
    *(undefined4 *)(param_1 + 0x3334) = 1;
    *(undefined4 *)(param_1 + 0x3338) = 0x7f;
    *(ushort *)(param_1 + 0x3340) = (ushort)((uint)*(undefined4 *)(iVar3 + 0x2d40) >> 8) & 0xff;
    *(ushort *)(param_1 + 0x3342) = (ushort)*(byte *)(iVar3 + 0x2d59);
    *(ushort *)(param_1 + 0x333e) = *(byte *)(iVar3 + 0x2da5) - 2;
    iVar10 = 0;
    if (*(byte *)(iVar3 + 0x2da5) != 0) {
      piVar7 = (int *)(iVar3 + 0x2dac);
      do {
        if (*(int *)(iVar3 + 0x2da8) == *piVar7) {
          *(short *)(param_1 + 0x333e) = (short)iVar10;
          break;
        }
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar10 < (int)(uint)*(byte *)(iVar3 + 0x2da5));
    }
    *(undefined4 *)(param_1 + 0x2440) = 0;
    local_c = 0;
    if (*(char *)(iVar3 + 0x2f8c) != '\0') {
      local_10 = (char *)(iVar3 + 0x2ebd);
      local_8 = 3;
      do {
        *(uint *)(param_1 + 0x2444) = *(uint *)(param_1 + 0x2444) | 1 << ((byte)local_c & 0x1f);
        if (*local_10 == '\0') {
          return;
        }
        iVar10 = 0;
        do {
          cVar2 = local_10[iVar10];
          if (cVar2 == '\0') break;
          local_4 = -1;
          FUN_00467a60(&local_4);
          if (local_4 == -1) {
            (*DAT_0065d3e0)(L"Error Value: GaoshouKey[%d][%d]=0x%x",local_c,iVar10,cVar2);
          }
          else {
            _Dst[local_8 + local_4] = *(uint *)(iVar3 + 0x2f88);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x90);
        local_10 = local_10 + 0x28;
        local_8 = local_8 + 0x90;
        local_c = local_c + 1;
      } while (local_c < (int)(uint)*(byte *)(iVar3 + 0x2f8c));
    }
  }
  return;
}



// ==== 0047aa60 FUN_0047aa60 ====
// why: calls ReadFile

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0047aa60(LPCWSTR param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  int unaff_EBX;
  DWORD local_3408;
  undefined4 local_3404;
  undefined1 local_3400 [13308];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_3408;
  if (param_1 == (LPCWSTR)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_3408);
    return;
  }
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"Open pro file err=%d",DVar1);
  }
  else {
    FUN_0044e280();
    local_3408 = 0;
    local_3404 = 0;
    DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DVar1 != 0) {
      BVar2 = ReadFile(hFile,&local_3404,4,&local_3408,(LPOVERLAPPED)0x0);
      if ((BVar2 != 0) && (local_3408 == 4)) {
        local_3408 = 0;
        iVar3 = ReadFile(hFile,local_3400,0x33fc,&local_3408,(LPOVERLAPPED)0x0);
        while (iVar3 != 0) {
          if (local_3408 != 0x33fc) goto LAB_0047ab84;
          FUN_0047a990(unaff_EBX);
          local_3408 = 0;
          iVar3 = ReadFile(hFile,local_3400,0x33fc,&local_3408,(LPOVERLAPPED)0x0);
        }
        DVar1 = GetLastError();
        (*DAT_0065d3e0)(L"Load pro: ReadFile err=%d",DVar1);
LAB_0047ab84:
        iVar3 = FUN_0047a9e0();
        if (iVar3 == 0) {
          iVar3 = FUN_0047aa30();
        }
        *(int *)(unaff_EBX + 4) = iVar3;
        CloseHandle(hFile);
        goto LAB_0047abc8;
      }
      DVar1 = GetLastError();
      (*DAT_0065d3e0)(L"Load pro: ReadFile err=%d",DVar1);
    }
    CloseHandle(hFile);
  }
LAB_0047abc8:
  __security_check_cookie(local_4 ^ (uint)&local_3408);
  return;
}



// ==== 0047abf0 FUN_0047abf0 ====
// why: calls WriteFile

undefined4 __fastcall FUN_0047abf0(int param_1)

{
  undefined4 *puVar1;
  LPCVOID lpBuffer;
  LPCWSTR in_EAX;
  HANDLE hFile;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 local_8;
  DWORD local_4;
  
  if (in_EAX == (LPCWSTR)0x0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    hFile = CreateFileW(in_EAX,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      DVar2 = GetLastError();
      (*DAT_0065d3e0)(L"Save pro: CreateFile err=%d",DVar2);
      return 0;
    }
    local_4 = 0;
    if (*(int *)(param_1 + 4) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
    }
    BVar3 = WriteFile(hFile,&local_8,4,&local_4,(LPOVERLAPPED)0x0);
    if (BVar3 != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x18);
      while( true ) {
        if (puVar1 == (undefined4 *)0x0) {
          CloseHandle(hFile);
          return 1;
        }
        lpBuffer = (LPCVOID)*puVar1;
        if (((lpBuffer != (LPCVOID)0x0) && (*(int *)((int)lpBuffer + 4) != 0)) &&
           (BVar3 = WriteFile(hFile,lpBuffer,0x33fc,&local_4,(LPOVERLAPPED)0x0), BVar3 == 0)) break;
        puVar1 = (undefined4 *)puVar1[1];
      }
    }
    DVar2 = GetLastError();
    (*DAT_0065d3e0)(L"Save pro: WriteFile err=%d",DVar2);
    return 0;
  }
  return 1;
}



// ==== 0047ad80 FUN_0047ad80 ====
// why: calls ReadFile

void FUN_0047ad80(void)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_210;
  __snwprintf_s(local_20c,0x104,0x103,L"%sgSetting.dct",&DAT_0065cfa8);
  hFile = CreateFileW(local_20c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"open gsetting file err=%d",DVar1);
    FUN_0047acf0();
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  local_210 = 0;
  BVar2 = ReadFile(hFile,&DAT_0066f9a8,0x5c,&local_210,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (local_210 != 0x5c)) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"load gsetting: ReadFile err=%d",DVar1);
    FUN_0047acf0();
  }
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}



// ==== 0047ae80 FUN_0047ae80 ====
// why: calls WriteFile

void FUN_0047ae80(void)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_210;
  __snwprintf_s(local_20c,0x104,0x103,L"%sgSetting.dct",&DAT_0065cfa8);
  hFile = CreateFileW(local_20c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"save gsetting: CreateFile err=%d",DVar1);
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  local_210 = 0;
  BVar2 = WriteFile(hFile,&DAT_0066f9a8,0x5c,&local_210,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"save gsetting: WriteFile err=%d",DVar1);
  }
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}



// ==== 0047af60 FUN_0047af60 ====
// why: calls ReadFile

void FUN_0047af60(void)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_210;
  if (DAT_006581e0 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  __snwprintf_s(local_20c,0x104,0x103,L"%sRegister.dct",&DAT_0065cfa8);
  hFile = CreateFileW(local_20c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"open register file err=%d",DVar1);
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  local_210 = 0;
  BVar2 = ReadFile(hFile,&DAT_0066fa08,0x58,&local_210,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (local_210 != 0x58)) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"load register: ReadFile err=%d",DVar1);
  }
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}



// ==== 0047b070 FUN_0047b070 ====
// why: calls WriteFile

void FUN_0047b070(void)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_210;
  if (DAT_006581e0 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  __snwprintf_s(local_20c,0x104,0x103,L"%sRegister.dct",&DAT_0065cfa8);
  hFile = CreateFileW(local_20c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"save gsetting: CreateFile err=%d",DVar1);
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  local_210 = 0;
  BVar2 = WriteFile(hFile,&DAT_0066fa08,0x58,&local_210,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"save register: WriteFile err=%d",DVar1);
  }
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}



// ==== 0047dbb0 FUN_0047dbb0 ====
// why: string: CTipsDlg

undefined ** FUN_0047dbb0(void)

{
  return &PTR_s_CTipsDlg_0061dd98;
}



// ==== 00493260 FUN_00493260 ====
// why: calls ReadFile; string: ServiceThread ReadFile Err=%d; string: ServiceThread_3632 Exit; string: ServiceThread_3632 Start...

void FUN_00493260(int param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD DStack_64;
  _OVERLAPPED _Stack_60;
  HANDLE pvStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&DStack_64;
  (*DAT_0065d3e0)(L"ServiceThread_3632 Start...");
  _Stack_60.Internal = 0;
  _Stack_60.InternalHigh = 0;
  _Stack_60.u.s.Offset = 0;
  _Stack_60.u.s.OffsetHigh = 0;
  _Stack_60.hEvent = *(HANDLE *)(param_1 + 0x298);
  uStack_48 = *(undefined4 *)(param_1 + 0x29c);
  pvStack_4c = _Stack_60.hEvent;
  do {
    while( true ) {
      while( true ) {
        while (hFile = *(HANDLE *)(param_1 + 0xc), hFile == (HANDLE)0x0) {
          Sleep(200);
        }
        _memset(auStack_44,0,0x40);
        auStack_44[0] = 0x13;
        BVar1 = ReadFile(hFile,auStack_44,0x14,&DStack_64,&_Stack_60);
        if (BVar1 == 0) break;
        FUN_004933f0();
      }
      DVar2 = GetLastError();
      if (DVar2 != 0x3e5) break;
      DVar2 = WaitForMultipleObjects(2,&pvStack_4c,0,0xffffffff);
      if (DVar2 == 0) {
        FUN_004933f0();
      }
      else {
        if (DVar2 == 1) {
          (*DAT_0065d3e0)(L"hObject[1] is signal");
          BVar1 = CancelIo(*(HANDLE *)(param_1 + 0xc));
          if (BVar1 != 0) {
            GetOverlappedResult(*(HANDLE *)(param_1 + 0xc),&_Stack_60,&DStack_64,1);
          }
          goto LAB_004933c3;
        }
        if (DVar2 == 0xffffffff) {
          (*DAT_0065d3e0)(L"WaitForMultipleObjects failed. err=%d",0x3e5);
        }
      }
    }
    (*DAT_0065d3e0)(L"ServiceThread ReadFile Err=%d",DVar2);
    if (DVar2 == 0x48f) {
      auStack_44[0] = 0xff;
      FUN_004933f0();
      break;
    }
  } while (DVar2 != 6);
LAB_004933c3:
  (*DAT_0065d3e0)(L"ServiceThread_3632 Exit");
  __security_check_cookie(local_4 ^ (uint)&DStack_64);
  return;
}



// ==== 00493650 FUN_00493650 ====
// why: string: CDev3632::ClearHandle

void __fastcall FUN_00493650(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005d74d8;
  local_c = ExceptionList;
  uVar1 = DAT_0064f674 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = CDev3632::vftable;
  local_4 = 0;
  FUN_00493760(uVar1);
  (*DAT_0065d3e0)(L"CDev3632::ClearHandle");
  if ((HANDLE)param_1[3] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[3]);
    param_1[3] = 0;
  }
  local_4 = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *param_1 = CHidDev::vftable;
  FUN_0046afa0();
  ExceptionList = local_c;
  return;
}



// ==== 00493820 FUN_00493820 ====
// why: string: CDev3632::ClearHandle

void __fastcall FUN_00493820(int param_1)

{
  (*DAT_0065d3e0)(L"CDev3632::ClearHandle");
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x2c) = 0;
  return;
}



// ==== 00493860 FUN_00493860 ====
// why: string: CDev3632::FindHIDDevice for %s

undefined4 __fastcall FUN_00493860(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (*DAT_0065d3e0)(L"CDev3632::FindHIDDevice for %s",*(int *)(param_1 + 0x10) + 0x28);
  }
  return 0;
}



// ==== 00493880 FUN_00493880 ====
// why: calls HidD_GetAttributes

undefined4 __fastcall FUN_00493880(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c [8];
  ushort local_4;
  
  cVar1 = HidD_GetAttributes(param_1[3],local_c);
  if (cVar1 != '\0') {
    param_1[6] = (uint)local_4;
    (*DAT_0065d3e0)(L"FW Version=0x%x",(uint)local_4);
  }
  if ((*(int *)(param_1[4] + 0x24) != 0) &&
     (*(char *)(*(int *)(param_1[4] + 0x24) + 0x2d3a) != '\0')) {
    Sleep(0x14);
    puVar3 = &uStack_d;
    uStack_e = 0;
    uStack_d = 0;
    iVar2 = (**(code **)(*param_1 + 0x20))(&uStack_e);
    if (iVar2 != 0) {
      *(uint *)(param_1[4] + 0x304) = (uint)puVar3 >> 0x10 & 0xff;
      *(uint *)(param_1[4] + 0x308) = (uint)puVar3 >> 0x18;
    }
  }
  return 1;
}



// ==== 00493920 FUN_00493920 ====
// why: string: !! CDev3632::AccessData: %s err, cmd=0x%x, package=%d; string: !! CDev3632::AccessData: package index err, cmd=0x%x, send=0x%x, in=0x%x; string: !! CDev3632::AccessData: read err, cmd=0x%x, nRet=%d, package=%d; string: !! CDev3632::AccessData: send package %d err=0x%x; string: CDev3632::AccessData Online=0, cmd=0x%x, package=%d, no more retry, return; string: CDev3632::AccessData Online=0, cmd=0x%x, package=%d, return; string: CDev3632::AccessData param err, m_hDev=%x, nBytesToWrite=%d; string: CDev3632::AccessData: abort by user, cmd=0x%x

void __thiscall
FUN_00493920(int param_1,wchar_t *param_2,char param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  char cVar1;
  wchar_t *pwVar2;
  DWORD DVar3;
  wchar_t *pwVar4;
  int iVar5;
  char cVar6;
  wchar_t *pwVar7;
  undefined1 auStack_34 [2];
  char local_32;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  size_t local_24;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_34;
  if ((*(int *)(param_1 + 0xc) == 0) || (param_5 < 1)) {
    (*DAT_0065d3e0)(L"CDev3632::AccessData param err, m_hDev=%x, nBytesToWrite=%d",
                    *(int *)(param_1 + 0xc),param_5);
    __security_check_cookie(local_4 ^ (uint)auStack_34);
    return;
  }
  local_28 = param_5 / 0xe;
  local_2c = 0;
  if (param_5 % 0xe != 0) {
    local_28 = local_28 + 1;
  }
  iVar5 = 0;
  if (param_5 < 1) {
LAB_00493c21:
    __security_check_cookie(local_4 ^ (uint)auStack_34);
    return;
  }
  while( true ) {
    local_24 = 0xe;
    if (param_5 - local_2c < 0xe) {
      local_24 = param_5 - local_2c;
    }
    local_20 = 0;
    while( true ) {
      FUN_004051e0(param_7);
      if (*(int *)(param_1 + 0xc) == 0) goto LAB_00493b3a;
      local_18 = ((uint)param_2 & 0xff) << 8;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_18 = CONCAT13((char)iVar5,(undefined3)local_18);
      local_30 = iVar5 + 1;
      local_18 = CONCAT31(local_18._1_3_,0x13);
      local_18._0_3_ = CONCAT12((undefined1)local_28,(undefined2)local_18);
      local_18 = CONCAT13((char)iVar5,(undefined3)local_18);
      local_14 = (uint)(byte)(param_3 << 4 | (byte)local_24);
      if (param_4 != 0) {
        _memcpy((void *)((int)&local_14 + 1),(void *)(local_2c + param_4),local_24);
      }
      iVar5 = 0;
      cVar6 = '\0';
      local_32 = '\0';
      local_31 = '\0';
      cVar1 = '\0';
      do {
        local_32 = local_32 + *(char *)((int)&local_18 + iVar5 + 2);
        cVar6 = cVar6 + *(char *)((int)&local_18 + iVar5);
        cVar1 = cVar1 + *(char *)((int)&local_18 + iVar5 + 1);
        local_31 = local_31 + *(char *)((int)&local_18 + iVar5 + 3);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x14);
      local_8 = CONCAT13(cVar1 + local_32 + local_31 + cVar6,(undefined3)local_8);
      if (*(int *)(param_1 + 0x238) == 0) {
        (*DAT_0065d3e0)(L"CDev3632::AccessData Online=0, cmd=0x%x, package=%d, return",param_2,
                        local_30 + -1);
        goto LAB_00493b3a;
      }
      FUN_00470c90();
      *(undefined4 *)(param_1 + 0x24c) = 0;
      *(undefined4 *)(param_1 + 0x250) = 0;
      *(undefined4 *)(param_1 + 0x254) = 0;
      if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
        ResetEvent(*(HANDLE *)(param_1 + 600));
      }
      (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
      iVar5 = FUN_004947b0(&local_18,500);
      if (iVar5 == 0) {
        DVar3 = GetLastError();
        (*DAT_0065d3e0)(L"!! CDev3632::AccessData: send package %d err=0x%x",local_30 + -1,DVar3);
        goto LAB_00493b3a;
      }
      if (((char)param_2 < '\0') || (param_2 == (wchar_t *)0x6)) goto LAB_00493ba0;
      iStack_1c = -1;
      pwVar2 = (wchar_t *)
               FUN_00493490(param_2,(-(uint)(*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x24) +
                                                      0x2d8d) != '\0') & 5000) + 2000,&local_18,
                            &iStack_1c);
      if (*(int *)(param_1 + 0x284) != 0) {
        (*DAT_0065d3e0)(L"CDev3632::AccessData: abort by user, cmd=0x%x",param_2);
        goto LAB_00493c21;
      }
      pwVar4 = param_2;
      if (pwVar2 == (wchar_t *)0x0) break;
      if (pwVar2 == (wchar_t *)0xfffffffe) {
        if (*(int *)(param_1 + 0x238) == 0) {
          (*DAT_0065d3e0)(L"CDev3632::AccessData Online=0, cmd=0x%x, package=%d, no more retry, return"
                          ,param_2,local_30 + -1);
          goto LAB_00493b3a;
        }
      }
      else if (pwVar2 != (wchar_t *)0xfffffffd) {
        pwVar7 = L"!! CDev3632::AccessData: read err, cmd=0x%x, nRet=%d, package=%d";
        iVar5 = local_30 + -1;
        goto LAB_00493b2f;
      }
      if ((param_6 == 0) || (4 < local_20)) {
        pwVar4 = L"timeout";
        if (pwVar2 != (wchar_t *)0xfffffffe) {
          pwVar4 = L"crc";
        }
        pwVar7 = L"!! CDev3632::AccessData: %s err, cmd=0x%x, package=%d";
        pwVar2 = param_2;
        iVar5 = local_30 + -1;
        goto LAB_00493b2f;
      }
      local_20 = local_20 + 1;
      iVar5 = local_30 + -1;
    }
    if (iStack_1c != local_30 + -1) break;
LAB_00493ba0:
    local_2c = local_2c + local_24;
    iVar5 = local_30;
    if (param_5 <= local_2c) {
      __security_check_cookie(local_4 ^ (uint)auStack_34);
      return;
    }
  }
  pwVar2 = (wchar_t *)(local_30 + -1);
  pwVar7 = L"!! CDev3632::AccessData: package index err, cmd=0x%x, send=0x%x, in=0x%x";
  iVar5 = iStack_1c;
LAB_00493b2f:
  (*DAT_0065d3e0)(pwVar7,pwVar4,pwVar2,iVar5);
LAB_00493b3a:
  __security_check_cookie(local_4 ^ (uint)auStack_34);
  return;
}



// ==== 00493cb0 FUN_00493cb0 ====
// why: string: !!CDev3632::SendCMD: read err, hDev=%x, cmd=0x%x, inx=%d; string: !!CDev3632::SendCMD: send err=0x%x, cmd=0x%x; string: !!CDev3632::SendCMD: timeout, hDev=%x, cmd=0x%x, inx=%d; string: CDev3632::SendCMD Online=0, cmd=0x%x, inx=%d, no more retry, return; string: CDev3632::SendCMD Online=0, cmd=0x%x, return; string: CDev3632::SendCMD: abort by user, cmd=0x%x; string: CDrv3632::SendCMD ignore index(%d) for cmd(0x%x)

void FUN_00493cb0(int param_1,int param_2,char param_3,int param_4,size_t param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint _Size;
  DWORD DVar4;
  byte bVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [3];
  byte bStack_f5;
  int iStack_f4;
  int iStack_f0;
  int local_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  byte bStack_de;
  byte bStack_dd;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  byte abStack_cc [200];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_f8;
  local_ec = param_4;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x238) != 0) {
      FUN_00470c90();
      *(undefined4 *)(param_1 + 0x24c) = 0;
      *(undefined4 *)(param_1 + 0x250) = 0;
      *(undefined4 *)(param_1 + 0x254) = 0;
      if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
        ResetEvent(*(HANDLE *)(param_1 + 600));
      }
      (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
      bStack_f5 = param_3 << 4;
      iStack_f0 = 0;
LAB_00493d51:
      do {
        uStack_dc = (uint)bStack_f5;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cf = 0;
        uStack_cd = 0;
        uStack_e0 = 0x13;
        uStack_df = (undefined1)param_2;
        bStack_de = 1;
        bStack_dd = 0;
        uStack_cd = FUN_004945f0();
        iVar1 = FUN_004947b0(&uStack_e0,500);
        if (iVar1 == 0) goto LAB_00493f6c;
        if (param_2 == 6) goto LAB_00493f19;
        iStack_e8 = 0;
        _memset(abStack_cc,0xff,200);
        iVar1 = 0;
        iStack_f4 = 0;
LAB_00493de3:
        do {
          uStack_e0 = 0;
          uStack_df = 0;
          bStack_de = 0;
          bStack_dd = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cf = 0;
          uStack_cd = 0;
          uStack_e4 = 0xffffffff;
          iVar2 = FUN_00493490(param_2,(-(uint)(*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x24)
                                                         + 0x2d8d) != '\0') & 3000) + 2000,
                               &uStack_e0,&uStack_e4);
          if (*(int *)(param_1 + 0x284) != 0) {
            (*DAT_0065d3e0)(L"CDev3632::SendCMD: abort by user, cmd=0x%x",param_2);
            goto LAB_00493f19;
          }
          if (iVar2 != 0) {
            if (iVar2 == -2) {
              if (*(int *)(param_1 + 0x238) == 0) {
                (*DAT_0065d3e0)(L"CDev3632::SendCMD Online=0, cmd=0x%x, inx=%d, no more retry, return"
                                ,param_2,bStack_dd);
                goto LAB_00493f19;
              }
              if (iStack_f0 < 5) {
                iStack_f0 = iStack_f0 + 1;
                goto LAB_00493d51;
              }
              uVar7 = *(undefined4 *)(param_1 + 0xc);
              pwVar6 = L"!!CDev3632::SendCMD: timeout, hDev=%x, cmd=0x%x, inx=%d";
            }
            else {
              if (iVar2 != -4) goto LAB_00493de3;
              uVar7 = *(undefined4 *)(param_1 + 0xc);
              pwVar6 = L"!!CDev3632::SendCMD: read err, hDev=%x, cmd=0x%x, inx=%d";
            }
            (*DAT_0065d3e0)(pwVar6,uVar7,param_2,bStack_dd);
            goto LAB_00493f19;
          }
          if (local_ec == 0) goto LAB_00493f19;
          iVar2 = 0;
          if (0 < iVar1) {
            do {
              if (abStack_cc[iVar2] == bStack_dd) {
                (*DAT_0065d3e0)(L"CDrv3632::SendCMD ignore index(%d) for cmd(0x%x)",bStack_dd,
                                param_2);
                goto LAB_00493de3;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < iVar1);
          }
          iStack_f4 = iStack_f4 + 0xe;
          abStack_cc[iVar1] = bStack_dd;
          uVar3 = uStack_dc & 0xf;
          iVar1 = iVar1 + 1;
          bVar5 = bStack_de & 0x7f;
          _Size = param_5;
          if (((int)uVar3 <= (int)param_5) && (_Size = uVar3, 0xe < uVar3)) {
            _Size = 0xe;
          }
          iVar2 = _Size + iStack_e8;
          if (iVar2 <= (int)param_5) {
            _memcpy((void *)(local_ec + iStack_e8),(void *)((int)&uStack_dc + 1),_Size);
            iStack_e8 = iVar2;
          }
        } while ((uint)bStack_dd != bVar5 - 1);
        if (iStack_f4 == (uint)bVar5 * 0xe) goto LAB_00493f19;
        Sleep(100);
      } while( true );
    }
    (*DAT_0065d3e0)(L"CDev3632::SendCMD Online=0, cmd=0x%x, return",param_2);
  }
LAB_00493f19:
  __security_check_cookie(local_4 ^ (uint)auStack_f8);
  return;
LAB_00493f6c:
  DVar4 = GetLastError();
  (*DAT_0065d3e0)(L"!!CDev3632::SendCMD: send err=0x%x, cmd=0x%x",DVar4,param_2);
  goto LAB_00493f19;
}



// ==== 00493fd0 FUN_00493fd0 ====
// why: string: CDev3632::SetMatrix layer=%d

bool FUN_00493fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDev3632::SetMatrix layer=%d",param_1);
  iVar1 = FUN_00493920(1,param_1,param_2,param_3,1,0xf);
  return iVar1 != 0;
}



// ==== 00494010 FUN_00494010 ====
// why: string: CDev3632::GetMatrix layer=%d

void __thiscall
FUN_00494010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_0065d3e0)(L"CDev3632::GetMatrix layer=%d",param_2);
  FUN_00493cb0(param_1,0x41,param_2,param_3,param_4);
  return;
}



// ==== 004940e0 FUN_004940e0 ====
// why: string: CDev3632::SetMacro; string: SetMacro failed

undefined4 __thiscall FUN_004940e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDev3632::SetMacro");
  iVar1 = FUN_00494040(param_1,param_2);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetMacro failed");
    return 0;
  }
  return 1;
}



// ==== 00494140 FUN_00494140 ====
// why: string: CDev3632::SetLED

undefined4 FUN_00494140(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDev3632::SetLED");
  iVar1 = FUN_00493920(4,0,param_1,param_2,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetLED failed");
    return 0;
  }
  return 1;
}



// ==== 00494190 FUN_00494190 ====
// why: string: CDev3632::GetLED

void __thiscall FUN_00494190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_0065d3e0)(L"CDev3632::GetLED");
  FUN_00493cb0(param_1,0x44,0,param_2,param_3);
  return;
}



// ==== 004941c0 FUN_004941c0 ====
// why: string: CDev3632::SetOnBoard

undefined4 FUN_004941c0(void)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDev3632::SetOnBoard");
  iVar1 = FUN_00493920(10,0,&stack0x00000004,1,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetOnBoard failed");
    return 0;
  }
  return 1;
}



// ==== 00494210 FUN_00494210 ====
// why: string: CDev3632::GetOnBoard

undefined4 __thiscall FUN_00494210(uint param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  (*DAT_0065d3e0)(L"CDev3632::GetOnBoard");
  uStack_4 = uStack_4 & 0xffffff;
  iVar1 = FUN_00493cb0(param_1,0x4a,0,(int)&uStack_4 + 3,1);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"GetOnBoard failed");
    return 0;
  }
  *param_2 = uStack_4._3_1_;
  return 1;
}



// ==== 00494330 FUN_00494330 ====
// why: string: CDev3632::SetScreenParam failed

undefined4 FUN_00494330(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493920(0xb,0,param_1,param_2,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"CDev3632::SetScreenParam failed");
    return 0;
  }
  return 1;
}



// ==== 00494370 FUN_00494370 ====
// why: string: CDev3632::SendSelfData failed

undefined4 FUN_00494370(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493920(0xf,0,param_1,param_2,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"CDev3632::SendSelfData failed");
    return 0;
  }
  return 1;
}



// ==== 004943b0 FUN_004943b0 ====
// why: string: CDev3632::ReadPower  %d, %d; string: CDev3632::ReadPower failed

undefined4 __thiscall FUN_004943b0(uint param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint local_4;
  
  local_4 = param_1 & 0xffff0000;
  iVar2 = FUN_00493cb0(param_1,0x4a,0,&local_4,2);
  uVar1 = local_4;
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"CDev3632::ReadPower failed");
    return 0;
  }
  (*DAT_0065d3e0)(L"CDev3632::ReadPower  %d, %d",local_4 & 0xff,local_4 >> 8 & 0xff);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = (undefined1)local_4;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar3 = (uVar1 & 0xf000) != 0;
    if ((bVar3) && ((uVar1 & 0xf00) != 0)) {
      bVar3 = false;
    }
    *param_3 = bVar3;
  }
  return 1;
}



// ==== 00494640 FUN_00494640 ====
// why: calls ReadFile

void FUN_00494640(DWORD param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE unaff_ESI;
  undefined4 *unaff_EDI;
  DWORD local_30;
  _OVERLAPPED local_2c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_30;
  local_2c.Internal = 0;
  local_2c.InternalHigh = 0;
  local_2c.u.s.Offset = 0;
  local_2c.u.s.OffsetHigh = 0;
  local_2c.hEvent = (HANDLE)0x0;
  local_2c.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  local_30 = 0;
  local_18 = CONCAT31(local_18._1_3_,0x13);
  BVar1 = ReadFile(unaff_ESI,&local_18,0x14,&local_30,&local_2c);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForSingleObject(local_2c.hEvent,param_1);
      if (DVar2 == 0) {
        if (unaff_EDI != (undefined4 *)0x0) {
          *unaff_EDI = local_18;
          unaff_EDI[1] = local_14;
          unaff_EDI[2] = local_10;
          unaff_EDI[3] = local_c;
          unaff_EDI[4] = local_8;
        }
      }
      else if (DVar2 == 0x102) {
        BVar1 = CancelIo(unaff_ESI);
        if (BVar1 != 0) {
          GetOverlappedResult(unaff_ESI,&local_2c,&local_30,1);
        }
      }
      else {
        DVar2 = GetLastError();
        (*DAT_0065d3e0)(L"GetData_3632 Err=0x%x, hDev=%x",DVar2);
      }
    }
    else if (DVar2 == 0x48f) {
      (*DAT_0065d3e0)(L"GetData_3632 Err, dev is plugout, hDev=%x");
    }
    else {
      (*DAT_0065d3e0)(L"GetData_3632 Err=0x%x, hDev=%x",DVar2);
    }
  }
  else if (unaff_EDI != (undefined4 *)0x0) {
    *unaff_EDI = local_18;
    unaff_EDI[1] = local_14;
    unaff_EDI[2] = local_10;
    unaff_EDI[3] = local_c;
    unaff_EDI[4] = local_8;
  }
  CloseHandle(local_2c.hEvent);
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}



// ==== 004947b0 FUN_004947b0 ====
// why: calls WriteFile

undefined4 FUN_004947b0(LPCVOID param_1,DWORD param_2)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 uVar4;
  HANDLE unaff_ESI;
  int iVar5;
  DWORD local_18;
  _OVERLAPPED local_14;
  
  local_14.Internal = 0;
  local_14.InternalHigh = 0;
  local_14.u.s.Offset = 0;
  local_14.u.s.OffsetHigh = 0;
  local_14.hEvent = (HANDLE)0x0;
  local_14.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  iVar5 = 0;
  local_18 = 0;
  iVar1 = WriteFile(unaff_ESI,param_1,0x14,&local_18,&local_14);
  do {
    if (iVar1 != 0) {
LAB_0049488f:
      uVar4 = 1;
LAB_00494894:
      if (local_14.hEvent != (HANDLE)0x0) {
        CloseHandle(local_14.hEvent);
      }
      return uVar4;
    }
    uVar4 = 0;
    DVar2 = GetLastError();
    if (DVar2 != 0x3e5) {
      (*DAT_0065d3e0)(L"SendData_3632 Err=0x%x",DVar2);
      goto LAB_00494894;
    }
    DVar2 = param_2;
    if ((int)param_2 < 1) {
      DVar2 = 0xffffffff;
    }
    DVar2 = WaitForSingleObject(local_14.hEvent,DVar2);
    if (DVar2 != 0x102) {
      if (DVar2 != 0) goto LAB_00494894;
      GetOverlappedResult(unaff_ESI,&local_14,&local_18,0);
      goto LAB_0049488f;
    }
    BVar3 = CancelIo(unaff_ESI);
    if (BVar3 != 0) {
      GetOverlappedResult(unaff_ESI,&local_14,&local_18,1);
    }
    (*DAT_0065d3e0)(L"SendData_3632 TimeOut");
    if (2 < iVar5) goto LAB_00494894;
    FUN_004051e0(10);
    iVar5 = iVar5 + 1;
    local_18 = 0;
    iVar1 = WriteFile(unaff_ESI,param_1,0x14,&local_18,&local_14);
  } while( true );
}



// ==== 004948e0 FUN_004948e0 ====
// why: string: !! SendCMD_3632: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d; string: !! SendCMD_3632: send err=0x%x, cmd=0x%x; string: !! SendCMD_3632: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d; string: SendCMD_3632: CRC check err for cmd=0x%x, redo it; string: SendCMD_3632: cmd unmatch for cmd=0x%x, nRetCmd=0x%x, package_index=%d, reread it; string: SendCMD_3632: read length unmatch, cmd=0x%x, recvBytes=%d, nSize=%d

void __thiscall
FUN_004948e0(int param_1,undefined1 param_2,uint param_3,int param_4,uint param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  uint uVar5;
  uint _Size;
  wchar_t *pwVar6;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  undefined2 local_7;
  undefined1 local_5;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_34;
  local_1c = param_4;
  local_30 = param_1;
  if ((param_1 == 0) || (param_4 == 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  local_28 = param_7;
  local_20 = 5;
LAB_00494920:
  do {
    bStack_15 = 0;
    local_18 = param_2;
    _Size = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    local_7 = 0;
    local_5 = 0;
    bStack_17 = (byte)param_3;
    bStack_16 = 1;
    uStack_14 = 0;
    local_5 = FUN_004945f0();
    iVar1 = FUN_004947b0(&local_18,1000);
    if (iVar1 == 0) {
      DVar4 = GetLastError();
      (*DAT_0065d3e0)(L"!! SendCMD_3632: send err=0x%x, cmd=0x%x",DVar4,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_34);
      return;
    }
    local_24 = 0x14;
    local_2c = 0;
    uVar5 = 0;
    local_34 = 0;
    do {
      while( true ) {
        while( true ) {
          iVar1 = local_30;
          local_18 = 0;
          bStack_17 = 0;
          bStack_16 = 0;
          bStack_15 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_c = 0;
          uStack_8 = 0;
          local_7 = 0;
          local_5 = 0;
          iVar2 = FUN_00494640(1000);
          if (iVar2 == 0) break;
          if (iVar2 == -2) {
            local_28 = local_28 + -1;
            if (local_28 < 1) {
              if (param_6 != 0) {
                (*DAT_0065d3e0)(L"!! SendCMD_3632: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d"
                                ,iVar1,param_3,uVar5,local_34,_Size);
              }
              __security_check_cookie(local_4 ^ (uint)&local_34);
              return;
            }
            goto LAB_00494920;
          }
          if (iVar2 == -3) {
            (*DAT_0065d3e0)(L"!! SendCMD_3632: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d"
                            ,iVar1,param_3,uVar5,local_34,_Size);
            __security_check_cookie(local_4 ^ (uint)&local_34);
            return;
          }
        }
        local_34 = (uint)bStack_15;
        uVar3 = bStack_17 & 0x7f;
        uVar5 = bStack_16 & 0x7f;
        if ((param_3 & 0xff) == uVar3) break;
        local_24 = local_24 + -1;
        if (local_24 < 1) {
          pwVar6 = 
          L"SendCMD_3632: cmd unmatch for cmd=0x%x, nRetCmd=0x%x, package_index=%d, reread it";
          param_5 = local_34;
          goto LAB_00494a01;
        }
      }
      if ((char)bStack_17 < '\0') {
        (*DAT_0065d3e0)(L"SendCMD_3632: CRC check err for cmd=0x%x, redo it",param_3);
        goto LAB_00494920;
      }
      uVar3 = uStack_14 & 0xf;
      _Size = param_5;
      if (((int)uVar3 <= (int)param_5) && (_Size = uVar3, 0xe < uVar3)) {
        _Size = 0xe;
      }
      uVar3 = local_2c + _Size;
      if ((int)uVar3 <= (int)param_5) {
        _memcpy((void *)(local_1c + local_2c),(void *)((int)&uStack_14 + 1),_Size);
      }
      local_2c = uVar3;
    } while (uVar5 != local_34 + 1);
    if ((int)param_5 <= (int)uVar3) {
      __security_check_cookie(local_4 ^ (uint)&local_34);
      return;
    }
    local_20 = local_20 + -1;
    if (local_20 < 1) {
      pwVar6 = L"SendCMD_3632: read length unmatch, cmd=0x%x, recvBytes=%d, nSize=%d";
LAB_00494a01:
      (*DAT_0065d3e0)(pwVar6,param_3,uVar3,param_5);
      __security_check_cookie(local_4 ^ (uint)&local_34);
      return;
    }
  } while( true );
}



// ==== 00494c40 FUN_00494c40 ====
// why: string: CDev3632::ApplySetting: hWnd=%x, nFlag=%x, bBT=%x

void __thiscall
FUN_00494c40(int *param_1,int param_2,HWND param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  uint uVar2;
  BOOL BVar3;
  int local_2c4 [144];
  int *piStack_84;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005d7b1b;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)local_2c4;
  uVar2 = DAT_0064f674 ^ (uint)&stack0xfffffd30;
  ExceptionList = &local_14;
  local_2c4[0] = param_2;
  if (((param_2 != 0) && (*(int *)(param_2 + 4) != 0)) && (param_1[4] != 0)) {
    BVar3 = IsWindow(param_3);
    if (BVar3 == 0) {
      param_3 = (HWND)0x0;
    }
    (*DAT_0065d3e0)(L"CDev3632::ApplySetting: hWnd=%x, nFlag=%x, bBT=%x",param_3,param_5,param_6,
                    *(undefined4 *)(param_1[4] + 0x30c),uVar2);
    pcVar1 = *(code **)(*param_1 + 0x90);
    param_1[0xa0] = (int)param_3;
    (*pcVar1)();
    if (param_1[0x8e] == 0) {
      FUN_00448e50(param_1[2]);
    }
    else {
      param_1[7] = 1;
      Sleep(200);
      FUN_00498960(param_1[4]);
      uStack_c = 0;
      piStack_84 = param_1;
      FUN_0049bad0(local_2c4[0],param_3,param_4,param_5,param_6);
      Sleep(0x32);
      (**(code **)(*param_1 + 0x90))();
      param_1[7] = 0;
      uStack_c = 0xffffffff;
      FUN_00498a00();
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)local_2c4);
  return;
}



// ==== 00494ef0 FUN_00494ef0 ====
// why: caller depth 2 of FUN_00495380; string: CDev916KB::FindHIDDevice for %s, hDev=%x, hCmd=%x, hMusic=%x, bMedia=%d, id=%04x_%...; string: Psd unmatch: gVar.nPsd=%x,%x,%x,%x,%x,%x, nDevPsd=%x,%x,%x,%x,%x,%x

void __fastcall FUN_00494ef0(int *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  HANDLE hObject;
  int *piVar4;
  char *pcVar5;
  HANDLE local_20;
  HANDLE local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  char local_c [8];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_20;
  puVar1 = (ushort *)param_1[4];
  local_c[0] = (char)puVar1;
  local_c[1] = (char)((uint)puVar1 >> 8);
  local_c[2] = (char)((uint)puVar1 >> 0x10);
  local_c[3] = (char)((uint)puVar1 >> 0x18);
  if (puVar1 == (ushort *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_20);
    return;
  }
  local_14 = (uint)*puVar1;
  local_10 = (uint)puVar1[1];
  local_20 = (HANDLE)0x0;
  hObject = (HANDLE)0x0;
  local_1c = (HANDLE)0x0;
  local_18 = 0;
  param_1[5] = 0;
  piVar4 = &DAT_0065ea7c;
  do {
    if ((local_14 == piVar4[3]) && (local_10 == piVar4[4])) {
      if ((piVar4[1] == 0xff00) && (piVar4[2] == 1)) {
        iVar2 = *piVar4;
        if (iVar2 == 0x408) {
          hObject = CreateFileW((LPCWSTR)(piVar4 + -0x85),0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                                0x40000000,(HANDLE)0x0);
          if (hObject == (HANDLE)0xffffffff) {
            hObject = (HANDLE)0x0;
            break;
          }
        }
        else if (iVar2 == 6) {
          local_20 = CreateFileW((LPCWSTR)(piVar4 + -0x85),0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                                 0x40000000,(HANDLE)0x0);
          if (local_20 == (HANDLE)0xffffffff) {
            local_20 = (HANDLE)0x0;
            break;
          }
        }
        else if ((iVar2 == 0x17e) &&
                (local_1c = CreateFileW((LPCWSTR)(piVar4 + -0x85),0x12019f,3,
                                        (LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0),
                local_1c == (HANDLE)0xffffffff)) {
          local_1c = (HANDLE)0x0;
        }
      }
      else if ((piVar4[1] == 0xc) && (piVar4[2] == 1)) {
        local_18 = 1;
      }
    }
    piVar4 = piVar4 + 0x8b;
  } while ((int)piVar4 < 0x66983c);
  (*DAT_0065d3e0)(L"CDev916KB::FindHIDDevice for %s, hDev=%x, hCmd=%x, hMusic=%x, bMedia=%d, id=%04x_%04x"
                  ,CONCAT13(local_c[3],CONCAT12(local_c[2],CONCAT11(local_c[1],local_c[0]))) + 0x28,
                  hObject,local_20,local_1c,local_18,local_14,local_10);
  if ((hObject != (HANDLE)0x0) && (local_20 != (HANDLE)0x0)) {
    iVar2 = CONCAT13(local_c[3],CONCAT12(local_c[2],CONCAT11(local_c[1],local_c[0])));
    pcVar5 = (char *)(iVar2 + 8);
    if ((*pcVar5 != '\0') || ((*(char *)(iVar2 + 0xc) != '\0' || (*(char *)(iVar2 + 0xd) != '\0'))))
    {
      local_c[0] = '\0';
      local_c[1] = 0;
      local_c[2] = 0;
      local_c[3] = 0;
      local_c[4] = 0;
      local_c[5] = 0;
      iVar3 = FUN_00495380(local_c);
      if (iVar3 != 0) {
        iVar3 = 0;
        do {
          if ((local_c + iVar3)[(int)pcVar5 - (int)local_c] != local_c[iVar3]) {
            (*DAT_0065d3e0)(L"Psd unmatch: gVar.nPsd=%x,%x,%x,%x,%x,%x, nDevPsd=%x,%x,%x,%x,%x,%x",
                            *pcVar5,*(undefined1 *)(iVar2 + 9),*(undefined1 *)(iVar2 + 10),
                            *(undefined1 *)(iVar2 + 0xb),*(undefined1 *)(iVar2 + 0xc),
                            *(undefined1 *)(iVar2 + 0xd),local_c[0],local_c[1],local_c[2],local_c[3]
                            ,local_c[4],local_c[5]);
            goto LAB_004951c6;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 6);
      }
    }
    (**(code **)(*param_1 + 0x18))();
    param_1[0xa5] = (int)local_20;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[0xa4] = (int)hObject;
    param_1[0xa6] = (int)local_1c;
    _wcsncpy_s((wchar_t *)(param_1 + 0xb),0x104,(wchar_t *)&DAT_0065e63c,0xffffffff);
    param_1[0x8d] = 1;
    Sleep(0x1e);
    (**(code **)(*param_1 + 0x24))();
    __security_check_cookie(local_4 ^ (uint)&local_20);
    return;
  }
  if (local_18 != 0) {
    param_1[5] = 1;
  }
LAB_004951c6:
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
  }
  if (local_20 != (HANDLE)0x0) {
    CloseHandle(local_20);
  }
  if (local_1c != (HANDLE)0x0) {
    CloseHandle(local_1c);
  }
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}



// ==== 00495200 FUN_00495200 ====
// why: calls HidD_GetAttributes

undefined4 __fastcall FUN_00495200(int param_1)

{
  char cVar1;
  undefined1 local_c [8];
  ushort local_4;
  
  cVar1 = HidD_GetAttributes(*(undefined4 *)(param_1 + 0x290),local_c);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x18) = (uint)local_4;
    (*DAT_0065d3e0)(L"FW Version=0x%x",(uint)local_4);
    return 1;
  }
  (*DAT_0065d3e0)(L"GetVersionNumber failed!");
  return 1;
}



// ==== 00495260 FUN_00495260 ====
// why: caller depth 1 of HidD_SetFeature; calls HidD_SetFeature

undefined4 __fastcall
FUN_00495260(undefined1 param_1,size_t param_2,undefined4 param_3,void *param_4)

{
  char cVar1;
  DWORD DVar2;
  undefined1 *unaff_ESI;
  int iVar3;
  
  *unaff_ESI = 0;
  if (param_4 == (void *)0x0) {
    return 0;
  }
  *unaff_ESI = param_1;
  _memcpy(unaff_ESI + 1,param_4,param_2);
  iVar3 = 3;
  do {
    cVar1 = HidD_SetFeature(param_3,unaff_ESI,param_2 + 1);
    if (cVar1 != '\0') {
      return 1;
    }
    iVar3 = iVar3 + -1;
    Sleep(200);
  } while (0 < iVar3);
  DVar2 = GetLastError();
  (*DAT_0065d3e0)(L"SendCommand Err=%d",DVar2);
  return 0;
}



// ==== 004952f0 FUN_004952f0 ====
// why: caller depth 1 of HidD_GetFeature; calls HidD_GetFeature

undefined4 __fastcall
FUN_004952f0(undefined1 param_1,undefined1 *param_2,undefined4 param_3,size_t param_4)

{
  char cVar1;
  DWORD DVar2;
  void *unaff_EBX;
  int iVar3;
  
  *param_2 = 0;
  if (unaff_EBX == (void *)0x0) {
    return 0;
  }
  *param_2 = param_1;
  iVar3 = 3;
  do {
    cVar1 = HidD_GetFeature(param_3,param_2,param_4 + 1);
    if (cVar1 != '\0') {
      _memcpy(unaff_EBX,param_2 + 1,param_4);
      return 1;
    }
    iVar3 = iVar3 + -1;
    Sleep(200);
  } while (0 < iVar3);
  DVar2 = GetLastError();
  (*DAT_0065d3e0)(L"GetCommand Err=%d",DVar2);
  return 0;
}



// ==== 00495380 FUN_00495380 ====
// why: caller depth 1 of FUN_00495260; caller depth 1 of FUN_004952f0

void __thiscall FUN_00495380(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 unaff_EDI;
  char local_414;
  undefined4 local_413;
  undefined1 uStack_40f;
  undefined1 uStack_40e;
  undefined1 uStack_40d;
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_414;
  uStack_40f = 0;
  uStack_40e = 0;
  uStack_40d = 0;
  local_414 = '\x05';
  local_413 = 0x81;
  _memset(local_40b,0,0x407);
  iVar1 = FUN_00495260(unaff_EDI,&local_414);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"GetPassword: Send Err");
  }
  else {
    Sleep(*(DWORD *)(param_1 + 0x2a0));
    _memset(local_40b,0,0x407);
    iVar1 = FUN_004952f0(unaff_EDI,7);
    if (iVar1 == 0) {
      (*DAT_0065d3e0)(L"GetPassword: GET Err");
    }
    else if (local_414 == '\x01') {
      *param_2 = local_413;
      *(ushort *)(param_2 + 1) = CONCAT11(uStack_40e,uStack_40f);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_414);
  return;
}



// ==== 00495480 FUN_00495480 ====
// why: caller depth 1 of FUN_00495260

void __fastcall FUN_00495480(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_824 [4];
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 local_81e [5];
  undefined4 local_819 [256];
  undefined1 local_417 [1035];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)auStack_824;
  local_820 = 3;
  _memset(local_81e,0,0x405);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  local_81f = 0xb6;
  puVar3 = local_819;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)param_2;
  _memset(local_417,0,0x407);
  FUN_00495260(uVar1,&local_820);
  __security_check_cookie(local_c ^ (uint)auStack_824);
  return;
}



// ==== 00495520 FUN_00495520 ====
// why: caller depth 1 of FUN_00495260; caller depth 1 of FUN_004952f0

void __thiscall FUN_00495520(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_819;
  undefined1 local_818;
  undefined1 local_817;
  char local_814;
  undefined1 local_813 [6];
  undefined4 local_80d [256];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_81c;
  uVar1 = *(undefined4 *)(param_2 + 0x294);
  local_81c = 0x83;
  local_81a = 0;
  local_819 = 0;
  local_818 = 0;
  local_817 = 0;
  local_81b = 0xb6;
  _memset(local_813,0,0x407);
  iVar2 = FUN_00495260(uVar1,&local_81c);
  if (iVar2 != 0) {
    Sleep(*(DWORD *)(param_2 + 0x2a0));
    uVar1 = *(undefined4 *)(param_2 + 0x290);
    _memset(local_40b,0,0x407);
    iVar2 = FUN_004952f0(uVar1,0x407);
    if ((iVar2 != 0) && (local_814 == -0x7d)) {
      puVar3 = local_80d;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *puVar3;
        puVar3 = puVar3 + 1;
        param_1 = param_1 + 1;
      }
      *(undefined2 *)param_1 = *(undefined2 *)puVar3;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_81c);
  return;
}



// ==== 00495610 FUN_00495610 ====
// why: caller depth 1 of FUN_00495260

void __thiscall FUN_00495610(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  void *unaff_EDI;
  undefined1 local_814;
  undefined1 local_813;
  undefined1 local_812;
  undefined1 local_811;
  undefined1 local_810;
  undefined1 local_80f;
  undefined1 local_80e;
  undefined1 local_80d [1026];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_814;
  local_814 = 9;
  local_812 = 0;
  local_811 = 0x40;
  local_810 = 0;
  local_80f = 0;
  local_80e = 0;
  _memset(local_80d,0,0x400);
  local_813 = param_2;
  _memcpy(local_80d,unaff_EDI,0x400);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  _memset(local_40b,0,0x407);
  FUN_00495260(uVar1,&local_814);
  __security_check_cookie(local_4 ^ (uint)&local_814);
  return;
}



// ==== 004956d0 FUN_004956d0 ====
// why: caller depth 1 of FUN_00495260

void __fastcall FUN_004956d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_824 [4];
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 local_81e;
  undefined1 local_81d;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined4 local_819 [256];
  undefined1 local_417 [1035];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)auStack_824;
  local_820 = 4;
  local_81f = 0xd4;
  local_81e = 0;
  local_81d = 0x40;
  local_81c = 0;
  local_81b = 0;
  local_81a = 0;
  _memset(local_819,0,0x400);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  puVar3 = local_819;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  _memset(local_417,0,0x407);
  FUN_00495260(uVar1,&local_820);
  __security_check_cookie(local_c ^ (uint)auStack_824);
  return;
}



// ==== 00495790 FUN_00495790 ====
// why: caller depth 1 of FUN_00495260; caller depth 1 of FUN_004952f0

void __thiscall FUN_00495790(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_819;
  undefined1 local_818;
  undefined1 local_817;
  undefined1 local_813 [6];
  undefined4 local_80d [256];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_81c;
  uVar1 = *(undefined4 *)(param_2 + 0x294);
  local_81c = 0x84;
  local_81b = 0xd4;
  local_81a = 0;
  local_819 = 0;
  local_818 = 0;
  local_817 = 0;
  _memset(local_813,0,0x407);
  iVar2 = FUN_00495260(uVar1,&local_81c);
  if (iVar2 != 0) {
    Sleep(*(DWORD *)(param_2 + 0x2a0));
    uVar1 = *(undefined4 *)(param_2 + 0x290);
    _memset(local_40b,0,0x407);
    iVar2 = FUN_004952f0(uVar1,0x407);
    if (iVar2 != 0) {
      puVar3 = local_80d;
      for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *puVar3;
        puVar3 = puVar3 + 1;
        param_1 = param_1 + 1;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_81c);
  return;
}



// ==== 00495880 FUN_00495880 ====
// why: caller depth 1 of FUN_00495260

void __thiscall FUN_00495880(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  undefined1 local_814;
  undefined1 local_813;
  undefined1 local_812;
  undefined1 local_811;
  undefined1 local_810;
  undefined1 local_80f;
  undefined1 local_80e;
  undefined1 local_80d [1026];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_814;
  if ((int)param_3 < 0x401) {
    local_814 = 8;
    local_813 = 0xb8;
    local_812 = 0;
    local_811 = 0x40;
    local_810 = 0;
    local_80f = 0;
    local_80e = 0;
    _memset(local_80d,0,0x400);
    _memcpy(local_80d,param_2,param_3);
    uVar1 = *(undefined4 *)(param_1 + 0x290);
    _memset(local_40b,0,0x407);
    FUN_00495260(uVar1,&local_814);
  }
  __security_check_cookie(local_4 ^ (uint)&local_814);
  return;
}



// ==== 00495950 FUN_00495950 ====
// why: caller depth 1 of FUN_00495260; caller depth 1 of FUN_004952f0

void __thiscall FUN_00495950(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_819;
  undefined1 local_818;
  undefined1 local_817;
  char local_814;
  undefined1 local_813 [6];
  undefined1 local_80d [1026];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_81c;
  if ((int)param_3 < 0x401) {
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    local_81c = 0x88;
    local_81b = 0xb8;
    local_81a = 0;
    local_819 = 0;
    local_818 = 0;
    local_817 = 0;
    _memset(local_813,0,0x407);
    iVar2 = FUN_00495260(uVar1,&local_81c);
    if (iVar2 != 0) {
      Sleep(*(DWORD *)(param_1 + 0x2a0));
      uVar1 = *(undefined4 *)(param_1 + 0x290);
      _memset(local_40b,0,0x407);
      iVar2 = FUN_004952f0(uVar1,0x407);
      if ((iVar2 != 0) && (local_814 == -0x78)) {
        _memcpy(param_2,local_80d,param_3);
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_81c);
  return;
}



// ==== 00495a60 FUN_00495a60 ====
// why: caller depth 1 of FUN_00495260

void __fastcall FUN_00495a60(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_824 [4];
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 local_81e;
  undefined1 local_81d;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined4 local_819 [256];
  undefined1 local_417 [1035];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)auStack_824;
  local_820 = 5;
  local_81e = 0;
  local_81d = 0x40;
  local_81c = 0;
  local_81b = 0;
  local_81a = 0;
  _memset(local_819,0,0x400);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  local_81f = param_3;
  puVar3 = local_819;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  _memset(local_417,0,0x407);
  FUN_00495260(uVar1,&local_820);
  __security_check_cookie(local_c ^ (uint)auStack_824);
  return;
}



// ==== 00495b20 FUN_00495b20 ====
// why: caller depth 1 of HidD_SetFeature; calls HidD_SetFeature

void __thiscall FUN_00495b20(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  undefined1 local_204;
  undefined1 local_203;
  undefined1 local_202;
  undefined1 local_201;
  undefined1 local_200 [508];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_204;
  if (((param_2 != (void *)0x0) && ((int)param_3 < 0x17b)) &&
     (iVar1 = *(int *)(param_1 + 0x298), iVar1 != 0)) {
    local_204 = 8;
    local_203 = 10;
    local_202 = 0x7a;
    local_201 = 1;
    _memset(local_200,0,0x1fc);
    _memcpy(local_200,param_2,param_3);
    cVar2 = HidD_SetFeature(iVar1,&local_204,0x17e);
    if (cVar2 == '\0') {
      DVar3 = GetLastError();
      (*DAT_0065d3e0)(L"SendMusicData Err=0x%x",DVar3);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_204);
  return;
}



// ==== 00495be0 FUN_00495be0 ====
// why: string: keyinfo_to_hardware_code can't find macro id 0x%x

uint FUN_00495be0(uint *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 uVar6;
  uint uStack_4;
  
  uVar3 = (int)*param_1 >> 0x18 & 0xff;
  uVar4 = *param_1 & 0xffffff;
  uStack_4 = 0;
  if (uVar3 == 1) {
    switch(uVar4) {
    case 0x11:
      return 0xf0000007;
    case 0x12:
      return 0xf2000007;
    case 0x13:
      return 0xf1000007;
    case 0x14:
      return 0xf3000007;
    case 0x15:
      return 0xf4000007;
    }
  }
  else if ((uVar3 == 4) || (uVar3 == 3)) {
    switch(uVar4) {
    case 0x21:
switchD_00495d1c_caseD_88:
      return 0x83010004;
    case 0x22:
switchD_00495d1c_caseD_89:
      return 0xcd000004;
    case 0x23:
switchD_00495d1c_caseD_8a:
      return 0xb7000004;
    case 0x24:
switchD_00495d1c_caseD_8b:
      return 0xb6000004;
    case 0x25:
switchD_00495d1c_caseD_8c:
      return 0xb5000004;
    case 0x26:
switchD_00495d1c_caseD_8d:
      return 0xe9000004;
    case 0x27:
switchD_00495d1c_caseD_8e:
      return 0xea000004;
    case 0x28:
switchD_00495d1c_caseD_8f:
      return 0xe2000004;
    case 0x29:
      return 0x6f000004;
    case 0x2a:
      return 0x70000004;
    case 0x30:
      return 0x8a010004;
    case 0x31:
switchD_00495d1c_caseD_99:
      return 0x92010004;
    case 0x32:
switchD_00495d1c_caseD_9a:
      return 0x94010004;
    case 0x33:
      return 0x21020004;
    case 0x34:
switchD_00495d1c_caseD_9b:
      return 0x23020004;
    case 0x35:
      return 0x24020004;
    case 0x36:
      return 0x25020004;
    case 0x37:
      return 0x26020004;
    case 0x38:
      return 0x27020004;
    case 0x39:
      return 0x2a020004;
    }
  }
  else {
    if (uVar3 == 2) {
      bVar1 = (byte)param_1[1];
      if (bVar1 == 0) {
        if (*(char *)((int)param_1 + 5) == -6) {
          return 0x20;
        }
        if (*(char *)((int)param_1 + 5) == -5) {
          return 0x20010000;
        }
      }
      else if (*(char *)((int)param_1 + 5) == '\0') {
        switch(bVar1) {
        case 1:
          return 0xe0000006;
        case 2:
          return 0xe1000006;
        default:
          return 0;
        case 4:
          return 0xe2000006;
        case 8:
        case 0x80:
          return 0xe3000006;
        case 0x10:
          return 0xe4000006;
        case 0x20:
          return 0xe5000006;
        case 0x40:
          return 0xe6000006;
        }
      }
      switch(*(undefined1 *)((int)param_1 + 5)) {
      case 0x88:
        goto switchD_00495d1c_caseD_88;
      case 0x89:
        goto switchD_00495d1c_caseD_89;
      case 0x8a:
        goto switchD_00495d1c_caseD_8a;
      case 0x8b:
        goto switchD_00495d1c_caseD_8b;
      case 0x8c:
        goto switchD_00495d1c_caseD_8c;
      case 0x8d:
        goto switchD_00495d1c_caseD_8d;
      case 0x8e:
        goto switchD_00495d1c_caseD_8e;
      case 0x8f:
        goto switchD_00495d1c_caseD_8f;
      default:
        uVar3 = FUN_00481e90();
        bVar5 = (bVar1 & 1) != 0;
        if ((bVar1 & 2) != 0) {
          bVar5 = bVar5 | 2;
        }
        if ((bVar1 & 4) != 0) {
          bVar5 = bVar5 | 4;
        }
        if ((bVar1 & 8) != 0) {
          bVar5 = bVar5 | 8;
        }
        if ((bVar1 & 0x10) != 0) {
          bVar5 = bVar5 | 0x10;
        }
        if ((bVar1 & 0x20) != 0) {
          bVar5 = bVar5 | 0x20;
        }
        if ((bVar1 & 0x40) != 0) {
          bVar5 = bVar5 | 0x40;
        }
        if ((char)bVar1 < '\0') {
          bVar5 = bVar5 | 0x80;
        }
        return ((uVar3 & 0xff) << 8 | (uint)bVar5) << 0x10;
      case 0x99:
        goto switchD_00495d1c_caseD_99;
      case 0x9a:
        goto switchD_00495d1c_caseD_9a;
      case 0x9b:
        goto switchD_00495d1c_caseD_9b;
      }
    }
    if (uVar3 == 5) {
      uVar6 = FUN_00479c70();
      if ((int)uVar6 != 0) {
        cVar2 = *(char *)((int)param_1 + 0xf);
        if (cVar2 == '\0') {
          return 0x10010;
        }
        if (cVar2 != '\x02') {
          if (cVar2 == '\x01') {
            uStack_4 = 0x2000000;
          }
          return (uStack_4 >> 0x18) << 0x10 | 0x10;
        }
        return 0x40010;
      }
      (*DAT_0065d3e0)(L"keyinfo_to_hardware_code can\'t find macro id 0x%x",
                      (int)((ulonglong)uVar6 >> 0x20));
    }
    else if (uVar3 == 6) {
      switch(uVar4) {
      case 0x43:
        return 0x1d010000;
      case 0x48:
        return 0x16010000;
      case 0x51:
        return 0x3d040000;
      case 0x52:
        return 0xf080000;
      case 0x54:
        return 0x15080000;
      case 0x55:
        return 0x7080000;
      case 0x56:
        return 0x2e010000;
      case 0x57:
        return 0x2d010000;
      case 0x5a:
        return 0x4c050000;
      case 0xa2:
        return 0;
      }
    }
    else {
      if (uVar3 == 9) {
        if (uVar4 != 0) {
          uVar3 = FUN_00468190();
          return uVar3;
        }
LAB_00495f23:
        return param_1[2];
      }
      if (uVar3 == 8) {
        if (uVar4 == 0xa2) {
          return 0;
        }
        if (uVar4 == 0xad) goto LAB_00495f23;
      }
    }
  }
  return 0xffffffff;
}



// ==== 004961a0 FUN_004961a0 ====
// why: string: StMacro_To_HdMacro: get wrong hid

void FUN_004961a0(int param_1,void *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  bool bVar9;
  void *local_20c;
  int local_208;
  byte local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_20c;
  local_20c = param_2;
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    __security_check_cookie(local_4 ^ (uint)&local_20c);
    return;
  }
  _memset(local_204 + 1,0,0x1ff);
  local_204[0] = 0;
  local_204[1] = 1;
  iVar8 = 2;
  if (0 < *(int *)(param_1 + 0x58)) {
    local_208 = 0;
    puVar7 = (ushort *)(param_1 + 0x5c);
    do {
      uVar1 = *puVar7;
      local_208 = local_208 + 1;
      if (uVar1 == 0) break;
      uVar2 = *(uint *)(puVar7 + 2);
      if (uVar2 < 0x80) {
        bVar9 = SBORROW4(iVar8,0x7e);
        iVar4 = -0x7e;
      }
      else {
        bVar9 = SBORROW4(iVar8,0x7a);
        iVar4 = -0x7a;
      }
      if (bVar9 == iVar8 + iVar4 < 0) break;
      if (puVar7[1] == 0) {
        local_204[iVar8] = 0x80;
      }
      else {
        local_204[iVar8] = 0;
      }
      switch(uVar1) {
      case 0x10:
      case 0xa0:
        bVar5 = 0xe1;
        break;
      case 0x11:
      case 0xa2:
        bVar5 = 0xe0;
        break;
      case 0x12:
      case 0xa4:
        bVar5 = 0xe2;
        break;
      default:
        iVar4 = 0;
        do {
          if ((byte)(&DAT_00619151)[iVar4 * 2] == uVar1) {
            bVar5 = (&DAT_00619150)[iVar4 * 2];
            goto LAB_004962d6;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x73);
        bVar5 = 0;
LAB_004962d6:
        if (bVar5 != 0) break;
        (*DAT_0065d3e0)(L"StMacro_To_HdMacro: get wrong hid");
        goto LAB_00496340;
      case 0x5b:
        bVar5 = 0xe3;
        break;
      case 0x5c:
        bVar5 = 0xe7;
        break;
      case 0xa1:
        bVar5 = 0xe5;
        break;
      case 0xa3:
        bVar5 = 0xe4;
        break;
      case 0xa5:
        bVar5 = 0xe6;
        break;
      case 0xf0:
        bVar5 = 0xf0;
        break;
      case 0xf1:
        bVar5 = 0xf1;
        break;
      case 0xf2:
        bVar5 = 0xf2;
      }
      if (uVar2 < 0x80) {
        if (uVar2 < 4) {
          local_204[iVar8] = local_204[iVar8] | 3;
          local_204[iVar8 + 1] = bVar5;
          iVar8 = iVar8 + 2;
        }
        else {
          local_204[iVar8] = local_204[iVar8] | (byte)puVar7[2];
          local_204[iVar8 + 1] = bVar5;
          iVar8 = iVar8 + 2;
        }
      }
      else {
        uVar6 = uVar2 / 100 & 0xffff;
        bVar3 = (byte)((ulonglong)uVar2 % 100);
        if (bVar3 < 3) {
          bVar3 = 3;
        }
        local_204[iVar8] = local_204[iVar8] | bVar3;
        local_204[iVar8 + 1] = bVar5;
        local_204[iVar8 + 2] = 0;
        local_204[iVar8 + 3] = 3;
        local_204[iVar8 + 4] = (byte)(uVar6 >> 8);
        local_204[iVar8 + 5] = (byte)uVar6;
        iVar8 = iVar8 + 6;
      }
LAB_00496340:
      puVar7 = puVar7 + 6;
    } while (local_208 < *(int *)(param_1 + 0x58));
  }
  _memcpy(local_20c,local_204,0x80);
  __security_check_cookie(local_4 ^ (uint)&local_20c);
  return;
}



// ==== 004964e0 FUN_004964e0 ====
// why: caller depth 2 of FUN_00495790

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall
FUN_004964e0(undefined4 param_1,int *param_2,int *param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *extraout_ECX;
  int *piVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  byte *pbStack_1428;
  int *local_1424;
  int iStack_1420;
  undefined1 *puStack_141c;
  int *local_1418;
  int *piStack_1414;
  int *local_1410;
  undefined4 *local_140c;
  void *local_1408;
  undefined4 local_1404;
  int aiStack_11f4 [124];
  undefined1 auStack_1004 [4096];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&pbStack_1428;
  local_140c = param_5;
  iVar2 = *(int *)(param_3[4] + 0x24);
  local_1418 = param_3;
  local_1410 = param_2;
  _memset(&local_1404,0,0x400);
  local_1424 = (int *)(uint)*(byte *)(iVar2 + 0x2f93);
  (*DAT_0065d3e0)(L"FillMatrix (nMatrixNum=%d, nMaxFnNum=%d, bSyncKB=%d) ---------------------------------------"
                  ,0x84,local_1424,1);
  if (param_3[0xa4] != 0) {
    iVar1 = FUN_00495790(param_3);
    if ((iVar1 == 0) && (DAT_00658b0c == 0)) {
      FUN_004494c0(L"Read matrix err, bSyncKB=1");
      goto LAB_00496841;
    }
    (*DAT_0065d3e0)(L"Matrix (Load)-------------------------");
    FUN_00496860();
    Sleep(0x1e);
  }
  piVar6 = (int *)(param_4 + 0x38);
  iVar1 = 0;
  pbVar7 = (byte *)(iVar2 + 0x24);
  pbStack_1428 = pbVar7;
  piStack_1414 = piVar6;
  do {
    if (*piVar6 != 0) {
      iVar2 = (**(code **)(*local_1418 + 0x98))(piVar6,0);
      uVar4 = (uint)*pbVar7;
      if ((iVar2 == -1) || (0x83 < uVar4)) {
        FUN_004494c0(L"Get Invaild keycode, key index=%d, MatrixInx=%d",iVar1,uVar4);
      }
      else if (*(char *)(&local_1404 + uVar4) == '\x02') {
        iVar5 = (int)*(char *)((int)&local_1404 + uVar4 * 4 + 3);
        if ((-1 < iVar5) && (iVar5 < (int)local_1424)) {
          aiStack_11f4[iVar5] = iVar2;
        }
      }
      else {
        (&local_1404)[uVar4] = iVar2;
      }
    }
    iVar1 = iVar1 + 1;
    piVar6 = piVar6 + 4;
    pbVar7 = pbVar7 + 0x10;
  } while (iVar1 < 0x84);
  _memset(auStack_1004,0,0x1000);
  iVar1 = 0;
  puStack_141c = auStack_1004;
  iStack_1420 = 0;
  iVar2 = 1;
  local_1424 = piStack_1414;
  do {
    if (*(char *)((int)local_1424 + 3) != '\x05') goto LAB_004967ce;
    iVar5 = local_1424[1];
    iVar3 = DAT_0066f9a4;
    if (iVar5 != -0xff00) {
      if (*(int *)(DAT_0066f9a4 + 0x10) != 0) {
        for (piVar6 = *(int **)(*(int *)(DAT_0066f9a4 + 0x10) + 0x10); piVar6 != (int *)0x0;
            piVar6 = (int *)piVar6[1]) {
          iVar3 = *piVar6;
          if (iVar3 != 0) {
            if (*(int *)(iVar3 + 4) == iVar5) goto LAB_004966ce;
            if (*(int *)(iVar3 + 0x10) != 0) {
              uVar10 = FUN_004799c0(*(int *)(iVar3 + 0x10),iVar5);
              iVar5 = (int)((ulonglong)uVar10 >> 0x20);
              iVar3 = (int)uVar10;
              piVar6 = extraout_ECX;
              if (iVar3 != 0) goto LAB_004966d2;
            }
          }
        }
      }
      iVar3 = 0;
    }
LAB_004966ce:
    if (iVar3 == 0) {
LAB_004966d9:
      (*DAT_0065d3e0)(L"Key[%d][%d] Set To Macro NULL",0,iVar1);
    }
    else {
LAB_004966d2:
      iVar5 = *(int *)(iVar3 + 0x14);
      if (iVar5 == 0) goto LAB_004966d9;
      uVar4 = (uint)*pbStack_1428;
      (*DAT_0065d3e0)(L"Key[%d][%d] Set To Macro %s(0x%08x), Macro_Buffer_ID=%d, nMatrixInx=%d",0,
                      iVar1,iVar5 + 0x14,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 0x50),
                      uVar4);
      if (uVar4 < 0x84) {
        if (*(int *)(iVar5 + 0x50) < 1) {
          if (0x20 < iVar2) {
            (*DAT_0065d3e0)(L"Err: no buffer id to assign!!");
            goto LAB_004967ce;
          }
          *(int *)(iVar5 + 0x50) = iVar2;
          iVar2 = iVar2 + 1;
          (*DAT_0065d3e0)(L"New assign bufferID= %d",*(undefined4 *)(iVar5 + 0x50));
          (**(code **)(*local_1418 + 0x9c))(iVar5,puStack_141c);
          puStack_141c = puStack_141c + 0x80;
          iStack_1420 = iStack_1420 + 1;
        }
        if ((char)(&local_1404)[uVar4] == '\x02') {
          uVar4 = ((int)(&local_1404)[uVar4] >> 0x18) + 0x84;
        }
        iVar5 = *(int *)(iVar5 + 0x50);
        *(undefined1 *)((int)&local_1404 + uVar4 * 4 + 3) = 0;
        (&local_1404)[uVar4] = (&local_1404)[uVar4] | iVar5 * 0x1000000 - 0x1000000U;
        (*DAT_0065d3e0)(L"Matrix[%d][%d] = 0x%08x",0,uVar4,(&local_1404)[uVar4]);
      }
      else {
        MessageBoxW((HWND)0x0,L"Matrix inx warning",L"Warning",0);
      }
    }
LAB_004967ce:
    iVar5 = iStack_1420;
    pbStack_1428 = pbStack_1428 + 0x10;
    iVar1 = iVar1 + 1;
    local_1424 = local_1424 + 4;
  } while (iVar1 < 0x84);
  puVar8 = &local_1404;
  puVar9 = local_140c;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if ((0 < iStack_1420) &&
     (_memcpy(local_1408,auStack_1004,iStack_1420 << 7), local_1410 != (int *)0x0)) {
    *local_1410 = iVar5;
  }
  if (DAT_0066f9a4 != 0) {
    FUN_00479ca0(*(undefined4 *)(DAT_0066f9a4 + 0x10));
  }
LAB_00496841:
  __security_check_cookie(local_4 ^ (uint)&pbStack_1428);
  return;
}



// ==== 00496a00 FUN_00496a00 ====
// why: caller depth 2 of FUN_00495480; caller depth 2 of FUN_00495520; caller depth 2 of FUN_00495610; caller depth 2 of FUN_004956d0; caller depth 2 of FUN_00495a60; string: SetMacroData(%x) error, err=0x%x; string: SetProfile error, err=0x%x

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall
FUN_00496a00(int *param_1,int param_2,HWND param_3,UINT param_4,uint param_5,undefined4 param_6)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  BOOL BVar4;
  int *piVar5;
  int iVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  int *piStack_1cbc;
  int *local_1cb8;
  int iStack_1cb4;
  int *piStack_1cb0;
  int iStack_1cac;
  uint uStack_1ca8;
  HWND local_1ca4;
  int iStack_1ca0;
  int local_1c9c;
  int iStack_1c98;
  int iStack_1c94;
  undefined4 uStack_1c90;
  uint uStack_1c8c;
  undefined4 auStack_1c88 [4];
  undefined1 uStack_1c78;
  undefined1 auStack_1c77 [7];
  undefined1 auStack_1c70 [248];
  undefined1 uStack_1b78;
  undefined1 auStack_1b77 [20];
  undefined1 auStack_1b63 [1003];
  undefined4 uStack_1778;
  int aiStack_16fa [442];
  undefined4 uStack_1010;
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)&piStack_1cbc;
  local_1c9c = param_2;
  local_1ca4 = param_3;
  local_1cb8 = param_1;
  if (((param_2 == 0) || (*(int *)(param_2 + 4) == 0)) || (param_1[4] == 0)) {
    __security_check_cookie(local_c ^ (uint)&piStack_1cbc);
    return;
  }
  BVar4 = IsWindow(param_3);
  if (BVar4 == 0) {
    param_3 = (HWND)0x0;
    local_1ca4 = (HWND)0x0;
  }
  (*DAT_0065d3e0)(L"CDev916KB::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, nFw=%d",param_3,param_5,
                  param_6,*(undefined4 *)(param_1[4] + 0x18));
  iVar8 = *(int *)(param_1[4] + 0x24);
  uStack_1c90 = 0;
  iStack_1cb4 = DAT_00658b0c;
  if (local_1ca4 != (HWND)0x0) {
    PostMessageW(local_1ca4,param_4,0x14,0);
  }
  param_1[7] = 1;
  Sleep(0x1e);
  if ((param_5 & 1) != 0) {
    uStack_1b78 = 0;
    _memset(auStack_1b77,0,0x3ff);
    uStack_1010._0_1_ = 0;
    _memset((void *)((int)&uStack_1010 + 1),0,0xfff);
    puVar11 = &uStack_1010;
    auStack_1c88[0] = 0xdc;
    auStack_1c88[1] = 0xe0;
    auStack_1c88[2] = 0xe4;
    auStack_1c88[3] = 0xe8;
    piStack_1cbc = (int *)0x0;
    piStack_1cb0 = (int *)FUN_004964e0(param_1,local_1c9c,&uStack_1b78);
    if (piStack_1cb0 == (int *)0x0) {
      (*DAT_0065d3e0)(L"FillMatrix Err");
      if (iStack_1cb4 == 0) goto LAB_0049725b;
    }
    else if (0 < (int)piStack_1cbc) {
      piVar5 = (int *)((int)((int)piStack_1cbc + ((int)piStack_1cbc >> 0x1f & 7U)) >> 3);
      uVar9 = (uint)piStack_1cbc & 0x80000007;
      bVar13 = uVar9 == 0;
      if ((int)uVar9 < 0) {
        bVar13 = (uVar9 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (!bVar13) {
        piVar5 = (int *)((int)piVar5 + 1);
      }
      iStack_1cac = 0;
      piStack_1cbc = piVar5;
      if (0 < (int)piVar5) {
        do {
          uVar3 = auStack_1c88[iStack_1cac];
          (*DAT_0065d3e0)(L"Macro(0x%X):",uVar3);
          FUN_00407c90(puVar11,0x200,0x80,0);
          iVar6 = FUN_00495a60(uVar3);
          if (iVar6 == 0) {
            DVar7 = GetLastError();
            (*DAT_0065d3e0)(L"SetMacroData(%x) error, err=0x%x",uVar3,DVar7);
            param_1 = local_1cb8;
            if (iStack_1cb4 == 0) goto LAB_0049725b;
          }
          puVar11 = puVar11 + 0x100;
          Sleep(0x32);
          iStack_1cac = iStack_1cac + 1;
        } while (iStack_1cac < (int)piStack_1cbc);
      }
    }
    (*DAT_0065d3e0)(L"Matrix (Save)-------------------------");
    piVar5 = local_1cb8;
    FUN_00496860();
    if ((piStack_1cb0 != (int *)0x0) && (iVar6 = FUN_004956d0(), iVar6 == 0)) {
      DVar7 = GetLastError();
      (*DAT_0065d3e0)(L"SetKeyMatrix error, err=0x%x",DVar7);
      param_1 = local_1cb8;
      if (iStack_1cb4 == 0) goto LAB_0049725b;
    }
    Sleep(0x32);
    param_2 = local_1c9c;
    param_1 = piVar5;
  }
  uStack_1c78 = 0;
  _memset(auStack_1c77,0,0xfd);
  uStack_1ca8 = (uint)((uint)*(byte *)(iVar8 + 0x2ebc) == *(uint *)(param_2 + 0x243c));
  uStack_1c8c = param_5 & 2;
  if (uStack_1c8c != 0) {
    Sleep(0x1e);
    iVar6 = FUN_00495520(param_1);
    if (iVar6 == 0) {
      if (iStack_1cb4 == 0) goto LAB_0049725b;
    }
    else if (DAT_0065d3dc != 0) {
      FUN_00407c90(&uStack_1c78,8,0x20,L"Cfg(Load-Global): ");
      FUN_00407c90(auStack_1c70,0x7b,8,L"Cfg(Load-Pro1): ");
    }
    FUN_004968e0(param_2,auStack_1c70);
    if ((uStack_1ca8 == 0) && ((param_5 & 0x40) != 0)) {
      uStack_1b78 = 0;
      _memset(auStack_1b77,0,0x3ff);
      piStack_1cb0 = (int *)(uint)*(byte *)(iVar8 + 0x2f91);
      iVar6 = 0;
      if (piStack_1cb0 != (int *)0x0) {
        puVar11 = (undefined4 *)(param_2 + 0x2f90);
        piStack_1cbc = piStack_1cb0;
        do {
          uVar3 = puVar11[-1];
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f98) + iVar6] = (char)uVar3;
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f99) + iVar6] = (char)((uint)uVar3 >> 8);
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f9a) + iVar6] = (char)((uint)uVar3 >> 0x10);
          uVar3 = *puVar11;
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f98) + iVar6 + 3] = (char)uVar3;
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f99) + iVar6 + 3] = (char)((uint)uVar3 >> 8);
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f9a) + iVar6 + 3] = (char)((uint)uVar3 >> 0x10);
          uVar3 = puVar11[1];
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f98) + iVar6 + 6] = (char)uVar3;
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f99) + iVar6 + 6] = (char)((uint)uVar3 >> 8);
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f9a) + iVar6 + 6] = (char)((uint)uVar3 >> 0x10);
          uVar3 = puVar11[2];
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f98) + iVar6 + 9] = (char)uVar3;
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f99) + iVar6 + 9] = (char)((uint)uVar3 >> 8);
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f9a) + iVar6 + 9] = (char)((uint)uVar3 >> 0x10);
          uVar3 = puVar11[3];
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f98) + iVar6 + 0xc] = (char)uVar3;
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f99) + iVar6 + 0xc] = (char)((uint)uVar3 >> 8);
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f9a) + iVar6 + 0xc] = (char)((uint)uVar3 >> 0x10);
          uVar3 = puVar11[4];
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f98) + iVar6 + 0xf] = (char)uVar3;
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f99) + iVar6 + 0xf] = (char)((uint)uVar3 >> 8);
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f9a) + iVar6 + 0xf] = (char)((uint)uVar3 >> 0x10);
          uVar3 = puVar11[5];
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f98) + iVar6 + 0x12] = (char)uVar3;
          auStack_1b63[(uint)*(byte *)(iVar8 + 0x2f99) + iVar6 + 0x12] = (char)((uint)uVar3 >> 8);
          iVar10 = (uint)*(byte *)(iVar8 + 0x2f9a) + iVar6;
          iVar6 = iVar6 + 0x15;
          puVar11 = puVar11 + 9;
          piStack_1cbc = (int *)((int)piStack_1cbc + -1);
          auStack_1b63[iVar10 + 0x12] = (char)((uint)uVar3 >> 0x10);
        } while (piStack_1cbc != (int *)0x0);
        piStack_1cbc = (int *)0x0;
        param_1 = local_1cb8;
      }
      iVar6 = ((int)piStack_1cb0 + 1) * 0x15;
      FUN_00407e30(&uStack_1b78,iVar6,0x15,3);
      Sleep(0x14);
      iVar6 = (**(code **)(*param_1 + 0x7c))(&uStack_1b78,iVar6);
      if ((iVar6 == 0) && ((*DAT_0065d3e0)(L"SetLedRgbTab error"), iStack_1cb4 == 0))
      goto LAB_0049725b;
      Sleep(100);
    }
  }
  if (((param_5 & 0x10) != 0) && (uStack_1ca8 != 0)) {
    piStack_1cb0 = (int *)(uint)*(byte *)(iVar8 + 0x2f9d);
    bVar1 = *(byte *)(iVar8 + 0x2f9b);
    bVar2 = *(byte *)(iVar8 + 0x2f9c);
    uStack_1778._0_1_ = 0;
    _memset((void *)((int)&uStack_1778 + 1),0,0x761);
    iStack_1cac = 0;
    param_1 = local_1cb8;
    if (*(char *)(iVar8 + 0x2f8c) != '\0') {
      piStack_1cbc = aiStack_16fa;
      uStack_1ca8 = (int)&uStack_1778 + (int)piStack_1cb0 * 0x7e;
      iStack_1c98 = (int)&uStack_1778 + (uint)bVar2 * 0x7e;
      iStack_1ca0 = (int)&uStack_1778 + (uint)bVar1 * 0x7e;
      iStack_1c94 = 0x912;
      do {
        iVar6 = 0;
        piVar5 = (int *)(iVar8 + 0x18);
        if (0 < *(int *)(iVar8 + 0x2d28)) {
          do {
            if (*piVar5 != 0) {
              uVar9 = (uint)*(byte *)((int)piVar5 + 0xd);
              uVar3 = *(undefined4 *)(local_1c9c + (iStack_1c94 + iVar6) * 4);
              if ((int)uVar9 < local_1cb8[0xaa]) {
                *(char *)(iStack_1ca0 + uVar9) = (char)uVar3;
                *(char *)(iStack_1c98 + uVar9) = (char)((uint)uVar3 >> 8);
                *(char *)(uStack_1ca8 + uVar9) = (char)((uint)uVar3 >> 0x10);
              }
            }
            iVar6 = iVar6 + 1;
            piStack_1cb0 = piVar5 + 4;
            piVar5 = piStack_1cb0;
          } while (iVar6 < *(int *)(iVar8 + 0x2d28));
        }
        if (DAT_0065d3dc != 0) {
          (*DAT_0065d3e0)(L"ColorGroup[%d]: ",iStack_1cac);
          piVar5 = piStack_1cbc;
          FUN_00407c90((int)piStack_1cbc + -0x7e,0x40,0,0);
          FUN_00407c90(piVar5,0x40,0,0);
          FUN_00407c90((int)piVar5 + 0x7e,0x40,0,0);
        }
        Sleep(0x1e);
        _memset((void *)((int)&uStack_1010 + 1),0,0x7ff);
        puVar11 = &uStack_1778;
        puVar12 = &uStack_1010;
        for (iVar6 = 0x1d8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        *(undefined2 *)puVar12 = *(undefined2 *)puVar11;
        iVar6 = FUN_00495610(0xbc);
        if (iVar6 == 0) {
          DVar7 = GetLastError();
          (*DAT_0065d3e0)(L"SetLedMatrix(0x%X), err=0x%x",0xbc,DVar7);
          param_1 = local_1cb8;
          if (iStack_1cb4 == 0) goto LAB_0049725b;
        }
        Sleep(0x32);
        iVar6 = FUN_00495610(0xc0);
        if (iVar6 == 0) {
          DVar7 = GetLastError();
          (*DAT_0065d3e0)(L"SetLedMatrix(0x%X), err=0x%x",0xc0,DVar7);
          param_1 = local_1cb8;
          if (iStack_1cb4 == 0) goto LAB_0049725b;
        }
        Sleep(0x32);
        iStack_1c94 = iStack_1c94 + 0x90;
        iStack_1ca0 = iStack_1ca0 + 0x17a;
        iStack_1c98 = iStack_1c98 + 0x17a;
        uStack_1ca8 = uStack_1ca8 + 0x17a;
        piStack_1cbc = (int *)((int)piStack_1cbc + 0x17a);
        iStack_1cac = iStack_1cac + 1;
        param_1 = local_1cb8;
      } while (iStack_1cac < (int)(uint)*(byte *)(iVar8 + 0x2f8c));
    }
  }
  if (uStack_1c8c != 0) {
    if (DAT_0065d3dc != 0) {
      FUN_00407c90(&uStack_1c78,8,0,L"Cfg(Save-Global): ");
      FUN_00407c90(auStack_1c70,0x7b,8,L"Cfg(Save-Pro1): ");
    }
    Sleep(0x1e);
    iVar8 = FUN_00495480();
    if (iVar8 == 0) {
      DVar7 = GetLastError();
      (*DAT_0065d3e0)(L"SetProfile error, err=0x%x",DVar7);
      if (iStack_1cb4 == 0) goto LAB_0049725b;
    }
  }
  uStack_1c90 = 1;
LAB_0049725b:
  param_1[7] = 0;
  param_1[8] = 0;
  if (local_1ca4 == (HWND)0x0) {
    Sleep(0x1e);
    __security_check_cookie(local_c ^ (uint)&piStack_1cbc);
    return;
  }
  PostMessageW(local_1ca4,param_4,100,0);
  Sleep(500);
  __security_check_cookie(local_c ^ (uint)&piStack_1cbc);
  return;
}



// ==== 004972f0 FUN_004972f0 ====
// why: string: %s bOnline=%x

void FUN_004972f0(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  BOOL BVar4;
  int unaff_EBX;
  int lParam;
  LPARAM lParam_00;
  
  if (*(char *)(unaff_EBX + 1) == '\n') {
    if (DAT_0065d3dc != 0) {
      FUN_00407c90();
    }
    cVar1 = *(char *)(unaff_EBX + 3);
    lParam_00 = 0;
    lParam = 0;
    if (cVar1 == '\0') {
      lParam = param_1[1];
      lParam_00 = 1;
    }
    else if (cVar1 == '\x01') {
      lParam = param_1[2];
      lParam_00 = 0;
    }
    if (*(char *)(unaff_EBX + 5) == '\x02') {
      bVar2 = *(byte *)(unaff_EBX + 6);
      puVar3 = &DAT_00621b70;
      if (cVar1 != '\0') {
        puVar3 = &DAT_00621b78;
      }
      (*DAT_0065d3e0)(L"%s bOnline=%x",puVar3,(uint)bVar2);
      if (lParam == 0) {
        PostMessageW((HWND)*param_1,0x459,(WPARAM)param_1,lParam_00);
        return;
      }
      if (*(int *)(lParam + 0x1c) != 0) {
        *(uint *)(*(int *)(lParam + 0x1c) + 0x238) = (uint)bVar2;
      }
    }
    if ((lParam != 0) && (BVar4 = IsWindow((HWND)*param_1), BVar4 != 0)) {
      PostMessageW((HWND)*param_1,0x7eb,(uint)*(ushort *)(unaff_EBX + 5),lParam);
    }
  }
  else {
    if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0x1c) != 0)) {
      FUN_00492e70(unaff_EBX,0x14);
    }
    if ((param_1[2] != 0) && (*(int *)(param_1[2] + 0x1c) != 0)) {
      FUN_00492e70(unaff_EBX,0x14);
      return;
    }
  }
  return;
}



// ==== 00497410 FUN_00497410 ====
// why: calls ReadFile; string: ServiceThread_Combo ReadFile Err=%d; string: ServiceThread_Combo open err=0x%x; string: ServiceThread_Combo(%s) Start...; string: ServiceThread_Combo(%s) exit; string: ServiceThread_Combo: WaitForMultipleObjects err=%d; string: ServiceThread_Combo: hObject[1] is signal

void FUN_00497410(undefined4 *param_1)

{
  undefined2 *puVar1;
  HANDLE hFile;
  DWORD DVar2;
  BOOL BVar3;
  int local_6c;
  HANDLE pvStack_68;
  DWORD DStack_64;
  _OVERLAPPED _Stack_60;
  HANDLE pvStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_6c;
  local_6c = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[1] != 0) {
      local_6c = param_1[1];
    }
    if (param_1[2] != 0) {
      local_6c = param_1[2];
    }
    if (local_6c != 0) {
      puVar1 = (undefined2 *)(local_6c + 0x28);
      goto LAB_00497458;
    }
  }
  puVar1 = &DAT_0060b0b0;
LAB_00497458:
  (*DAT_0065d3e0)(L"ServiceThread_Combo(%s) Start...",puVar1);
  hFile = CreateFileW((LPCWSTR)(param_1 + 3),0x120089,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
    (*DAT_0065d3e0)(L"ServiceThread_Combo open err=0x%x",DVar2);
    __security_check_cookie(local_4 ^ (uint)&local_6c);
    return;
  }
  pvStack_68 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  _Stack_60.Internal = 0;
  _Stack_60.InternalHigh = 0;
  _Stack_60.u.s.Offset = 0;
  _Stack_60.u.s.OffsetHigh = 0;
  uStack_48 = DAT_0066fa8c;
  _Stack_60.hEvent = pvStack_68;
  pvStack_4c = pvStack_68;
  do {
    while( true ) {
      while( true ) {
        _memset(auStack_44,0,0x40);
        BVar3 = ReadFile(hFile,auStack_44,0x14,&DStack_64,&_Stack_60);
        if (BVar3 == 0) break;
        FUN_004972f0(param_1);
      }
      DVar2 = GetLastError();
      if (DVar2 != 0x3e5) break;
      DVar2 = WaitForMultipleObjects(2,&pvStack_4c,0,0xffffffff);
      if (DVar2 == 0) {
        FUN_004972f0(param_1);
      }
      else {
        if (DVar2 == 1) {
          (*DAT_0065d3e0)(L"ServiceThread_Combo: hObject[1] is signal");
          BVar3 = CancelIo(hFile);
          if (BVar3 != 0) {
            GetOverlappedResult(hFile,&_Stack_60,&DStack_64,1);
          }
          goto LAB_004975f8;
        }
        if (DVar2 == 0xffffffff) {
          (*DAT_0065d3e0)(L"ServiceThread_Combo: WaitForMultipleObjects err=%d",0x3e5);
        }
      }
    }
    (*DAT_0065d3e0)(L"ServiceThread_Combo ReadFile Err=%d",DVar2);
    if (DVar2 == 0x48f) {
      auStack_44[0] = 0xff;
      FUN_004972f0(param_1);
      PostMessageW((HWND)*param_1,0x45a,(WPARAM)param_1,0);
      break;
    }
  } while (DVar2 != 6);
LAB_004975f8:
  CloseHandle(hFile);
  if (pvStack_68 != (HANDLE)0x0) {
    CloseHandle(pvStack_68);
  }
  (*DAT_0065d3e0)(L"ServiceThread_Combo(%s) exit",local_6c + 0x28);
  __security_check_cookie(local_4 ^ (uint)&local_6c);
  return;
}



// ==== 00497750 FUN_00497750 ====
// why: string: CDevComboFilm::ClearHandle

void __fastcall FUN_00497750(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005d74d8;
  local_c = ExceptionList;
  uVar1 = DAT_0064f674 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = CDevComboFilm::vftable;
  local_4 = 0;
  (*DAT_0065d3e0)(L"CDevComboFilm::ClearHandle",uVar1);
  if ((HANDLE)param_1[3] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[3]);
    param_1[3] = 0;
  }
  local_4 = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *param_1 = CHidDev::vftable;
  FUN_0046afa0();
  ExceptionList = local_c;
  return;
}



// ==== 004977e0 FUN_004977e0 ====
// why: string: CDevComboFilm::ClearHandle

void __fastcall FUN_004977e0(int param_1)

{
  (*DAT_0065d3e0)(L"CDevComboFilm::ClearHandle");
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x2c) = 0;
  return;
}



// ==== 00497820 FUN_00497820 ====
// why: string: CDevComboFilm::FindHIDDevice for %s

undefined4 __fastcall FUN_00497820(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (*DAT_0065d3e0)(L"CDevComboFilm::FindHIDDevice for %s",*(int *)(param_1 + 0x10) + 0x28);
  }
  return 0;
}



// ==== 00497840 FUN_00497840 ====
// why: calls HidD_GetAttributes; string: CDevComboFilm::SyncCfg; string: SyncCfg: Get Wrong OnBoard!!; string: SyncCfg: GetLED Err; string: SyncCfg: GetLED Err: read valid data, retry now; string: SyncCfg: GetLED failed; string: SyncCfg: GetOnBoard failed; string: SyncCfg: UnSupport Sensor 0x%04x; string: SyncCfg: nCurOnBoard=%d; string: SyncCfg: nSensor=%d, nCurLevel=%d

void __fastcall FUN_00497840(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined1 uStack_28c;
  byte bStack_28b;
  byte bStack_28a;
  byte bStack_289;
  int iStack_288;
  undefined1 auStack_284 [4];
  char cStack_280;
  byte bStack_27f;
  byte bStack_27e;
  byte bStack_27d;
  ushort uStack_27c;
  undefined1 auStack_278 [400];
  wchar_t awStack_e8 [102];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de30b;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&uStack_28c;
  ExceptionList = &local_14;
  (*DAT_0065d3e0)(L"CDevComboFilm::SyncCfg",DAT_0064f674 ^ (uint)&stack0xfffffd68);
  param_1[0x9f] = 1;
  cVar1 = HidD_GetAttributes(param_1[3],auStack_284);
  if (cVar1 != '\0') {
    param_1[6] = (uint)uStack_27c;
    (*DAT_0065d3e0)(L"FW Version=0x%x",(uint)uStack_27c);
  }
  if (*(int *)(param_1[4] + 0x14) != 0) goto LAB_00497b64;
  iStack_288 = *(int *)(param_1[4] + 0x24) + 0x18;
  Sleep(0x1e);
  iVar4 = 0;
  do {
    _memset(auStack_278,0,400);
    iVar2 = (**(code **)(*param_1 + 0x70))(auStack_278,400);
    if (iVar2 == 0) {
      (*DAT_0065d3e0)(L"SyncCfg: GetLED failed");
      Sleep(300);
    }
    else {
      if (((cStack_280 == 'd') && ((bStack_27e & 0xf) != 0)) && ((bStack_27e & 0xf) < 5)) {
        iVar4 = (bStack_27d >> 4) - 1;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        *(int *)(param_1[4] + 0x2e4) = iVar4;
        (*DAT_0065d3e0)(L"SyncCfg: nSensor=%d, nCurLevel=%d",bStack_27f & 0x1f,iVar4);
        iVar4 = FUN_00416aa0();
        iVar2 = 0;
        piVar3 = (int *)(iStack_288 + 0x408);
        goto LAB_00497aa0;
      }
      (*DAT_0065d3e0)(L"SyncCfg: GetLED Err: read valid data, retry now");
      FUN_00407c90(auStack_278,400,10,0);
      Sleep(300);
      if ((1 < iVar4) && (param_1[2] != 0)) {
        FUN_004035b0(L"SyncCfg: GetLED Err");
        uStack_c = 0;
        FUN_00448e50(param_1[2]);
        uStack_c = 0xffffffff;
        piVar3 = (int *)(iStack_288 + -4);
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 + -1 < 1) {
          (**(code **)(**(int **)(iStack_288 + -0x10) + 4))((undefined4 *)(iStack_288 + -0x10));
        }
        goto LAB_00497b64;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
LAB_004979e5:
  *(undefined4 *)(param_1[4] + 0x2fc) = 0;
  if (1 < *(int *)(iStack_288 + 0x2668)) {
    Sleep(0x1e);
    bStack_28b = 0;
    iVar4 = (**(code **)(*param_1 + 0x88))(&bStack_28b);
    if (iVar4 == 0) {
      pwVar5 = L"SyncCfg: GetOnBoard failed";
    }
    else {
      (*DAT_0065d3e0)(L"SyncCfg: nCurOnBoard=%d",bStack_28b);
      if ((int)(uint)bStack_28b < *(int *)(iStack_288 + 0x2668)) {
        *(uint *)(param_1[4] + 0x2fc) = (uint)bStack_28b;
        goto LAB_00497b11;
      }
      pwVar5 = L"SyncCfg: Get Wrong OnBoard!!";
    }
    (*DAT_0065d3e0)(pwVar5);
  }
LAB_00497b11:
  if (*(char *)(iStack_288 + 0x2685) != '\0') {
    Sleep(0x1e);
    bStack_28a = 0;
    bStack_289 = 0;
    iVar4 = (**(code **)(*param_1 + 0x20))(&bStack_28a,&bStack_289);
    if (iVar4 != 0) {
      *(uint *)(param_1[4] + 0x304) = (uint)bStack_28a;
      *(uint *)(param_1[4] + 0x308) = (uint)bStack_289;
    }
  }
LAB_00497b64:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&uStack_28c);
  return;
  while( true ) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x224;
    if (3 < iVar2) break;
LAB_00497aa0:
    if (iVar4 == *piVar3) {
      *(int *)(param_1[4] + 0x300) = iVar4;
      goto LAB_004979e5;
    }
  }
  (*DAT_0065d3e0)(L"SyncCfg: UnSupport Sensor 0x%04x",iVar4);
  __snwprintf_s(awStack_e8,100,99,L"SyncCfg: UnSupport Sensor 0x%04x",iVar4);
  FUN_00448f10(param_1[2]);
  goto LAB_00497b64;
}



// ==== 00497b90 FUN_00497b90 ====
// why: string: !! CDevComboFilm::SendData: %s err, cmd=0x%x, package=%d; string: !! CDevComboFilm::SendData: read err, cmd=0x%x, nRet=%d, package=%d; string: !! CDevComboFilm::SendData: send package %d err=0x%x; string: CDevComboFilm::SendData param err, m_hDev=%x, nBytesToWrite=%d

void FUN_00497b90(int param_1,wchar_t *param_2,char param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  wchar_t *pwVar4;
  DWORD DVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  wchar_t *pwVar10;
  char cStack_34;
  char cStack_33;
  byte bStack_32;
  byte bStack_31;
  int iStack_30;
  size_t sStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&cStack_34;
  local_1c = param_4;
  if ((*(int *)(param_1 + 0xc) == 0) || (param_5 < 1)) {
    (*DAT_0065d3e0)(L"CDevComboFilm::SendData param err, m_hDev=%x, nBytesToWrite=%d",
                    *(int *)(param_1 + 0xc),param_5);
    __security_check_cookie(local_4 ^ (uint)&cStack_34);
    return;
  }
  FUN_00470c90();
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 600));
  }
  (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
  iStack_24 = param_5 / 0xe;
  iStack_30 = 0;
  iStack_28 = 0;
  if (param_5 % 0xe != 0) {
    iStack_24 = iStack_24 + 1;
  }
  if (0 < param_5) {
    bStack_32 = param_3 << 4;
    do {
      sStack_2c = 0xe;
      if (param_5 - iStack_28 < 0xe) {
        sStack_2c = param_5 - iStack_28;
      }
      bStack_31 = bStack_32 | (byte)sStack_2c;
      iStack_20 = 0;
      while( true ) {
        iVar9 = iStack_28;
        bVar1 = bStack_31;
        FUN_004051e0(param_7);
        uStack_10 = 0;
        uStack_c = 0;
        uStack_8 = 0;
        uStack_18 = ((uint)param_2 & 0xff) << 8;
        uVar2 = (undefined1)iStack_30;
        uStack_18 = CONCAT13(uVar2,(undefined3)uStack_18);
        iStack_30 = iStack_30 + 1;
        uStack_18 = CONCAT31(uStack_18._1_3_,0x15);
        uStack_18._0_3_ = CONCAT12((undefined1)iStack_24,(undefined2)uStack_18);
        uStack_18 = CONCAT13(uVar2,(undefined3)uStack_18);
        uStack_14 = (uint)bVar1;
        if (local_1c != 0) {
          _memcpy((void *)((int)&uStack_14 + 1),(void *)(local_1c + iVar9),sStack_2c);
        }
        iVar7 = 0;
        cVar8 = '\0';
        cStack_33 = '\0';
        cStack_34 = '\0';
        cVar3 = '\0';
        do {
          cStack_33 = cStack_33 + *(char *)((int)&uStack_18 + iVar7 + 2);
          cVar8 = cVar8 + *(char *)((int)&uStack_18 + iVar7);
          cVar3 = cVar3 + *(char *)((int)&uStack_18 + iVar7 + 1);
          cStack_34 = cStack_34 + *(char *)((int)&uStack_18 + iVar7 + 3);
          iVar7 = iVar7 + 4;
        } while (iVar7 < 0x14);
        uStack_8 = CONCAT13(cVar3 + cStack_33 + cStack_34 + cVar8,(undefined3)uStack_8);
        iVar7 = FUN_004947b0(&uStack_18,500);
        if (iVar7 == 0) {
          DVar5 = GetLastError();
          (*DAT_0065d3e0)(L"!! CDevComboFilm::SendData: send package %d err=0x%x",iStack_30 + -1,
                          DVar5);
          goto LAB_00497def;
        }
        if (((char)param_2 < '\0') ||
           (pwVar4 = (wchar_t *)FUN_00497640(param_2), iVar9 = iStack_28, pwVar4 == (wchar_t *)0x0))
        break;
        if ((pwVar4 != (wchar_t *)0xfffffffe) && (pwVar4 != (wchar_t *)0xfffffffd)) {
          pwVar10 = L"!! CDevComboFilm::SendData: read err, cmd=0x%x, nRet=%d, package=%d";
          pwVar6 = param_2;
LAB_00497de6:
          (*DAT_0065d3e0)(pwVar10,pwVar6,pwVar4,iStack_30 + -1);
LAB_00497def:
          __security_check_cookie(local_4 ^ (uint)&cStack_34);
          return;
        }
        if ((param_6 == 0) || (4 < iStack_20)) {
          pwVar6 = L"timeout";
          if (pwVar4 != (wchar_t *)0xfffffffe) {
            pwVar6 = L"crc";
          }
          pwVar10 = L"!! CDevComboFilm::SendData: %s err, cmd=0x%x, package=%d";
          pwVar4 = param_2;
          goto LAB_00497de6;
        }
        iStack_20 = iStack_20 + 1;
        iStack_30 = iStack_30 + -1;
      }
      iStack_28 = iVar9 + sStack_2c;
    } while (iStack_28 < param_5);
  }
  __security_check_cookie(local_4 ^ (uint)&cStack_34);
  return;
}



// ==== 00497e50 FUN_00497e50 ====
// why: string: !! ReadData: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d; string: !! ReadData: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d

void __thiscall FUN_00497e50(int param_1,undefined4 param_2,char param_3,int param_4,size_t param_5)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  uint _Size;
  uint uVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [3];
  byte bStack_2d;
  int local_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  byte bStack_16;
  byte bStack_15;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  undefined2 uStack_7;
  undefined1 uStack_5;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_30;
  local_1c = param_4;
  local_2c = param_1;
  if ((*(int *)(param_1 + 0xc) == 0) || (param_4 == 0)) {
    __security_check_cookie(local_4 ^ (uint)auStack_30);
    return;
  }
  FUN_00470c90();
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 600));
  }
  (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
  bStack_2d = param_3 << 4;
  iStack_24 = 0;
LAB_00497ed0:
  do {
    uVar3 = 0;
    bStack_15 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_7 = 0;
    uStack_5 = 0;
    uStack_18 = 0x15;
    uStack_17 = (undefined1)param_2;
    bStack_16 = 1;
    uStack_14 = (uint)bStack_2d;
    uStack_5 = FUN_004945f0();
    iVar1 = FUN_004947b0(&uStack_18,500);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      (*DAT_0065d3e0)(L"!! ReadData: send err=0x%x, cmd=0x%x",DVar2,param_2);
LAB_00498014:
      __security_check_cookie(local_4 ^ (uint)auStack_30);
      return;
    }
    _Size = 0;
    iStack_20 = 0;
    uStack_28 = 0;
LAB_00497f40:
    do {
      uStack_18 = 0;
      uStack_17 = 0;
      bStack_16 = 0;
      bStack_15 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_7 = 0;
      uStack_5 = 0;
      iVar1 = FUN_00497640(param_2);
      if (iVar1 != 0) {
        if (iVar1 == -2) {
          if (iStack_24 < 2) {
            iStack_24 = iStack_24 + 1;
            goto LAB_00497ed0;
          }
          uVar6 = *(undefined4 *)(local_2c + 0xc);
          pwVar5 = L"!! ReadData: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d";
        }
        else {
          if (iVar1 != -4) goto LAB_00497f40;
          uVar6 = *(undefined4 *)(local_2c + 0xc);
          pwVar5 = L"!! ReadData: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d";
        }
        (*DAT_0065d3e0)(pwVar5,uVar6,param_2,uVar3,uStack_28,_Size);
        goto LAB_00498014;
      }
      uStack_28 = (uint)bStack_15;
      uVar4 = uStack_14 & 0xf;
      uVar3 = bStack_16 & 0x7f;
      _Size = param_5;
      if (((int)uVar4 <= (int)param_5) && (_Size = uVar4, 0xe < uVar4)) {
        _Size = 0xe;
      }
      iVar1 = _Size + iStack_20;
      if (iVar1 <= (int)param_5) {
        _memcpy((void *)(local_1c + iStack_20),(void *)((int)&uStack_14 + 1),_Size);
      }
      iStack_20 = iVar1;
    } while (uVar3 != uStack_28 + 1);
    if ((int)param_5 <= iVar1) {
      __security_check_cookie(local_4 ^ (uint)auStack_30);
      return;
    }
  } while( true );
}



// ==== 004980b0 FUN_004980b0 ====
// why: string: CDevComboFilm::SetMatrix layer=%d

bool __thiscall FUN_004980b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDevComboFilm::SetMatrix layer=%d",param_2);
  iVar1 = FUN_00497b90(param_1,(-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 1,
                       param_2,param_3,param_4,1,0xf);
  return iVar1 != 0;
}



// ==== 00498100 FUN_00498100 ====
// why: string: CDevComboFilm::GetMatrix layer=%d

void __thiscall FUN_00498100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_0065d3e0)(L"CDevComboFilm::GetMatrix layer=%d",param_2);
  FUN_00497e50((-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 0x41,param_2,param_3,
               param_4);
  return;
}



// ==== 004981f0 FUN_004981f0 ====
// why: string: CDevComboFilm::SetMacro; string: SetMacro failed

undefined4 __thiscall FUN_004981f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDevComboFilm::SetMacro");
  iVar1 = FUN_00498140(param_1,param_2);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetMacro failed");
    return 0;
  }
  return 1;
}



// ==== 00498260 FUN_00498260 ====
// why: string: CDevComboFilm::SetLED

undefined4 __thiscall FUN_00498260(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDevComboFilm::SetLED");
  iVar1 = FUN_00497b90(param_1,(-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 4,0,
                       param_2,param_3,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetLED failed");
    return 0;
  }
  return 1;
}



// ==== 004982c0 FUN_004982c0 ====
// why: string: CDevComboFilm::GetLED

void __thiscall FUN_004982c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_0065d3e0)(L"CDevComboFilm::GetLED");
  FUN_00497e50((-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 0x44,0,param_2,param_3)
  ;
  return;
}



// ==== 00498300 FUN_00498300 ====
// why: string: CDevComboFilm::SetOnBoard

undefined4 __fastcall FUN_00498300(int param_1)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDevComboFilm::SetOnBoard");
  iVar1 = FUN_00497b90(param_1,(-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 10,0,
                       &stack0x00000004,1,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetOnBoard failed");
    return 0;
  }
  return 1;
}



// ==== 00498360 FUN_00498360 ====
// why: string: CDevComboFilm::GetOnBoard

undefined4 __thiscall FUN_00498360(uint param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  (*DAT_0065d3e0)(L"CDevComboFilm::GetOnBoard");
  uStack_4 = uStack_4 & 0xffffff;
  iVar1 = FUN_00497e50((-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 0x4a,0,
                       (int)&uStack_4 + 3,1);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"GetOnBoard failed");
    return 0;
  }
  *param_2 = uStack_4._3_1_;
  return 1;
}



// ==== 00498540 FUN_00498540 ====
// why: string: CDevComboFilm::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, bBT=%x

void __thiscall
FUN_00498540(int param_1,int param_2,HWND param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  int local_574 [3];
  undefined4 uStack_568;
  int iStack_334;
  undefined4 uStack_2c8;
  int iStack_94;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de2c6;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)local_574;
  uVar2 = DAT_0064f674 ^ (uint)&stack0xfffffa80;
  ExceptionList = &local_14;
  local_574[0] = param_2;
  if (((param_2 != 0) && (*(int *)(param_2 + 4) != 0)) && (*(int *)(param_1 + 0x10) != 0)) {
    BVar3 = IsWindow(param_3);
    if (BVar3 == 0) {
      param_3 = (HWND)0x0;
    }
    (*DAT_0065d3e0)(L"CDevComboFilm::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, bBT=%x",param_3,
                    param_5,param_6,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30c),uVar2);
    if (*(int *)(param_1 + 0x238) == 0) {
      FUN_00448e50(*(undefined4 *)(param_1 + 8));
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      Sleep(200);
      iVar1 = *(int *)(param_1 + 0x10);
      if (*(int *)(iVar1 + 0x14) == 1) {
        FUN_00498960(iVar1);
        uStack_c = 0;
        uStack_568 = *(undefined4 *)(param_1 + 8);
        iStack_334 = param_1;
        FUN_0049bad0(local_574[0],param_3,param_4,param_5,param_6);
        uStack_c = 0xffffffff;
        FUN_00498a00();
      }
      else if (*(int *)(iVar1 + 0x14) == 0) {
        FUN_0049ce30(iVar1);
        uStack_c = 1;
        uStack_2c8 = *(undefined4 *)(param_1 + 8);
        iStack_94 = param_1;
        FUN_0049ff00(local_574[0],param_3,param_4,param_5,param_6);
        uStack_c = 0xffffffff;
        FUN_0049ced0();
      }
      Sleep(0x32);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)local_574);
  return;
}



// ==== 0049875c FUN_0049875c ====
// why: calls ReadFile; string: ServiceThread_G5 Err=%d; string: ServiceThread_G5 Exit; string: ServiceThread_G5 Start...; string: ServiceThread_G5: hObject[1] is signal

void FUN_0049875c(undefined4 param_1,ULONG_PTR param_2,ULONG_PTR param_3,undefined4 param_4,
                 undefined4 param_5,HANDLE param_6,HANDLE param_7,undefined4 param_8,
                 undefined4 param_9)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  int unaff_EDI;
  uint in_stack_00000064;
  
  (*DAT_0065d3e0)(L"ServiceThread_G5 Start...");
  param_2 = 0;
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  param_6 = *(HANDLE *)(unaff_EDI + 0x28c);
  param_8 = *(undefined4 *)(unaff_EDI + 0x290);
  param_7 = param_6;
LAB_004987a7:
  do {
    while( true ) {
      while (hFile = *(HANDLE *)(unaff_EDI + 0xc), hFile == (HANDLE)0x0) {
        Sleep(200);
      }
      _memset(&param_9,0,0x40);
      BVar1 = ReadFile(hFile,&param_9,8,&param_1,(LPOVERLAPPED)&param_2);
      if (BVar1 == 0) break;
LAB_004987e4:
      if (DAT_0065d3dc != 0) {
        FUN_00407c90(&param_9,8,0,L"Read(Wired): ");
      }
      if ((param_9._1_1_ == '\n') && (param_9._2_1_ == '\x06')) {
        FUN_00492e70(&param_9,8);
      }
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForMultipleObjects(2,&param_7,0,0xffffffff);
      if (DVar2 == 0) goto LAB_004987e4;
      if (DVar2 == 1) {
        (*DAT_0065d3e0)(L"ServiceThread_G5: hObject[1] is signal");
        BVar1 = CancelIo(*(HANDLE *)(unaff_EDI + 0xc));
        if (BVar1 != 0) {
          GetOverlappedResult(*(HANDLE *)(unaff_EDI + 0xc),(LPOVERLAPPED)&param_2,&param_1,1);
        }
LAB_004988bc:
        (*DAT_0065d3e0)(L"ServiceThread_G5 Exit");
        __security_check_cookie(in_stack_00000064 ^ (uint)&param_1);
        return;
      }
      if (DVar2 == 0xffffffff) {
        (*DAT_0065d3e0)(L"WaitForMultipleObjects Err=%d",0x3e5);
      }
      goto LAB_004987a7;
    }
    (*DAT_0065d3e0)(L"ServiceThread_G5 Err=%d",DVar2);
    if ((DVar2 == 0x48f) || (DVar2 == 6)) goto LAB_004988bc;
  } while( true );
}



// ==== 00498b50 FUN_00498b50 ====
// why: caller depth 1 of FUN_00499fd0; calls HidD_GetAttributes; string: CDevG5KB::FindHIDDevice CreateFile %s; string: CDevG5KB::FindHIDDevice bFindMedida=%x, bFindWireless=%x; string: CDevG5KB::FindHIDDevice for %s, hDev=%x, nFw=%d, id=%04x_%04x; string: Psd unmatch: gVar.nPsd=%x,%x,%x,%x,%x,%x, nDevPsd=%x,%x,%x,%x,%x,%x

void __fastcall FUN_00498b50(int *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  HANDLE hObject;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  bool bVar8;
  int local_38;
  ushort *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  char cStack_10;
  uint uStack_f;
  undefined1 uStack_b;
  ushort auStack_8 [2];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_38;
  local_34 = (ushort *)param_1[4];
  local_14 = param_1;
  if (local_34 == (ushort *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_38);
    return;
  }
  local_1c = (uint)*local_34;
  local_2c = (uint)local_34[1];
  local_24 = *(int *)(local_34 + 0xc);
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  local_30 = -1;
  local_38 = 0;
  piVar6 = &DAT_0065ea80;
  do {
    if ((local_1c == piVar6[2]) && (local_2c == piVar6[3])) {
      if (local_24 == 0x18) {
        bVar8 = *piVar6 == 0xff00;
LAB_00498c19:
        if (((!bVar8) || (piVar6[1] != 1)) || (piVar6[-1] != 0x208)) {
LAB_00498ded:
          if (((*piVar6 == 0xc) && (piVar6[1] == 1)) && (piVar6[-3] == 3)) {
            local_20 = 1;
          }
          else if (((*piVar6 == 0xff02) && (piVar6[1] == 2)) &&
                  ((piVar6[-3] == 0x14 && ((piVar6[-2] == 0x14 && (piVar6[-4] == 0x13)))))) {
            local_28 = 1;
          }
          goto LAB_00498e31;
        }
      }
      else {
        if ((local_24 != 0x1a) || (*piVar6 != 0xff02)) goto LAB_00498ded;
        if ((piVar6[1] != 2) || ((piVar6[-1] != 0x208 || (piVar6[-3] != 8)))) {
          bVar8 = true;
          goto LAB_00498c19;
        }
      }
      hObject = CreateFileW((LPCWSTR)(piVar6 + -0x86),0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                            0x40000000,(HANDLE)0x0);
      (*DAT_0065d3e0)(L"CDevG5KB::FindHIDDevice CreateFile %s",piVar6 + -0x86);
      puVar1 = local_34;
      if (hObject != (HANDLE)0xffffffff) {
        puVar7 = local_34 + 4;
        if ((((char)*puVar7 != '\0') || ((char)local_34[6] != '\0')) ||
           (*(char *)((int)local_34 + 0xd) != '\0')) {
          cStack_10 = '\0';
          uStack_f = 0;
          uStack_b = 0;
          iVar5 = FUN_00499fd0(hObject);
          param_1 = local_14;
          if (iVar5 != 0) {
            iVar5 = 0;
            while ((&cStack_10 + iVar5)[(int)puVar7 - (int)&cStack_10] == (&cStack_10)[iVar5]) {
              iVar5 = iVar5 + 1;
              if (5 < iVar5) goto LAB_00498cca;
            }
            (*DAT_0065d3e0)(L"Psd unmatch: gVar.nPsd=%x,%x,%x,%x,%x,%x, nDevPsd=%x,%x,%x,%x,%x,%x",
                            (char)*puVar7,*(undefined1 *)((int)puVar1 + 9),(char)puVar1[5],
                            *(undefined1 *)((int)puVar1 + 0xb),(char)puVar1[6],
                            *(undefined1 *)((int)puVar1 + 0xd),cStack_10,uStack_f & 0xff,
                            uStack_f >> 8 & 0xff,uStack_f >> 0x10 & 0xff,uStack_f >> 0x18,uStack_b);
            CloseHandle(hObject);
            local_18 = 1;
            param_1 = local_14;
            goto LAB_00498e31;
          }
        }
LAB_00498cca:
        local_30 = local_38;
        goto LAB_00498cd2;
      }
    }
LAB_00498e31:
    hObject = (HANDLE)0x0;
    local_38 = local_38 + 1;
    piVar6 = piVar6 + 0x8b;
    if (0x66983f < (int)piVar6) {
LAB_00498cd2:
      (*DAT_0065d3e0)(L"CDevG5KB::FindHIDDevice for %s, hDev=%x, nFw=%d, id=%04x_%04x",
                      local_34 + 0x14,hObject,local_24,local_1c,local_2c);
      iVar3 = local_20;
      iVar2 = local_28;
      iVar5 = local_30;
      if ((hObject != (HANDLE)0x0) && (local_30 != -1)) {
        *(undefined4 *)(&DAT_0065ea90 + local_30 * 0x22c) = 1;
        (**(code **)(*param_1 + 0x18))();
        param_1[3] = (int)hObject;
        param_1[0x8d] = 1;
        param_1[10] = 0;
        param_1[9] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        _wcsncpy_s((wchar_t *)(param_1 + 0xb),0x104,&DAT_0065e868 + iVar5 * 0x116,0xffffffff);
        cVar4 = HidD_GetAttributes(param_1[3],&cStack_10);
        if (cVar4 != '\0') {
          param_1[6] = (uint)auStack_8[0];
        }
        __security_check_cookie(local_4 ^ (uint)&local_38);
        return;
      }
      (*DAT_0065d3e0)(L"CDevG5KB::FindHIDDevice bFindMedida=%x, bFindWireless=%x",local_20,local_28)
      ;
      if (((iVar3 != 0) && (iVar2 == 0)) && (local_18 == 0)) {
        __security_check_cookie(local_4 ^ (uint)&local_38);
        return;
      }
      __security_check_cookie(local_4 ^ (uint)&local_38);
      return;
    }
  } while( true );
}



// ==== 00498eb0 FUN_00498eb0 ====
// why: calls HidD_GetAttributes

undefined4 __fastcall FUN_00498eb0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c [8];
  ushort local_4;
  
  if (param_1[6] < 1) {
    cVar1 = HidD_GetAttributes(param_1[3],local_c);
    if (cVar1 == '\0') {
      (*DAT_0065d3e0)(L"GetVersionNumber failed!");
    }
    else {
      param_1[6] = (uint)local_4;
      (*DAT_0065d3e0)(L"FW Version=0x%x",(uint)local_4);
    }
  }
  if ((*(int *)(param_1[4] + 0x24) != 0) &&
     (*(char *)(*(int *)(param_1[4] + 0x24) + 0x2d3a) != '\0')) {
    Sleep(0x14);
    puVar3 = &uStack_d;
    uStack_e = 0;
    uStack_d = 0;
    iVar2 = (**(code **)(*param_1 + 0x20))(&uStack_e);
    if (iVar2 != 0) {
      *(uint *)(param_1[4] + 0x304) = (uint)puVar3 >> 0x10 & 0xff;
      *(uint *)(param_1[4] + 0x308) = (uint)puVar3 >> 0x18;
    }
  }
  return 1;
}



// ==== 00498f60 FUN_00498f60 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData nOper err; string: CDevG5KB::AccessData read err=%d

void __thiscall
FUN_00498f60(int param_1,int param_2,DWORD param_3,int param_4,undefined1 param_5,undefined1 param_6
            ,uint param_7,undefined4 param_8)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c;
  undefined1 local_20b;
  undefined1 local_20a;
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_220;
  local_210 = param_2;
  iVar5 = 0;
  local_220 = param_3;
  local_21c = param_1;
  if ((param_3 == 0) || ((int)param_7 < 1)) {
    pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_0049916c:
    (*DAT_0065d3e0)(pwVar7,param_3);
  }
  else if ((param_4 == 1) || (param_4 == 2)) {
    local_214 = (int)(param_7 + ((int)param_7 >> 0x1f & 0x1ffU)) >> 9;
    uVar3 = param_7 & 0x800001ff;
    bVar6 = uVar3 == 0;
    local_218 = 0;
    if ((int)uVar3 < 0) {
      bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_214 = local_214 + 1;
    }
    if (0 < (int)param_7) {
      do {
        iVar4 = local_21c;
        _Size = param_7 - iVar5;
        if (0x1ff < (int)_Size) {
          _Size = 0x200;
        }
        FUN_004051e0(param_8);
        _memset(&local_20c,0,0x208);
        local_20c = ((*(int *)(*(int *)(local_210 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
        local_208 = (undefined1)local_214;
        local_20b = param_5;
        local_207 = (undefined1)local_218;
        local_218 = local_218 + 1;
        local_20a = param_6;
        local_209 = 0;
        local_206 = (undefined1)_Size;
        local_205 = (undefined1)(_Size >> 8);
        if ((param_4 == 1) && (iVar4 != 0)) {
          _memcpy(local_204,(void *)(iVar4 + iVar5),_Size);
        }
        iVar4 = 3;
        do {
          cVar1 = HidD_SetFeature(local_220,&local_20c,0x208);
          if (cVar1 != '\0') break;
          iVar4 = iVar4 + -1;
          FUN_004051e0(0x46);
        } while (0 < iVar4);
        if (iVar4 < 0) {
          param_3 = GetLastError();
          pwVar7 = L"CDevG5KB::AccessData err=%d";
          goto LAB_0049916c;
        }
        if (param_4 == 2) {
          FUN_004051e0(param_8);
          cVar1 = HidD_GetFeature(local_220,&local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_21c + iVar5),local_204,_Size);
        }
        iVar5 = iVar5 + _Size;
      } while (iVar5 < (int)param_7);
    }
  }
  else {
    (*DAT_0065d3e0)(L"CDevG5KB::AccessData nOper err");
  }
  __security_check_cookie(local_4 ^ (uint)&local_220);
  return;
}



// ==== 004991a0 FUN_004991a0 ====
// why: caller depth 1 of FUN_00498f60

uint __thiscall FUN_004991a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004991b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x5c))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,3,param_2,param_4,0x14);
  return (uint)(iVar2 != 0);
}



// ==== 004991e0 FUN_004991e0 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d

void __thiscall FUN_004991e0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [3];
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_3;
  if (*(int *)(param_1 + 0x23c) == 0) {
    local_21c = *(int *)(param_1 + 0xc);
    if ((local_21c == 0) || ((int)param_4 < 1)) {
      (*DAT_0065d3e0)(L"CDevG5KB::AccessData Param err, hDev=%x",local_21c);
    }
    else {
      local_218 = (int)(param_4 + ((int)param_4 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_4 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_4) {
        do {
          _Size = param_4 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_208 = (undefined1)local_218;
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[1] = 0x83;
          local_20c[2] = (undefined1)param_2;
          local_209 = 0;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData err=%d",DVar2);
            break;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),local_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_4);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x60))(param_2,param_3,param_4);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}



// ==== 004993f0 FUN_004993f0 ====
// why: caller depth 1 of FUN_00498f60; string: SetMacro failed

undefined4 __thiscall FUN_004993f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 100))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,5,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetMacro failed");
    return 0;
  }
  return 1;
}



// ==== 00499440 FUN_00499440 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d

void __thiscall FUN_00499440(int param_1,int param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [5];
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    DVar2 = *(DWORD *)(param_1 + 0xc);
    local_21c = DVar2;
    if ((DVar2 == 0) || ((int)param_3 < 1)) {
      pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499620:
      (*DAT_0065d3e0)(pwVar7,DVar2);
      (*DAT_0065d3e0)(L"GetMacro failed");
    }
    else {
      local_218 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_3 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_3) {
        do {
          _Size = param_3 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_20c[1] = 0x85;
          local_20c[2] = 0;
          local_20c[3] = 0;
          local_20c[4] = (undefined1)local_218;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            pwVar7 = L"CDevG5KB::AccessData err=%d";
            goto LAB_00499620;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),local_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_3);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x68))(param_2,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}



// ==== 00499640 FUN_00499640 ====
// why: caller depth 1 of FUN_00498f60

undefined4 __thiscall FUN_00499640(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x6c))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,4,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetLED failed");
    return 0;
  }
  return 1;
}



// ==== 00499690 FUN_00499690 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d

void __thiscall FUN_00499690(int param_1,int param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [5];
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    DVar2 = *(DWORD *)(param_1 + 0xc);
    local_21c = DVar2;
    if ((DVar2 == 0) || ((int)param_3 < 1)) {
      pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499870:
      (*DAT_0065d3e0)(pwVar7,DVar2);
      (*DAT_0065d3e0)(L"GetLED failed");
    }
    else {
      local_218 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_3 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_3) {
        do {
          _Size = param_3 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_20c[1] = 0x84;
          local_20c[2] = 0;
          local_20c[3] = 0;
          local_20c[4] = (undefined1)local_218;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            pwVar7 = L"CDevG5KB::AccessData err=%d";
            goto LAB_00499870;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),local_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_3);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x70))(param_2,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}



// ==== 00499890 FUN_00499890 ====
// why: caller depth 1 of FUN_00498f60

undefined4 __thiscall
FUN_00499890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004998a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x74))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,6,param_2,param_4,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetGame failed");
    return 0;
  }
  return 1;
}



// ==== 004998f0 FUN_004998f0 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d

void __thiscall FUN_004998f0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [3];
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_3;
  if (*(int *)(param_1 + 0x23c) == 0) {
    DVar2 = *(DWORD *)(param_1 + 0xc);
    local_21c = DVar2;
    if ((DVar2 == 0) || ((int)param_4 < 1)) {
      pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499ad3:
      (*DAT_0065d3e0)(pwVar7,DVar2);
      (*DAT_0065d3e0)(L"GetGame failed");
    }
    else {
      local_218 = (int)(param_4 + ((int)param_4 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_4 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_4) {
        do {
          _Size = param_4 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_208 = (undefined1)local_218;
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[1] = 0x86;
          local_20c[2] = (undefined1)param_2;
          local_209 = 0;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            pwVar7 = L"CDevG5KB::AccessData err=%d";
            goto LAB_00499ad3;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),local_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_4);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x78))(param_2,param_3,param_4);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}



// ==== 00499b00 FUN_00499b00 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d

void FUN_00499b00(int param_1,uint param_2)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [5];
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  local_210 = param_1;
  DVar2 = *(DWORD *)(unaff_EDI + 0xc);
  iVar4 = 0;
  local_21c = DVar2;
  if ((DVar2 == 0) || ((int)param_2 < 1)) {
    pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499cc0:
    (*DAT_0065d3e0)(pwVar7,DVar2);
    (*DAT_0065d3e0)(L"GetRealData failed");
  }
  else {
    local_218 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x1ffU)) >> 9;
    uVar3 = param_2 & 0x800001ff;
    bVar6 = uVar3 == 0;
    local_214 = 0;
    if ((int)uVar3 < 0) {
      bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_218 = local_218 + 1;
    }
    if (0 < (int)param_2) {
      do {
        _Size = param_2 - iVar4;
        if (0x1ff < (int)_Size) {
          _Size = 0x200;
        }
        FUN_004051e0(0x14);
        _memset(local_20c,0,0x208);
        local_207 = (undefined1)local_214;
        local_214 = local_214 + 1;
        local_20c[0] = ((*(int *)(*(int *)(unaff_EDI + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
        local_20c[1] = 0x88;
        local_20c[2] = 0;
        local_20c[3] = 0;
        local_20c[4] = (undefined1)local_218;
        local_206 = (undefined1)_Size;
        local_205 = (undefined1)(_Size >> 8);
        iVar5 = 3;
        do {
          cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
          if (cVar1 != '\0') break;
          iVar5 = iVar5 + -1;
          FUN_004051e0(0x46);
        } while (0 < iVar5);
        if (iVar5 < 0) {
          DVar2 = GetLastError();
          pwVar7 = L"CDevG5KB::AccessData err=%d";
          goto LAB_00499cc0;
        }
        FUN_004051e0(0x14);
        cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
        if (cVar1 == '\0') {
          DVar2 = GetLastError();
          (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
        }
        _memcpy((void *)(local_210 + iVar4),local_204,_Size);
        iVar4 = iVar4 + _Size;
      } while (iVar4 < (int)param_2);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}



// ==== 00499ce0 FUN_00499ce0 ====
// why: caller depth 1 of FUN_00498f60

undefined4 __thiscall FUN_00499ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x7c))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,10,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetLedRgbTab failed");
    return 0;
  }
  return 1;
}



// ==== 00499d30 FUN_00499d30 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d

void __thiscall FUN_00499d30(int param_1,int param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [5];
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    DVar2 = *(DWORD *)(param_1 + 0xc);
    local_21c = DVar2;
    if ((DVar2 == 0) || ((int)param_3 < 1)) {
      pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499f10:
      (*DAT_0065d3e0)(pwVar7,DVar2);
      (*DAT_0065d3e0)(L"GetLedRgbTab failed");
    }
    else {
      local_218 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_3 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_3) {
        do {
          _Size = param_3 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_20c[1] = 0x8a;
          local_20c[2] = 0;
          local_20c[3] = 0;
          local_20c[4] = (undefined1)local_218;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            pwVar7 = L"CDevG5KB::AccessData err=%d";
            goto LAB_00499f10;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),local_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_3);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x80))(param_2,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}



// ==== 00499f30 FUN_00499f30 ====
// why: caller depth 1 of FUN_00498f60

undefined4 __fastcall FUN_00499f30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x34))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0x11,0,1,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"ResetDevice failed");
    return 0;
  }
  return 1;
}



// ==== 00499f80 FUN_00499f80 ====
// why: caller depth 1 of FUN_00498f60

undefined4 __thiscall FUN_00499f80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x54))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0xb,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetScreenParam failed");
    return 0;
  }
  return 1;
}



// ==== 00499fd0 FUN_00499fd0 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d

void __thiscall FUN_00499fd0(int param_1,int param_2)

{
  char cVar1;
  DWORD DVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  wchar_t *pwVar5;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [6];
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_218;
  iVar3 = 0;
  local_218 = param_2;
  local_210 = param_1;
  if (param_2 == 0) {
    DVar2 = 0;
    pwVar5 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_0049a145:
    (*DAT_0065d3e0)(pwVar5,DVar2);
    (*DAT_0065d3e0)(L"GetPassword failed");
  }
  else {
    local_214 = 0;
    do {
      _Size = 6 - iVar3;
      if (0x1ff < (int)_Size) {
        _Size = 0x200;
      }
      FUN_004051e0(0x14);
      _memset(local_20c,0,0x208);
      local_20c[0] = ((*(int *)(*(int *)(unaff_EDI + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
      local_20c[5] = (char)local_214;
      local_214 = local_214 + 1;
      local_20c[1] = 0x82;
      local_20c[2] = 1;
      local_20c[3] = 0;
      local_20c[4] = 1;
      local_206 = (undefined1)_Size;
      local_205 = (undefined1)(_Size >> 8);
      iVar4 = 3;
      do {
        cVar1 = HidD_SetFeature(local_218,local_20c,0x208);
        if (cVar1 != '\0') break;
        iVar4 = iVar4 + -1;
        FUN_004051e0(0x46);
      } while (0 < iVar4);
      if (iVar4 < 0) {
        DVar2 = GetLastError();
        pwVar5 = L"CDevG5KB::AccessData err=%d";
        goto LAB_0049a145;
      }
      FUN_004051e0(0x14);
      cVar1 = HidD_GetFeature(local_218,local_20c,0x208);
      if (cVar1 == '\0') {
        DVar2 = GetLastError();
        (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
      }
      _memcpy((void *)(local_210 + iVar3),local_204,_Size);
      iVar3 = iVar3 + _Size;
    } while (iVar3 < 6);
  }
  __security_check_cookie(local_4 ^ (uint)&local_218);
  return;
}



// ==== 0049a160 FUN_0049a160 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData Param err, hDev=%x; string: CDevG5KB::AccessData err=%d; string: CDevG5KB::AccessData read err=%d; string: CDevG5KB::ReadPower  %d, %d; string: CDevG5KB::ReadPower failed

void __thiscall FUN_0049a160(int param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  DWORD DVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  byte local_220 [4];
  int local_21c;
  int local_218;
  byte *local_214;
  undefined1 *local_210;
  char local_20c [6];
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)local_220;
  local_214 = param_2;
  local_21c = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  local_210 = param_3;
  local_220[0] = 0;
  local_220[1] = 0;
  if (local_21c == 0) {
    DVar3 = 0;
    pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_0049a32d:
    (*DAT_0065d3e0)(pwVar7,DVar3);
    (*DAT_0065d3e0)(L"CDevG5KB::ReadPower failed");
  }
  else {
    local_218 = 0;
    do {
      _Size = 2 - iVar4;
      if (0x1ff < (int)_Size) {
        _Size = 0x200;
      }
      FUN_004051e0(0x14);
      _memset(local_20c,0,0x208);
      local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
      local_20c[5] = (char)local_218;
      local_218 = local_218 + 1;
      local_20c[1] = 0x87;
      local_20c[2] = 2;
      local_20c[3] = 0;
      local_20c[4] = 1;
      local_206 = (undefined1)_Size;
      local_205 = (undefined1)(_Size >> 8);
      iVar5 = 3;
      do {
        cVar2 = HidD_SetFeature(local_21c,local_20c,0x208);
        if (cVar2 != '\0') break;
        iVar5 = iVar5 + -1;
        FUN_004051e0(0x46);
      } while (0 < iVar5);
      if (iVar5 < 0) {
        DVar3 = GetLastError();
        pwVar7 = L"CDevG5KB::AccessData err=%d";
        goto LAB_0049a32d;
      }
      FUN_004051e0(0x14);
      cVar2 = HidD_GetFeature(local_21c,local_20c,0x208);
      if (cVar2 == '\0') {
        DVar3 = GetLastError();
        (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar3);
      }
      _memcpy(local_220 + iVar4,local_204,_Size);
      bVar1 = local_220[1];
      iVar4 = iVar4 + _Size;
    } while (iVar4 < 2);
    (*DAT_0065d3e0)(L"CDevG5KB::ReadPower  %d, %d",local_220[0],local_220[1]);
    if (local_214 != (byte *)0x0) {
      *local_214 = local_220[0];
    }
    if (local_210 != (undefined1 *)0x0) {
      bVar6 = (bVar1 & 0xf0) != 0;
      if ((bVar6) && ((bVar1 & 0xf) != 0)) {
        bVar6 = false;
      }
      *local_210 = bVar6;
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_220);
  return;
}



// ==== 0049a350 FUN_0049a350 ====
// why: caller depth 1 of FUN_00498f60

bool __thiscall FUN_0049a350(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return false;
  }
  iVar1 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,8,0,param_3,7);
  return iVar1 != 0;
}



// ==== 0049a380 FUN_0049a380 ====
// why: caller depth 1 of FUN_00498f60

bool __thiscall FUN_0049a380(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return false;
  }
  iVar1 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0xe,0,param_3,7);
  return iVar1 != 0;
}



// ==== 0049a3b0 FUN_0049a3b0 ====
// why: caller depth 1 of FUN_00498f60

bool __thiscall FUN_0049a3b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return false;
  }
  iVar1 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0xf,0,param_3,7);
  return iVar1 != 0;
}



// ==== 0049a3e0 FUN_0049a3e0 ====
// why: caller depth 1 of FUN_00499b00

undefined4 __thiscall FUN_0049a3e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  uVar1 = FUN_00499b00(param_2,param_3);
  return uVar1;
}



// ==== 0049a4c0 FUN_0049a4c0 ====
// why: string: keyinfo_to_hardware_code can't find macro id 0x%x

undefined * FUN_0049a4c0(uint *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  undefined8 uVar9;
  
  uVar3 = (int)*param_1 >> 0x18 & 0xff;
  bVar5 = 0;
  uVar6 = *param_1 & 0xffffff;
  if (uVar3 == 1) {
    switch(uVar6) {
    case 0x11:
      puVar4 = (undefined *)0x10101;
      break;
    case 0x12:
      puVar4 = (undefined *)0x10301;
      break;
    case 0x13:
      puVar4 = (undefined *)0x10201;
      break;
    case 0x14:
      puVar4 = (undefined *)0x10401;
      break;
    case 0x15:
      puVar4 = (undefined *)0x10501;
      break;
    case 0x16:
      puVar4 = (undefined *)0x32020101;
      break;
    case 0x17:
      puVar4 = (undefined *)0x32030101;
      break;
    default:
      goto switchD_0049a4ef_caseD_18;
    case 0x19:
      puVar4 = (undefined *)0x801;
      break;
    case 0x1a:
      puVar4 = (undefined *)0x901;
      break;
    case 0x1b:
      puVar4 = (undefined *)0x32ff0701;
      break;
    case 0x1c:
      puVar4 = (undefined *)0x32ff0601;
    }
    if ((param_2 != 0) && (*(int *)(param_2 + 0x14) == 1)) {
      if (uVar6 == 0x14) {
        return (undefined *)0x10501;
      }
      if (uVar6 == 0x15) {
        return (undefined *)0x10401;
      }
    }
  }
  else {
    if ((uVar3 == 4) || (uVar3 == 3)) {
      switch(uVar6) {
      case 0x21:
switchD_0049a5e8_caseD_88:
        return (undefined *)0x83010002;
      case 0x22:
switchD_0049a5e8_caseD_89:
        return (undefined *)0xcd000002;
      case 0x23:
switchD_0049a5e8_caseD_8a:
        return (undefined *)0xb7000002;
      case 0x24:
switchD_0049a5e8_caseD_8b:
        return (undefined *)0xb6000002;
      case 0x25:
switchD_0049a5e8_caseD_8c:
        return (undefined *)0xb5000002;
      case 0x26:
switchD_0049a5e8_caseD_8d:
        return (undefined *)0xe9000002;
      case 0x27:
switchD_0049a5e8_caseD_8e:
        return (undefined *)0xea000002;
      case 0x28:
switchD_0049a5e8_caseD_8f:
        return (undefined *)0xe2000002;
      case 0x29:
        return (undefined *)0x6f000002;
      case 0x2a:
        return (undefined *)0x70000002;
      case 0x30:
        return (undefined *)0x8a010002;
      case 0x31:
switchD_0049a5e8_caseD_99:
        return (undefined *)0x92010002;
      case 0x32:
switchD_0049a5e8_caseD_9a:
        return (undefined *)0x94010002;
      case 0x33:
        return (undefined *)0x21020002;
      case 0x34:
switchD_0049a5e8_caseD_9b:
        return (undefined *)0x23020002;
      case 0x35:
        return (undefined *)0x24020002;
      case 0x36:
        return (undefined *)0x25020002;
      case 0x37:
        return (undefined *)0x26020002;
      case 0x38:
        return (undefined *)0x27020002;
      case 0x39:
        return (undefined *)0x2a020002;
      }
    }
    else {
      if (uVar3 == 2) {
        bVar5 = (byte)param_1[1];
        if (bVar5 == 0) {
          if (*(char *)((int)param_1 + 5) == -6) {
            return (undefined *)0xd;
          }
          if (*(char *)((int)param_1 + 5) == -5) {
            return (undefined *)0x10d;
          }
        }
        bVar2 = *(byte *)((int)param_1 + 5);
        if ((bVar2 == 0) || (5 < bVar2)) {
          switch(bVar2) {
          case 0x40:
            return (undefined *)0x2c000000;
          default:
            bVar2 = FUN_00481e90();
            uVar3 = FUN_00481e90();
            bVar8 = (bVar5 & 1) != 0;
            if ((bVar5 & 2) != 0) {
              bVar8 = bVar8 | 2;
            }
            if ((bVar5 & 4) != 0) {
              bVar8 = bVar8 | 4;
            }
            if ((bVar5 & 8) != 0) {
              bVar8 = bVar8 | 8;
            }
            if ((bVar5 & 0x10) != 0) {
              bVar8 = bVar8 | 0x10;
            }
            if ((bVar5 & 0x20) != 0) {
              bVar8 = bVar8 | 0x20;
            }
            if ((bVar5 & 0x40) != 0) {
              bVar8 = bVar8 | 0x40;
            }
            if ((char)bVar5 < '\0') {
              bVar8 = bVar8 | 0x80;
            }
            return (undefined *)((((uVar3 & 0xff) << 8 | (uint)bVar2) << 8 | (uint)bVar8) << 8);
          case 0x88:
            goto switchD_0049a5e8_caseD_88;
          case 0x89:
            goto switchD_0049a5e8_caseD_89;
          case 0x8a:
            goto switchD_0049a5e8_caseD_8a;
          case 0x8b:
            goto switchD_0049a5e8_caseD_8b;
          case 0x8c:
            goto switchD_0049a5e8_caseD_8c;
          case 0x8d:
            goto switchD_0049a5e8_caseD_8d;
          case 0x8e:
            goto switchD_0049a5e8_caseD_8e;
          case 0x8f:
            goto switchD_0049a5e8_caseD_8f;
          case 0x99:
            goto switchD_0049a5e8_caseD_99;
          case 0x9a:
            goto switchD_0049a5e8_caseD_9a;
          case 0x9b:
            goto switchD_0049a5e8_caseD_9b;
          }
        }
        goto switchD_0049a84b_caseD_ad;
      }
      if (uVar3 == 5) {
        uVar3 = param_1[1];
        uVar9 = FUN_00479c70();
        iVar7 = (int)((ulonglong)uVar9 >> 0x20);
        if ((int)uVar9 != 0) {
          cVar1 = *(char *)(iVar7 + 0xf);
          uVar3 = 0;
          bVar5 = 1;
          if (cVar1 == '\0') {
            uVar3 = 1;
            bVar5 = *(byte *)(iVar7 + 0xe);
          }
          else if (cVar1 == '\x02') {
            uVar3 = 4;
          }
          else if (cVar1 == '\x01') {
            uVar3 = 2;
          }
          return (undefined *)(((uint)bVar5 << 8 | uVar3) << 8 | 3);
        }
        (*DAT_0065d3e0)(L"keyinfo_to_hardware_code can\'t find macro id 0x%x",uVar3);
      }
      else if (uVar3 == 6) {
        switch(uVar6) {
        case 0x43:
          return (undefined *)0x1d0100;
        case 0x48:
          return (undefined *)0x160100;
        case 0x51:
          return (undefined *)0x3d0400;
        case 0x52:
          return (undefined *)0xf0800;
        case 0x54:
          return (undefined *)0x150800;
        case 0x55:
          return (undefined *)0x70800;
        case 0x56:
          return (undefined *)0x2e0100;
        case 0x57:
          return (undefined *)0x2d0100;
        case 0x5a:
          return &DAT_004c0500;
        case 0x60:
          return (undefined *)0x7;
        case 0x61:
          return (undefined *)0x1000007;
        case 0x62:
          return (undefined *)0x2000007;
        case 99:
          return (undefined *)0x4000007;
        case 100:
          return (undefined *)0x2000010;
        case 0x65:
          return (undefined *)0x4000010;
        case 0x66:
          return (undefined *)0x7000005;
        case 0x67:
          return (undefined *)0x7000006;
        case 0x68:
          return (undefined *)0x7000007;
        case 0x69:
          return (undefined *)0x7000008;
        case 0x6a:
          return (undefined *)0x7000009;
        case 0xa2:
switchD_0049a74a_caseD_a2:
          return (undefined *)0x0;
        }
      }
      else {
        if (uVar3 == 9) {
          if (uVar6 != 0) {
            puVar4 = (undefined *)FUN_00468190();
            return puVar4;
          }
switchD_0049a84b_caseD_ad:
          return (undefined *)param_1[2];
        }
        if (uVar3 == 8) {
          switch(uVar6) {
          case 0xa2:
          case 0xa7:
            goto switchD_0049a74a_caseD_a2;
          case 0xa4:
            switch(*(ushort *)((int)param_1 + 10) & 0xff) {
            case 0xf0:
              uVar3 = 1;
              bVar5 = 1;
              break;
            case 0xf1:
              uVar3 = 1;
              bVar5 = 2;
              break;
            case 0xf2:
              uVar3 = 1;
              bVar5 = 3;
              break;
            case 0xf3:
              uVar3 = 1;
              bVar5 = 4;
              break;
            case 0xf4:
              uVar3 = 1;
              bVar5 = 5;
              break;
            default:
              uVar3 = 0;
            }
            return (undefined *)
                   (((((int)param_1[2] >> 8 & 0xffU) << 8 | (uint)(byte)param_1[2]) << 8 |
                    (uint)bVar5) << 8 | uVar3);
          case 0xa6:
            return (undefined *)((param_1[2] - 1) * 0x1000000 | 0x505);
          case 0xa8:
            return (undefined *)0x105;
          case 0xa9:
            return (undefined *)0x205;
          case 0xaa:
            return (undefined *)0x405;
          case 0xab:
            return (undefined *)0xe;
          case 0xad:
            goto switchD_0049a84b_caseD_ad;
          case 0xae:
            return (undefined *)0x8;
          }
        }
      }
    }
switchD_0049a4ef_caseD_18:
    puVar4 = (undefined *)0xffffffff;
  }
  return puVar4;
}



// ==== 0049abe8 FUN_0049abe8 ====
// why: string: StMacro_To_HdMacro: get wrong hid

void FUN_0049abe8(int param_1,int param_2,ushort *param_3,void *param_4,int param_5,
                 undefined1 param_6)

{
  wchar_t *_Src;
  ushort uVar1;
  char cVar2;
  char cVar3;
  size_t sVar4;
  int iVar5;
  byte bVar6;
  ushort *puVar7;
  ushort *puVar8;
  int unaff_EDI;
  uint in_stack_00001018;
  int in_stack_00001020;
  
  _memset(&stack0x00000019,0,0xfff);
  _Src = (wchar_t *)(unaff_EDI + 0x14);
  if (_Src == (wchar_t *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = _wcsnlen(_Src,0x1e);
  }
  sVar4 = sVar4 * 2;
  param_6 = (undefined1)sVar4;
  _memcpy(&stack0x00000019,_Src,sVar4);
  param_1 = 0;
  sVar4 = sVar4 + 1;
  if (0 < *(int *)(unaff_EDI + 0x58)) {
    puVar7 = (ushort *)(unaff_EDI + 0x5c);
    do {
      param_1 = param_1 + 1;
      uVar1 = *puVar7;
      puVar8 = puVar7 + 6;
      param_3 = puVar8;
      if (uVar1 == 0) break;
      cVar2 = '\0';
      switch(uVar1) {
      case 0x10:
      case 0xa0:
        cVar3 = -0x1f;
        break;
      case 0x11:
      case 0xa2:
        cVar3 = -0x20;
        break;
      case 0x12:
      case 0xa4:
        cVar3 = -0x1e;
        break;
      default:
        goto switchD_0049ac78_caseD_13;
      case 0x5b:
        cVar3 = -0x1d;
        break;
      case 0x5c:
        cVar3 = -0x19;
        break;
      case 0xa1:
        cVar3 = -0x1b;
        break;
      case 0xa3:
        cVar3 = -0x1c;
        break;
      case 0xa5:
        cVar3 = -0x1a;
        break;
      case 0xf0:
        cVar3 = '\x01';
        cVar2 = '\x02';
        goto LAB_0049ac83;
      case 0xf1:
        cVar3 = '\x02';
        cVar2 = '\x02';
        goto LAB_0049ac83;
      case 0xf2:
        cVar3 = '\x04';
        cVar2 = '\x02';
        goto LAB_0049ac83;
      case 0xf3:
        cVar3 = '\b';
        cVar2 = '\x02';
        goto LAB_0049ac83;
      case 0xf4:
        cVar3 = '\x10';
        cVar2 = '\x02';
        goto LAB_0049ac83;
      case 0xf5:
        cVar3 = (char)puVar7[4];
        goto LAB_0049adca;
      case 0xf6:
        cVar3 = -(char)puVar7[4];
LAB_0049adca:
        cVar2 = '\x05';
        goto LAB_0049adcc;
      case 0xf8:
        cVar3 = (char)puVar7[4];
        cVar2 = '\x03';
        goto LAB_0049adcc;
      case 0xf9:
        cVar3 = (char)puVar7[4];
        cVar2 = '\x04';
LAB_0049adcc:
        if (cVar3 != '\0') goto LAB_0049ac83;
switchD_0049ac78_caseD_13:
        iVar5 = 0;
        do {
          if ((byte)(&DAT_00619151)[iVar5 * 2] == uVar1) {
            cVar3 = (&DAT_00619150)[iVar5 * 2];
            goto LAB_0049adf4;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x73);
        cVar3 = '\0';
        goto LAB_0049adf4;
      }
      cVar2 = '\x01';
LAB_0049ac83:
      if ((*(int *)(in_stack_00001020 + 0x10) == 0) ||
         (*(int *)(*(int *)(in_stack_00001020 + 0x10) + 0x14) != 1)) {
LAB_0049adf4:
        if (cVar3 != '\0') goto LAB_0049acad;
        (*DAT_0065d3e0)(L"StMacro_To_HdMacro: get wrong hid");
      }
      else {
        if (uVar1 == 0xf3) {
          cVar3 = '\x10';
        }
        else {
          if (uVar1 != 0xf4) goto LAB_0049adf4;
          cVar3 = '\b';
        }
LAB_0049acad:
        param_2 = *(int *)(puVar7 + 2);
        if (0xfffff < param_2) {
          param_2 = 0xfffff;
        }
        bVar6 = (byte)((uint)param_2 >> 0x10) & 0xf | cVar2 << 4;
        (&param_6)[sVar4] = bVar6;
        if ((((cVar2 != '\x03') && (cVar2 != '\x04')) && (cVar2 != '\x05')) && (puVar7[1] == 0)) {
          (&param_6)[sVar4] = bVar6 | 0x80;
        }
        (&stack0x00000019)[sVar4] = (char)((uint)param_2 >> 8);
        (&stack0x0000001a)[sVar4] = (char)param_2;
        (&stack0x0000001b)[sVar4] = cVar3;
        sVar4 = sVar4 + 4;
      }
      puVar7 = puVar8;
    } while (param_1 < *(int *)(param_5 + 0x58));
  }
  if (param_4 != (void *)0x0) {
    _memcpy(param_4,&param_6,sVar4);
  }
  __security_check_cookie(in_stack_00001018 ^ (uint)&param_1);
  return;
}



// ==== 0049bad0 FUN_0049bad0 ====
// why: string: CDevG5KB::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, nFw=%d, nMatrixLen=%d, bApply...; string: Reset using cmd; string: nMacroBufferSize > sizeof(bMacro)

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FUN_0049bad0(int *param_1,int param_2,HWND param_3,UINT param_4,uint param_5,undefined4 param_6)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  UINT Msg;
  WPARAM wParam;
  undefined4 uVar16;
  DWORD DVar17;
  int local_3bb8;
  byte *pbStack_3bb4;
  byte *pbStack_3bb0;
  int iStack_3bac;
  HWND local_3ba8;
  int *local_3ba4;
  undefined2 *puStack_3ba0;
  byte *pbStack_3b9c;
  int iStack_3b98;
  uint uStack_3b94;
  DWORD local_3b90;
  undefined4 uStack_3b8c;
  uint uStack_3b88;
  undefined1 uStack_3b84;
  undefined1 auStack_3b83 [125];
  char cStack_3b06;
  char cStack_3b05;
  undefined2 uStack_3b04;
  undefined1 uStack_390a;
  undefined1 uStack_3909;
  undefined2 uStack_3904;
  byte abStack_3901 [4349];
  undefined2 uStack_2804;
  ushort auStack_2802 [5119];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_3bb8;
  local_3bb8 = param_2;
  local_3ba8 = param_3;
  local_3ba4 = param_1;
  if (((param_2 == 0) || (*(int *)(param_2 + 4) == 0)) || (param_1[4] == 0)) goto LAB_0049c6c3;
  BVar4 = IsWindow(param_3);
  if (BVar4 == 0) {
    param_3 = (HWND)0x0;
    local_3ba8 = (HWND)0x0;
  }
  iVar9 = *(int *)(param_1[4] + 0x24);
  bVar1 = *(byte *)(iVar9 + 0x2f94);
  param_1[0xa6] = (uint)bVar1;
  param_1[0xa5] = (uint)bVar1;
  DVar17 = DAT_00658b00;
  pcVar3 = *(code **)(*param_1 + 0x90);
  local_3b90 = DAT_00658b00;
  param_1[0xa0] = (int)param_3;
  (*pcVar3)();
  uStack_3b8c = 0;
  iStack_3b98 = DAT_00658b0c;
  if (param_1[0x8f] == 0) {
    (*DAT_0065d3e0)(L"CDevG5KB::ApplySetting: hWnd=%x, nFlag=%x, nData=%x, nFw=%d, nMatrixLen=%d, bApplyNoDev=%d"
                    ,param_3,param_5,param_6,*(undefined4 *)(param_1[4] + 0x18),param_1[0xa5],
                    DAT_00658b0c);
  }
  if (param_3 != (HWND)0x0) {
    PostMessageW(param_3,param_4,0x14,0);
  }
  uVar15 = 1;
  param_1[7] = 1;
  Sleep(DVar17);
  if (((param_5 & 0x20) == 0) || (param_1[8] = 1, *(char *)(iVar9 + 0x2d90) == '\0')) {
LAB_0049bc2e:
    if ((param_5 & 1) != 0) {
      abStack_3901[0x7fd] = 0;
      _memset(abStack_3901 + 0x7fe,0,0x8ff);
      uStack_2804._0_1_ = 0;
      _memset(abStack_3901 + 0x10fe,0,0x27ff);
      uStack_3b94 = *(uint *)(*(int *)(param_1[4] + 0x24) + 4);
      iStack_3bac = 0;
      if (0x2800 < uStack_3b94) {
        MessageBoxW(local_3ba8,L"nMacroBufferSize > sizeof(bMacro)",L"",0);
      }
      iVar5 = FUN_0049af70(param_1,local_3bb8,abStack_3901 + 0x10fd,&iStack_3bac);
      if ((iVar5 == 0) && ((*DAT_0065d3e0)(L"FillMatrix Err"), iStack_3b98 == 0)) goto LAB_0049c678;
      (*DAT_0065d3e0)(L"Matrix (Save)-------------------------");
      puStack_3ba0 = (undefined2 *)0x0;
      pbStack_3bb0 = (byte *)0x4;
      do {
        if (((*(uint *)(iVar9 + 0x2d54) & uVar15) == 0) &&
           ((*(uint *)(local_3bb8 + 0x30) & uVar15) != 0)) {
          iVar5 = FUN_0049ba90();
          puStack_3ba0 = (undefined2 *)((int)puStack_3ba0 + iVar5);
        }
        puVar10 = puStack_3ba0;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        pbStack_3bb0 = pbStack_3bb0 + -1;
      } while (pbStack_3bb0 != (byte *)0x0);
      (*DAT_0065d3e0)(L"nKeyDirty=0x%x, nMacroNum=%d, nNeedWriteMacro=%d",
                      *(undefined4 *)(local_3bb8 + 0x30),iStack_3bac,puStack_3ba0);
      if (0 < (int)puVar10) {
        iVar5 = 0;
        pbStack_3bb4 = (byte *)(local_3bb8 + 0x38);
        uVar15 = 1;
        do {
          if ((((*(uint *)(iVar9 + 0x2d54) & uVar15) == 0) && (iVar5 != *(int *)(local_3bb8 + 0x34))
              ) && (iVar6 = FUN_0049ba90(), 0 < iVar6)) {
            *(uint *)(local_3bb8 + 0x30) = *(uint *)(local_3bb8 + 0x30) | uVar15;
          }
          pbStack_3bb4 = pbStack_3bb4 + 0x900;
          iVar5 = iVar5 + 1;
          uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        } while (iVar5 < 4);
      }
      FUN_0049b400(abStack_3901 + 0x7fd,*(undefined4 *)(iVar9 + 0x2d54),
                   *(undefined4 *)(local_3bb8 + 0x30));
      iVar5 = param_1[0xa5];
      pbStack_3bb4 = abStack_3901 + 0x7fd;
      iVar6 = 0;
      do {
        uVar15 = 1 << ((byte)iVar6 & 0x1f);
        if (((*(uint *)(iVar9 + 0x2d54) & uVar15) == 0) &&
           ((*(uint *)(local_3bb8 + 0x30) & uVar15) != 0)) {
          iVar7 = (**(code **)(*param_1 + 0x5c))(iVar6,pbStack_3bb4,iVar5 * 4);
          if ((iVar7 == 0) && ((*DAT_0065d3e0)(L"SetMatrix Err, layer=%d",iVar6), iStack_3b98 == 0))
          goto LAB_0049c678;
          iVar7 = (**(code **)(*param_1 + 0x94))();
          if (iVar7 != 0) goto LAB_0049bfa5;
          Sleep(0x32);
        }
        uVar15 = uStack_3b94;
        pbStack_3bb4 = pbStack_3bb4 + iVar5 * 4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      *(undefined4 *)(local_3bb8 + 0x30) = 0;
      if ((0 < iStack_3bac) && (0 < (int)puStack_3ba0)) {
        if (DAT_0065d3dc != 0) {
          (*DAT_0065d3e0)(L"Macro data: (total size=%d)",uStack_3b94);
          FUN_00407c90(abStack_3901 + 0x10fd,uVar15,0x20,0);
          pbStack_3bb4 = (byte *)0x0;
          if (0 < iStack_3bac) {
            do {
              uStack_3904 = 0;
              uVar13 = (uint)*(ushort *)(abStack_3901 + (int)pbStack_3bb4 * 4 + 0x10ff);
              uVar15 = (uint)*(ushort *)(abStack_3901 + (int)pbStack_3bb4 * 4 + 0x10fd);
              FUN_00407fb0(L"Macro[%d]: addr=0x%x(%d), size=0x%x(%d include name size), name=",
                           pbStack_3bb4,uVar15,uVar15,uVar13,uVar13);
              pbVar8 = (byte *)(uint)abStack_3901[uVar15 + 0x10fd];
              pbStack_3b9c = abStack_3901 + uVar15 + 0x10fe;
              pbStack_3bb0 = pbVar8;
              FUN_00408000(pbStack_3b9c);
              FUN_00407fb0(L", data=\n");
              FUN_004080a0(pbVar8 + (int)pbStack_3b9c,(uVar13 - (int)pbVar8) + -1);
              (*DAT_0065d3e0)(&uStack_3904);
              pbStack_3bb4 = pbStack_3bb4 + 1;
            } while ((int)pbStack_3bb4 < iStack_3bac);
          }
        }
        Sleep(local_3b90);
        piVar12 = local_3ba4;
        iVar5 = (**(code **)(*local_3ba4 + 100))(abStack_3901 + 0x10fd,uStack_3b94);
        if ((iVar5 == 0) && (iStack_3b98 == 0)) goto LAB_0049c678;
        iVar5 = (**(code **)(*piVar12 + 0x94))();
        if (iVar5 != 0) {
LAB_0049bfa5:
          wParam = 0;
          Msg = 0x42d;
          goto LAB_0049c66a;
        }
        Sleep(0x32);
        param_1 = local_3ba4;
      }
    }
    uStack_3b88 = (uint)((uint)*(byte *)(iVar9 + 0x2ebc) == *(uint *)(local_3bb8 + 0x243c));
    if ((((param_5 & 0x10) != 0) && (uStack_3b88 != 0)) || ((param_5 & 0x20) != 0)) {
      pbStack_3bb0 = (byte *)(uint)*(byte *)(iVar9 + 0x2f9d);
      bVar1 = *(byte *)(iVar9 + 0x2f9b);
      bVar2 = *(byte *)(iVar9 + 0x2f9c);
      uStack_3904 = uStack_3904 & 0xff00;
      _memset((void *)((int)&uStack_3904 + 1),0,0x761);
      (*DAT_0065d3e0)(L"bDirtyFlag = 0x%x",*(undefined4 *)(local_3bb8 + 0x2444));
      iStack_3bac = 0;
      if (*(char *)(iVar9 + 0x2f8c) != '\0') {
        puStack_3ba0 = &uStack_3904;
        pbStack_3bb0 = (byte *)(&uStack_3904 + (int)pbStack_3bb0 * 0x3f);
        pbStack_3bb4 = (byte *)(&uStack_3904 + (uint)bVar1 * 0x3f);
        pbStack_3b9c = (byte *)(&uStack_3904 + (uint)bVar2 * 0x3f);
        uStack_3b94 = 0x912;
        do {
          piVar12 = local_3ba4;
          if ((*(uint *)(local_3bb8 + 0x2444) & 1 << ((byte)iStack_3bac & 0x1f)) != 0) {
            iVar5 = 0;
            piVar14 = (int *)(iVar9 + 0x18);
            if (0 < *(int *)(iVar9 + 0x2d28)) {
              do {
                if (*piVar14 != 0) {
                  uVar16 = *(undefined4 *)(local_3bb8 + (iVar5 + uStack_3b94) * 4);
                  uVar15 = (uint)*(byte *)((int)piVar14 + 0xd);
                  if ((int)uVar15 < local_3ba4[0xa6]) {
                    pbStack_3bb4[uVar15] = (byte)uVar16;
                    pbStack_3b9c[uVar15] = (byte)((uint)uVar16 >> 8);
                    pbStack_3bb0[uVar15] = (byte)((uint)uVar16 >> 0x10);
                  }
                }
                iVar5 = iVar5 + 1;
                piVar14 = piVar14 + 4;
              } while (iVar5 < *(int *)(iVar9 + 0x2d28));
            }
            puVar10 = puStack_3ba0;
            if (DAT_0065d3dc != 0) {
              (*DAT_0065d3e0)(L"ColorGroup[%d]: ",iStack_3bac);
              puVar10 = puStack_3ba0;
              FUN_00407c90(puStack_3ba0,0x40,0,0);
              FUN_00407c90(puVar10 + 0x3f,0x40,0,0);
              FUN_00407c90(puVar10 + 0x7e,0x40,0,0);
            }
            Sleep(local_3b90);
            iVar5 = (**(code **)(*piVar12 + 0x74))(iStack_3bac,puVar10,0x17a);
            if ((iVar5 == 0) && (piVar12 = local_3ba4, iStack_3b98 == 0)) goto LAB_0049c678;
            iVar5 = (**(code **)(*piVar12 + 0x94))();
            if (iVar5 != 0) goto LAB_0049c45b;
          }
          uStack_3b94 = uStack_3b94 + 0x90;
          pbStack_3bb4 = pbStack_3bb4 + 0x17a;
          pbStack_3bb0 = pbStack_3bb0 + 0x17a;
          puStack_3ba0 = puStack_3ba0 + 0xbd;
          pbStack_3b9c = pbStack_3b9c + 0x17a;
          iStack_3bac = iStack_3bac + 1;
          param_1 = local_3ba4;
        } while (iStack_3bac < (int)(uint)*(byte *)(iVar9 + 0x2f8c));
      }
      *(undefined4 *)(local_3bb8 + 0x2444) = 0;
    }
    if ((param_5 & 0x102) == 0) {
LAB_0049c670:
      uStack_3b8c = 1;
    }
    else {
      if ((uStack_3b88 == 0) && ((param_5 & 0x40) != 0)) {
        uStack_3904 = uStack_3904 & 0xff00;
        _memset((void *)((int)&uStack_3904 + 1),0,0x3ff);
        pbStack_3bb0 = (byte *)(iVar9 + 0x2fd6);
        pbStack_3b9c = (byte *)0x0;
        puVar11 = (undefined4 *)(local_3bb8 + 0x2f90);
        do {
          if ((*(uint *)(iVar9 + 0x2d44) & 1 << ((byte)pbStack_3b9c & 0x1f)) == 0) {
            uVar16 = puVar11[-1];
            iVar5 = (uint)*pbStack_3bb0 * 0x15 + -0x3904;
            *(char *)((int)&uStack_3904 + (uint)*(byte *)(iVar9 + 0x2f98) + iVar5 + 0x3904) =
                 (char)uVar16;
            *(char *)((int)&uStack_3904 + (uint)*(byte *)(iVar9 + 0x2f99) + iVar5 + 0x3904) =
                 (char)((uint)uVar16 >> 8);
            *(char *)((int)&uStack_3904 + (uint)*(byte *)(iVar9 + 0x2f9a) + iVar5 + 0x3904) =
                 (char)((uint)uVar16 >> 0x10);
            uVar16 = *puVar11;
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f98) + iVar5 + 0x3904] = (byte)uVar16;
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f99) + iVar5 + 0x3904] =
                 (byte)((uint)uVar16 >> 8);
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f9a) + iVar5 + 0x3904] =
                 (byte)((uint)uVar16 >> 0x10);
            uVar16 = puVar11[1];
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f98) + iVar5 + 0x3907] = (byte)uVar16;
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f99) + iVar5 + 0x3907] =
                 (byte)((uint)uVar16 >> 8);
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f9a) + iVar5 + 0x3907] =
                 (byte)((uint)uVar16 >> 0x10);
            uVar16 = puVar11[2];
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f98) + iVar5 + 0x390a] = (byte)uVar16;
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f99) + iVar5 + 0x390a] =
                 (byte)((uint)uVar16 >> 8);
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f9a) + iVar5 + 0x390a] =
                 (byte)((uint)uVar16 >> 0x10);
            uVar16 = puVar11[3];
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f98) + iVar5 + 0x390d] = (byte)uVar16;
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f99) + iVar5 + 0x390d] =
                 (byte)((uint)uVar16 >> 8);
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f9a) + iVar5 + 0x390d] =
                 (byte)((uint)uVar16 >> 0x10);
            uVar16 = puVar11[4];
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f98) + iVar5 + 0x3910] = (byte)uVar16;
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f99) + iVar5 + 0x3910] =
                 (byte)((uint)uVar16 >> 8);
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f9a) + iVar5 + 0x3910] =
                 (byte)((uint)uVar16 >> 0x10);
            uVar16 = puVar11[5];
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f98) + iVar5 + 0x3913] = (byte)uVar16;
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f99) + iVar5 + 0x3913] =
                 (byte)((uint)uVar16 >> 8);
            abStack_3901[(uint)*(byte *)(iVar9 + 0x2f9a) + iVar5 + 0x3913] =
                 (byte)((uint)uVar16 >> 0x10);
          }
          pbStack_3bb0 = pbStack_3bb0 + 0x28;
          pbStack_3b9c = pbStack_3b9c + 1;
          puVar11 = puVar11 + 9;
        } while ((int)pbStack_3b9c < 0x13);
        Sleep(0x78);
        FUN_00407e30(&uStack_3904,0x1a4,0x15,3);
        if (*(char *)(iVar9 + 0x2f95) == '\0') {
          uVar16 = 0x1a4;
          puVar10 = &uStack_3904;
        }
        else {
          uStack_3b04._0_1_ = 0;
          _memset((undefined1 *)((int)&uStack_3b04 + 1),0,0x1ff);
          _memcpy(&uStack_3b04,&uStack_3904,0x1a4);
          uStack_390a = 0x5a;
          uStack_3909 = 0xa5;
          uVar16 = 0x200;
          puVar10 = &uStack_3b04;
        }
        iVar5 = (**(code **)(*param_1 + 0x7c))(puVar10,uVar16);
        iVar6 = (**(code **)(*param_1 + 0x94))();
        if (iVar6 != 0) {
          wParam = 0;
          Msg = 0x42d;
          goto LAB_0049c66a;
        }
        if ((iVar5 == 0) && ((*DAT_0065d3e0)(L"SetLedRgbTab error"), iStack_3b98 == 0))
        goto LAB_0049c678;
      }
      Sleep(local_3b90);
      uStack_3b84 = 0;
      _memset(auStack_3b83,0,0x7f);
      iVar5 = 0;
      if (iStack_3b98 == 0) {
        while( true ) {
          _memset(&uStack_3b84,0,0x80);
          iVar6 = (**(code **)(*param_1 + 0x70))(&uStack_3b84,0x80);
          if (iVar6 == 0) break;
          iVar6 = (**(code **)(*param_1 + 0x94))();
          if (iVar6 != 0) goto LAB_0049c45b;
          if (DAT_0065d3dc != 0) {
            FUN_00407c90(&uStack_3b84,0x80,10,L"Cfg(Load): ");
          }
          if ((cStack_3b06 == 'Z') && (cStack_3b05 == -0x5b)) goto LAB_0049c5b0;
          iVar5 = iVar5 + 1;
          if (4 < iVar5) {
            (*DAT_0065d3e0)(L"!!!Failed, Get wrong led profile data.");
            goto LAB_0049c678;
          }
          (*DAT_0065d3e0)(L"!!!Get wrong led profile data, retry now.");
          Sleep(100);
        }
        (*DAT_0065d3e0)(L"GetLED failed");
      }
      else {
LAB_0049c5b0:
        if (*(char *)(iVar9 + 0x2d8f) == '\x01') {
          FUN_0049b4b0(local_3bb8,param_5);
        }
        else {
          FUN_0049b6a0(param_1,local_3bb8,param_5);
        }
        Sleep((-(uint)((param_5 & 0x40) != 0) & 0x28) + 0x3c);
        if (DAT_0065d3dc != 0) {
          FUN_00407c90(&uStack_3b84,0x80,10,L"Cfg(Save): ");
        }
        iVar9 = (**(code **)(*param_1 + 0x6c))(&uStack_3b84,0x80);
        if ((iVar9 != 0) || (iStack_3b98 != 0)) {
          iVar9 = (**(code **)(*param_1 + 0x94))();
          if (iVar9 == 0) {
            if (local_3ba8 == (HWND)0x0) goto LAB_0049c670;
            wParam = 0x28;
            Msg = param_4;
          }
          else {
            wParam = 0;
            Msg = 0x42d;
          }
LAB_0049c66a:
          PostMessageW(local_3ba8,Msg,wParam,0);
          goto LAB_0049c670;
        }
      }
    }
  }
  else {
    (*DAT_0065d3e0)(L"Reset using cmd");
    iVar5 = (**(code **)(*param_1 + 0x34))(0);
    if ((iVar5 != 0) || (iStack_3b98 != 0)) {
      param_5 = 0;
      goto LAB_0049bc2e;
    }
  }
LAB_0049c678:
  piVar12 = local_3ba4;
  local_3ba4[7] = 0;
  local_3ba4[8] = 0;
  if (local_3ba8 == (HWND)0x0) {
    DVar17 = 0x1e;
  }
  else {
    PostMessageW(local_3ba8,param_4,100,0);
    DVar17 = 500;
  }
  Sleep(DVar17);
  (**(code **)(*piVar12 + 0x90))();
LAB_0049c6c3:
  __security_check_cookie(local_4 ^ (uint)&local_3bb8);
  return;
LAB_0049c45b:
  wParam = 0;
  Msg = 0x42d;
  goto LAB_0049c66a;
}



// ==== 0049c6e0 FUN_0049c6e0 ====
// why: caller depth 1 of HidD_SetFeature; calls HidD_SetFeature; string: CDevG5KB::AccessData_Page Param err; string: CDevG5KB::AccessData_Page cancel by user; string: CDevG5KB::AccessData_Page err=%d; string: CDevG5KB::AccessData_Page send package %d ok, dataUnit=%d; string: CDevG5KB::AccessData_Page send this page, Buffer=%x %x %x %x %x; string: CDevG5KB::AccessData_Page timeout, k=%d

void __fastcall
FUN_0049c6e0(int *param_1,code *param_2,int param_3,undefined4 param_4,int param_5,uint param_6,
            undefined1 param_7)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iStack_248;
  DWORD DStack_244;
  int iStack_240;
  int iStack_23c;
  int *local_238;
  int iStack_234;
  int iStack_230;
  int local_22c;
  uint uStack_228;
  code *local_224;
  int iStack_220;
  int local_21c;
  uint uStack_218;
  undefined4 uStack_214;
  uint uStack_210;
  char acStack_20c [4];
  char cStack_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&iStack_248;
  local_22c = param_3;
  local_21c = param_5;
  local_238 = param_1;
  local_224 = param_2;
  if ((param_5 == 0) || ((int)param_6 < 1)) {
    (*DAT_0065d3e0)(L"CDevG5KB::AccessData_Page Param err");
  }
  else {
    FUN_00470c90();
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    if ((HANDLE)param_1[0x96] != (HANDLE)0x0) {
      ResetEvent((HANDLE)param_1[0x96]);
    }
    (**(code **)(param_1[0x97] + 0x14))();
    iStack_230 = (int)(param_6 + ((int)param_6 >> 0x1f & 0x1ffU)) >> 9;
    uStack_218 = param_6 & 0x800001ff;
    if ((int)uStack_218 < 0) {
      uStack_218 = (uStack_218 - 1 | 0xfffffe00) + 1;
    }
    if (uStack_218 != 0) {
      iStack_230 = iStack_230 + 1;
    }
    iVar5 = 0;
    iStack_248 = 0;
    DStack_244 = 0;
    if (0 < iStack_230) {
LAB_0049c7bb:
      uVar2 = 0x200;
      if ((uStack_218 != 0) && (DStack_244 == iStack_230 - 1U)) {
        uVar2 = uStack_218;
      }
      uVar4 = uVar2 & 0x800001ff;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffe00) + 1;
      }
      iStack_220 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1ffU)) >> 9;
      uStack_228 = uVar4;
      do {
        iVar7 = 0;
        iStack_234 = iStack_220;
        if (uVar4 != 0) {
          iStack_234 = iStack_220 + 1;
        }
        iStack_240 = 0;
        iStack_23c = 0;
        if (0 < iStack_234) {
          do {
            _Size = 0x200;
            if ((uStack_228 != 0) && (iVar7 == iStack_234 + -1)) {
              _Size = uStack_228;
            }
            _memset(acStack_20c,0,0x208);
            acStack_20c[0] = ((*(int *)(local_238[4] + 0x18) != 0x18) - 1U & 0xfd) + 9;
            acStack_20c[3] = param_7;
            cStack_208 = (char)iStack_248;
            acStack_20c[1] = 0xc;
            acStack_20c[2] = 0;
            uStack_207 = 0;
            uStack_206 = (undefined1)_Size;
            uStack_205 = (undefined1)(_Size >> 8);
            _memcpy(auStack_204,(void *)(local_21c + iVar5),_Size);
            if (DAT_0065d3dc != 0) {
              FUN_00407c90(acStack_20c,0x20,0,L"Send: ");
            }
            if (local_22c != 0) {
              iVar6 = 3;
              do {
                cVar1 = HidD_SetFeature(local_22c,acStack_20c,0x208);
                if (cVar1 != '\0') break;
                iVar6 = iVar6 + -1;
                FUN_004051e0(100);
              } while (0 < iVar6);
              param_2 = local_224;
              if (iVar6 < 0) {
                DVar3 = GetLastError();
                pwVar8 = L"CDevG5KB::AccessData_Page err=%d";
                goto LAB_0049ca07;
              }
            }
            iStack_240 = iStack_240 + _Size;
            iStack_23c = iStack_23c + 1;
            iStack_248 = iStack_248 + 1;
            iVar5 = iVar5 + _Size;
            if (param_2 != (code *)0x0) {
              (*param_2)(param_4,param_6,iVar5);
            }
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData_Page send package %d ok, dataUnit=%d",iStack_248,
                            DStack_244);
            iVar7 = iVar7 + 1;
            uVar4 = uStack_228;
          } while (iVar7 < iStack_234);
        }
        uStack_214 = 0;
        uStack_210 = 0;
        iVar7 = FUN_004988f0();
        if (iVar7 != 0) {
          pwVar8 = L"CDevG5KB::AccessData_Page timeout, k=%d";
          DVar3 = DStack_244;
LAB_0049ca07:
          (*DAT_0065d3e0)(pwVar8,DVar3);
          break;
        }
        if ((uStack_214._3_1_ != '\0') && ((char)uStack_210 == cStack_208)) goto LAB_0049c9cf;
        (*DAT_0065d3e0)(L"CDevG5KB::AccessData_Page send this page, Buffer=%x %x %x %x %x",
                        uStack_214 & 0xff,uStack_214 >> 8 & 0xff,uStack_214 >> 0x10 & 0xff,
                        uStack_214._3_1_,uStack_210 & 0xff);
        iVar5 = iVar5 - iStack_240;
        iStack_248 = iStack_248 - iStack_23c;
        Sleep(0x19);
      } while( true );
    }
  }
LAB_0049ca13:
  __security_check_cookie(local_4 ^ (uint)&iStack_248);
  return;
LAB_0049c9cf:
  iVar7 = (**(code **)(*local_238 + 0x94))();
  if (iVar7 != 0) {
    (*DAT_0065d3e0)(L"CDevG5KB::AccessData_Page cancel by user");
    goto LAB_0049ca13;
  }
  DStack_244 = DStack_244 + 1;
  if (iStack_230 <= (int)DStack_244) goto LAB_0049ca13;
  goto LAB_0049c7bb;
}



// ==== 0049ca60 FUN_0049ca60 ====
// why: caller depth 1 of FUN_0049c6e0

void __thiscall FUN_0049ca60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0049c6e0(*(undefined4 *)(param_1 + 0xc),param_4,param_2,param_3,param_4);
  return;
}



// ==== 0049ca80 FUN_0049ca80 ====
// why: caller depth 1 of FUN_00498f60

void __thiscall
FUN_0049ca80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  byte bStack_c;
  undefined4 uStack_b;
  undefined2 uStack_7;
  undefined1 uStack_5;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&bStack_c;
  (*DAT_0065d3e0)(L"SetGIFParam: nGifIndex=%d, nFrameNum=%d, nGifDelay=%d",param_2,param_3,param_4);
  FUN_00470c90();
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 600));
  }
  (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
  bStack_c = param_5 << 6 | (byte)param_2;
  uStack_7 = 0;
  uStack_5 = 0;
  uStack_b = CONCAT13((char)((uint)param_4 >> 8),CONCAT12((char)param_4,(short)param_3));
  iVar1 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0xd,0,5,0x14);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetGIFParam failed");
    __security_check_cookie(local_4 ^ (uint)&bStack_c);
    return;
  }
  iVar1 = FUN_004988f0();
  if (iVar1 != 0) {
    (*DAT_0065d3e0)(L"SetGIFParam: timeout");
    __security_check_cookie(local_4 ^ (uint)&bStack_c);
    return;
  }
  FUN_00407c90(&bStack_c,8,0,L"SetGIFParam WaitData: ");
  if (uStack_b._2_1_ == '\0') {
    (*DAT_0065d3e0)(L"SetGIFParam: respond unmatch");
    __security_check_cookie(local_4 ^ (uint)&bStack_c);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&bStack_c);
  return;
}



// ==== 0049cc00 FUN_0049cc00 ====
// why: calls ReadFile; string: DevG5MS_ServiceThread Exit; string: DevG5MS_ServiceThread ReadFile Err=%d; string: DevG5MS_ServiceThread Start...; string: DevG5MS_ServiceThread hObject[1] is signal

void FUN_0049cc00(int param_1)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD DStack_64;
  _OVERLAPPED _Stack_60;
  HANDLE pvStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&DStack_64;
  (*DAT_0065d3e0)(L"DevG5MS_ServiceThread Start...");
  _Stack_60.Internal = 0;
  _Stack_60.InternalHigh = 0;
  _Stack_60.u.s.Offset = 0;
  _Stack_60.u.s.OffsetHigh = 0;
  _Stack_60.hEvent = *(HANDLE *)(param_1 + 0x28c);
  uStack_48 = *(undefined4 *)(param_1 + 0x290);
  iVar1 = *(int *)(param_1 + 0x298);
  pvStack_4c = _Stack_60.hEvent;
  do {
    if (iVar1 != 0) {
LAB_0049cd7a:
      (*DAT_0065d3e0)(L"DevG5MS_ServiceThread Exit");
      __security_check_cookie(local_4 ^ (uint)&DStack_64);
      return;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      Sleep(500);
    }
    else {
      *(undefined4 *)(param_1 + 0x29c) = 0;
      *(undefined4 *)(param_1 + 0x2a0) = 0;
      _memset(auStack_44,0,0x40);
      auStack_44[0] = 9;
      BVar2 = ReadFile(*(HANDLE *)(param_1 + 0xc),auStack_44,8,&DStack_64,&_Stack_60);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x3e5) {
          DVar3 = WaitForMultipleObjects(2,&pvStack_4c,0,0xffffffff);
          if (DVar3 == 0) {
            FUN_0049cda0();
          }
          else {
            if (DVar3 == 1) {
              (*DAT_0065d3e0)(L"DevG5MS_ServiceThread hObject[1] is signal");
              BVar2 = CancelIo(*(HANDLE *)(param_1 + 0xc));
              if (BVar2 != 0) {
                GetOverlappedResult(*(HANDLE *)(param_1 + 0xc),&_Stack_60,&DStack_64,1);
              }
              goto LAB_0049cd7a;
            }
            if (DVar3 == 0xffffffff) {
              (*DAT_0065d3e0)(L"WaitForMultipleObjects failed. err=%d\n",0x3e5);
            }
          }
        }
        else {
          (*DAT_0065d3e0)(L"DevG5MS_ServiceThread ReadFile Err=%d\n",DVar3);
          if ((DVar3 == 0x48f) || (DVar3 == 6)) goto LAB_0049cd7a;
        }
      }
      else {
        FUN_0049cda0();
      }
    }
    iVar1 = *(int *)(param_1 + 0x298);
  } while( true );
}



// ==== 0049d020 FUN_0049d020 ====
// why: caller depth 1 of FUN_0049ea20; string: CDevG5MS::FindHIDDevice for %s, hDev=%x (%s), id=%04x_%04x; string: Psd unmatch 2: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x; string: Psd unmatch: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x

void __fastcall FUN_0049d020(int *param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined1 uVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  int iVar6;
  int *piVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  char *pcVar12;
  int iVar13;
  HANDLE local_34;
  int *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  char local_c;
  uint local_b;
  undefined1 local_7;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_34;
  puVar1 = (ushort *)param_1[4];
  local_30 = param_1;
  if (puVar1 == (ushort *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  local_18 = (uint)*puVar1;
  local_10 = (uint)puVar1[1];
  local_1c = 0;
  param_1[5] = 0;
  local_20 = -1;
  local_34 = (HANDLE)0x0;
  local_2c = 0;
  local_24 = &DAT_0065ea8c;
  do {
    puVar11 = local_24;
    local_28 = 0;
    if ((local_18 == local_24[-1]) && (local_10 == *local_24)) {
      local_28 = 1;
      if ((local_24[-3] == 0xff02) && (local_24[-2] == 2)) {
        if ((local_24[-4] == 0x208) && (local_24[-6] == 8)) {
          pvVar4 = CreateFileW((LPCWSTR)(local_24 + -0x89),0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                               0x40000000,(HANDLE)0x0);
          local_34 = pvVar4;
          if (pvVar4 == (HANDLE)0xffffffff) {
            DVar5 = GetLastError();
            (*DAT_0065d3e0)(L"CreateFile err=%d",DVar5);
            local_34 = (HANDLE)0x0;
          }
          else {
            Sleep(0x14);
            iVar9 = param_1[4];
            pcVar12 = (char *)(iVar9 + 8);
            if ((*pcVar12 == '\0') && (*(char *)(iVar9 + 0xd) == '\0')) {
LAB_0049d2aa:
              local_20 = local_2c;
              goto LAB_0049d2b4;
            }
            local_c = '\0';
            local_b = 0;
            local_7 = 0;
            iVar6 = FUN_0049ea20(param_1,pvVar4);
            uVar3 = local_7;
            if (iVar6 == 0) {
              (*DAT_0065d3e0)(L"GetPassword failed");
            }
            else {
              iVar6 = 0;
              while ((&local_c + iVar6)[(int)pcVar12 - (int)&local_c] == (&local_c)[iVar6]) {
                iVar6 = iVar6 + 1;
                if (5 < iVar6) goto LAB_0049d2aa;
              }
              uVar2 = local_b >> 0x18;
              uVar10 = local_b >> 0x10 & 0xff;
              (*DAT_0065d3e0)(L"Psd unmatch: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x",*pcVar12,
                              *(undefined1 *)(iVar9 + 9),*(undefined1 *)(iVar9 + 10),
                              *(undefined1 *)(iVar9 + 0xb),*(undefined1 *)(iVar9 + 0xc),
                              *(undefined1 *)(iVar9 + 0xd),local_c,local_b & 0xff,
                              local_b >> 8 & 0xff,uVar10,uVar2,local_7);
              iVar9 = local_30[4];
              piVar7 = (int *)(iVar9 + 0xe);
              if (*piVar7 != 0) {
                iVar6 = 0;
                iStack_14 = (int)piVar7 - (int)&local_c;
                while ((&local_c + iVar6)[iStack_14] == (&local_c)[iVar6]) {
                  iVar6 = iVar6 + 1;
                  param_1 = local_30;
                  if (5 < iVar6) goto LAB_0049d2aa;
                }
                (*DAT_0065d3e0)(L"Psd unmatch 2: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x",
                                *(undefined1 *)piVar7,*(undefined1 *)(iVar9 + 0xf),
                                *(undefined1 *)(iVar9 + 0x10),*(undefined1 *)(iVar9 + 0x11),
                                *(undefined1 *)(iVar9 + 0x12),*(undefined1 *)(iVar9 + 0x13),local_c,
                                local_b & 0xff,local_b >> 8 & 0xff,uVar10,uVar2,uVar3);
              }
              CloseHandle(local_34);
              local_34 = (HANDLE)0x0;
              puVar11 = local_24;
              param_1 = local_30;
            }
          }
        }
      }
      else if ((local_24[-3] == 0xc) && (local_24[-2] == 1)) {
        local_1c = 1;
      }
    }
    local_2c = local_2c + 1;
    local_24 = puVar11 + 0x8b;
    if (0x66984b < (int)local_24) {
LAB_0049d2b4:
      iVar6 = local_20;
      iVar9 = local_28;
      pvVar4 = local_34;
      if ((local_34 == (HANDLE)0x0) || (local_20 == -1)) {
        __security_check_cookie(local_4 ^ (uint)&local_34);
        return;
      }
      pwVar8 = L"Wired";
      if (local_28 != 1) {
        pwVar8 = L"Wireless";
      }
      iVar13 = local_20 * 0x22c;
      (*DAT_0065d3e0)(L"CDevG5MS::FindHIDDevice for %s, hDev=%x (%s), id=%04x_%04x",
                      param_1[4] + 0x28,local_34,pwVar8,(&DAT_0065ea88)[local_20 * 0x8b],
                      (&DAT_0065ea8c)[local_20 * 0x8b]);
      *(undefined4 *)(&DAT_0065ea90 + iVar13) = 1;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[6] = 0;
      param_1[3] = (int)pvVar4;
      param_1[0x8d] = iVar9;
      _wcsncpy_s((wchar_t *)(param_1 + 0xb),0x104,&DAT_0065e868 + iVar6 * 0x116,0xffffffff);
      iVar9 = (**(code **)(*param_1 + 0x24))();
      if (iVar9 == 1) {
        __security_check_cookie(local_4 ^ (uint)&local_34);
        return;
      }
      (**(code **)(*param_1 + 0x18))();
      __security_check_cookie(local_4 ^ (uint)&local_34);
      return;
    }
  } while( true );
}



// ==== 0049d3b0 FUN_0049d3b0 ====
// why: calls HidD_GetAttributes; string: SyncCfg(load):; string: SyncCfg: FW Version=0x%x; string: SyncCfg: Get Wrong OnBoard!!; string: SyncCfg: GetLED Err; string: SyncCfg: GetLED Err: read valid data, retry now; string: SyncCfg: GetLED failed; string: SyncCfg: GetOnBoard failed; string: SyncCfg: GetVersionNumber failed!; string: SyncCfg: UnSupport Sensor 0x%04x; string: SyncCfg: nCurHZ=%x; string: SyncCfg: nCurLOD=%x; string: SyncCfg: nCurOnBoard=%d; string: SyncCfg: nSensor=%d, nCurLevel=%d, SyncMask=0x%x

void __fastcall FUN_0049d3b0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined1 uStack_27c;
  byte bStack_27b;
  byte bStack_27a;
  byte bStack_279;
  int iStack_278;
  undefined1 local_274 [4];
  char cStack_270;
  byte bStack_26f;
  byte bStack_26e;
  byte bStack_26d;
  ushort local_26c;
  undefined1 auStack_268 [2];
  byte bStack_266;
  byte bStack_264;
  wchar_t awStack_d8 [100];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005de27b;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&uStack_27c;
  uVar2 = DAT_0064f674 ^ (uint)&stack0xfffffd74;
  ExceptionList = &local_c;
  cVar1 = HidD_GetAttributes(param_1[3],local_274);
  if (cVar1 == '\0') {
    (*DAT_0065d3e0)(L"SyncCfg: GetVersionNumber failed!",uVar2);
  }
  else {
    param_1[6] = (uint)local_26c;
    (*DAT_0065d3e0)(L"SyncCfg: FW Version=0x%x",(uint)local_26c);
  }
  pcVar7 = Sleep_exref;
  iVar8 = 0;
  *(undefined4 *)(param_1[4] + 0x2fc) = 0;
  iVar5 = *(int *)(param_1[4] + 0x24);
  if (1 < *(int *)(iVar5 + 0x2680)) {
    Sleep(0x1e);
    bStack_27b = 0;
    iVar3 = (**(code **)(*param_1 + 0x88))(&bStack_27b);
    if (iVar3 == 0) {
      pwVar9 = L"SyncCfg: GetOnBoard failed";
    }
    else {
      (*DAT_0065d3e0)(L"SyncCfg: nCurOnBoard=%d",bStack_27b);
      if ((int)(uint)bStack_27b < *(int *)(iVar5 + 0x2680)) {
        *(uint *)(param_1[4] + 0x2fc) = (uint)bStack_27b;
        goto LAB_0049d4a8;
      }
      pwVar9 = L"SyncCfg: Get Wrong OnBoard!!";
    }
    (*DAT_0065d3e0)(pwVar9);
  }
LAB_0049d4a8:
  Sleep(0x1e);
  do {
    _memset(auStack_268,0,400);
    iVar3 = (**(code **)(*param_1 + 0x70))(auStack_268,400);
    if (iVar3 == 0) {
      (*DAT_0065d3e0)(L"SyncCfg: GetLED failed");
      Sleep(300);
    }
    else {
      if (((cStack_270 == 'd') && ((bStack_26e & 0xf) != 0)) && ((bStack_26e & 0xf) < 5)) {
        FUN_00407c90(&cStack_270,100,10,L"SyncCfg(load):");
        iVar8 = (bStack_26d >> 4) - 1;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        *(int *)(param_1[4] + 0x2e4) = iVar8;
        (*DAT_0065d3e0)(L"SyncCfg: nSensor=%d, nCurLevel=%d, SyncMask=0x%x",bStack_26f & 0x1f,iVar8,
                        *(undefined1 *)(iVar5 + 0x2b97));
        iVar8 = FUN_00416aa0();
        iVar3 = 0;
        piVar6 = (int *)(iVar5 + 0x420);
        goto LAB_0049d610;
      }
      (*DAT_0065d3e0)(L"SyncCfg: GetLED Err: read valid data, retry now");
      FUN_00407c90(auStack_268,400,10,0);
      Sleep(300);
      if ((1 < iVar8) && (param_1[2] != 0)) {
        FUN_004035b0(L"SyncCfg: GetLED Err");
        uStack_4 = 0;
        FUN_00448e50(param_1[2]);
        uStack_4 = 0xffffffff;
        piVar6 = (int *)(iStack_278 + -4);
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 1 || iVar5 + -1 < 0) {
          (**(code **)(**(int **)(iStack_278 + -0x10) + 4))((undefined4 *)(iStack_278 + -0x10));
        }
        goto LAB_0049d78f;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  goto LAB_0049d6fc;
  while( true ) {
    iVar3 = iVar3 + 1;
    piVar6 = piVar6 + 0x224;
    if (3 < iVar3) break;
LAB_0049d610:
    if (iVar8 == *piVar6) {
      *(int *)(param_1[4] + 0x300) = iVar8;
      if ((*(byte *)(iVar5 + 0x2b97) & 1) != 0) {
        switch(bStack_266 & 0xf) {
        case 1:
          uVar4 = 0x125;
          break;
        case 2:
          uVar4 = 0x250;
          break;
        case 3:
          uVar4 = 0x500;
          break;
        case 4:
          uVar4 = 0x1000;
          break;
        default:
          uVar4 = 0;
        }
        *(undefined4 *)(param_1[4] + 0x2f8) = uVar4;
        (*DAT_0065d3e0)(L"SyncCfg: nCurHZ=%x",uVar4);
      }
      if ((*(byte *)(iVar5 + 0x2b97) & 2) == 0) goto LAB_0049d6fc;
      iVar8 = param_1[4];
      iVar3 = FUN_00465bb0();
      if ((iVar3 == 0) || (*(char *)(iVar3 + 0x87c) == '\0')) goto LAB_0049d6fc;
      uVar2 = 0;
      goto LAB_0049d6e4;
    }
  }
  (*DAT_0065d3e0)(L"SyncCfg: UnSupport Sensor 0x%04x",iVar8);
  __snwprintf_s(awStack_d8,100,99,L"SyncCfg: UnSupport Sensor 0x%04x",iVar8);
  FUN_00448f10(param_1[2]);
  goto LAB_0049d78f;
  while (uVar2 = uVar2 + 1, pcVar7 = Sleep_exref, uVar2 < 8) {
LAB_0049d6e4:
    if (*(byte *)(iVar3 + 0x888 + uVar2) == (bStack_264 & 0xf)) {
      *(uint *)(iVar8 + 0x2f4) = uVar2;
      (*DAT_0065d3e0)(L"SyncCfg: nCurLOD=%x",uVar2);
      pcVar7 = Sleep_exref;
      break;
    }
  }
LAB_0049d6fc:
  if (*(char *)(iVar5 + 0x269d) != '\0') {
    (*pcVar7)(0x1e);
    iVar5 = (**(code **)(*param_1 + 0x28))();
    if (iVar5 == 0) {
      *(undefined4 *)(param_1[4] + 0x304) = 100;
      *(undefined4 *)(param_1[4] + 0x308) = 0;
    }
    else {
      bStack_27a = 0;
      bStack_279 = 0;
      iVar5 = (**(code **)(*param_1 + 0x20))(&bStack_27a,&bStack_279);
      if (iVar5 != 0) {
        *(uint *)(param_1[4] + 0x304) = (uint)bStack_27a;
        *(uint *)(param_1[4] + 0x308) = (uint)bStack_279;
      }
    }
  }
LAB_0049d78f:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&uStack_27c);
  return;
}



// ==== 0049d7d0 FUN_0049d7d0 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void __thiscall
FUN_0049d7d0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined1 param_6,
            uint param_7,undefined4 param_8)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  bool bVar6;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  char local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_41c = param_2;
  iVar5 = 0;
  local_424 = param_3;
  local_420 = param_1;
  if (param_3 == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
    __security_check_cookie(local_4 ^ (uint)&local_428);
    return;
  }
  if ((param_4 == 1) || (param_4 == 2)) {
    local_428 = (int)(param_7 + ((int)param_7 >> 0x1f & 0x1ffU)) >> 9;
    uVar4 = param_7 & 0x800001ff;
    bVar6 = uVar4 == 0;
    local_418 = 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_428 = local_428 + 1;
    }
    do {
      _Size = 0x200;
      if ((int)(param_7 - iVar5) < 0x200) {
        _Size = param_7 - iVar5;
      }
      if ((int)param_7 < 1) {
        local_428 = 1;
        _Size = 0;
      }
      FUN_004051e0(param_8);
      _memset(local_414,0,0x208);
      local_414[3] = param_6;
      local_414[2] = (char)param_5;
      local_414[5] = (char)local_418;
      local_418 = local_418 + 1;
      local_414[0] = '\t';
      local_414[1] = 0;
      local_414[4] = (undefined1)local_428;
      local_414[6] = (char)_Size;
      local_414[7] = (char)(_Size >> 8);
      if (((param_4 == 1) && (local_420 != 0)) && (0 < (int)param_7)) {
        _memcpy(local_414 + 8,(void *)(local_420 + iVar5),_Size);
      }
      cVar3 = '\0';
      iVar2 = 2;
      local_414[1] = '\0';
      do {
        cVar3 = cVar3 + local_414[iVar2];
        local_414[1] = local_414[1] + local_414[iVar2 + 1];
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x208);
      local_414[1] = local_414[1] + cVar3;
      iVar2 = 3;
      do {
        cVar3 = HidD_SetFeature(local_424,local_414,0x208);
        if (cVar3 == '\0') {
          DVar1 = GetLastError();
          (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,param_5);
          if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049dad3;
          (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
        }
        else {
          DVar1 = WaitForSingleObject(*(HANDLE *)(local_41c + 0x294),0x1e);
          if ((DVar1 != 0) || ((char)param_5 != *(char *)(local_41c + 0x29f))) {
            if (param_4 == 2) {
              FUN_004051e0(param_8);
              _memset(local_414 + 0x208,0,0x208);
              local_414[0x208] = 9;
              cVar3 = HidD_GetFeature(local_424,local_414 + 0x208,0x208);
              if (cVar3 == '\0') {
                DVar1 = GetLastError();
                (*DAT_0065d3e0)(L"AccessData: GetFeature nErr=%d, nCmdID=%x",DVar1,param_5);
                goto LAB_0049dad3;
              }
              if (local_414[2] != local_20a) {
                (*DAT_0065d3e0)(L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x"
                                ,local_414[2],local_20a);
                goto LAB_0049dad3;
              }
              _memcpy((void *)(local_420 + iVar5),local_204,_Size);
            }
            break;
          }
          (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",param_5);
        }
        iVar2 = iVar2 + -1;
        Sleep(0x3c);
      } while (0 < iVar2);
    } while ((-1 < iVar2) && (iVar5 = iVar5 + _Size, iVar5 < (int)param_7));
  }
LAB_0049dad3:
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}



// ==== 0049daf0 FUN_0049daf0 ====
// why: caller depth 1 of FUN_0049d7d0

uint __thiscall FUN_0049daf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049db04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x5c))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,1,param_2,param_4,0x14);
  return (uint)(iVar2 != 0);
}



// ==== 0049db30 FUN_0049db30 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void __thiscall FUN_0049db30(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  bool bVar6;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  char local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_418 = param_3;
  if (*(int *)(param_1 + 0x23c) == 0) {
    local_420 = *(int *)(param_1 + 0xc);
    if (local_420 == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
    }
    else {
      local_428 = (int)(param_4 + ((int)param_4 >> 0x1f & 0x1ffU)) >> 9;
      uVar4 = param_4 & 0x800001ff;
      bVar6 = uVar4 == 0;
      local_41c = 0;
      local_424 = 0;
      if ((int)uVar4 < 0) {
        bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_428 = local_428 + 1;
      }
      do {
        iVar5 = local_424;
        _Size = 0x200;
        if ((int)(param_4 - local_424) < 0x200) {
          _Size = param_4 - local_424;
        }
        if ((int)param_4 < 1) {
          local_428 = 1;
          _Size = 0;
        }
        FUN_004051e0(0x14);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_41c;
        local_41c = local_41c + 1;
        local_414[4] = (undefined1)local_428;
        local_414[3] = (undefined1)param_2;
        local_414[7] = (char)(_Size >> 8);
        cVar3 = '\0';
        local_414[0] = '\t';
        local_414[2] = 'A';
        local_414[6] = (char)_Size;
        iVar2 = 2;
        local_414[1] = '\0';
        do {
          cVar3 = cVar3 + local_414[iVar2];
          local_414[1] = local_414[1] + local_414[iVar2 + 1];
          iVar2 = iVar2 + 2;
        } while (iVar2 < 0x208);
        local_414[1] = local_414[1] + cVar3;
        iVar2 = 3;
        do {
          cVar3 = HidD_SetFeature(local_420,local_414,0x208);
          if (cVar3 == '\0') {
            DVar1 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x41);
            if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049dddd;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar5 = local_424;
          }
          else {
            DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != 'A')) {
              FUN_004051e0(0x14);
              _memset(local_414 + 0x208,0,0x208);
              local_414[0x208] = 9;
              cVar3 = HidD_GetFeature(local_420,local_414 + 0x208,0x208);
              if (cVar3 == '\0') {
                DVar1 = GetLastError();
                (*DAT_0065d3e0)(L"AccessData: GetFeature nErr=%d, nCmdID=%x",DVar1,0x41);
                goto LAB_0049dddd;
              }
              if (local_414[2] != local_20a) {
                (*DAT_0065d3e0)(L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x"
                                ,local_414[2],local_20a);
                goto LAB_0049dddd;
              }
              _memcpy((void *)(iVar5 + local_418),local_204,_Size);
              break;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x41);
          }
          iVar2 = iVar2 + -1;
          Sleep(0x3c);
        } while (0 < iVar2);
      } while ((-1 < iVar2) && (local_424 = iVar5 + _Size, local_424 < (int)param_4));
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x60))(param_2,param_3,param_4);
  }
LAB_0049dddd:
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}



// ==== 0049de00 FUN_0049de00 ====
// why: caller depth 1 of FUN_0049d7d0; string: SetMacro failed

undefined4 __thiscall FUN_0049de00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049de14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 100))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,3,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetMacro failed");
    return 0;
  }
  return 1;
}



// ==== 0049de50 FUN_0049de50 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void __thiscall FUN_0049de50(int param_1,int param_2,uint param_3)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_418 = param_2;
  local_420 = *(int *)(param_1 + 0xc);
  if (local_420 == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049e0b7:
    (*DAT_0065d3e0)(L"GetMacro failed");
  }
  else {
    local_428 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
    uVar4 = param_3 & 0x800001ff;
    bVar6 = uVar4 == 0;
    local_41c = 0;
    local_424 = 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_428 = local_428 + 1;
    }
    do {
      iVar5 = local_424;
      _Size = 0x200;
      if ((int)(param_3 - local_424) < 0x200) {
        _Size = param_3 - local_424;
      }
      if ((int)param_3 < 1) {
        local_428 = 1;
        _Size = 0;
      }
      FUN_004051e0(0x14);
      _memset(local_414,0,0x208);
      local_414[5] = (char)local_41c;
      local_41c = local_41c + 1;
      local_414[7] = (char)(_Size >> 8);
      local_414[4] = (undefined1)local_428;
      cVar3 = '\0';
      local_414[0] = '\t';
      local_414[2] = 0x43;
      local_414[3] = 0;
      local_414[6] = (char)_Size;
      iVar2 = 2;
      local_414[1] = '\0';
      do {
        cVar3 = cVar3 + local_414[iVar2];
        local_414[1] = local_414[1] + local_414[iVar2 + 1];
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x208);
      local_414[1] = local_414[1] + cVar3;
      iVar2 = 3;
      do {
        cVar3 = HidD_SetFeature(local_420,local_414,0x208);
        if (cVar3 == '\0') {
          DVar1 = GetLastError();
          (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x43);
          if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049e0b7;
          (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
          iVar5 = local_424;
        }
        else {
          DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
          if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != 'C')) {
            FUN_004051e0(0x14);
            _memset(local_414 + 0x208,0,0x208);
            local_414[0x208] = 9;
            cVar3 = HidD_GetFeature(local_420,local_414 + 0x208,0x208);
            if (cVar3 == '\0') {
              DVar1 = GetLastError();
              local_20a = 0x43;
              pwVar7 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
            }
            else {
              if (local_414[2] == local_20a) {
                _memcpy((void *)(iVar5 + local_418),local_204,_Size);
                break;
              }
              DVar1 = (DWORD)(byte)local_414[2];
              pwVar7 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
            }
            (*DAT_0065d3e0)(pwVar7,DVar1,local_20a);
            goto LAB_0049e0b7;
          }
          (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x43);
        }
        iVar2 = iVar2 + -1;
        Sleep(0x3c);
      } while (0 < iVar2);
      if (iVar2 < 0) goto LAB_0049e0b7;
      local_424 = iVar5 + _Size;
    } while (local_424 < (int)param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}



// ==== 0049e0f0 FUN_0049e0f0 ====
// why: caller depth 1 of FUN_0049d7d0

undefined4 __thiscall FUN_0049e0f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049e104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x6c))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,4,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetLED failed");
    return 0;
  }
  return 1;
}



// ==== 0049e140 FUN_0049e140 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void __thiscall FUN_0049e140(int param_1,int param_2,uint param_3)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_418 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    local_420 = *(int *)(param_1 + 0xc);
    if (local_420 == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049e3c7:
      (*DAT_0065d3e0)(L"GetLED failed");
    }
    else {
      local_428 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
      uVar4 = param_3 & 0x800001ff;
      bVar6 = uVar4 == 0;
      local_41c = 0;
      local_424 = 0;
      if ((int)uVar4 < 0) {
        bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_428 = local_428 + 1;
      }
      do {
        iVar5 = local_424;
        _Size = 0x200;
        if ((int)(param_3 - local_424) < 0x200) {
          _Size = param_3 - local_424;
        }
        if ((int)param_3 < 1) {
          local_428 = 1;
          _Size = 0;
        }
        FUN_004051e0(0x14);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_41c;
        local_41c = local_41c + 1;
        local_414[7] = (char)(_Size >> 8);
        local_414[4] = (undefined1)local_428;
        cVar3 = '\0';
        local_414[0] = '\t';
        local_414[2] = 0x44;
        local_414[3] = 0;
        local_414[6] = (char)_Size;
        local_414[1] = '\0';
        iVar2 = 2;
        do {
          cVar3 = cVar3 + local_414[iVar2];
          local_414[1] = local_414[1] + local_414[iVar2 + 1];
          iVar2 = iVar2 + 2;
        } while (iVar2 < 0x208);
        local_414[1] = local_414[1] + cVar3;
        iVar2 = 3;
        do {
          cVar3 = HidD_SetFeature(local_420,local_414,0x208);
          if (cVar3 == '\0') {
            DVar1 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x44);
            if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049e3c7;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar5 = local_424;
          }
          else {
            DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != 'D')) {
              FUN_004051e0(0x14);
              _memset(local_414 + 0x208,0,0x208);
              local_414[0x208] = 9;
              cVar3 = HidD_GetFeature(local_420,local_414 + 0x208,0x208);
              if (cVar3 == '\0') {
                DVar1 = GetLastError();
                local_20a = 0x44;
                pwVar7 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
              }
              else {
                if (local_414[2] == local_20a) {
                  _memcpy((void *)(iVar5 + local_418),local_204,_Size);
                  break;
                }
                DVar1 = (DWORD)(byte)local_414[2];
                pwVar7 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
              }
              (*DAT_0065d3e0)(pwVar7,DVar1,local_20a);
              goto LAB_0049e3c7;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x44);
          }
          iVar2 = iVar2 + -1;
          Sleep(0x3c);
        } while (0 < iVar2);
        if (iVar2 < 0) goto LAB_0049e3c7;
        local_424 = iVar5 + _Size;
      } while (local_424 < (int)param_3);
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x70))(param_2,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}



// ==== 0049e400 FUN_0049e400 ====
// why: caller depth 1 of FUN_0049d7d0

undefined4 __thiscall FUN_0049e400(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049e417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x84))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,10,0,1,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetOnBoard failed, nOnBoard=%d",param_2);
    return 0;
  }
  return 1;
}



// ==== 0049e460 FUN_0049e460 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void __thiscall FUN_0049e460(int param_1,undefined1 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  size_t _Size;
  int iVar5;
  wchar_t *pwVar6;
  undefined1 auStack_428 [3];
  undefined1 local_425;
  int local_424;
  int local_420;
  int local_41c;
  undefined1 *local_418;
  char local_414 [522];
  byte local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_428;
  local_418 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    local_420 = *(int *)(param_1 + 0xc);
    local_425 = 0;
    if (local_420 == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049e6c2:
      (*DAT_0065d3e0)(L"GetOnBoard failed");
    }
    else {
      local_41c = 0;
      local_424 = 0;
      do {
        iVar5 = local_424;
        _Size = 0x200;
        if ((int)(1U - local_424) < 0x200) {
          _Size = 1U - local_424;
        }
        FUN_004051e0(0x32);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_41c;
        local_41c = local_41c + 1;
        local_414[7] = (char)(_Size >> 8);
        cVar4 = '\0';
        local_414[0] = '\t';
        local_414[2] = 0x4a;
        local_414[3] = 0;
        local_414[4] = 1;
        local_414[6] = (char)_Size;
        local_414[1] = '\0';
        iVar3 = 2;
        do {
          cVar4 = cVar4 + local_414[iVar3];
          local_414[1] = local_414[1] + local_414[iVar3 + 1];
          iVar3 = iVar3 + 2;
        } while (iVar3 < 0x208);
        local_414[1] = local_414[1] + cVar4;
        iVar3 = 3;
        do {
          cVar4 = HidD_SetFeature(local_420,local_414,0x208);
          if (cVar4 == '\0') {
            DVar1 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x4a);
            if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049e6c2;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar5 = local_424;
          }
          else {
            DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != 'J')) {
              FUN_004051e0(0x32);
              _memset(local_414 + 0x208,0,0x208);
              local_414[0x208] = 9;
              cVar4 = HidD_GetFeature(local_420,local_414 + 0x208,0x208);
              if (cVar4 == '\0') {
                uVar2 = GetLastError();
                local_20a = 0x4a;
                pwVar6 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
              }
              else {
                if (local_414[2] == local_20a) {
                  _memcpy(&local_425 + iVar5,local_204,_Size);
                  break;
                }
                uVar2 = (uint)(byte)local_414[2];
                pwVar6 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
              }
              (*DAT_0065d3e0)(pwVar6,uVar2,local_20a);
              goto LAB_0049e6c2;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x4a);
          }
          iVar3 = iVar3 + -1;
          Sleep(0x3c);
        } while (0 < iVar3);
        if (iVar3 < 0) goto LAB_0049e6c2;
        local_424 = iVar5 + _Size;
      } while (local_424 < 1);
      *local_418 = local_425;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x88))(param_2);
  }
  __security_check_cookie(local_4 ^ (uint)auStack_428);
  return;
}



// ==== 0049e6e0 FUN_0049e6e0 ====
// why: caller depth 1 of FUN_0049d7d0

undefined4 __thiscall FUN_0049e6e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049e6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x54))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,0xb,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetScreenParam failed");
    return 0;
  }
  return 1;
}



// ==== 0049e730 FUN_0049e730 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void FUN_0049e730(int param_1,int param_2,uint param_3)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_418 = param_2;
  local_420 = *(int *)(param_1 + 0xc);
  if (local_420 == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049e9a0:
    (*DAT_0065d3e0)(L"GetRealData failed");
  }
  else {
    local_428 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
    uVar4 = param_3 & 0x800001ff;
    bVar6 = uVar4 == 0;
    local_41c = 0;
    local_424 = 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_428 = local_428 + 1;
    }
    do {
      iVar5 = local_424;
      _Size = 0x200;
      if ((int)(param_3 - local_424) < 0x200) {
        _Size = param_3 - local_424;
      }
      if ((int)param_3 < 1) {
        local_428 = 1;
        _Size = 0;
      }
      FUN_004051e0(0x14);
      _memset(local_414,0,0x208);
      local_414[5] = (char)local_41c;
      local_41c = local_41c + 1;
      local_414[7] = (char)(_Size >> 8);
      local_414[4] = (undefined1)local_428;
      cVar3 = '\0';
      local_414[0] = '\t';
      local_414[2] = 0x88;
      local_414[3] = 0;
      local_414[6] = (char)_Size;
      iVar2 = 2;
      local_414[1] = '\0';
      do {
        cVar3 = cVar3 + local_414[iVar2];
        local_414[1] = local_414[1] + local_414[iVar2 + 1];
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x208);
      local_414[1] = local_414[1] + cVar3;
      iVar2 = 3;
      do {
        cVar3 = HidD_SetFeature(local_420,local_414,0x208);
        if (cVar3 == '\0') {
          DVar1 = GetLastError();
          (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x88);
          if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049e9a0;
          (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
          iVar5 = local_424;
        }
        else {
          DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
          if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != -0x78)) {
            FUN_004051e0(0x14);
            _memset(local_414 + 0x208,0,0x208);
            local_414[0x208] = 9;
            cVar3 = HidD_GetFeature(local_420,local_414 + 0x208,0x208);
            if (cVar3 == '\0') {
              DVar1 = GetLastError();
              local_20a = 0x88;
              pwVar7 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
            }
            else {
              if (local_414[2] == local_20a) {
                _memcpy((void *)(iVar5 + local_418),local_204,_Size);
                break;
              }
              DVar1 = (DWORD)(byte)local_414[2];
              pwVar7 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
            }
            (*DAT_0065d3e0)(pwVar7,DVar1,local_20a);
            goto LAB_0049e9a0;
          }
          (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x88);
        }
        iVar2 = iVar2 + -1;
        Sleep(0x3c);
      } while (0 < iVar2);
      if (iVar2 < 0) goto LAB_0049e9a0;
      local_424 = iVar5 + _Size;
    } while (local_424 < (int)param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}



// ==== 0049e9e0 FUN_0049e9e0 ====
// why: caller depth 1 of FUN_0049d7d0

undefined4 __thiscall FUN_0049e9e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,0xf,0,param_3,7);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SendSelfData failed");
    return 0;
  }
  return 1;
}



// ==== 0049ea20 FUN_0049ea20 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void __thiscall FUN_0049ea20(int param_1,int param_2,int param_3)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  size_t _Size;
  int iVar4;
  wchar_t *pwVar5;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_424;
  local_420 = param_3;
  local_418 = param_1;
  if (param_3 == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049ec5a:
    (*DAT_0065d3e0)(L"GetPassword failed");
  }
  else {
    local_41c = 0;
    local_424 = 0;
    do {
      iVar4 = local_424;
      _Size = 0x200;
      if ((int)(6U - local_424) < 0x200) {
        _Size = 6U - local_424;
      }
      FUN_004051e0(0x14);
      _memset(local_414,0,0x208);
      local_414[5] = (char)local_41c;
      local_41c = local_41c + 1;
      local_414[7] = (char)(_Size >> 8);
      cVar3 = '\0';
      local_414[0] = '\t';
      local_414[2] = 5;
      local_414[3] = 1;
      local_414[4] = 1;
      local_414[6] = (char)_Size;
      iVar2 = 2;
      local_414[1] = '\0';
      do {
        cVar3 = cVar3 + local_414[iVar2];
        local_414[1] = local_414[1] + local_414[iVar2 + 1];
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x208);
      local_414[1] = local_414[1] + cVar3;
      iVar2 = 3;
      do {
        cVar3 = HidD_SetFeature(local_420,local_414,0x208);
        if (cVar3 == '\0') {
          DVar1 = GetLastError();
          (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,5);
          if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049ec5a;
          (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
          iVar4 = local_424;
        }
        else {
          DVar1 = WaitForSingleObject(*(HANDLE *)(param_2 + 0x294),0x1e);
          if ((DVar1 != 0) || (*(char *)(param_2 + 0x29f) != '\x05')) {
            FUN_004051e0(0x14);
            _memset(local_414 + 0x208,0,0x208);
            local_414[0x208] = 9;
            cVar3 = HidD_GetFeature(local_420,local_414 + 0x208,0x208);
            if (cVar3 == '\0') {
              DVar1 = GetLastError();
              local_20a = 5;
              pwVar5 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
            }
            else {
              if (local_414[2] == local_20a) {
                _memcpy((void *)(local_418 + iVar4),local_204,_Size);
                break;
              }
              DVar1 = (DWORD)(byte)local_414[2];
              pwVar5 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
            }
            (*DAT_0065d3e0)(pwVar5,DVar1,local_20a);
            goto LAB_0049ec5a;
          }
          (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",5);
        }
        iVar2 = iVar2 + -1;
        Sleep(0x3c);
      } while (0 < iVar2);
      if (iVar2 < 0) goto LAB_0049ec5a;
      local_424 = iVar4 + _Size;
    } while (local_424 < 6);
  }
  __security_check_cookie(local_4 ^ (uint)&local_424);
  return;
}



// ==== 0049ec70 FUN_0049ec70 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void __thiscall FUN_0049ec70(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  DWORD DVar2;
  int iVar3;
  char cVar4;
  size_t _Size;
  int iVar5;
  wchar_t *pwVar6;
  char *local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_428 = param_2;
  local_418 = param_3;
  if (param_2 != (char *)0x0) {
    local_41c = *(int *)(param_1 + 0xc);
    if (local_41c == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049eee5:
      (*DAT_0065d3e0)(L"GetPower failed");
    }
    else {
      local_424 = 0;
      local_420 = 0;
      do {
        iVar5 = local_420;
        _Size = 0x200;
        if ((int)(1U - local_420) < 0x200) {
          _Size = 1U - local_420;
        }
        FUN_004051e0(0x14);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_424;
        local_424 = local_424 + 1;
        local_414[7] = (char)(_Size >> 8);
        cVar4 = '\0';
        local_414[0] = '\t';
        local_414[2] = 9;
        local_414[3] = 1;
        local_414[4] = 1;
        local_414[6] = (char)_Size;
        iVar3 = 2;
        local_414[1] = '\0';
        do {
          cVar4 = cVar4 + local_414[iVar3];
          local_414[1] = local_414[1] + local_414[iVar3 + 1];
          iVar3 = iVar3 + 2;
        } while (iVar3 < 0x208);
        local_414[1] = local_414[1] + cVar4;
        iVar3 = 3;
        do {
          cVar4 = HidD_SetFeature(local_41c,local_414,0x208);
          if (cVar4 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar2,9);
            if ((DVar2 == 0x48f) || (DVar2 == 6)) goto LAB_0049eee5;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar5 = local_420;
          }
          else {
            DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar2 != 0) || (*(char *)(param_1 + 0x29f) != '\t')) {
              FUN_004051e0(0x14);
              _memset(local_414 + 0x208,0,0x208);
              local_414[0x208] = 9;
              cVar4 = HidD_GetFeature(local_41c,local_414 + 0x208,0x208);
              if (cVar4 == '\0') {
                DVar2 = GetLastError();
                local_20a = 9;
                pwVar6 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
              }
              else {
                if (local_414[2] == local_20a) {
                  _memcpy(local_428 + iVar5,local_204,_Size);
                  break;
                }
                DVar2 = (DWORD)(byte)local_414[2];
                pwVar6 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
              }
              (*DAT_0065d3e0)(pwVar6,DVar2,local_20a);
              goto LAB_0049eee5;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",9);
          }
          iVar3 = iVar3 + -1;
          Sleep(0x3c);
        } while (0 < iVar3);
        pcVar1 = local_428;
        if (iVar3 < 0) goto LAB_0049eee5;
        local_420 = iVar5 + _Size;
      } while (local_420 < 1);
      (*DAT_0065d3e0)(L"CDevG5MS::ReadPower  %d",*local_428);
      if (local_418 != 0) {
        *(bool *)local_418 = *pcVar1 == -1;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}



// ==== 0049ef00 FUN_0049ef00 ====
// why: caller depth 1 of FUN_0049d7d0

undefined4 FUN_0049ef00(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_0049d7d0(in_EAX,*(undefined4 *)(in_EAX + 0xc),1,6,0,0,0x14);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"Reset failed");
    return 0;
  }
  return 1;
}



// ==== 0049ef40 FUN_0049ef40 ====
// why: caller depth 1 of HidD_GetFeature; caller depth 1 of HidD_SetFeature; calls HidD_GetFeature; calls HidD_SetFeature; string: AccessData CRC err for nCmdID=%x, retry now; string: AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x; string: AccessData: GetFeature nErr=%d, nCmdID=%x; string: AccessData: SetFeature nErr=%d, nCmdID=%x; string: AccessData: retry SetFeature now; string: CDevG5MS::AccessData Param err, hDev=%x

void __thiscall FUN_0049ef40(int param_1,undefined1 *param_2)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  size_t _Size;
  int iVar4;
  wchar_t *pwVar5;
  int local_424;
  undefined1 *local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte local_20a;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_424;
  local_420 = param_2;
  if (*(int *)(param_1 + 0x234) != 1) {
    local_41c = *(int *)(param_1 + 0xc);
    if (local_41c == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049f1a5:
      (*DAT_0065d3e0)(L"GetOnline failed");
    }
    else {
      local_418 = 0;
      local_424 = 0;
      do {
        iVar4 = local_424;
        _Size = 0x200;
        if ((int)(1U - local_424) < 0x200) {
          _Size = 1U - local_424;
        }
        FUN_004051e0(0x14);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_418;
        local_418 = local_418 + 1;
        local_414[7] = (char)(_Size >> 8);
        cVar3 = '\0';
        local_414[0] = '\t';
        local_414[2] = 7;
        local_414[3] = 0;
        local_414[4] = 1;
        local_414[6] = (char)_Size;
        iVar2 = 2;
        local_414[1] = '\0';
        do {
          cVar3 = cVar3 + local_414[iVar2];
          local_414[1] = local_414[1] + local_414[iVar2 + 1];
          iVar2 = iVar2 + 2;
        } while (iVar2 < 0x208);
        local_414[1] = local_414[1] + cVar3;
        iVar2 = 3;
        do {
          cVar3 = HidD_SetFeature(local_41c,local_414,0x208);
          if (cVar3 == '\0') {
            DVar1 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,7);
            if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049f1a5;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar4 = local_424;
          }
          else {
            DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != '\a')) {
              FUN_004051e0(0x14);
              _memset(local_414 + 0x208,0,0x208);
              local_414[0x208] = 9;
              cVar3 = HidD_GetFeature(local_41c,local_414 + 0x208,0x208);
              if (cVar3 == '\0') {
                DVar1 = GetLastError();
                local_20a = 7;
                pwVar5 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
              }
              else {
                if (local_414[2] == local_20a) {
                  _memcpy(local_420 + iVar4,local_204,_Size);
                  break;
                }
                DVar1 = (DWORD)(byte)local_414[2];
                pwVar5 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
              }
              (*DAT_0065d3e0)(pwVar5,DVar1,local_20a);
              goto LAB_0049f1a5;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",7);
          }
          iVar2 = iVar2 + -1;
          Sleep(0x3c);
        } while (0 < iVar2);
        if (iVar2 < 0) goto LAB_0049f1a5;
        local_424 = iVar4 + _Size;
      } while (local_424 < 1);
      (*DAT_0065d3e0)(L"GetOnline = %d",*local_420);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_424);
  return;
}



// ==== 0049f1c0 FUN_0049f1c0 ====
// why: calls ReadFile

void FUN_0049f1c0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE unaff_ESI;
  undefined4 *unaff_EDI;
  DWORD local_24;
  _OVERLAPPED local_20;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_24;
  local_20.Internal = 0;
  local_20.InternalHigh = 0;
  local_20.u.s.Offset = 0;
  local_20.u.s.OffsetHigh = 0;
  local_20.hEvent = (HANDLE)0x0;
  local_20.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  local_24 = 0;
  local_c = CONCAT31(local_c._1_3_,9);
  BVar1 = ReadFile(unaff_ESI,&local_c,8,&local_24,&local_20);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForSingleObject(local_20.hEvent,0xffffffff);
      if (DVar2 == 0) {
        if (unaff_EDI != (undefined4 *)0x0) {
          *unaff_EDI = local_c;
          unaff_EDI[1] = local_8;
        }
      }
      else if (DVar2 == 0x102) {
        BVar1 = CancelIo(unaff_ESI);
        if (BVar1 != 0) {
          GetOverlappedResult(unaff_ESI,&local_20,&local_24,1);
        }
      }
      else {
        DVar2 = GetLastError();
        (*DAT_0065d3e0)(L"ReadData_Mouse Err=0x%x, hDev=%x",DVar2);
      }
    }
    else if (DVar2 == 0x48f) {
      (*DAT_0065d3e0)(L"ReadData_Mouse Err, dev is plugout, hDev=%x");
    }
    else {
      (*DAT_0065d3e0)(L"ReadData_Mouse Err=0x%x, hDev=%x",DVar2);
    }
  }
  else if (unaff_EDI != (undefined4 *)0x0) {
    *unaff_EDI = local_c;
    unaff_EDI[1] = local_8;
  }
  CloseHandle(local_20.hEvent);
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}



// ==== 0049f300 FUN_0049f300 ====
// why: caller depth 1 of FUN_0049d7d0

undefined4 __thiscall FUN_0049f300(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,8,0,param_3,7);
    if (iVar1 != 0) {
      return 1;
    }
    (*DAT_0065d3e0)(L"SetRealData failed");
  }
  return 0;
}



// ==== 0049f340 FUN_0049f340 ====
// why: caller depth 1 of FUN_0049e730

undefined4 __thiscall FUN_0049f340(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  uVar1 = FUN_0049e730(param_1,param_2,param_3);
  return uVar1;
}



// ==== 0049ff00 FUN_0049ff00 ====
// why: caller depth 2 of FUN_0049ef00; string: nMacroBufferSize > hwParam.nMacroBufferSize; string: nMacroBufferSize > sizeof(bMacro); string: nMacroNum=%d, nNeedWriteMacro=%d, nKeyDirty=0x%x, nModeNum=%d, hwParam.nMacroBuffe...

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0049ff00(int *param_1,int param_2,HWND param_3,UINT param_4,uint param_5)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int *piVar8;
  undefined1 *puVar9;
  uint uVar10;
  int local_3abc;
  int local_3ab8;
  uint uStack_3ab4;
  int iStack_3ab0;
  uint uStack_3aac;
  HWND local_3aa8;
  int *local_3aa4;
  undefined4 local_3aa0;
  int *local_3a9c;
  int iStack_3a98;
  undefined1 uStack_3a94;
  undefined1 auStack_3a93 [76];
  undefined1 uStack_3a47;
  undefined1 auStack_3a46 [318];
  undefined4 uStack_3908;
  undefined1 uStack_3904;
  undefined1 auStack_3903 [2303];
  undefined2 auStack_3004 [1024];
  undefined2 uStack_2804;
  ushort auStack_2802 [5119];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_3abc;
  local_3ab8 = param_2;
  local_3aa8 = param_3;
  local_3a9c = param_1;
  if (((param_2 == 0) || (*(int *)(param_2 + 4) == 0)) || (param_1[4] == 0)) goto LAB_004a04f3;
  BVar1 = IsWindow(param_3);
  if (BVar1 == 0) {
    local_3aa8 = (HWND)0x0;
    param_3 = (HWND)0x0;
  }
  if (param_1[0x8f] == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::ApplySetting: hDev=%x, hWnd=%x, nFlag=%x",param_1[3],param_3,param_5
                   );
  }
  iVar2 = *(int *)(param_1[4] + 0x24);
  piVar8 = (int *)(iVar2 + 0x18);
  local_3aa0 = 0;
  local_3abc = DAT_00658b0c;
  local_3aa4 = piVar8;
  if (param_3 != (HWND)0x0) {
    PostMessageW(param_3,param_4,0x14,0);
  }
  pcVar7 = Sleep_exref;
  param_1[7] = 1;
  Sleep(0x1e);
  if (((param_5 & 0x20) == 0) || (*(char *)(iVar2 + 0x2b96) == '\0')) {
    if ((param_5 & 1) == 0) goto LAB_004a0344;
    uStack_3904 = 0;
    _memset(auStack_3903,0,0x8ff);
    uStack_2804._0_1_ = 0;
    _memset((void *)((int)&uStack_2804 + 1),0,0x27ff);
    uStack_3ab4 = *(uint *)(*(int *)(param_1[4] + 0x24) + 4);
    iStack_3ab0 = 0;
    if (0x2800 < uStack_3ab4) {
      MessageBoxW(param_3,L"nMacroBufferSize > sizeof(bMacro)",L"",0);
    }
    iVar3 = FUN_0049f5a0(local_3ab8,&uStack_3904,&uStack_2804,&iStack_3ab0);
    if ((iVar3 != 0) || ((*DAT_0065d3e0)(L"FillMatrix Err"), pcVar7 = Sleep_exref, local_3abc != 0))
    {
      if (*(int *)(*(int *)(param_1[4] + 0x24) + 4) < (int)uStack_3ab4) {
        MessageBoxW(param_3,L"nMacroBufferSize > hwParam.nMacroBufferSize",L"",0);
        pcVar7 = Sleep_exref;
      }
      else {
        if (((*(int *)(iVar2 + 0x26a4) != 0) && (*(char *)(local_3ab8 + 0x2890) != '\0')) &&
           (iVar2 = 0, 0 < param_1[0xa9])) {
          do {
            if ((*piVar8 == 0x1000014) || (*piVar8 == 0x1000015)) {
              (&uStack_3908)[*(byte *)(piVar8 + 3)] = 0;
            }
            iVar2 = iVar2 + 1;
            piVar8 = piVar8 + 4;
          } while (iVar2 < param_1[0xa9]);
        }
        (*DAT_0065d3e0)(L"Matrix (Save)-------------------------");
        iVar3 = param_1[0xa9];
        uStack_3aac = 0;
        iVar4 = local_3ab8 + 0x48;
        iVar2 = 7;
        do {
          if (*(char *)(iVar4 + -0xd) == '\x05') {
            uStack_3aac = uStack_3aac + 1;
          }
          if (*(char *)(iVar4 + 3) == '\x05') {
            uStack_3aac = uStack_3aac + 1;
          }
          if (*(char *)(iVar4 + 0x13) == '\x05') {
            uStack_3aac = uStack_3aac + 1;
          }
          iVar4 = iVar4 + 0x30;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        (*DAT_0065d3e0)(L"nMacroNum=%d, nNeedWriteMacro=%d, nKeyDirty=0x%x, nModeNum=%d, hwParam.nMacroBufferSize=%d, nMacroBufferSize=%d"
                        ,iStack_3ab0,uStack_3aac,*(undefined4 *)(local_3ab8 + 0x30),1,
                        *(undefined4 *)(*(int *)(param_1[4] + 0x24) + 4),uStack_3ab4);
        if (DAT_0065d3dc != 0) {
          FUN_0049fa10(param_1);
        }
        iVar2 = 0;
        puVar9 = &uStack_3904;
        do {
          Sleep(0x1e);
          iVar4 = (**(code **)(*param_1 + 0x5c))(iVar2,puVar9,iVar3 * 4);
          if ((iVar4 == 0) &&
             ((*DAT_0065d3e0)(L"SetMatrix(%d) Error",iVar2), pcVar7 = Sleep_exref,
             param_3 = local_3aa8, local_3abc == 0)) goto LAB_004a04bb;
          iVar4 = iStack_3ab0;
          uVar5 = uStack_3ab4;
          iVar2 = iVar2 + 1;
          puVar9 = puVar9 + iVar3 * 4;
        } while (iVar2 < 1);
        *(undefined4 *)(local_3ab8 + 0x30) = 0;
        pcVar7 = Sleep_exref;
        piVar8 = local_3aa4;
        param_3 = local_3aa8;
        if ((0 < iStack_3ab0) && (0 < (int)uStack_3aac)) {
          if (DAT_0065d3dc != 0) {
            (*DAT_0065d3e0)(L"Macro data: (total size=%d)",uStack_3ab4);
            FUN_00407c90(&uStack_2804,uVar5,0x20,0);
            iVar2 = 0;
            if (0 < iVar4) {
              do {
                uVar10 = (uint)auStack_2802[iVar2 * 2];
                auStack_3004[0] = 0;
                uVar6 = (uint)auStack_2802[iVar2 * 2 + -1];
                FUN_00407fb0(L"Macro[%d]: addr=0x%x(%d), size=0x%x(%d include name size), name=",
                             iVar2,uVar6,uVar6,uVar10,uVar10);
                uVar5 = (uint)*(byte *)((int)auStack_2802 + (uVar6 - 2));
                iStack_3a98 = (int)auStack_2802 + (uVar6 - 1);
                uStack_3aac = uVar5;
                FUN_00408000(iStack_3a98);
                FUN_00407fb0(L", data=\n");
                FUN_004080a0(uVar5 + iStack_3a98,(uVar10 - uVar5) + -1);
                (*DAT_0065d3e0)(auStack_3004);
                iVar2 = iVar2 + 1;
                param_1 = local_3a9c;
              } while (iVar2 < iStack_3ab0);
            }
          }
          Sleep(0x1e);
          iVar2 = (**(code **)(*param_1 + 100))(&uStack_2804,uStack_3ab4);
          pcVar7 = Sleep_exref;
          piVar8 = local_3aa4;
          param_3 = local_3aa8;
          if ((iVar2 == 0) && (local_3abc == 0)) goto LAB_004a04bb;
        }
LAB_004a0344:
        if ((param_5 & 6) == 0) {
LAB_004a042b:
          if (((param_5 & 8) != 0) && ((char)piVar8[0x9a2] != '\0')) {
            FUN_004465a0(local_3ab8 + 0x2870);
          }
          if (((param_5 & 0x80) != 0) && (1 < piVar8[0x99a])) {
            (*pcVar7)(0x1e);
            local_3aa8 = (HWND)CONCAT31(local_3aa8._1_3_,*(undefined1 *)(param_1[4] + 0x2fc));
            iVar2 = (**(code **)(*param_1 + 0x84))(local_3aa8);
            if ((iVar2 == 0) && (local_3abc == 0)) goto LAB_004a04bb;
          }
          if (param_3 != (HWND)0x0) {
            PostMessageW(param_3,param_4,0x3c,0);
          }
          goto LAB_004a04a7;
        }
        uStack_3a94 = 0;
        _memset(auStack_3a93,0,399);
        (*pcVar7)(0x1e);
        iVar2 = (**(code **)(*param_1 + 0x70))(&iStack_3a98,400);
        if ((iVar2 != 0) || (local_3abc != 0)) {
          FUN_0049fa70(param_1,&uStack_3a94,local_3ab8);
          if (DAT_0065d3dc != 0) {
            (*DAT_0065d3e0)(L"nCurMode = %d",uStack_3a47);
            FUN_00407c90(auStack_3a46,0xd0,0x1a,L"LED: ");
            FUN_00407c90(&uStack_3a94,400,0x1e,L"Cfg(Save): ");
          }
          (*pcVar7)(0x1e);
          iVar2 = (**(code **)(*param_1 + 0x6c))(&iStack_3a98,400);
          if ((iVar2 != 0) || (local_3abc != 0)) {
            if (param_3 != (HWND)0x0) {
              PostMessageW(param_3,param_4,0x28,0);
            }
            goto LAB_004a042b;
          }
        }
      }
    }
  }
  else {
    (*DAT_0065d3e0)(L"Reset");
    iVar2 = FUN_0049ef00();
    if (iVar2 == 0) {
      if (local_3abc != 0) {
        local_3aa0 = 1;
      }
      goto LAB_004a04bb;
    }
LAB_004a04a7:
    local_3aa0 = 1;
  }
LAB_004a04bb:
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_3 == (HWND)0x0) {
    (*pcVar7)(0x1e);
  }
  else {
    PostMessageW(param_3,param_4,100,0);
    (*pcVar7)(500);
  }
LAB_004a04f3:
  __security_check_cookie(local_4 ^ (uint)&local_3abc);
  return;
}



// ==== 004ac430 FUN_004ac430 ====
// why: calls ReadFile

void __fastcall FUN_004ac430(int param_1)

{
  char cVar1;
  HANDLE hFile;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_44c [3];
  char local_449;
  DWORD local_448;
  int local_444;
  undefined1 local_440 [2];
  undefined4 local_43e;
  undefined4 local_43a;
  undefined4 local_436;
  undefined4 local_432;
  undefined4 local_42e;
  undefined4 local_42a;
  undefined4 local_426;
  undefined4 local_422;
  undefined4 local_41e;
  undefined2 local_41a;
  undefined4 local_418;
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_44c;
  local_444 = param_1;
  if ((*(int *)(param_1 + 4) != 0) && (local_414 != (wchar_t *)0x0)) {
    __snwprintf_s(local_414,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,*(int *)(param_1 + 4) + 0x46);
  }
  __snwprintf_s(local_20c,0x104,0x103,L"%sgif_list.gcc",local_414);
  hFile = CreateFileW(local_20c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    FUN_0044e280();
    *(undefined1 *)(param_1 + 0x20) = 0xff;
    local_449 = '\0';
    local_448 = 0;
    ReadFile(hFile,&local_449,1,&local_448,(LPOVERLAPPED)0x0);
    local_43e = 0;
    local_43a = 0;
    local_436 = 0;
    local_432 = 0;
    local_42e = 0;
    local_42a = 0;
    local_426 = 0;
    local_422 = 0;
    local_41e = 0;
    local_41a = 0;
    local_418 = 0;
    local_440 = (undefined1  [2])0x0;
    iVar2 = ReadFile(hFile,local_440,0x2c,&local_448,(LPOVERLAPPED)0x0);
    while ((iVar2 != 0 && (local_448 == 0x2c))) {
      if ((&stack0x00000000 != (undefined1 *)0x440) &&
         (puVar3 = _malloc(0x2c), puVar3 != (undefined4 *)0x0)) {
        puVar4 = (undefined4 *)local_440;
        puVar5 = puVar3;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_0044e0a0(puVar3);
        param_1 = local_444;
      }
      local_440 = (undefined1  [2])0x0;
      local_43e = 0;
      local_43a = 0;
      local_436 = 0;
      local_432 = 0;
      local_42e = 0;
      local_42a = 0;
      local_426 = 0;
      local_422 = 0;
      local_41e = 0;
      local_41a = 0;
      local_418 = 0;
      iVar2 = ReadFile(hFile,local_440,0x2c,&local_448,(LPOVERLAPPED)0x0);
    }
    CloseHandle(hFile);
    if ((local_449 < '\0') || (cVar1 = local_449, *(int *)(param_1 + 0x10) <= (int)local_449)) {
      cVar1 = '\0';
    }
    *(char *)(param_1 + 0x20) = cVar1;
  }
  __security_check_cookie(local_4 ^ (uint)auStack_44c);
  return;
}



// ==== 004ac610 FUN_004ac610 ====
// why: calls WriteFile

void __fastcall FUN_004ac610(int param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  DWORD local_418;
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_418;
  if ((*(int *)(param_1 + 4) != 0) && (local_414 != (wchar_t *)0x0)) {
    __snwprintf_s(local_414,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,*(int *)(param_1 + 4) + 0x46);
  }
  __snwprintf_s(local_20c,0x104,0x103,L"%sgif_list.gcc",local_414);
  hFile = CreateFileW(local_20c,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    local_418 = 0;
    WriteFile(hFile,(LPCVOID)(param_1 + 0x20),1,&local_418,(LPOVERLAPPED)0x0);
    for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[1]) {
      if ((LPCVOID)*puVar1 != (LPCVOID)0x0) {
        WriteFile(hFile,(LPCVOID)*puVar1,0x2c,&local_418,(LPOVERLAPPED)0x0);
      }
    }
    CloseHandle(hFile);
  }
  __security_check_cookie(local_4 ^ (uint)&local_418);
  return;
}



// ==== 004b8c8c Read ====
// why: calls ReadFile

/* Library Function - Single Match
    public: virtual unsigned int __thiscall CFile::Read(void *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __thiscall CFile::Read(CFile *this,void *param_1,uint param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)(this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      uVar3 = *(undefined4 *)(this + 0xc);
      DVar2 = GetLastError();
      ThrowOsError(DVar2,uVar3);
    }
  }
  return param_2;
}



// ==== 004b8cce Write ====
// why: calls WriteFile

/* Library Function - Single Match
    public: virtual void __thiscall CFile::Write(void const *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CFile::Write(CFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    BVar2 = WriteFile(*(HANDLE *)(this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      uVar4 = *(undefined4 *)(this + 0xc);
      DVar3 = GetLastError();
      ThrowOsError(DVar3,uVar4);
    }
    if (param_2 != uVar1) {
      FUN_004c523e(0xd,0xffffffff,*(undefined4 *)(this + 0xc));
    }
  }
  return;
}



// ==== 005b3974 __NMSG_WRITE ====
// why: calls WriteFile

/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2008 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  errno_t eVar4;
  DWORD DVar5;
  size_t sVar6;
  HANDLE hFile;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_0064f840)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar2 = local_8;
  if (local_8 < 0x17) {
    iVar3 = __set_error_mode(3);
    if ((iVar3 != 1) && ((iVar3 = __set_error_mode(3), iVar3 != 0 || (DAT_0064f648 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      eVar4 = _strcpy_s(&DAT_00657210,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_0065732d = 0;
      DVar5 = GetModuleFileNameA((HMODULE)0x0,&DAT_00657229,0x104);
      if ((DVar5 == 0) &&
         (eVar4 = _strcpy_s(&DAT_00657229,0x2fb,"<program name unknown>"), eVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar6 = _strlen(&DAT_00657229);
      if (0x3c < sVar6 + 1) {
        sVar6 = _strlen(&DAT_00657229);
        eVar4 = _strncpy_s((char *)(sVar6 + 0x6571ee),(int)&DAT_00657524 - (int)(sVar6 + 0x6571ee),
                           "...",3);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar4 = _strcat_s(&DAT_00657210,0x314,"\n\n");
      if (eVar4 == 0) {
        eVar4 = _strcat_s(&DAT_00657210,0x314,*(char **)(local_8 * 8 + 0x64f844));
        if (eVar4 == 0) {
          ___crtMessageBoxA(&DAT_00657210,"Microsoft Visual C++ Runtime Library",0x12010);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_c;
      puVar1 = (undefined4 *)(uVar2 * 8 + 0x64f844);
      sVar6 = _strlen((char *)*puVar1);
      WriteFile(hFile,(LPCVOID)*puVar1,sVar6,lpNumberOfBytesWritten,lpOverlapped);
    }
  }
  return;
}



// ==== 005bac7c __read_nolock ====
// why: calls ReadFile

/* Library Function - Single Match
    __read_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __read_nolock(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  ulong *puVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  BOOL BVar8;
  DWORD DVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int unaff_EDI;
  bool bVar14;
  longlong lVar15;
  undefined2 uVar16;
  uint local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  uVar1 = _MaxCharCount;
  local_18 = -2;
  if (_FileHandle == -2) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    return -1;
  }
  if ((_FileHandle < 0) || (DAT_00671240 <= (uint)_FileHandle)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  piVar5 = &DAT_00671260 + (_FileHandle >> 5);
  iVar13 = (_FileHandle & 0x1fU) * 0x40;
  bVar2 = *(byte *)(*piVar5 + iVar13 + 4);
  if ((bVar2 & 1) == 0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    goto LAB_005bad86;
  }
  if (_MaxCharCount < 0x80000000) {
    local_14 = (byte *)0x0;
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != (void *)0x0) {
      local_6 = (char)(*(char *)(*piVar5 + iVar13 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_005bad74;
        uVar6 = _MaxCharCount >> 1;
        _MaxCharCount = 4;
        if (3 < uVar6) {
          _MaxCharCount = uVar6;
        }
        local_10 = __malloc_crt(_MaxCharCount);
        if (local_10 == (byte *)0x0) {
          piVar5 = __errno();
          *piVar5 = 0xc;
          puVar4 = ___doserrno();
          *puVar4 = 8;
          return -1;
        }
        lVar15 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
        iVar12 = *piVar5;
        *(int *)(iVar13 + 0x28 + iVar12) = (int)lVar15;
        *(int *)(iVar13 + 0x2c + iVar12) = (int)((ulonglong)lVar15 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~_MaxCharCount & 1) == 0) goto LAB_005bad74;
          _MaxCharCount = _MaxCharCount & 0xfffffffe;
        }
        local_10 = _DstBuf;
      }
      pbVar7 = local_10;
      uVar6 = _MaxCharCount;
      if ((((*(byte *)(*piVar5 + iVar13 + 4) & 0x48) != 0) &&
          (bVar2 = *(byte *)(*piVar5 + iVar13 + 5), bVar2 != 10)) && (_MaxCharCount != 0)) {
        *local_10 = bVar2;
        pbVar7 = local_10 + 1;
        uVar6 = _MaxCharCount - 1;
        local_14 = (byte *)0x1;
        *(undefined1 *)(iVar13 + 5 + *piVar5) = 10;
        if (((local_6 != '\0') && (bVar2 = *(byte *)(iVar13 + 0x25 + *piVar5), bVar2 != 10)) &&
           (uVar6 != 0)) {
          *pbVar7 = bVar2;
          pbVar7 = local_10 + 2;
          uVar6 = _MaxCharCount - 2;
          local_14 = (byte *)0x2;
          *(undefined1 *)(iVar13 + 0x25 + *piVar5) = 10;
          if (((local_6 == '\x01') && (bVar2 = *(byte *)(iVar13 + 0x26 + *piVar5), bVar2 != 10)) &&
             (uVar6 != 0)) {
            *pbVar7 = bVar2;
            pbVar7 = local_10 + 3;
            local_14 = (byte *)0x3;
            *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
            uVar6 = _MaxCharCount - 3;
          }
        }
      }
      _MaxCharCount = uVar6;
      BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),pbVar7,_MaxCharCount,&local_1c,
                       (LPOVERLAPPED)0x0);
      if (((BVar8 == 0) || ((int)local_1c < 0)) || (_MaxCharCount < local_1c)) {
        uVar10 = GetLastError();
        if (uVar10 != 5) {
          if (uVar10 == 0x6d) {
            local_18 = 0;
            goto LAB_005bb093;
          }
          goto LAB_005bb088;
        }
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        local_14 = (byte *)((int)local_14 + local_1c);
        pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
        if ((*pbVar7 & 0x80) == 0) goto LAB_005bb093;
        if (local_6 == '\x02') {
          if ((local_1c == 0) || (*(short *)local_10 != 10)) {
            *pbVar7 = *pbVar7 & 0xfb;
          }
          else {
            *pbVar7 = *pbVar7 | 4;
          }
          local_14 = local_10 + (int)local_14;
          _MaxCharCount = (uint)local_10;
          pbVar7 = local_10;
          if (local_10 < local_14) {
            do {
              sVar3 = *(short *)_MaxCharCount;
              if (sVar3 == 0x1a) {
                pbVar11 = (byte *)(iVar13 + 4 + *piVar5);
                if ((*pbVar11 & 0x40) == 0) {
                  *pbVar11 = *pbVar11 | 2;
                }
                else {
                  *(undefined2 *)pbVar7 = *(undefined2 *)_MaxCharCount;
                  pbVar7 = pbVar7 + 2;
                }
                break;
              }
              if (sVar3 == 0xd) {
                if (_MaxCharCount < local_14 + -2) {
                  if (*(short *)(_MaxCharCount + 2) == 10) {
                    uVar1 = _MaxCharCount + 4;
                    goto LAB_005bb136;
                  }
LAB_005bb1c9:
                  _MaxCharCount = _MaxCharCount + 2;
                  uVar16 = 0xd;
LAB_005bb1cb:
                  *(undefined2 *)pbVar7 = uVar16;
                }
                else {
                  uVar1 = _MaxCharCount + 2;
                  BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_c,2,&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                  goto LAB_005bb1c9;
                  if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                    if ((pbVar7 == local_10) && (local_c == 10)) goto LAB_005bb136;
                    __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_005bb1d1;
                    goto LAB_005bb1c9;
                  }
                  if (local_c == 10) {
LAB_005bb136:
                    _MaxCharCount = uVar1;
                    uVar16 = 10;
                    goto LAB_005bb1cb;
                  }
                  pbVar7[0] = 0xd;
                  pbVar7[1] = 0;
                  *(undefined1 *)(iVar13 + 5 + *piVar5) = (undefined1)local_c;
                  *(undefined1 *)(iVar13 + 0x25 + *piVar5) = local_c._1_1_;
                  *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
                  _MaxCharCount = uVar1;
                }
                pbVar7 = pbVar7 + 2;
                uVar1 = _MaxCharCount;
              }
              else {
                *(short *)pbVar7 = sVar3;
                pbVar7 = pbVar7 + 2;
                uVar1 = _MaxCharCount + 2;
              }
LAB_005bb1d1:
              _MaxCharCount = uVar1;
            } while (_MaxCharCount < local_14);
          }
          local_14 = (byte *)((int)pbVar7 - (int)local_10);
          goto LAB_005bb093;
        }
        if ((local_1c == 0) || (*local_10 != 10)) {
          *pbVar7 = *pbVar7 & 0xfb;
        }
        else {
          *pbVar7 = *pbVar7 | 4;
        }
        local_14 = local_10 + (int)local_14;
        _MaxCharCount = (uint)local_10;
        pbVar7 = local_10;
        if (local_10 < local_14) {
          do {
            bVar2 = *(byte *)_MaxCharCount;
            if (bVar2 == 0x1a) {
              pbVar11 = (byte *)(iVar13 + 4 + *piVar5);
              if ((*pbVar11 & 0x40) == 0) {
                *pbVar11 = *pbVar11 | 2;
              }
              else {
                *pbVar7 = *(byte *)_MaxCharCount;
                pbVar7 = pbVar7 + 1;
              }
              break;
            }
            if (bVar2 == 0xd) {
              if (_MaxCharCount < local_14 + -1) {
                if (*(char *)(_MaxCharCount + 1) == '\n') {
                  uVar6 = _MaxCharCount + 2;
                  goto LAB_005baf13;
                }
LAB_005baf8a:
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar7 = 0xd;
              }
              else {
                uVar6 = _MaxCharCount + 1;
                BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_5,1,&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                goto LAB_005baf8a;
                if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                  if ((pbVar7 == local_10) && (local_5 == '\n')) goto LAB_005baf13;
                  __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_005baf8e;
                  goto LAB_005baf8a;
                }
                if (local_5 == '\n') {
LAB_005baf13:
                  _MaxCharCount = uVar6;
                  *pbVar7 = 10;
                }
                else {
                  *pbVar7 = 0xd;
                  *(char *)(iVar13 + 5 + *piVar5) = local_5;
                  _MaxCharCount = uVar6;
                }
              }
              pbVar7 = pbVar7 + 1;
              uVar6 = _MaxCharCount;
            }
            else {
              *pbVar7 = bVar2;
              pbVar7 = pbVar7 + 1;
              uVar6 = _MaxCharCount + 1;
            }
LAB_005baf8e:
            _MaxCharCount = uVar6;
          } while (_MaxCharCount < local_14);
        }
        local_14 = (byte *)((int)pbVar7 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (byte *)0x0)) goto LAB_005bb093;
        bVar2 = pbVar7[-1];
        if ((char)bVar2 < '\0') {
          iVar12 = 1;
          pbVar7 = pbVar7 + -1;
          while ((((&DAT_00650320)[bVar2] == '\0' && (iVar12 < 5)) && (local_10 <= pbVar7))) {
            pbVar7 = pbVar7 + -1;
            bVar2 = *pbVar7;
            iVar12 = iVar12 + 1;
          }
          if ((char)(&DAT_00650320)[*pbVar7] == 0) {
            piVar5 = __errno();
            *piVar5 = 0x2a;
            goto LAB_005bb08f;
          }
          if ((char)(&DAT_00650320)[*pbVar7] + 1 == iVar12) {
            pbVar7 = pbVar7 + iVar12;
          }
          else if ((*(byte *)(*piVar5 + iVar13 + 4) & 0x48) == 0) {
            __lseeki64_nolock(_FileHandle,CONCAT44(1,-iVar12 >> 0x1f),unaff_EDI);
          }
          else {
            pbVar11 = pbVar7 + 1;
            *(byte *)(*piVar5 + iVar13 + 5) = *pbVar7;
            if (1 < iVar12) {
              *(byte *)(iVar13 + 0x25 + *piVar5) = *pbVar11;
              pbVar11 = pbVar7 + 2;
            }
            if (iVar12 == 3) {
              *(byte *)(iVar13 + 0x26 + *piVar5) = *pbVar11;
              pbVar11 = pbVar11 + 1;
            }
            pbVar7 = pbVar11 + -iVar12;
          }
        }
        iVar12 = (int)pbVar7 - (int)local_10;
        local_14 = (byte *)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_10,iVar12,_DstBuf,uVar1 >> 1);
        if (local_14 != (byte *)0x0) {
          bVar14 = local_14 != (byte *)iVar12;
          local_14 = (byte *)((int)local_14 * 2);
          *(uint *)(iVar13 + 0x30 + *piVar5) = (uint)bVar14;
          goto LAB_005bb093;
        }
        uVar10 = GetLastError();
LAB_005bb088:
        __dosmaperr(uVar10);
      }
LAB_005bb08f:
      local_18 = -1;
LAB_005bb093:
      if (local_10 != _DstBuf) {
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_005bad74:
  puVar4 = ___doserrno();
  *puVar4 = 0;
  piVar5 = __errno();
  *piVar5 = 0x16;
LAB_005bad86:
  __invalid_parameter(0,0,0,0,0);
  return -1;
}



// ==== 005bb33b __write_nolock ====
// why: calls WriteFile

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR WVar1;
  wchar_t wVar2;
  ulong *puVar3;
  int *piVar4;
  int iVar5;
  _ptiddata p_Var6;
  BOOL BVar7;
  DWORD nNumberOfBytesToWrite;
  int iVar8;
  uint uVar9;
  char cVar10;
  WCHAR *pWVar11;
  char *pcVar12;
  int unaff_EDI;
  WCHAR *pWVar13;
  ushort uVar14;
  UINT local_1ae8;
  uint local_1ae4;
  char local_1add;
  int *local_1adc;
  char *local_1ad8;
  int local_1ad4;
  WCHAR *local_1ad0;
  char *local_1acc;
  WCHAR *local_1ac8;
  DWORD local_1ac4;
  WCHAR *local_1ac0;
  WCHAR local_1abc [852];
  CHAR local_1414 [3416];
  WCHAR local_6bc [854];
  undefined2 local_10;
  uint local_8;
  
  local_8 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  local_1ad0 = _Buf;
  local_1acc = (char *)0x0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_005bba61;
  if (_Buf == (void *)0x0) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    goto LAB_005bba61;
  }
  piVar4 = &DAT_00671260 + (_FileHandle >> 5);
  iVar8 = (_FileHandle & 0x1fU) * 0x40;
  cVar10 = (char)(*(char *)(*piVar4 + iVar8 + 0x24) * '\x02') >> 1;
  local_1add = cVar10;
  local_1adc = piVar4;
  if (((cVar10 == '\x02') || (cVar10 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    goto LAB_005bba61;
  }
  if ((*(byte *)(*piVar4 + iVar8 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar5 = __isatty(_FileHandle);
  if ((iVar5 == 0) || ((*(byte *)(iVar8 + 4 + *piVar4) & 0x80) == 0)) {
LAB_005bb6d2:
    if ((*(byte *)((undefined4 *)(*piVar4 + iVar8) + 1) & 0x80) == 0) {
      BVar7 = WriteFile(*(HANDLE *)(*piVar4 + iVar8),local_1ad0,_MaxCharCount,(LPDWORD)&local_1ad8,
                        (LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
LAB_005bb9d2:
        local_1ac4 = GetLastError();
      }
      else {
        local_1ac4 = 0;
        local_1acc = local_1ad8;
      }
LAB_005bb9de:
      if (local_1acc != (char *)0x0) goto LAB_005bba61;
      goto LAB_005bb9e7;
    }
    local_1ac4 = 0;
    if (cVar10 == '\0') {
      local_1ac8 = local_1ad0;
      if (_MaxCharCount == 0) goto LAB_005bba23;
      do {
        local_1ac0 = (WCHAR *)0x0;
        uVar9 = (int)local_1ac8 - (int)local_1ad0;
        pWVar11 = local_1abc;
        do {
          if (_MaxCharCount <= uVar9) break;
          pWVar13 = (WCHAR *)((int)local_1ac8 + 1);
          WVar1 = *local_1ac8;
          uVar9 = uVar9 + 1;
          if ((char)WVar1 == '\n') {
            local_1ad4 = local_1ad4 + 1;
            *(char *)pWVar11 = '\r';
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          *(char *)pWVar11 = (char)WVar1;
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          local_1ac8 = pWVar13;
        } while (local_1ac0 < (WCHAR *)0x13ff);
        BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                          (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
        if (BVar7 == 0) goto LAB_005bb9d2;
        local_1acc = local_1acc + (int)local_1ad8;
      } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
              (piVar4 = local_1adc, (uint)((int)local_1ac8 - (int)local_1ad0) < _MaxCharCount));
      goto LAB_005bb9de;
    }
    local_1ac0 = local_1ad0;
    if (cVar10 == '\x02') {
      if (_MaxCharCount != 0) {
        do {
          local_1ac8 = (WCHAR *)0x0;
          uVar9 = (int)local_1ac0 - (int)local_1ad0;
          pWVar11 = local_1abc;
          do {
            if (_MaxCharCount <= uVar9) break;
            pWVar13 = local_1ac0 + 1;
            WVar1 = *local_1ac0;
            uVar9 = uVar9 + 2;
            if (WVar1 == L'\n') {
              local_1ad4 = local_1ad4 + 2;
              *pWVar11 = L'\r';
              pWVar11 = pWVar11 + 1;
              local_1ac8 = local_1ac8 + 1;
            }
            local_1ac8 = local_1ac8 + 1;
            *pWVar11 = WVar1;
            pWVar11 = pWVar11 + 1;
            local_1ac0 = pWVar13;
          } while (local_1ac8 < (WCHAR *)0x13fe);
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                            (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_005bb9d2;
          local_1acc = local_1acc + (int)local_1ad8;
        } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
                (piVar4 = local_1adc, (uint)((int)local_1ac0 - (int)local_1ad0) < _MaxCharCount));
        goto LAB_005bb9de;
      }
    }
    else if (_MaxCharCount != 0) {
      do {
        local_1ac8 = (WCHAR *)0x0;
        uVar9 = (int)local_1ac0 - (int)local_1ad0;
        pWVar11 = local_6bc;
        do {
          if (_MaxCharCount <= uVar9) break;
          WVar1 = *local_1ac0;
          local_1ac0 = local_1ac0 + 1;
          uVar9 = uVar9 + 2;
          if (WVar1 == L'\n') {
            *pWVar11 = L'\r';
            pWVar11 = pWVar11 + 1;
            local_1ac8 = local_1ac8 + 1;
          }
          local_1ac8 = local_1ac8 + 1;
          *pWVar11 = WVar1;
          pWVar11 = pWVar11 + 1;
        } while (local_1ac8 < (WCHAR *)0x6a8);
        pcVar12 = (char *)0x0;
        iVar5 = WideCharToMultiByte(0xfde9,0,local_6bc,((int)pWVar11 - (int)local_6bc) / 2,
                                    local_1414,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) goto LAB_005bb9d2;
        do {
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),local_1414 + (int)pcVar12,
                            iVar5 - (int)pcVar12,(LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) {
            local_1ac4 = GetLastError();
            break;
          }
          pcVar12 = pcVar12 + (int)local_1ad8;
        } while ((int)pcVar12 < iVar5);
      } while ((iVar5 <= (int)pcVar12) &&
              (local_1acc = (char *)((int)local_1ac0 - (int)local_1ad0), local_1acc < _MaxCharCount)
              );
      goto LAB_005bb9de;
    }
  }
  else {
    p_Var6 = __getptd();
    local_1ae4 = (uint)(p_Var6->ptlocinfo->lc_category[0].wlocale == (wchar_t *)0x0);
    BVar7 = GetConsoleMode(*(HANDLE *)(iVar8 + *piVar4),&local_1ae8);
    if ((BVar7 == 0) || ((local_1ae4 != 0 && (cVar10 == '\0')))) goto LAB_005bb6d2;
    local_1ae8 = GetConsoleCP();
    local_1ac8 = (WCHAR *)0x0;
    if (_MaxCharCount != 0) {
      local_1ac0 = (WCHAR *)0x0;
      pWVar11 = local_1ad0;
      do {
        piVar4 = local_1adc;
        if (local_1add == '\0') {
          cVar10 = (char)*pWVar11;
          local_1ae4 = (uint)(cVar10 == '\n');
          iVar5 = *local_1adc + iVar8;
          if (*(int *)(iVar5 + 0x38) == 0) {
            iVar5 = _isleadbyte(CONCAT22(cVar10 >> 7,(short)cVar10));
            if (iVar5 == 0) {
              uVar14 = 1;
              pWVar13 = pWVar11;
              goto LAB_005bb539;
            }
            if ((char *)((int)local_1ad0 + (_MaxCharCount - (int)pWVar11)) < (char *)0x2) {
              local_1acc = local_1acc + 1;
              *(char *)(iVar8 + 0x34 + *piVar4) = (char)*pWVar11;
              *(undefined4 *)(iVar8 + 0x38 + *piVar4) = 1;
              break;
            }
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar11,2);
            if (iVar5 == -1) break;
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar5 + 0x34);
            *(undefined4 *)(iVar5 + 0x38) = 0;
            uVar14 = 2;
            pWVar13 = &local_10;
            local_10._1_1_ = cVar10;
LAB_005bb539:
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar13,(uint)uVar14);
            if (iVar5 == -1) break;
          }
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(local_1ae8,0,(LPCWSTR)&local_1ac4,1,(LPSTR)&local_10,5,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_1ac8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_005bb9d2;
          local_1acc = (char *)((int)local_1ac0 + local_1ad4);
          if ((int)local_1ac8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae4 != 0) {
            local_10._0_1_ = '\r';
            BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,1,(LPDWORD)&local_1ac8,
                              (LPOVERLAPPED)0x0);
            if (BVar7 == 0) goto LAB_005bb9d2;
            if ((int)local_1ac8 < 1) break;
            local_1ad4 = local_1ad4 + 1;
            local_1acc = local_1acc + 1;
          }
        }
        else {
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            local_1ac4 = (DWORD)(ushort)*pWVar11;
            local_1ae4 = (uint)(*pWVar11 == L'\n');
            pWVar11 = pWVar11 + 1;
            local_1ac0 = local_1ac0 + 1;
          }
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            wVar2 = __putwch_nolock((wchar_t)local_1ac4);
            if (wVar2 != (wchar_t)local_1ac4) goto LAB_005bb9d2;
            local_1acc = local_1acc + 2;
            if (local_1ae4 != 0) {
              local_1ac4 = 0xd;
              wVar2 = __putwch_nolock(L'\r');
              if (wVar2 != (wchar_t)local_1ac4) goto LAB_005bb9d2;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac0 < _MaxCharCount);
      goto LAB_005bb9de;
    }
LAB_005bb9e7:
    piVar4 = local_1adc;
    if (local_1ac4 != 0) {
      if (local_1ac4 == 5) {
        piVar4 = __errno();
        *piVar4 = 9;
        puVar3 = ___doserrno();
        *puVar3 = 5;
      }
      else {
        __dosmaperr(local_1ac4);
      }
      goto LAB_005bba61;
    }
  }
LAB_005bba23:
  if (((*(byte *)(iVar8 + 4 + *piVar4) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar4 = __errno();
    *piVar4 = 0x1c;
    puVar3 = ___doserrno();
    *puVar3 = 0;
  }
LAB_005bba61:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}



// ==== 005c9aee HidD_GetAttributes ====
// why: calls HidD_GetAttributes

void HidD_GetAttributes(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_GetAttributes();
  return;
}



// ==== 005c9b00 HidP_GetCaps ====
// why: calls HidP_GetCaps

void HidP_GetCaps(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidP_GetCaps();
  return;
}



// ==== 005c9b18 HidD_SetFeature ====
// why: calls HidD_SetFeature

void HidD_SetFeature(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_SetFeature();
  return;
}



// ==== 005c9b1e HidD_GetFeature ====
// why: calls HidD_GetFeature

void HidD_GetFeature(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_GetFeature();
  return;
}


