#include "common.h"
#include "kuon_types.h"

extern int D_0025E594;
extern int D_0025E598;
extern float D_0025E59C;
extern float D_0025E5A0;
extern unsigned short D_0025E5A4;
extern MdlMng *D_00A49EE0[3];
extern s32 D_00A49EE4[];
extern s32 D_00A49EE8[];

void func_001C3530(f32 max_time_, u16 dmg_id_) {
    *D_00A49EE0 = NULL;
    D_0025E5A0 = max_time_;
    D_0025E5A4 = dmg_id_;
    D_00A49EE4[0] = 0;
    D_0025E598 = 1;
    D_0025E59C = 0.0f;
    D_0025E594 = 0;
    D_00A49EE8[0] = 0;
}
