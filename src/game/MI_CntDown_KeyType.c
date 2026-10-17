#include "common.h"
#include "kuon_types.h"

void SetKeyConfig(unsigned char Type);
int SND_Play2D(int iSndId, short sVol, short sPitch);
void KnMenuModelMng_ResetCtrlerAnim(void);
extern int no_snd_counter;
extern int no_snd_on;
extern u8 D_003AC8A6[];

void MI_CntDown_KeyType(void) {
    switch (D_003AC8A6[0]) {
    case 0:
        SetKeyConfig(1U);
        break;
    case 1:
        SetKeyConfig(0U);
        break;
    }
    KnMenuModelMng_ResetCtrlerAnim();
    if (no_snd_on == 0) {
        if (no_snd_counter > 0) {
            no_snd_counter -= 1;
            return;
        }
        SND_Play2D(0x11, 0x64, 0);
    }
}
