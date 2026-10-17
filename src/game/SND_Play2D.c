#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int _SeKick_Assemble(Voice *pInVoice);
extern G_pSndMng *g_pSndMng;
s32 SND_Play2D(s32 iSndId, s16 sVol, s16 sPitch) {
    Voice sp10;

    if (M2C_FIELD(g_pSndMng, u8 *, 0xB0) != 0) {
        return 0x51;
    }
    sp10.usSndId = (u16) iSndId;
    sp10.sVolume = sVol;
    sp10.p_bend = sPitch;
    sp10.job = 0;
    return _SeKick_Assemble(&sp10);
}
