#include "common.h"
#include "kuon_types.h"

extern s32 D_00788620[];
extern s32 D_00788624[];
extern s32 D_00788628[];
extern s32 D_0078862C[];
extern s32 D_00788630[];
extern s32 D_00788638[];
extern s8 * D_00788640[];
extern u32 D_00788648[];
extern u8 * D_00788658[];

s32 func_001427A0(s32 port, s32 slot, s8 *fname, u8 *dthead, u32 size) {
    if (D_00788628[0] == 0) {
        goto block_2;
    }
    return 1;
block_2:
    if (port >= 3) {
        goto block_5;
    }
    if (port >= 0) {
        goto block_6;
    }
block_5:
    return -1;
block_6:
    if (slot >= 5) {
        goto block_9;
    }
    if (slot >= 0) {
        goto block_10;
    }
block_9:
    return -1;
block_10:
    D_00788620[0] = port;
    D_00788624[0] = slot;
    D_00788628[0] = 7;
    D_00788640[0] = fname;
    D_00788658[0] = dthead;
    D_00788648[0] = size;
    D_00788638[0] = 0x3C;
    D_00788630[0] = 0;
    D_0078862C[0] = 0;
    return 0;
}
