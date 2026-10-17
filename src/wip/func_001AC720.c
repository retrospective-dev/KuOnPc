#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
s32 func_001ACB40(s32 arg0, s32 arg1);
extern u8 D_0025BB90[];
extern u8 D_0025BBB0[];
s32 func_001AC720(void)
{
  int new_var;
  int new_var2;
  new_var2 = (new_var = 0);
  func_001ACB40(new_var2, (s32) (&D_0025BB90[new_var]));
  func_001ACB40(1, (s32) (&D_0025BBB0[0]));
  return 0;
}
