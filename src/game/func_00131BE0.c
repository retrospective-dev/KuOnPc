#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_00131BE0(f32 *ret, f32 *v0, f32 *v1, f32 tt) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;

    temp_f1 = M2C_FIELD(v0, f32 *, 0);
    M2C_FIELD(ret, f32 *, 0) = temp_f1 + (tt * (M2C_FIELD(v1, f32 *, 0) - temp_f1));
    temp_f1_2 = M2C_FIELD(v0, f32 *, 4);
    M2C_FIELD(ret, f32 *, 4) = (f32) (temp_f1_2 + (tt * (M2C_FIELD(v1, f32 *, 4) - temp_f1_2)));
    temp_f1_3 = M2C_FIELD(v0, f32 *, 8);
    M2C_FIELD(ret, f32 *, 8) = (f32) (temp_f1_3 + (tt * (M2C_FIELD(v1, f32 *, 8) - temp_f1_3)));
    M2C_FIELD(ret, s32 *, 0xC) = 0x3F800000;
}
