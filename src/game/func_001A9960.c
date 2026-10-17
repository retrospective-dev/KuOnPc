#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DC];
  u16 unk1DC;
} Unk_001A9960;
s32 func_00164490(u8 *arg0, Unk_001A9960 *arg1);
s32 func_001A9820(u8 *arg0, Unk_001A9960 *arg1);
void func_001A9960(s32 arg0, Unk_001A9960 *arg1)
{
  int new_var;
  if (func_001A9820((u8 *) arg0, arg1) == 0)
  {
    func_00164490((u8 *) arg0, arg1);
    arg1->unk1DC = (u16) (new_var = arg1->unk1DC - -1);
  }
}
