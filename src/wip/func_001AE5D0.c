#include "common.h"
#include "m2c_macros.h"

extern s8 D_0024D2A0[];
extern s8 D_0024D2A1[];
extern s8 D_0024D2A2[];
extern s8 D_0024D2A3[];
extern s8 D_0024D2A4[];
extern s8 D_0024D2A5[];
extern s8 D_0024D2A6[];
extern s8 D_0024D2A7[];
extern s8 D_0024D2A8[];
extern s32 D_0025E530;

void func_001AE5D0(void) {
    s32 var_a4;
    u32 var_a5;
    u8 *temp_a3;

    var_a5 = 0;
    D_0024D2A0[0] = 0;
    var_a4 = 0;
    do {
        var_a5 += 1;
        temp_a3 = (unsigned char *) (D_0025E530 + var_a4);
        M2C_FIELD(temp_a3, s8 *, 0x73) = -1;
        var_a4 += 0x10;
        M2C_FIELD(temp_a3, s8 *, 0x72) = -1;
        M2C_FIELD(temp_a3, s8 *, 0x74) = 0;
        M2C_FIELD(temp_a3, s32 *, 0x78) = 0;
        M2C_FIELD(temp_a3, s32 *, 0x7C) = 0x7F;
        M2C_FIELD(temp_a3, s16 *, 0x70) = 0x7FFF;
    } while (var_a5 < 4U);
    D_0024D2A4[0] = 0x7F;
    D_0024D2A3[0] = 0x7F;
    D_0024D2A2[0] = 0x7F;
    D_0024D2A1[0] = 0x7F;
    D_0024D2A8[0] = 0x7F;
    D_0024D2A7[0] = 0x7F;
    D_0024D2A6[0] = 0x7F;
    D_0024D2A5[0] = 0x7F;
}
