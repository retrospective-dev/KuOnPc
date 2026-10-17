#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
unsigned long long func_00187CD0(s32 arg0, s32 arg1);
s64 func_001911D0(s32 arg0)
{
  return ((s64) (func_00187CD0(3, arg0 & 0xFFFF) << 0x30)) >> 0x30;
}
