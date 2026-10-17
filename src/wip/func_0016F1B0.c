#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  s32 unk0;
  u8 unk4[0x4];
  s32 unk8;
  u8 unkC[0x4];
  u8 unk10;
} Unk_0016F1B0;
extern u8 D_009BC420[];
void func_0016F1B0(Unk_0016F1B0 *arg0)
{
  s32 temp_v1;
  s32 var_a1;
  u8 new_var;
  temp_v1 = arg0->unk8;
  new_var = arg0->unk10;
  var_a1 = temp_v1 >> 3;
  if (temp_v1 < 0)
  {
    var_a1 = ((s32) (temp_v1 + 7)) >> 3;
  }
  *((&D_009BC420[0]) + var_a1) = new_var;
  arg0->unk0 = 0;
}
