#include "common.h"

void SetTimerFrameNum(s32 arg0);
void func_00208170(void);
void MGInitTopPageMainFade(void) {
    SetTimerFrameNum(0x80);
    func_00208170();
}
