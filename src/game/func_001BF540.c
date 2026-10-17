#include "common.h"
#include "kuon_types.h"

unsigned int GetTime(void);
int SfxDebug_TmrGraph_End(unsigned short id_);
int SfxDebug_TmrGraph_Start(unsigned short id_);
void SfxDomanString_Draw(void);
void SfxDomanString_Act(float dt_);
int SfxTracer_DrawAll(void);
int SfxBugs_DrawAll(void);
extern s32 D_0025E57C;

void func_001BF540(void) {
    u32 temp_s0;

    temp_s0 = GetTime();
    SfxDebug_TmrGraph_Start(1U);
    SfxTracer_DrawAll();
    SfxDomanString_Act(0.0166666f);
    SfxDomanString_Draw();
    SfxBugs_DrawAll();
    SfxDebug_TmrGraph_End(1U);
    D_0025E57C += GetTime() - temp_s0;
}
