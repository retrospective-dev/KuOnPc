#include "common.h"
#include "kuon_types.h"

int func_0014F0F0(int Type, int CtrlId);
int func_001D2C50(unsigned short hSfxPLight_, float fade_time_);
extern MdlMng D_006A78D0[770];
void func_0016CB50(Ss *ss) {
    MdlMng *temp_s1;
    u16 temp_a0;

    temp_s1 = &D_006A78D0[func_0014F0F0(1, ss->arg[0].val) + 0x30];
    temp_a0 = temp_s1->hSfxPLight;
    if (temp_a0 != 0xFFFF) {
        func_001D2C50(temp_a0, 0.0166666f * (f32) ss->arg[1].val);
    }
    temp_s1->hSfxPLight = 0xFFFF;
    ss->kind = 0;
}
