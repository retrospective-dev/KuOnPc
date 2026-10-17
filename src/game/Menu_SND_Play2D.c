#include "common.h"
#include "kuon_types.h"

int SND_Play2D(int iSndId, short sVol, short sPitch);
extern int no_snd_counter;
extern int no_snd_on;
s32 Menu_SND_Play2D(s32 iSndId, s16 sVol, s16 sPitch) {
    if (iSndId == -1) {
        return 0;
    }
    if (no_snd_on == 0) {
        if (no_snd_counter > 0) {
            no_snd_counter -= 1;
            goto block_7;
        }
        return SND_Play2D(iSndId, sVol, sPitch);
    }
block_7:
    return 0;
}
