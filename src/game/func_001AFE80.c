#include "common.h"
#include "m2c_macros.h"

extern s8 D_00A47780[];

s32 func_001AFE80(s32 arg0) {
    return M2C_FIELD((&D_00A47780[0] + ((arg0 & 0xFF) * 0xD0)), s32 *, 0x94);
}
