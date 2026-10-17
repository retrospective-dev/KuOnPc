#include "common.h"

extern s32 s_pfPlayEndCB;

void fssdivagSetPlayEndCallBack(s32 arg0) {
    s_pfPlayEndCB = arg0;
}
