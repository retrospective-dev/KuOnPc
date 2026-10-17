#include "common.h"

extern u8 D_00A07DA8[];

s32 KnMsgMng_CheckMsgNone(void) {
    return D_00A07DA8[0] == 0;
}
