#include "common.h"

s32 SND_LoadRandSeFromFile(s32 arg0);
extern s32 D_0025BBD0[];

s32 SND_InitLoad(void) {
    SND_LoadRandSeFromFile((s32) &D_0025BBD0[0]);
    return 0;
}
