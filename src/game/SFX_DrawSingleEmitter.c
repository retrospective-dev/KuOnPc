#include "common.h"

s32 GetTime(void);
void PtclMng_DrawSingleEmitter();
s32 SfxDebug_TmrGraph_End(s32 arg0);
s32 SfxDebug_TmrGraph_Start(s32 arg0);
extern s32 D_0025E57C;

void SFX_DrawSingleEmitter(s32 arg0) {
    s32 temp_s0;

    temp_s0 = GetTime();
    SfxDebug_TmrGraph_Start(1);
    PtclMng_DrawSingleEmitter(arg0);
    SfxDebug_TmrGraph_End(1);
    D_0025E57C += GetTime() - temp_s0;
}
