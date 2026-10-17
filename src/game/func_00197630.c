#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
} Unk_00197630;
s32 func_00163DF0(u8 *arg0, Unk_00197630 *arg1);
s32 func_00197550(u8 *arg0, Unk_00197630 *arg1);
inline u16 inline_fn(unsigned int arg0)
{
  return (u16) (arg0 + 1);
}

void func_00197630(s32 arg0, Unk_00197630 *arg1)
{
  s32 new_var2;
  unsigned int new_var;
  new_var = 0;
  new_var2 = func_00197550((u8 *) arg0, arg1);
  if (new_var2 == new_var)
  {
    func_00163DF0((u8 *) arg0, arg1);
    new_var = arg1->unk1DE;
    arg1->unk1DE = inline_fn(new_var);
  }
}
