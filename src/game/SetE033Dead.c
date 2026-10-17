#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetE033Dead(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    lpCtrl->func.actID = 4;
    func_0012F3F0(lpEne, 0x5A, 0.0f);
}
