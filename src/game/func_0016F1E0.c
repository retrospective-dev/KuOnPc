#include "common.h"
/* mwcc_pad: any */
#include "m2c_macros.h"

void func_00170C20(u8 *arg0, s32 arg1);
extern u8 D_009BC420[];

void func_0016F1E0(u8 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    var_v1 = temp_v0 >> 3;
    if (temp_v0 < 0) {
        var_v1 = (s32) (temp_v0 + 7) >> 3;
    }
    func_00170C20(arg0 + 0xC, (s32) *(&D_009BC420[0] + var_v1));
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
