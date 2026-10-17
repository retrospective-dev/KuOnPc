#include "common.h"

extern s32 gTime;

void Timer0Handler(void) {
    gTime += 1;
    *(s32 *)0x10000010 = (s32) (*(s32 *)0x10000010 | 0x400);
}
