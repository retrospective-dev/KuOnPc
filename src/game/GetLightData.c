#include "common.h"

extern s8 LightAnim[];

void *GetLightData(s32 arg0) {
    return &LightAnim[0] + (arg0 * 8);
}
