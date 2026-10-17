#include "common.h"
#include "m2c_macros.h"

s32 func_0012F290(u8 *arg0);
void func_001915F0(u8 *arg0, u8 *arg1) {
    if (func_0012F290(M2C_FIELD(arg0, u8 **, 0x100)) != 0) {
        M2C_FIELD(arg1, s32 (**)(u8 *, u8 *, s32), 0x100)(arg0, arg1, 0);
    }
}
