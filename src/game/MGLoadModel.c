#include "common.h"

void ReadMdlBndFile(s32 arg0, s32 arg1, s32 arg2);
extern s32 D_0025DCF0[];
extern s32 D_0025DD00[];
extern s32 D_0025DD10[];
extern s32 D_0025DD20[];
extern s32 D_0025DD30[];
extern s32 D_0025DD40[];
extern s32 D_0025DD50[];
extern s32 D_0025DD68[];

void MGLoadModel(void) {
    ReadMdlBndFile((s32) &D_0025DCF0[0], 0, 0);
    ReadMdlBndFile((s32) &D_0025DD00[0], 1, 0);
    ReadMdlBndFile((s32) &D_0025DD10[0], 2, 0);
    ReadMdlBndFile((s32) &D_0025DD20[0], 3, 0);
    ReadMdlBndFile((s32) &D_0025DD30[0], 4, 0);
    ReadMdlBndFile((s32) &D_0025DD40[0], 5, 0);
    ReadMdlBndFile((s32) &D_0025DD50[0], 6, 0);
    ReadMdlBndFile((s32) &D_0025DD68[0], 0x4C, 0);
}
