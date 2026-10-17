#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
s32 func_001010B8(s32);
extern volatile int isCountVblank;
extern volatile int g_mpg_vblankCount_0025E4D4;
void startDisplay(s32 arg0)
{
  do
  {
  }
  while (func_001010B8(0) == arg0);
  isCountVblank = 1;
  g_mpg_vblankCount_0025E4D4 = 0;
}
