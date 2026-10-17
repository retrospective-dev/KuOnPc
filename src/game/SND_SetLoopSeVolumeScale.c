#include "common.h"
#include "kuon_types.h"

extern float s_fLoopSndVolumeScale;
void SND_SetLoopSeVolumeScale(f32 scale) {
    s_fLoopSndVolumeScale = scale;
}
