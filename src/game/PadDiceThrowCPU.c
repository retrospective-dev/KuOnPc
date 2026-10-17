#include "common.h"

void MGInitControl(void);
extern u8 g_TimerFrameNum;
extern s8 D_003AC899[];

void PadDiceThrowCPU(void) {
    g_TimerFrameNum -= 1;
    if ((s32) g_TimerFrameNum <= 0) {
        D_003AC899[0] = 0x16;
        MGInitControl();
    }
}
