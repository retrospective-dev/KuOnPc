#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern u8 D_006B9290[];
extern u8 D_006BEA10[];

void EneClearAllPauseDamage(void) {
    u8 *var_a1;

    var_a1 = &D_006B9290[0];
    if (&D_006B9290[0] != &D_006BEA10[0]) {
        do {
            if (M2C_FIELD(var_a1, u8 *, 0) != 0) {
                M2C_FIELD(M2C_FIELD(var_a1, u8 **, 0x148), s16 *, 0x1EE) = 0;
            }
            var_a1 += 0x1C0;
        } while (var_a1 != &D_006BEA10[0]);
    }
}
