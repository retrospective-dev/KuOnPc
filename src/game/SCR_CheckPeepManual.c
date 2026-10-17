#include "common.h"

void fsScr_SetPointerData(u8 *arg0, s32 arg1);
s32 CheckPeepManual(void);
void SCR_CheckPeepManual(u8 *arg0) {
    fsScr_SetPointerData(arg0 + 4, CheckPeepManual());
    *(s32 *)arg0 = 0;
}
