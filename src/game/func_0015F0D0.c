#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern u8 D_006B9290[];
extern u8 D_006BF810[];

void func_0015F0D0(void) {
    s32 (*temp_v1)(s32 *, u8 *);
    u8 *var_s0;
    u8 *temp_a1;

    var_s0 = &D_006B9290[0];
    if (&D_006B9290[0] != &D_006BF810[0]) {
        do {
            if (M2C_FIELD(var_s0, u8 *, 0) != 0) {
                temp_a1 = M2C_FIELD(var_s0, u8 **, 0x148);
                temp_v1 = M2C_FIELD(temp_a1, s32 (**)(s32 *, u8 *), 0x190);
                if (temp_v1 != NULL) {
                    temp_v1(var_s0, temp_a1);
                }
            }
            var_s0 += 0x1C0;
        } while (var_s0 != &D_006BF810[0]);
    }
}
