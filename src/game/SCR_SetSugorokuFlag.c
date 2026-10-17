#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  s32 unk0;
  u8 unk4[0x4];
  s32 unk8;
} Unk_0016C880;
extern u8 D_003AC8B2[];
void SCR_SetSugorokuFlag(Unk_0016C880 *arg0)
{
  s32 new_var;
  int new_var2;
  new_var = arg0->unk8;
  D_003AC8B2[3 * 0] |= (new_var2 = new_var & 3);
  arg0->unk0 = 0 * 0;
}
