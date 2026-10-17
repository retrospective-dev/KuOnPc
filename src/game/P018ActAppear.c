#include "common.h"
#include "kuon_types.h"

int SND_Play3D(int iSndId, short sVol, short sPitch, float (*pPos)[4], float fDist);
int SFX_Create_OnAng_Attach(unsigned short sfx_idx_, float *vPos_, float *vAng_, MdlMng_t *pMdlMng_, unsigned short parts_id_, unsigned char dmg_id_, unsigned char atk_no_);
extern float VW[4];
extern float V0[4];
void P018ActAppear(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    u16 temp_a0;

    temp_a0 = lpCtrl->stayTimer;
    if (temp_a0 == 0x3C) {
        lpEne->Alpha = 1.0f;
        SFX_Create_OnAng_Attach(0x1B7U, VW, V0, lpEne, 0U, 0U, 0U);
        lpCtrl->SeHdl[0] = SND_Play3D(0x87B, 0x3C, 0, (f32 (*)[4]) lpEne->Pos, 30.0f);
        goto block_4;
    }
    if (temp_a0 == 0x78) {
        lpEne->HitOff = 0;
        lpCtrl->func.actID = 0;
        lpCtrl->stayTimer = 0;
        lpCtrl->SfxHdl[0] = SFX_Create_OnAng_Attach(0x1ACU, VW, V0, lpEne, 0U, 0U, 0U);
        lpCtrl->SeHdl[1] = SND_Play3D(0x87A, 0x64, 0, (f32 (*)[4]) lpEne->Pos, 30.0f);
        return;
    }
block_4:
    lpCtrl->stayTimer += 1;
}
