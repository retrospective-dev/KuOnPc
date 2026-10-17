#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern s32 D_0077C120[];
extern u8 D_00788120[];
s32 *func_0013FF90(s32 arg0)
{
  u8 *var_v0;
  int new_var;
  new_var = arg0 & 0xFFFF;
  var_v0 = &D_0077C120[0];
  loop_1:
  if (((*((u8 *) (((u8 *) var_v0) + 0))) != 0) && ((*((u16 *) (((u8 *) var_v0) + 2))) == new_var))
  {
    return var_v0;
  }

  var_v0 += 0x60;
  if (var_v0 == (&D_00788120[0]))
  {
    return (void *) 0;
  }
  goto loop_1;
}
