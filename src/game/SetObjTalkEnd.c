#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetObjTalkEnd(MdlMng_t *lpObj) {
    if (lpObj->CtrlMode == 2) {
        func_0012F3F0(lpObj, (s32) M2C_FIELD(lpObj, u16 *, 0x170), 0.0f);
        lpObj->State[9] = 0;
        lpObj->State[8] = 0;
        lpObj->State[7] = 0;
        lpObj->CtrlMode = lpObj->CtrlModeB;
    }
}
