#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DC];
  u16 unk1DC;
  u8 unk1DE[0x12];
  u8 unk1F0;
} Unk_002053A0;
s32 func_00164490(u8 *arg0, Unk_002053A0 *arg1);
s32 func_00205210(u8 *arg0, Unk_002053A0 *arg1);
void func_002053A0(s32 arg0, Unk_002053A0 *arg1)
{
  if (func_00205210((u8 *) arg0, arg1) == 0)
  {
    if (arg1->unk1F0 == 0)
    {
      func_00164490((u8 *) arg0, arg1);
    }
    arg1->unk1DC = (u16) ((arg1->unk1DC & 0xFFFFFFFFu) + 1);
  }
}
