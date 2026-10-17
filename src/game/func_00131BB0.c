#include "common.h"
#include "kuon_types.h"

f32 func_00131BB0(f32 CurFrame, f32 FrameNum) {
    if (FrameNum <= CurFrame) {
        return 1.0f;
    }
    return CurFrame / FrameNum;
}
