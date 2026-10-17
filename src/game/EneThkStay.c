#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DC];
  u16 unk1DC;
} Unk_00164E80;
s32 CheckEneAttackState(u8 *arg0, Unk_00164E80 *arg1);
s32 CheckEneStayState(u8 *arg0, Unk_00164E80 *arg1);
void EneThkStay(s32 arg0, Unk_00164E80 *arg1)
{
  u8 *new_var;
  if (CheckEneAttackState((u8 *) arg0, arg1) == 0)
  {
    new_var = (u8 *) arg0;
    CheckEneStayState(new_var, arg1);
    arg1->unk1DC = (u16) ((arg1->unk1DC & 0xFFFFFFFFu) + 1);
  }
}
