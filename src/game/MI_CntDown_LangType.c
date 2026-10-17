#include "common.h"
#include "kuon_types.h"

int SND_Play2D(int iSndId, short sVol, short sPitch);
extern int no_snd_counter;
extern int no_snd_on;
extern u8 D_003AC8BC[];

void MI_CntDown_LangType(void) {
    switch (D_003AC8BC[0]) {
    case 0:
        D_003AC8BC[0] = 1;
        break;
    case 1:
        D_003AC8BC[0] = 0;
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
