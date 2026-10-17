#include "common.h"

void ReadBinderFile(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_0025B3D8[];
extern s32 lpEneParamBuf;

void ReadEneParam(void) {
    ReadBinderFile((s32) &D_0025B3D8[0], (s32) &lpEneParamBuf, 0, 0x17);
}
