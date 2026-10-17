#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DC];
  u16 unk1DC;
} Unk_00164E80;
s32 func_00163CA0(u8 *arg0, Unk_00164E80 *arg1);
s32 func_00164490(u8 *arg0, Unk_00164E80 *arg1);
void func_00164E80(s32 arg0, Unk_00164E80 *arg1)
{
  u8 *new_var;
  if (func_00163CA0((u8 *) arg0, arg1) == 0)
  {
    new_var = (u8 *) arg0;
    func_00164490(new_var, arg1);
    arg1->unk1DC = (u16) ((arg1->unk1DC & 0xFFFFFFFFu) + 1);
  }
}
