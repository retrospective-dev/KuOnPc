#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DC];
  u16 unk1DC;
} Unk_001A8E20;
s32 func_00163CA0(u8 *arg0, Unk_001A8E20 *arg1);
s32 func_001A89B0(u8 *arg0, Unk_001A8E20 *arg1);
void func_001A8E20(s32 arg0, Unk_001A8E20 *arg1)
{
  if (func_00163CA0((u8 *) arg0, arg1) == 0)
  {
    func_001A89B0((u8 *) arg0, arg1);
    arg1->unk1DC = (u16) (arg1->unk1DC + (1 & 0xFFFFu));
  }
}
