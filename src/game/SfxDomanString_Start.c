#include "common.h"
#include "kuon_types.h"

extern int s_phase;
extern int s_bAct;
extern float s_curr_time;
extern float s_max_time;
extern unsigned short s_dmg_id;
extern MdlMng_t *s_apHitChar[3];
extern s32 D_00A49EE4[];
extern s32 D_00A49EE8[];

void SfxDomanString_Start(f32 max_time_, u16 dmg_id_) {
    *s_apHitChar = NULL;
    s_max_time = max_time_;
    s_dmg_id = dmg_id_;
    D_00A49EE4[0] = 0;
    s_bAct = 1;
    s_curr_time = 0.0f;
    s_phase = 0;
    D_00A49EE8[0] = 0;
}
