#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

unsigned int CheckAnimEndFrame(AnimCtrl *lpAnimCtrl);
void EneAppearProc(MdlMng_t *lpEne, Ctrl *lpCtrl);
extern u8 * D_006B9218[];

void P030ActAppear(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    f32 temp_f1;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_s0 = lpEne->lpAnimCtrl;
    EneAppearProc(lpEne, lpCtrl);
    if (CheckAnimEndFrame((AnimCtrl *) temp_s0) != 0) {
        temp_f1 = lpEne->Alpha - 0.04f;
        lpEne->Alpha = temp_f1;
        if (temp_f1 <= 0.0f) {
            temp_s0_2 = D_006B9218[0];
            lpEne->Alpha = 0.0f;
            lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 0);
            M2C_FIELD(temp_s0_2, MdlMng_t **, 0x1B4) = lpEne;
        }
    }
}
