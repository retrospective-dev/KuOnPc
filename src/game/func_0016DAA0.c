#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
void *func_00132730(void);
void func_00170C20(u8 *arg0, s32 arg1);
inline u8 *inline_fn(u8 *arg0)
{
  return arg0 + 4;
}

void func_0016DAA0(s32 *arg0)
{
  func_00170C20(inline_fn(arg0), *((s32 *) inline_fn((u8 *) func_00132730())));
  *arg0 = 0;
}
