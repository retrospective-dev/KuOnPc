#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern s32 lpMCMng;
u8 GetMemoryCardMessage(s32 arg0)
{
  s32 new_var;
  return *((u8 *) (((u8 *) ((arg0 & 0xFF) + (new_var = lpMCMng))) + 6));
}
