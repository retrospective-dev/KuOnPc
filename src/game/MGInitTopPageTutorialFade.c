#include "common.h"

void SetTimerFrameNum(s32 arg0);
void func_00207F50(void);
void MGInitTopPageTutorialFade(void) {
    SetTimerFrameNum(0x9E);
    func_00207F50();
}
