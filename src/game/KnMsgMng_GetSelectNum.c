#include "common.h"

extern s32 D_00A07E28[];

s32 KnMsgMng_GetSelectNum(void) {
    return D_00A07E28[0];
}
