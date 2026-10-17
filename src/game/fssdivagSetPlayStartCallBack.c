#include "common.h"

extern s32 s_pfPlayStartCB;

void fssdivagSetPlayStartCallBack(s32 arg0) {
    s_pfPlayStartCB = arg0;
}
