#include "common.h"
#include "kuon_types.h"

unsigned int CheckAnimParam(MdlMng_t *lpMdlMng, int AnimID);
s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetEneWalk(MdlMng_t *lpEne, Ctrl *lpCtrl, u16 AnimIndex) {
    unsigned short var_s0;

    var_s0 = AnimIndex & 0xFFFF;
    lpCtrl->func.actID = 1;
    if ((var_s0 == 5) && (CheckAnimParam(lpEne, var_s0) == 0)) {
        var_s0 = 0xA;
    }
    func_0012F3F0(lpEne, var_s0 & 0xFFFF, 0.0f);
    lpCtrl->walkTimer = 0;
}
