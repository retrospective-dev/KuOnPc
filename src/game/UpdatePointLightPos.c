#include "common.h"
#include "kuon_types.h"

extern PointLightMng_t PointLightMng[16];
s32 func_00103E88(f32 *);

s32 UpdatePointLightPos(s32 PLightNo, f32 *Pos) {
    PointLightMng_t *temp_v1;

    temp_v1 = &PointLightMng[PLightNo];
    if (temp_v1->bUse == 0) {
        return 0;
    }
    func_00103E88(temp_v1->Pos);
    return 1;
}
