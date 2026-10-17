#include "common.h"
#include "kuon_types.h"

int SND_LoadSecFromFile(SeKind SeKind, char *pFileName);
extern s8 D_0025BB90[];
extern s8 D_0025BBB0[];

s32 SND_SecLoadCommon(void) {
    SND_LoadSecFromFile(0, &D_0025BB90[0]);
    SND_LoadSecFromFile(1, &D_0025BBB0[0]);
    return 0;
}
