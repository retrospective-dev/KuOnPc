#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int func_001AEE80(Voice *pInVoice);
extern G_pSndMng *D_0025E530;
s32 func_001AEE30(s32 iSndId, s16 sVol, s16 sPitch) {
    Voice sp10;

    if (M2C_FIELD(D_0025E530, u8 *, 0xB0) != 0) {
        return 0x51;
    }
    sp10.usSndId = (u16) iSndId;
    sp10.sVolume = sVol;
    sp10.p_bend = sPitch;
    sp10.job = 0;
    return func_001AEE80(&sp10);
}
