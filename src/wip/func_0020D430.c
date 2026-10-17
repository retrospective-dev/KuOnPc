#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern u8 D_006BEB1C[];
extern u8 D_00A617A0[];
s32 func_0020D430(s32 arg0)
{
  int new_var;
  u8 *var_a0;
  u32 var_a2;
  new_var = arg0 & 0xFF;
  var_a2 = 0;
  var_a0 = &D_00A617A0[0];
  loop_1:
  if (new_var == (*((u8 *) (((u8 *) var_a0) + 0x56))))
  {
    *((s32 *) ((&D_006BEB1C[0]) + (var_a2 * 0x1C0))) = 0x3F800000;
    return 1;
  }

  var_a2 += 1;
  var_a0 += 0x60;
  if (var_a2 >= 2U)
  {
    return 0;
  }
  goto loop_1;
}
