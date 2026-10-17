#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void SND_SetMode(SndMode mode);
int SND_Play2D(int iSndId, short sVol, short sPitch);
extern G_pSndMng *g_pSndMng;
extern int no_snd_counter;
extern int no_snd_on;
void MI_CntDown_Stereo(Variable *pVariable) {
    u8 temp_a1;

    if (g_pSndMng == NULL) {
        pVariable->_s32 = 0;
        return;
    }
    temp_a1 = M2C_FIELD(g_pSndMng, u8 *, 0x2C);
    switch (temp_a1) {
    case 0:
        SND_SetMode(2);
        break;
    case 1:
        SND_SetMode(0);
        break;
    case 2:
        SND_SetMode(1);
        break;
    }
    if (no_snd_on == 0) {
        if (no_snd_counter > 0) {
            no_snd_counter -= 1;
            return;
        }
        SND_Play2D(0x11, 0x64, 0);
    }
}
