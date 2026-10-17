#include "common.h"
#include "kuon_types.h"

void fssdivagSetTrackReverb(s32 arg0, s32 arg1);
void func_001AFE70(s32 arg0, s32 arg1) {
    fssdivagSetTrackReverb(arg0 & 0xFF, arg1);
}
