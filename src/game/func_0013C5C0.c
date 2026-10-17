#include "common.h"
#include "m2c_macros.h"

s32 func_00103ED8(u8 *);

void func_0013C5C0(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 9) = 1;
    func_00103ED8(arg0 + 0xC0);
}
