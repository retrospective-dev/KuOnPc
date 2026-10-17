#include "common.h"
#include "kuon_types.h"

extern int D_0025E340[2];
extern int D_0025E348[2];
s32 func_0013D4E0(u8 port) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = port & 0xFF;
    temp_v1 = D_0025E348[temp_v0];
    if ((temp_v1 != 2) && (temp_v1 != 6)) {
        return 0;
    }
    if (D_0025E340[temp_v0] != 0) {
        return 0;
    }
    return 1;
}
