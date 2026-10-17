#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
  u8 unk1E0[0x10];
  u8 unk1F0;
} Unk_00205340;
s32 func_00163DF0(u8 *arg0, Unk_00205340 *arg1);
s32 func_00205210(u8 *arg0, Unk_00205340 *arg1);
void func_00205340(s32 arg0, Unk_00205340 *arg1)
{
  u16 new_var;
  if (func_00205210((u8 *) arg0, arg1) == 0)
  {
    if (arg1->unk1F0 == 0)
    {
      func_00163DF0((u8 *) arg0, arg1);
    }
    new_var = arg1->unk1DE;
    arg1->unk1DE = (u16) (new_var + ((unsigned long long) 1));
  }
}
