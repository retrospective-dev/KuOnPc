#include "common.h"
#include "kuon_types.h"

int SND_Play2D(int iSndId, short sVol, short sPitch);
extern int no_snd_counter;
extern int no_snd_on;
void MI_Gene1_CngTex(void) {
    if (no_snd_on == 0) {
        if (no_snd_counter > 0) {
            no_snd_counter -= 1;
            return;
        }
        SND_Play2D(0x11, 0x64, 0);
    }
}
