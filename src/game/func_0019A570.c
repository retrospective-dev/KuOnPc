#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
s32 func_001010B8(s32);
extern volatile int D_0025E4C4;
extern volatile int D_0025E4D4;
void func_0019A570(s32 arg0)
{
  do
  {
  }
  while (func_001010B8(0) == arg0);
  D_0025E4C4 = 1;
  D_0025E4D4 = 0;
}
