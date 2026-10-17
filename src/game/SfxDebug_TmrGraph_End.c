#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
s32 GetTime(void);
extern u8 s_aCPUCountSum[];
extern u8 s_aCPUCount[];
s32 SfxDebug_TmrGraph_End(s32 arg0)
{
  s32 *temp_a0;
  s32 temp_s0;
  s32 *new_var3[2];
  temp_s0 = ((temp_s0 = arg0) & 0xFFFF) * 4;
  temp_a0 = (&s_aCPUCountSum[0]) + temp_s0;
  new_var3[1] = &(*((&s_aCPUCount[0]) + temp_s0));
  new_var3[0] = new_var3[1];
  *temp_a0 += GetTime() - (*new_var3[0]);
 do { return 1; } while (0 != 0);
}
