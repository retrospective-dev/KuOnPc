#include "common.h"

extern s32 s_pfCallback;

void mpg_RegisterCallBack(s32 arg0) {
    s_pfCallback = arg0;
}
