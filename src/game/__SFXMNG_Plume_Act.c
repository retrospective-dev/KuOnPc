#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void _SubFunc_Plume_Move_001CB490(Sfx *p_sfx, float dt_);
int SfxMdl_SetMatrix(unsigned short hSfxMdl_, float (*mrx_)[4]);
s32 __SFXMNG_Plume_Act(Sfx *p_sfx) {
    s8 *temp_s0;

    temp_s0 = p_sfx->p_data;
    _SubFunc_Plume_Move_001CB490(p_sfx, 0.0166666f);
    SfxMdl_SetMatrix(M2C_FIELD(temp_s0, u16 *, 0xC), (f32 (*)[4]) p_sfx->p_matrix);
    return 1;
}
