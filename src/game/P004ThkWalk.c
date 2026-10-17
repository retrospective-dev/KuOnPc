#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
} Unk_00197630;
s32 CheckEneWalkState(u8 *arg0, Unk_00197630 *arg1);
s32 CheckP004AttackState(u8 *arg0, Unk_00197630 *arg1);
inline u16 inline_fn(unsigned int arg0)
{
  return (u16) (arg0 + 1);
}

void P004ThkWalk(s32 arg0, Unk_00197630 *arg1)
{
  s32 new_var2;
  unsigned int new_var;
  new_var = 0;
  new_var2 = CheckP004AttackState((u8 *) arg0, arg1);
  if (new_var2 == new_var)
  {
    CheckEneWalkState((u8 *) arg0, arg1);
    new_var = arg1->unk1DE;
    arg1->unk1DE = inline_fn(new_var);
  }
}
