#include "common.h"
#include "kuon_types.h"

extern PointLightMng D_0097C0C0[16];
s32 func_00103E88(f32 *);

s32 func_00165140(s32 PLightNo, f32 *Pos) {
    PointLightMng *temp_v1;

    temp_v1 = &D_0097C0C0[PLightNo];
    if (temp_v1->bUse == 0) {
        return 0;
    }
    func_00103E88(temp_v1->Pos);
    return 1;
}
