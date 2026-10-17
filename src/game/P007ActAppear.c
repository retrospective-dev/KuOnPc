#include "common.h"
#include "kuon_types.h"

unsigned int CheckAnimNumFrame(AnimCtrl *lpAnimCtrl, float frame);
unsigned int CheckAnimEndFrame(AnimCtrl *lpAnimCtrl);
void EneAppearProc(MdlMng_t *lpEne, Ctrl *lpCtrl);
int SFX_Create_OnDir_Attach(unsigned short sfx_idx_, float *vPos_, float *vDir_, MdlMng_t *pMdlMng_, unsigned short parts_id_, unsigned char dmg_id_, unsigned char atk_no_);
extern float VW[4];
extern float V0[4];
void P007ActAppear(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    u8 *temp_s0;

    temp_s0 = lpEne->lpAnimCtrl;
    if (CheckAnimNumFrame((AnimCtrl *) temp_s0, 60.0f) != 0) {
        lpCtrl->SfxHdl[0] = SFX_Create_OnDir_Attach(0x1B9U, VW, V0, lpEne, 0U, 0U, 0U);
    }
    EneAppearProc(lpEne, lpCtrl);
    if (CheckAnimEndFrame((AnimCtrl *) temp_s0) != 0) {
        lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 0);
    }
}
