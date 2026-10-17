#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern u8 D_00A49F80[];
void func_001C7220(s32 arg0)
{
  s32 *new_var2;
  new_var2 = &arg0;
  D_00A49F80[0] = (D_00A49F80[0] & (~6)) | (arg0 = ((*new_var2) & 3) * 2);
}
