#include "common.h"
#include "kuon_types.h"

extern f32 sState_00A626E0[];
extern f32 D_00A626E4[];

s32 MmoFsFontGetPos(f32 *arg0, f32 *arg1) {
    *arg0 = sState_00A626E0[0];
    *arg1 = D_00A626E4[0];
    return 0;
}
