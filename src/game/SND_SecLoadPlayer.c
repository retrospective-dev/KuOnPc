#include "common.h"
#include "kuon_types.h"

int SND_LoadSecFromFile(SeKind SeKind, char *pFileName);
s32 func_00129770(s8 *, s32 *, s32);
extern u8 D_0025BA70[];
extern u8 D_0025BA90[];
extern u8 D_003AC8BC[];

s32 SND_SecLoadPlayer(s32 id) {
    s8 sp10[256];

    if (D_003AC8BC[0] == 0) {
        func_00129770(sp10, &D_0025BA70[0], id);
    } else {
        func_00129770(sp10, &D_0025BA90[0], id);
    }
    SND_LoadSecFromFile(2, sp10);
    return 0;
}
