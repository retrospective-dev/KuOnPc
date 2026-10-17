#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern u8 s_rndr_stt[];
void SfxDraw_SetBlendType(s32 arg0)
{
  s32 *new_var2;
  new_var2 = &arg0;
  s_rndr_stt[0] = (s_rndr_stt[0] & (~6)) | (arg0 = ((*new_var2) & 3) * 2);
}
