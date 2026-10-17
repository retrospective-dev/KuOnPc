#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
} Unk_002062D0;
s32 func_00205DA0(u8 *arg0, Unk_002062D0 *arg1);
s32 func_00205E90(u8 *arg0, Unk_002062D0 *arg1);
void func_002062D0(s32 arg0, Unk_002062D0 *arg1)
{
  if (func_00205DA0((u8 *) arg0, arg1) == 0)
  {
    func_00205E90((u8 *) arg0, arg1);
    arg1->unk1DE = (u16) ((arg1->unk1DE & 0xFFFFFFFF) + 1);
  }
  if (arg1)
  {
  }
}
