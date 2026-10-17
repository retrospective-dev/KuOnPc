#include "common.h"

extern s32 D_00A60334[];

s32 SfxFog_CheckActive(void) {
    return D_00A60334[0];
}
