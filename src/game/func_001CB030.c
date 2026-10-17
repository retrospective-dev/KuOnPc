#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_001CB490(Sfx *p_sfx, float dt_);
int func_001D1FD0(unsigned short hSfxMdl_, float (*mrx_)[4]);
s32 func_001CB030(Sfx *p_sfx) {
    s8 *temp_s0;

    temp_s0 = p_sfx->p_data;
    func_001CB490(p_sfx, 0.0166666f);
    func_001D1FD0(M2C_FIELD(temp_s0, u16 *, 0xC), (f32 (*)[4]) p_sfx->p_matrix);
    return 1;
}
