#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  s32 unk0;
  u8 unk4[0x4];
  s32 unk8;
} Unk_0016E500;
extern s8 D_003AC8A0[];
void SCR_SetEneStop(Unk_0016E500 *arg0)
{
  s32 new_var2;
  unsigned char new_var;
  new_var = (s8) (new_var2 = arg0->unk8);
  D_003AC8A0[0] = new_var;
  arg0->unk0 = 0;
  if (1)
  {
  }
}
