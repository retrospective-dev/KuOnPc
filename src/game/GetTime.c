#include "common.h"

extern u32 gTime;

s32 GetTime(void) {
    return *(s32 *)0x10000000 + (gTime * 0xEA60);
}
