#include "common.h"

s32 func_00217780(void);
extern u8 *D_0025E2E0;

s32 func_00217AD0(void) {
    u8 temp_v1;

    temp_v1 = *D_0025E2E0;
    if ((temp_v1 != 0) && (temp_v1 != 1)) {
        func_00217780();
    }
    return 1;
}
