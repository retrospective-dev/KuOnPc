#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetP025Dead(MdlMng_t *lpEne, Ctrl *lpCtrl, u16 AnimIndex) {
    unsigned short var_v1;

    var_v1 = AnimIndex & 0xFFFF;
    if (lpCtrl->bWeak != 0) {
        var_v1 = 0x5C;
    }
    lpCtrl->func.actID = 4;
    func_0012F3F0(lpEne, var_v1 & 0xFFFF, 0.0f);
}
