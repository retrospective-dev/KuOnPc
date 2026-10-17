#include "common.h"

extern u8* lpSceneLoad;

void SetLoadMovieId(s32 arg0) {
    lpSceneLoad[1] = (arg0 & 0xFF) + 1;
}
