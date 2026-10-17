#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern u8 g_WinNum;
void SetWinNumAdd(s32 arg0)
{
  u8 *new_var3;
  u8 *new_var2;
  u8 *temp_a0;
  u8 *new_var;
  new_var2 = (&g_WinNum) + (arg0 & 0xFF);
  temp_a0 = new_var2;
  *temp_a0 += 1;
  new_var = &(*temp_a0);
  new_var3 = temp_a0;
  if ((((s32) (*new_var)) > (0x64 - 1)) & 0xFFFF)
  {
    *new_var3 = 0x63;
  }
}
