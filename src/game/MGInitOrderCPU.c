#include "common.h"

void MGDiceAnimeStart(s32 arg0, s32 arg1);
void SetTimerFrameNum(s32 arg0);
void func_00208B70(void);
void MGInitOrderCPU(void) {
    SetTimerFrameNum(0x14);
    MGDiceAnimeStart(1, 1);
    func_00208B70();
}
