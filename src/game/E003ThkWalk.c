#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
} Unk_002062D0;
s32 CheckE003AttackState(u8 *arg0, Unk_002062D0 *arg1);
s32 CheckE003WalkState(u8 *arg0, Unk_002062D0 *arg1);
void E003ThkWalk(s32 arg0, Unk_002062D0 *arg1)
{
  if (CheckE003AttackState((u8 *) arg0, arg1) == 0)
  {
    CheckE003WalkState((u8 *) arg0, arg1);
    arg1->unk1DE = (u16) ((arg1->unk1DE & 0xFFFFFFFF) + 1);
  }
  if (arg1)
  {
  }
}
