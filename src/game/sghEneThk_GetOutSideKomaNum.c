#include "common.h"
#include "m2c_macros.h"

extern u8 gEnemyData[];

u8 sghEneThk_GetOutSideKomaNum(void) {
    return M2C_FIELD((&gEnemyData[0] + (gEnemyData[0] << 5)), u8 *, 2);
}
