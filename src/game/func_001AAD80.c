#include "common.h"
#include "m2c_macros.h"

extern u8 D_00A41570[];
extern s32 D_00A41574[];

s32 func_001AAD80(void *arg0) {
    if (D_00A41570[0] == 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x44) == D_00A41574[0];
}
