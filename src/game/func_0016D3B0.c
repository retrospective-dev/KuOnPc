#include "common.h"
#include "m2c_macros.h"

void func_00170C20(u8 *arg0, s32 arg1);
s32 func_001AFE80(s32 arg0);
void func_0016D3B0(u8 *arg0) {
    func_00170C20(arg0 + 0xC, func_001AFE80((s32) M2C_FIELD(arg0, u8 *, 8)) != 0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
