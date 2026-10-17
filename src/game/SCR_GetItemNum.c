#include "common.h"
#include "m2c_macros.h"

void fsScr_SetPointerData(u8 *arg0, s32 arg1);
s32 ItemMng_GetItemNum_Direct(s32 arg0);
void SCR_GetItemNum(u8 *arg0) {
    fsScr_SetPointerData(arg0 + 0xC, ItemMng_GetItemNum_Direct((s32) M2C_FIELD(arg0, u16 *, 8)) & 0xFFFF);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
