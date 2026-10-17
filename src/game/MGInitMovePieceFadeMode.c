#include "common.h"

void SetTimerFrameNum(s32 arg0);
void func_002080C0(void);
void MGInitMovePieceFadeMode(void) {
    SetTimerFrameNum(0x80);
    func_002080C0();
}
