#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

char *__SFXMNG_DataAlloc(int size);
s32 __SFXMNG_SE_Init(Sfx *p_sfx) {
    s8 *temp_a0;

    p_sfx->p_data = __SFXMNG_DataAlloc(8);
    temp_a0 = p_sfx->p_data;
    if (temp_a0 == NULL) {
        return 0;
    }
    p_sfx->life_cnt = 0x7FFFFFFF;
    M2C_FIELD(temp_a0, s32 *, 0) = 0x50;
    M2C_FIELD(temp_a0, s32 *, 4) = -1;
    return 1;
}
