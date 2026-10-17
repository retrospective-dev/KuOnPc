#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_0017F440(MdlMng *lpObj) {
    if ((lpObj->bUse != 0) && (lpObj->CtrlMode == 3)) {
        func_0012F3F0(lpObj, (s32) lpObj->Target.prevAnim, 0.0f);
        lpObj->CtrlMode = lpObj->CtrlModeB;
    }
}
