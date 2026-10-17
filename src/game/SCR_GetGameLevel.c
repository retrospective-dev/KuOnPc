#include "common.h"

void fsScr_SetPointerData(u8 *arg0, s32 arg1);
extern u8 D_003AC8A8[];

void SCR_GetGameLevel(u8 *arg0) {
    fsScr_SetPointerData(arg0 + 4, (s32) D_003AC8A8[0]);
    *(s32 *)arg0 = 0;
}
