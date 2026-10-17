#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

s32 CheckSquareRange(f32 *Pos, f32 *Range) {
    f32 temp_f1;
    f32 temp_f1_2;

    temp_f1 = M2C_FIELD(Pos, f32 *, 0);
    if ((temp_f1 < M2C_FIELD(Range, f32 *, 0)) || !(temp_f1 <= M2C_FIELD(Range, f32 *, 8)) || (temp_f1_2 = M2C_FIELD(Pos, f32 *, 8), (temp_f1_2 < M2C_FIELD(Range, f32 *, 4))) || !(temp_f1_2 <= M2C_FIELD(Range, f32 *, 0xC))) {
        return 0;
    }
    return 1;
}
