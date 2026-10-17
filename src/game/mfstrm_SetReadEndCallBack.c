#include "common.h"

extern s32 s_ReadEndCB;

s32 mfstrm_SetReadEndCallBack(s32 arg0) {
    s32 temp_v0;

    temp_v0 = s_ReadEndCB;
    s_ReadEndCB = arg0;
    return temp_v0;
}
