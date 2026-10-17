#include "common.h"
#include "m2c_macros.h"

void func_0013D960(void);
extern u8 D_0025E350;
extern u8 D_003AC89A[];

s32 func_00198FC0(void) {
    u8 *temp_s0;

    temp_s0 = (unsigned char *) (*(s32 *)(&D_0025E350 + (D_003AC89A[0] * 4)));
    func_0013D960();
    return ((u64) ((s64) M2C_FIELD(temp_s0, u8 *, 0x20) << 0x3C) >> 0x3F) != 0;
}
