#include "common.h"

extern s32 s_isInit;

void mpg_QuitPss(void) {
    s_isInit = 0;
}
