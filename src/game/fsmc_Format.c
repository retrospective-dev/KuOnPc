#include "common.h"
#include "kuon_types.h"

extern s32 D_00788620[];
extern s32 D_00788624[];
extern s32 D_00788628[];
extern s32 D_0078862C[];
extern s32 D_00788638[];

s32 fsmc_Format(s32 port, s32 slot) {
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
    D_00788628[0] = 9;
    D_00788638[0] = 0x33;
    D_0078862C[0] = 0;
    return 0;
}
