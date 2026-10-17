#include "common.h"
#include "m2c_macros.h"

s32 func_001A2F00(u8 *arg0, s32 arg1);
s32 func_001A3870(u8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    return func_001A2F00(M2C_FIELD(arg0, u8 **, 0x1C), arg1);
}
