#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern s32 D_00A3F320[];
inline int inline_fn()
{
  return D_00A3F320[0] - 8;
}

s32 func_001A7DA0(void)
{
  s32 var_v0;
  var_v0 = (((((((((1 & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF;
  if (((u32) inline_fn()) > (2U - 1))
  {
    if (1)
    {
      var_v0 = 0;
    }
  }
  return var_v0;
}
