#include "common.h"

void fsScr_SetPointerData(u8 *arg0, s32 arg1);
s32 KnMsgMng_GetSelectNum(void);
void SCR_GetMessageSelectId(u8 *arg0) {
    fsScr_SetPointerData(arg0 + 4, KnMsgMng_GetSelectNum());
    *(s32 *)arg0 = 0;
}
