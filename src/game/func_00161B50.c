#include "common.h"
#include "kuon_types.h"

unsigned int func_0012F300(MdlMng *lpMdlMng, int AnimID);
s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_00161B50(MdlMng *lpEne, Ctrl *lpCtrl, u16 AnimIndex) {
    unsigned short var_s0;

    var_s0 = AnimIndex & 0xFFFF;
    lpCtrl->func.actID = 1;
    if ((var_s0 == 5) && (func_0012F300(lpEne, var_s0) == 0)) {
        var_s0 = 0xA;
    }
    func_0012F3F0(lpEne, var_s0 & 0xFFFF, 0.0f);
    lpCtrl->walkTimer = 0;
}
