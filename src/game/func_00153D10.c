#include "common.h"
#include "kuon_types.h"

extern u8 D_003AC8A4[];

f32 func_00153D10(MdlMng *lpMy) {
    f32 var_f0;
    s16 temp_v1;

    temp_v1 = lpMy->IndexAnim;
    var_f0 = 0.0f;
    if (temp_v1 == 0x45) {
        goto block_25;
    }
    if (temp_v1 == 0x44) {
        goto block_20;
    }
    if (temp_v1 == 0x43) {
        goto block_15;
    }
    if (temp_v1 == 0x42) {
        goto block_10;
    }
    if (temp_v1 == 0x60) {
        goto block_9;
    }
    if (temp_v1 == 0x5F) {
        goto block_8;
    }
    return 0.0f;
block_8:
    return 30.0f;
block_9:
    return 45.0f;
block_10:
    if (D_003AC8A4[0] != 0) {
        goto block_13;
    }
    return 30.0f;
block_13:
    if (D_003AC8A4[0] != 1) {
        goto block_30;
    }
    return 40.0f;
block_15:
    if (D_003AC8A4[0] != 0) {
        goto block_18;
    }
    return 30.0f;
block_18:
    if (D_003AC8A4[0] != 1) {
        goto block_30;
    }
    return 40.0f;
block_20:
    if (D_003AC8A4[0] != 0) {
        goto block_23;
    }
    return 30.0f;
block_23:
    if (D_003AC8A4[0] != 1) {
        goto block_30;
    }
    return 30.0f;
block_25:
    if (D_003AC8A4[0] != 0) {
        goto block_28;
    }
    return 50.0f;
block_28:
    if (D_003AC8A4[0] != 1) {
        goto block_30;
    }
    var_f0 = 60.0f;
block_30:
    return var_f0;
}
