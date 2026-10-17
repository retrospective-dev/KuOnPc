#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
} Unk_00191B10;
s32 CheckE016WalkState(u8 *arg0, Unk_00191B10 *arg1);
void E016ThkWalk(s32 arg0, Unk_00191B10 *arg1)
{
  if (arg1)
  {
  }
  CheckE016WalkState((u8 *) arg0, arg1);
  arg1->unk1DE = (u16) (arg1->unk1DE + (1 & 0xFFFFFFFFFFFFFFFFu));
}
