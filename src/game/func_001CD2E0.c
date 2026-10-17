#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

char *func_001D0050(int size);
s32 func_001CD2E0(Sfx *p_sfx) {
    s8 *temp_a0;

    p_sfx->p_data = func_001D0050(8);
    temp_a0 = p_sfx->p_data;
    if (temp_a0 == NULL) {
        return 0;
    }
    p_sfx->life_cnt = 0x7FFFFFFF;
    M2C_FIELD(temp_a0, s32 *, 0) = 0x50;
    M2C_FIELD(temp_a0, s32 *, 4) = -1;
    return 1;
}
