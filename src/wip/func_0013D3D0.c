#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern volatile int D_006A78D0[];
extern u8 D_006FB8D0[];
void func_0013D3D0(void)
{
  u8 *new_var;
  s8 *var_a0;
  var_a0 = &D_006A78D0[0];
  new_var = &D_006FB8D0[0];
  do
  {
    *((s8 *) (((u8 *) var_a0) + 0)) = 0;
    *((s8 *) (((u8 *) var_a0) + 0x1C0)) = 0;
    *((s8 *) (((u8 *) var_a0) + 0x380)) = 0;
    *((s8 *) (((u8 *) var_a0) + 0x540)) = 0;
    *((s8 *) (((u8 *) var_a0) + 0x700)) = 0;
    *((s8 *) (((u8 *) var_a0) + 0x8C0)) = 0;
    *((s8 *) (((u8 *) var_a0) + 0xA80)) = 0;
    *((s8 *) (((u8 *) var_a0) + 0xC40)) = 0;
    var_a0 += 0xE00;
  }
  while (var_a0 != new_var);
  *((s8 *) (((u8 *) var_a0) + 0)) = 0;
  *((s8 *) (((u8 *) var_a0) + 0x1C0)) = 0;
}
