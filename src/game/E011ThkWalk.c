#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
} Unk_00192A70;
s32 CheckE011AttackState(u8 *arg0, Unk_00192A70 *arg1);
s32 CheckE011WalkState(u8 *arg0, Unk_00192A70 *arg1);
void E011ThkWalk(s32 arg0, Unk_00192A70 *arg1)
{
  u16 new_var2;
  int new_var;
  if (CheckE011AttackState((u8 *) arg0, arg1) == 0)
  {
    CheckE011WalkState((u8 *) arg0, arg1);
    new_var = arg1->unk1DE + 1;
    new_var = (u16) new_var;
    arg1->unk1DE = (new_var2 = new_var);
  }
}
