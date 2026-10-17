#include "common.h"

void InitVramMng(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void ResetDraw(void) {
    InitVramMng(0x200, 0x1C0, 1, 0x31);
}
