#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DC];
  u16 unk1DC;
} Unk_00192AC0;
s32 CheckE011AttackState(u8 *arg0, Unk_00192AC0 *arg1);
s32 CheckE011StayState(u8 *arg0, Unk_00192AC0 *arg1);
void E011ThkStay(s32 arg0, Unk_00192AC0 *arg1)
{
  int new_var;
  if (CheckE011AttackState((0, (u8 *) arg0), arg1) == 0)
  {
    CheckE011StayState((u8 *) arg0, arg1);
    arg1->unk1DC = (u16) (new_var = arg1->unk1DC + 1);
  }
}
