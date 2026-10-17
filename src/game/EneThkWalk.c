#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
} Unk_00164E30;
s32 CheckEneAttackState(u8 *arg0, Unk_00164E30 *arg1);
s32 CheckEneWalkState(u8 *arg0, Unk_00164E30 *arg1);
void EneThkWalk(s32 arg0, Unk_00164E30 *arg1)
{
  if (CheckEneAttackState((u8 *) arg0, arg1) == 0)
  {
    CheckEneWalkState((u8 *) arg0, arg1);
    arg1->unk1DE = (u16) ((arg1->unk1DE & 0xFFFFFFFF) + 1);
  }
}
