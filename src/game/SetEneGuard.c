#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetEneGuard(MdlMng_t *lpEne, Ctrl *lpCtrl, u16 GuardFrame) {
    lpEne->AnimState = 0;
    lpCtrl->func.actID = 9;
    func_0012F3F0(lpEne, 0x55, 0.0f);
    lpCtrl->GuardFrame = (s16) GuardFrame;
}
