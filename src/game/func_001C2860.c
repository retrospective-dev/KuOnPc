#include "common.h"

extern s32 D_0025E078;
extern s32 D_0025E07C;

s32 func_001C2860(void) {
    D_0025E078 = D_0025E07C + (D_0025E078 * 0x85);
    D_0025E07C = (D_0025E078 * 5) + (D_0025E07C * 7);
    return D_0025E078 ^ D_0025E07C;
}
