#include "common.h"

s32 GetTime(void);
extern u8 s_aCPUCount[];

s32 SfxDebug_TmrGraph_Start(s32 arg0) {
    *(s32 *)(&s_aCPUCount[0] + ((arg0 & 0xFFFF) * 4)) = GetTime();
    return 1;
}
