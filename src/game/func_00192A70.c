#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  u8 unk0[0x1DE];
  u16 unk1DE;
} Unk_00192A70;
s32 func_00192540(u8 *arg0, Unk_00192A70 *arg1);
s32 func_00192630(u8 *arg0, Unk_00192A70 *arg1);
void func_00192A70(s32 arg0, Unk_00192A70 *arg1)
{
  u16 new_var2;
  int new_var;
  if (func_00192540((u8 *) arg0, arg1) == 0)
  {
    func_00192630((u8 *) arg0, arg1);
    new_var = arg1->unk1DE + 1;
    new_var = (u16) new_var;
    arg1->unk1DE = (new_var2 = new_var);
  }
}
