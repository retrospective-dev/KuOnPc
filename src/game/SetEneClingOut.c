#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetEneClingOut(MdlMng_t *lpEne, Ctrl *lpCtrl, u16 AnimId) {
    func_0012F3F0(lpEne, AnimId & 0xFFFF, 0.0f);
    lpCtrl->ClingFree = 1;
    lpEne->MapHitOff = 0;
}
