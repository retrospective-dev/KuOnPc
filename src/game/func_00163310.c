#include "common.h"
#include "kuon_types.h"

unsigned int func_0012F290(AnimCtrl *lpAnimCtrl);
void func_0015FDC0(MdlMng *lpEne, Ctrl *lpCtrl);
void func_00163310(MdlMng *lpEne, Ctrl *lpCtrl) {
    MdlMng *temp_v0;
    u8 *temp_s0;

    temp_s0 = lpEne->lpAnimCtrl;
    func_0015FDC0(lpEne, lpCtrl);
    if (func_0012F290((AnimCtrl *) temp_s0) != 0) {
        temp_v0 = lpEne->Target.lpMdl;
        if ((temp_v0 != NULL) && (lpEne->TeamNo != temp_v0->TeamNo)) {
            lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 2);
            return;
        }
        lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 0);
    }
}
