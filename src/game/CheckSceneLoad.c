#include "common.h"

extern u8 *lpSceneLoad;

s32 CheckSceneLoad(void) {
    return *lpSceneLoad != 0;
}
