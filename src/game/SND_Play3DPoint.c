#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void fsvu0_CopyVectorF(float *v0, float *v1);
int _SeKick_Assemble(Voice *pInVoice);
extern G_pSndMng *g_pSndMng;
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
s32 SND_Play3DPoint(s32 iSndId, s16 sVol, s16 sPitch, f32 *Pos, f32 fDist) {
    Voice sp30;

    if (M2C_FIELD(g_pSndMng, u8 *, 0xB0) != 0) {
        return 0x51;
    }
    if (Pos == NULL) {
        return 0x51;
    }
    sp30.sVolume = sVol;
    sp30.usSndId = (u16) iSndId;
    sp30.job = 1;
    sp30.pPos = NULL;
    fsvu0_CopyVectorF(&sp30.Pos[0], Pos);
    sp30.p_bend = sPitch;
    sp30.fDistMax = fDist;
    return _SeKick_Assemble(&sp30);
}
