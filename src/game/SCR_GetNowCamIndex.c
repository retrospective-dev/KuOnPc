#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
void *GetGameCamInfo(void);
void fsScr_SetPointerData(u8 *arg0, s32 arg1);
inline u8 *inline_fn(u8 *arg0)
{
  return arg0 + 4;
}

void SCR_GetNowCamIndex(s32 *arg0)
{
  fsScr_SetPointerData(inline_fn(arg0), *((s32 *) inline_fn((u8 *) GetGameCamInfo())));
  *arg0 = 0;
}
