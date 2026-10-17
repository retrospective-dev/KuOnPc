#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_001503B0(unsigned char bDisable);
void func_002043D0(MdlMng *lpEne, Ctrl *lpCtrl, u16 AnimIndex) {
    lpCtrl->func.actID = 4;
    func_0012F3F0(lpEne, AnimIndex & 0xFFFF, 0.0f);
    func_001503B0(0U);
}
