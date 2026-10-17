#include "common.h"

extern s32 s_pMpgMng;
extern s32 s_isInit;

s32 mpg_GetVoBuff(void) {
    if (s_isInit != 0) {
        return s_pMpgMng + 0x1E0;
    }
    return 0;
}
