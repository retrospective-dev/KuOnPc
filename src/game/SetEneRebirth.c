#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
s32 func_00128E70();

void SetEneRebirth(MdlMng_t *lpEne, Ctrl *lpCtrl, u16 AnimIndex) {
    s32 temp_s1;
    u16 var_s1;

    var_s1 = M2C_FIELD(lpEne->lpMdlData->lpPrm, u16 *, 0x32);
    lpCtrl->func.actID = 7;
    func_0012F3F0(lpEne, AnimIndex & 0xFFFF, 0.0f);
    if (!(var_s1 & 0xFFFF)) {
        var_s1 = 0x708;
    }
    temp_s1 = var_s1 & 0xFFFF;
    lpCtrl->RebirthTimer = temp_s1 + (func_00128E70() % temp_s1);
    lpCtrl->Rebirth -= 1;
}
