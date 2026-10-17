#include "common.h"

extern s32 gTime;

void ClearTime(void) {
    *(s32 *)0x10000000 = 0;
    gTime = 0;
}
