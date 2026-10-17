#include "common.h"
#include "kuon_types.h"

unsigned int CheckAnimParam(MdlMng_t *lpMdlMng, int AnimID);
s32 func_00128E70();

void SetEneAttackOff(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    s32 temp_hi;

    temp_hi = func_00128E70() % 100;
    if ((temp_hi < 0xF) && (CheckAnimParam(lpEne, 0x50) != 0) && (lpEne->IndexAnim != 0x50)) {
        lpCtrl->func.SetActFunc[1](lpEne, lpCtrl, 0x50);
        return;
    }
    if ((temp_hi < 0x1E) && (CheckAnimParam(lpEne, 0x51) != 0) && (lpEne->IndexAnim != 0x51)) {
        lpCtrl->func.SetActFunc[1](lpEne, lpCtrl, 0x51);
        return;
    }
    lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 2);
}
