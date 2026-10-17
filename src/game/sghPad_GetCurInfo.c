#include "common.h"

extern u8 gsPadCur[];

void* sghPad_GetCurInfo(void) {
    return gsPadCur;
}
