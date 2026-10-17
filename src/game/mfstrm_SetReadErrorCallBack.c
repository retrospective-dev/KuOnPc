#include "common.h"

extern s32 s_ReadErrCB;

s32 mfstrm_SetReadErrorCallBack(s32 arg0) {
    s32 temp_v0;

    temp_v0 = s_ReadErrCB;
    s_ReadErrCB = arg0;
    return temp_v0;
}
