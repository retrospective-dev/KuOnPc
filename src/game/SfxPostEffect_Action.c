#include "common.h"
#include "kuon_types.h"

extern float s_timer;
s32 SfxPostEffect_Action(f32 sec_) {
    s_timer += sec_;
    return 1;
}
