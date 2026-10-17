#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern void (*D_00A08080[50])();
extern u8 D_006ACCD0[];
extern u8 D_006B74D0[];

void func_00181370(void) {
    u8 *var_s0;
    u8 *temp_v1;
    void (*temp_v1_2)(s32 *);

    var_s0 = &D_006ACCD0[0];
    if (&D_006ACCD0[0] != &D_006B74D0[0]) {
        do {
            if (M2C_FIELD(var_s0, u8 *, 0) != 0) {
                temp_v1 = M2C_FIELD(M2C_FIELD(var_s0, u8 **, 0xC), u16 **, 0x4C);
                if (temp_v1 != NULL) {
                    temp_v1_2 = D_00A08080[*(u16 *)temp_v1];
                    if (temp_v1_2 != NULL) {
                        temp_v1_2(var_s0);
                    }
                }
            }
            var_s0 += 0x1C0;
        } while (var_s0 != &D_006B74D0[0]);
    }
}
