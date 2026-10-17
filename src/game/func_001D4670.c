#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
void func_00127BE0(void *dst, s32 c, u32 n);
volatile int func_001D4670(u8 *arg0, u32 arg1)
{
  s32 *new_var;
  s32 *new_var2;
  new_var = ((u8 *) arg0) + 0x10;
  new_var2 = (s32 *) new_var;
  return *((u16 *) (((u8 *) (((arg1 & 0xFFFF) * 4) + (*(new_var = &(*new_var2))))) + 2));
}
