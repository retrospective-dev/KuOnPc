#include "common.h"
#include "kuon_types.h"

unsigned int func_0012F250(AnimCtrl *lpAnimCtrl, float frame);
unsigned int func_0012F290(AnimCtrl *lpAnimCtrl);
void func_0015FDC0(MdlMng *lpEne, Ctrl *lpCtrl);
int func_001BF1B0(unsigned short sfx_idx_, float *vPos_, float *vDir_, MdlMng *pMdlMng_, unsigned short parts_id_, unsigned char dmg_id_, unsigned char atk_no_);
extern float D_0022D530[4];
extern float D_003AC8C0[4];
void func_0021A4A0(MdlMng *lpEne, Ctrl *lpCtrl) {
    u8 *temp_s0;

    temp_s0 = lpEne->lpAnimCtrl;
    if (func_0012F250((AnimCtrl *) temp_s0, 1.0f) != 0) {
        lpCtrl->SfxHdl[0] = func_001BF1B0(0x1F2U, D_0022D530, D_003AC8C0, lpEne, 0U, 0U, 0U);
    }
    func_0015FDC0(lpEne, lpCtrl);
    if (func_0012F290((AnimCtrl *) temp_s0) != 0) {
        lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 0);
    }
}
