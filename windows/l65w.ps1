# l65w.ps1 - Womier L65 wireless (2.4G dongle) control for Windows. Mirrors the wired l65ctl for the
# settings that live in the config block, plus per-key colours, sent over the dongle's packetized channel.
# The keyboard's underside switch must be on 2.4G. It sleeps when idle (press a key to wake).
#
#   .\l65w.ps1 dump
#   .\l65w.ps1 effect fixed_on            # or a number; see -List
#   .\l65w.ps1 set -Brightness 3 -Speed 2 -ColorSlot 2
#   .\l65w.ps1 side -Mode solid -Color blue -Brightness 4
#   .\l65w.ps1 global -Sleep 60 -Tap 80 -Debounce 3 -Knob media
#   .\l65w.ps1 keys -All blue -Keys w=red,a=red,s=red,d=red
#   .\l65w.ps1 battery
[CmdletBinding()]
param(
  [Parameter(Position=0)][ValidateSet('dump','battery','effect','set','side','global','keys','colors')][string]$Cmd = 'dump',
  [Parameter(Position=1)][string]$Effect,
  [int]$Brightness = -1, [int]$Speed = -1, [int]$ColorSlot = -1,
  [string]$Mode, [string]$Color, [int]$SideBrightness = -1, [int]$SideSpeed = -1,
  [int]$Sleep = -1, [int]$Tap = -1, [int]$Debounce = -1, [string]$Knob,
  [string]$All, [string]$Keys, [int]$Slot = 0, [string]$Rgb,
  [switch]$List
)

$EFFECTS = @{ off=0; fixed_on=1; respire=2; rainbow=3; flash_away=4; raindrops=5; rainbow_wheel=6;
  ripples_shining=7; stars_twinkle=8; shadow_disappear=9; retro_snake=10; neon_stream=11; reaction=12;
  sine_wave=13; retinue_scanning=14; rotating_windmill=15; colorful_waterfall=16; blossoming=17;
  rotating_storm=18; self_define=21 }
$SIDE_MODES = @{ rainbow=1; flicker=2; solid=3; breathing=4; off=5 }
$COLOR_SLOTS = @{ red=0; green=1; blue=2; yellow=3; pink=4; cyan=5; white=6; colorful=7 }
$RGBHEX = @{ red='ff0000'; green='00ff00'; blue='0000ff'; yellow='ffff00'; pink='ff00ff'; cyan='00ffff';
  white='ffffff'; orange='ff8000'; purple='8000ff'; off='000000' }
# LED slot per key (column*6+row), from the vendor KB.ini
$KEY_SLOTS = @{ esc=1;'1'=7;'2'=13;'3'=19;'4'=25;'5'=31;'6'=37;'7'=43;'8'=49;'9'=55;'0'=61;minus=67;equal=73;
  backspace=79;delete=92;tab=2;q=8;w=14;e=20;r=26;t=32;y=38;u=44;i=50;o=56;p=62;lbracket=68;rbracket=74;
  backslash=80;pgup=93;caps=3;a=9;s=15;d=21;f=27;g=33;h=39;j=45;k=51;l=57;semicolon=63;quote=69;enter=81;
  pgdn=94;lshift=4;z=10;x=16;c=22;v=28;b=34;n=40;m=46;comma=52;period=58;slash=64;rshift=82;up=88;lctrl=5;
  lwin=11;lalt=17;space=35;ralt=53;fn=59;left=83;down=89;right=95 }

$src = @'
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading;
using Microsoft.Win32.SafeHandles;
public class Dongle : IDisposable {
  const uint GENERIC_RW = 0xC0000000, OPEN_EXISTING = 3, FILE_SHARE = 3;
  [DllImport("kernel32.dll", SetLastError=true, CharSet=CharSet.Unicode)]
  static extern SafeFileHandle CreateFile(string n, uint a, uint s, IntPtr sa, uint c, uint f, IntPtr t);
  [DllImport("kernel32.dll", SetLastError=true)] static extern bool WriteFile(SafeFileHandle h, byte[] b, uint n, out uint w, IntPtr ov);
  [DllImport("kernel32.dll", SetLastError=true)] static extern bool ReadFile(SafeFileHandle h, byte[] b, uint n, out uint r, IntPtr ov);
  [DllImport("kernel32.dll", SetLastError=true)] static extern bool CancelIoEx(SafeFileHandle h, IntPtr ov);
  SafeFileHandle h;
  public Dongle(string path) {
    h = CreateFile(path, GENERIC_RW, FILE_SHARE, IntPtr.Zero, OPEN_EXISTING, 0, IntPtr.Zero);
    if (h.IsInvalid) throw new Exception("open failed " + Marshal.GetLastWin32Error() + " (keyboard on 2.4G?)");
  }
  static byte Checksum(byte[] p) { int s = 0; for (int i = 0; i < 19; i++) s += p[i]; return (byte)s; }
  byte[] Read20(int ms) {
    var rb = new byte[20]; bool ok = false; Exception ex = null;
    var t = new Thread(delegate() { try { uint r; ok = ReadFile(h, rb, 20, out r, IntPtr.Zero); } catch (Exception e) { ex = e; } });
    t.IsBackground = true; t.Start();
    if (!t.Join(ms)) { CancelIoEx(h, IntPtr.Zero); t.Join(500); return null; }
    if (ex != null) throw ex; if (!ok) return null; return rb;
  }
  void Write20(byte[] p) { uint w; if (!WriteFile(h, p, 20, out w, IntPtr.Zero)) throw new Exception("write err " + Marshal.GetLastWin32Error()); }
  void Drain() { while (Read20(40) != null) {} }
  byte[] Req(byte cmd, byte oper, byte[] data) {
    var p = new byte[20]; p[0] = 0x13; p[1] = cmd; p[2] = 1; p[3] = 0;
    int len = data == null ? 0 : data.Length; p[4] = (byte)((oper << 4) | (len & 0xf));
    if (data != null) Array.Copy(data, 0, p, 5, len); p[19] = Checksum(p); return p;
  }
  public byte[] Xfer(byte cmd, byte oper, byte[] data, int ms) {
    Write20(Req(cmd, oper, data));
    for (int i = 0; i < 25; i++) { var r = Read20(ms); if (r == null) return null; if ((r[1] & 0x7f) == cmd) return r; }
    return null;
  }
  public byte[] ReadBlock(byte readCmd, int nbytes) {
    for (int attempt = 0; attempt < 4; attempt++) {
      Drain(); Write20(Req(readCmd, 0, null));
      var chunks = new Dictionary<int, byte[]>(); int nPkg = -1;
      for (int tries = 0; tries < 90; tries++) {
        var r = Read20(1500); if (r == null) break;
        if ((r[1] & 0x7f) != readCmd) continue;
        nPkg = r[2]; int idx = r[3], len = r[4] & 0xf;
        var d = new byte[len]; Array.Copy(r, 5, d, 0, len); chunks[idx] = d;
        if (nPkg > 0 && chunks.Count >= nPkg) break;
      }
      if (nPkg < 1) continue;
      bool ok = true; for (int i = 0; i < nPkg; i++) if (!chunks.ContainsKey(i)) { ok = false; break; }
      if (!ok) continue;
      var outb = new List<byte>(); for (int i = 0; i < nPkg; i++) outb.AddRange(chunks[i]); return outb.ToArray();
    }
    throw new Exception("read cmd 0x" + readCmd.ToString("X2") + " failed (keyboard asleep or out of range?)");
  }
  public void WriteBlock(byte cmd, byte[] payload) {
    Drain(); int nPkg = (payload.Length + 13) / 14;
    for (int idx = 0; idx < nPkg; idx++) {
      int off = idx * 14, len = Math.Min(14, payload.Length - off);
      var p = new byte[20]; p[0] = 0x13; p[1] = cmd; p[2] = (byte)nPkg; p[3] = (byte)idx;
      p[4] = (byte)((1 << 4) | len); Array.Copy(payload, off, p, 5, len); p[19] = Checksum(p);
      Write20(p);
      byte[] ack = null;
      for (int i = 0; i < 25; i++) { var r = Read20(1500); if (r == null) break; if ((r[1] & 0x7f) == cmd) { ack = r; break; } }
      if (ack == null) throw new Exception("no ack for packet " + idx);
      if ((ack[1] & 0x80) != 0) throw new Exception("keyboard CRC error on packet " + idx);
      if (ack[3] != idx) throw new Exception("ack index mismatch pkt " + idx);
    }
  }
  public void Dispose() { if (h != null && !h.IsInvalid) h.Close(); }
}
'@
if (-not ('Dongle' -as [type])) { Add-Type -TypeDefinition $src }

function Get-Dongle {
  $dev = Get-PnpDevice -PresentOnly | Where-Object { $_.InstanceId -match '^HID\\VID_3554&PID_FA09&MI_01&COL01' }
  if (-not $dev) { throw 'Dongle not found. Plug it in and set the keyboard switch to 2.4G.' }
  $path = '\\?\' + ($dev.InstanceId -replace '\\', '#') + '#{4d1e55b2-f16f-11cf-88cb-001111000030}'
  return New-Object Dongle($path)
}
function Backup([byte[]]$data, [string]$tag) {
  $dir = Join-Path (Split-Path -Parent $MyInvocation.PSCommandPath) 'l65w-backups'
  if (-not $dir) { $dir = Join-Path $PSScriptRoot 'l65w-backups' }
  New-Item -ItemType Directory -Force $dir | Out-Null
  $f = Join-Path $dir ('{0}-{1:yyyyMMdd-HHmmss}.bin' -f $tag, (Get-Date))
  [IO.File]::WriteAllBytes($f, $data); return $f
}
function Read-Cfg($d) {
  $c = $d.ReadBlock(0x44, 128)
  if ($c.Length -ne 128 -or $c[0x7E] -ne 0x5A -or $c[0x7F] -ne 0xA5) { throw 'bad config read' }
  return ,$c
}
function Resolve-Rgb([string]$v) {
  $hex = if ($RGBHEX.ContainsKey($v.ToLower())) { $RGBHEX[$v.ToLower()] } else { $v.TrimStart('#') }
  if ($hex -notmatch '^[0-9A-Fa-f]{6}$') { throw "bad color '$v'" }
  return [byte[]]@([Convert]::ToByte($hex.Substring(0,2),16), [Convert]::ToByte($hex.Substring(2,2),16), [Convert]::ToByte($hex.Substring(4,2),16))
}

if ($List) {
  "effects: " + (($EFFECTS.GetEnumerator() | Sort-Object Value | ForEach-Object { $_.Key }) -join ', ')
  "side modes: " + ($SIDE_MODES.Keys -join ', '); "colors: " + ($RGBHEX.Keys -join ', ')
  "keys: " + ($KEY_SLOTS.Keys -join ' '); return
}

$d = Get-Dongle
try {
  switch ($Cmd) {
    'battery' {
      $r = $d.Xfer(0x4A, 0, $null, 1500)
      if ($r) { "battery {0}%  ({1})" -f $r[5], $(if ($r[6]) {'charging'} else {'discharging'}) } else { 'no response (press a key to wake)' }
    }
    'dump' {
      $c = Read-Cfg $d
      $eff = ($EFFECTS.GetEnumerator() | Where-Object { $_.Value -eq $c[0x0A] } | Select-Object -First 1).Key
      $sm  = ($SIDE_MODES.GetEnumerator() | Where-Object { $_.Value -eq $c[0x12] } | Select-Object -First 1).Key
      "effect      $($c[0x0A]) ($eff)"
      if ($c[0x0A] -ge 1 -and $c[0x0A] -le 18) { $slot = 0x38 + 2*$c[0x0A]; "brightness  $($c[$slot])"; "speed       $($c[$slot+1] -shr 4)"; "color slot  $($c[$slot+1] -band 0xF)" }
      "side strip  mode $($c[0x12]) ($sm), color $($c[0x13]), brightness $($c[0x14]), speed $($c[0x15])"
      "global      tap $($c[0x16])ms, sleep $([int]($c[0x18]/2))min, debounce stage $($c[0x03]+1), knob $(if($c[0x1A]){'lighting'}else{'media'})"
    }
    default {
      $c = Read-Cfg $d
      "backup: $(Backup $c 'wireless-cfg')"
      if ($Cmd -eq 'effect') {
        if (-not $Effect) { throw 'pass an effect name/number' }
        $n = if ($Effect -match '^\d+$') { [int]$Effect } elseif ($EFFECTS.ContainsKey($Effect.ToLower())) { $EFFECTS[$Effect.ToLower()] } else { throw "unknown effect '$Effect'" }
        $c[0x0A] = [byte]$n; $c[0x09] = [byte]([int]($n -eq 21))
      }
      elseif ($Cmd -eq 'set') {
        $eff = $c[0x0A]; if ($eff -lt 1 -or $eff -gt 18) { throw "current effect $eff has no brightness/speed/color; switch effect first" }
        $slot = 0x38 + 2*$eff
        if ($Brightness -ge 0) { $c[$slot] = [byte]$Brightness }
        if ($Speed -ge 0) { $c[$slot+1] = [byte](($Speed -shl 4) -bor ($c[$slot+1] -band 0xF)) }
        if ($ColorSlot -ge 0) { $c[$slot+1] = [byte](($c[$slot+1] -band 0xF0) -bor $ColorSlot) }
      }
      elseif ($Cmd -eq 'side') {
        if ($Mode) { $c[0x12] = [byte]$(if ($SIDE_MODES.ContainsKey($Mode.ToLower())) { $SIDE_MODES[$Mode.ToLower()] } else { [int]$Mode }) }
        if ($Color) { $c[0x13] = [byte]$(if ($COLOR_SLOTS.ContainsKey($Color.ToLower())) { $COLOR_SLOTS[$Color.ToLower()] } else { [int]$Color }) }
        if ($SideBrightness -ge 0) { $c[0x14] = [byte]$SideBrightness }
        if ($SideSpeed -ge 0) { $c[0x15] = [byte]$SideSpeed }
      }
      elseif ($Cmd -eq 'global') {
        if ($Sleep -ge 0) { $c[0x18] = [byte][Math]::Min(255, $Sleep*2) }
        if ($Tap -ge 0) { $c[0x16] = [byte]$Tap }
        if ($Debounce -ge 1) { $c[0x03] = [byte]($Debounce-1) }
        if ($Knob) { $c[0x1A] = [byte]$(if ($Knob -eq 'lighting') {1} else {0}) }
      }
      elseif ($Cmd -eq 'keys') {
        throw 'Per-key colours are not supported over 2.4G (the dongle only carries the 7-colour-per-effect palette, no per-key payload). Use the wired cable + l65ctl for per-key. For a custom effect colour over wireless, use: colors -Rgb RRGGBB [-Effect NAME] [-Slot 0-6].'
      }
      elseif ($Cmd -eq 'colors') {
        # custom effect colour over the dongle: write the 490-byte palette (0x09), then point the effect at the slot
        if (-not $Rgb) { throw 'pass -Rgb RRGGBB (optional -Effect NAME/number, -Slot 0-6)' }
        $eff = if ($Effect) { if ($EFFECTS.ContainsKey($Effect.ToLower())) { $EFFECTS[$Effect.ToLower()] } else { [int]$Effect } } else { $c[0x0A] }
        $rgb = Resolve-Rgb $Rgb
        $tab = $d.ReadBlock(0x49, 490)
        "palette backup: $(Backup $tab 'wireless-palette')"
        $off = $eff*21 + $Slot*3
        for ($i = 0; $i -lt 3; $i++) { $tab[$off+$i] = $rgb[$i] }
        $d.WriteBlock(0x09, $tab)
        Start-Sleep -Milliseconds 300
        $c[0x0A] = [byte]$eff; $c[0x09] = [byte]([int]($eff -eq 21))
        if ($eff -ge 1 -and $eff -le 18) { $sB = 0x38+2*$eff; $c[$sB+1] = [byte](($c[$sB+1] -band 0xF0) -bor ($Slot -band 0xF)); if ($c[$sB] -eq 0) { $c[$sB] = 4 } }
        "effect $eff slot $Slot set to #$($Rgb.TrimStart('#'))"
      }
      $d.WriteBlock(0x04, $c)
      'done'
    }
  }
} finally { $d.Dispose() }
