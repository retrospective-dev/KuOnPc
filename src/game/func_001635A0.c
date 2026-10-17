#include "common.h"
#include "kuon_types.h"

unsigned int func_0012F300(MdlMng *lpMdlMng, int AnimID);
s32 func_00128E70();

void func_001635A0(MdlMng *lpEne, Ctrl *lpCtrl) {
    s32 temp_hi;

    temp_hi = func_00128E70() % 100;
    if ((temp_hi < 0xF) && (func_0012F300(lpEne, 0x50) != 0) && (lpEne->IndexAnim != 0x50)) {
        lpCtrl->func.SetActFunc[1](lpEne, lpCtrl, 0x50);
        return;
    }
    if ((temp_hi < 0x1E) && (func_0012F300(lpEne, 0x51) != 0) && (lpEne->IndexAnim != 0x51)) {
        lpCtrl->func.SetActFunc[1](lpEne, lpCtrl, 0x51);
        return;
    }
    lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 2);
}
