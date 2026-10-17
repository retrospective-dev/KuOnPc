#include "common.h"

void fsScr_SetPointerData(u8 *arg0, s32 arg1);
s32 Menu_TD_IsPlay(void);
void SCR_CheckMenuTD(u8 *arg0) {
    fsScr_SetPointerData(arg0 + 4, Menu_TD_IsPlay());
    *(s32 *)arg0 = 0;
}
