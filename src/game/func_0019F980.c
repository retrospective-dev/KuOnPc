#include "common.h"
#include "kuon_types.h"

extern MCMng *D_0025E044;
s32 func_0019F980(s32 Mode) {
    switch (Mode) {
    case 0:
        return ((u32) (D_0025E044->IconSize[0] + 0x3FF) >> 0xA) + 7;
    case 1:
        return 2;
    default:
        return 0;
    }
}
