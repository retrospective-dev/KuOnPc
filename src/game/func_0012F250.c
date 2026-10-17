#include "common.h"
#include "kuon_types.h"

u32 func_0012F250(AnimCtrl *lpAnimCtrl, f32 frame) {
    if ((lpAnimCtrl->PrevFrame < frame) && (frame <= lpAnimCtrl->NumFrame)) {
        return 1U;
    }
    return 0U;
}
