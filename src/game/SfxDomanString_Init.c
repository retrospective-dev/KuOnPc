#include "common.h"

extern s32 s_bAct;
extern s32 s_curr_time;
extern s32 s_max_time;

void SfxDomanString_Init(void) {
    s_max_time = 0;
    s_curr_time = 0;
    s_bAct = 0;
}
