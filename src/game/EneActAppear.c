#include "common.h"
#include "kuon_types.h"

unsigned int CheckAnimEndFrame(AnimCtrl *lpAnimCtrl);
void EneAppearProc(MdlMng_t *lpEne, Ctrl *lpCtrl);
void EneActAppear(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    MdlMng_t *temp_v0;
    u8 *temp_s0;

    temp_s0 = lpEne->lpAnimCtrl;
    EneAppearProc(lpEne, lpCtrl);
    if (CheckAnimEndFrame((AnimCtrl *) temp_s0) != 0) {
        temp_v0 = lpEne->Target.lpMdl;
        if ((temp_v0 != NULL) && (lpEne->TeamNo != temp_v0->TeamNo)) {
            lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 2);
            return;
        }
        lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 0);
    }
}
