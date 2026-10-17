#include "common.h"

void _SetReverb(s8 arg0, s32 arg1, s32 arg2, s32 arg3);
void SND_SetReverbOff(void) {
    _SetReverb(0, 0, 0, 0);
}
