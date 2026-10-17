#include "common.h"

extern s32* lpVramMng;

void ResetVramAddr(void) {
    s32* p = lpVramMng;
    p[1] = p[0];
}
