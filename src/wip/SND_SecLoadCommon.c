#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
s32 SND_LoadSecFromFile(s32 arg0, s32 arg1);
extern u8 D_0025BB90[];
extern u8 D_0025BBB0[];
s32 SND_SecLoadCommon(void)
{
  int new_var;
  int new_var2;
  new_var2 = (new_var = 0);
  SND_LoadSecFromFile(new_var2, (s32) (&D_0025BB90[new_var]));
  SND_LoadSecFromFile(1, (s32) (&D_0025BBB0[0]));
  return 0;
}
