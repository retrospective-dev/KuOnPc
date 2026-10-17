#include "common.h"
#include "kuon_types.h"

void SetPadVibFlag(unsigned char bFlag);
int SND_Play2D(int iSndId, short sVol, short sPitch);
extern int no_snd_counter;
extern int no_snd_on;
extern u8 D_003AC8A5[];

void MI_CntUp_Vib(void) {
    switch (D_003AC8A5[0]) {
    case 0:
        SetPadVibFlag(1U);
        break;
    case 1:
        SetPadVibFlag(0U);
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
