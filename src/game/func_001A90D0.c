#include "common.h"
#include "kuon_types.h"

int func_001AED30(int iSndId, short sVol, short sPitch, float (*pPos)[4], float fDist);
int func_001BEFC0(unsigned short sfx_idx_, float *vPos_, float *vAng_, MdlMng *pMdlMng_, unsigned short parts_id_, unsigned char dmg_id_, unsigned char atk_no_);
extern float D_0022D530[4];
extern float D_003AC8C0[4];
void func_001A90D0(MdlMng *lpEne, Ctrl *lpCtrl) {
    u16 temp_a0;

    temp_a0 = lpCtrl->stayTimer;
    if (temp_a0 == 0x3C) {
        lpEne->Alpha = 1.0f;
        func_001BEFC0(0x1B7U, D_0022D530, D_003AC8C0, lpEne, 0U, 0U, 0U);
        lpCtrl->SeHdl[0] = func_001AED30(0x87B, 0x3C, 0, (f32 (*)[4]) lpEne->Pos, 30.0f);
        goto block_4;
    }
    if (temp_a0 == 0x78) {
        lpEne->HitOff = 0;
        lpCtrl->func.actID = 0;
        lpCtrl->stayTimer = 0;
        lpCtrl->SfxHdl[0] = func_001BEFC0(0x1ACU, D_0022D530, D_003AC8C0, lpEne, 0U, 0U, 0U);
        lpCtrl->SeHdl[1] = func_001AED30(0x87A, 0x64, 0, (f32 (*)[4]) lpEne->Pos, 30.0f);
        return;
    }
block_4:
    lpCtrl->stayTimer += 1;
}
