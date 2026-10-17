#include "common.h"
#include "m2c_macros.h"

void fsScr_SetPointerData(u8 *arg0, s32 arg1);
s32 CheckVagStmState(s32 arg0);
void SCR_CheckPlayVagStm(u8 *arg0) {
    fsScr_SetPointerData(arg0 + 0xC, CheckVagStmState((s32) M2C_FIELD(arg0, u8 *, 8)) != 0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
