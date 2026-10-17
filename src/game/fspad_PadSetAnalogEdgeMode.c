#include "common.h"
#include "m2c_macros.h"

extern s8 __PADMNG[];

s32 fspad_PadSetAnalogEdgeMode(s32 arg0, s32 arg1, s8 arg2) {
    M2C_FIELD((&__PADMNG[0] + ((arg1 + (arg0 * 4)) * 0x1C0)), s8 *, 0x183) = arg2;
    return 1;
}
