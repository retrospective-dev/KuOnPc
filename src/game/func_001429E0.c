#include "common.h"
#include "kuon_types.h"

extern s32 D_00788620[];
extern s32 D_00788624[];
extern s32 D_00788628[];
extern s32 D_0078862C[];
extern s8 * D_00788640[];
extern u32 D_00788648[];
extern u32 D_0078864C[];
extern Flchk * D_00788650[];

s32 func_001429E0(s32 port, s32 slot, s8 *name, u32 mode, u32 maxent, Flchk *table) {
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
    D_00788628[0] = 4;
    D_00788640[0] = name;
    D_00788648[0] = mode;
    D_0078864C[0] = maxent;
    D_00788650[0] = table;
    D_0078862C[0] = 0;
    return 0;
}
