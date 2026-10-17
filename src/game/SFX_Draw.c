#include "common.h"
#include "kuon_types.h"

unsigned int GetTime(void);
void PtclMng_Draw(u8 *pData_);
Ptcl2 *PtclMng_SfxSeekNext(void);
Ptcl2 *PtclMng_SfxSeekFirst(void);
int SfxDebug_TmrGraph_End(unsigned short id_);
int SfxDebug_TmrGraph_Start(unsigned short id_);
extern s32 D_0025E57C;
extern u8 D_0025E580;

void SFX_Draw(void) {
    Ptcl2 *var_v0;
    u32 temp_s0;

    temp_s0 = GetTime();
    SfxDebug_TmrGraph_Start(1U);
    if (((u64) ((s64) D_0025E580 << 0x3C) >> 0x3F) != 0) {
        var_v0 = PtclMng_SfxSeekFirst();
        if (var_v0 != NULL) {
            do {
                PtclMng_Draw(var_v0);
                var_v0 = PtclMng_SfxSeekNext();
            } while (var_v0 != NULL);
        }
    }
    SfxDebug_TmrGraph_End(1U);
    D_0025E57C = GetTime() - temp_s0;
}
