#include "common.h"

extern s32 gsPadInfo[];
extern s32 D_00A620F4[];
extern s8 D_00A620FC[];
extern s8 D_00A620FD[];

void sghPad_Init(void) {
    D_00A620FC[0] = 0;
    D_00A620FD[0] = 0;
    gsPadInfo[0] = 0;
    D_00A620F4[0] = 0;
}
