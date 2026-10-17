#include "common.h"

void MGDiceAnimeStart(s32 arg0, s32 arg1);
void SetTimerFrameNum(s32 arg0);
void func_00208A60(void);
void MGInitMainGameCPU(void) {
    func_00208A60();
    SetTimerFrameNum(0x14);
    MGDiceAnimeStart(2, 1);
}
