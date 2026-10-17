#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
unsigned long long ItemMng_GetItemNum(s32 arg0, s32 arg1);
s64 GetSpiritNum(s32 arg0)
{
  return ((s64) (ItemMng_GetItemNum(3, arg0 & 0xFFFF) << 0x30)) >> 0x30;
}
