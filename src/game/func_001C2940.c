#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
s32 func_0013ADA0(void);
extern u8 D_00A49E80[];
extern u8 D_00A49EB0[];
s32 func_001C2940(s32 arg0)
{
  s32 *temp_a0;
  s32 temp_s0;
  s32 *new_var3[2];
  temp_s0 = ((temp_s0 = arg0) & 0xFFFF) * 4;
  temp_a0 = (&D_00A49E80[0]) + temp_s0;
  new_var3[1] = &(*((&D_00A49EB0[0]) + temp_s0));
  new_var3[0] = new_var3[1];
  *temp_a0 += func_0013ADA0() - (*new_var3[0]);
 do { return 1; } while (0 != 0);
}
