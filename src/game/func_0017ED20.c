#include "common.h"
#include "kuon_types.h"

int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
extern MdlMng D_006A78D0[770];
void func_0017ED20(s32 ItemId, s32 Flag) {
    MdlMng *temp_s0;

    temp_s0 = &D_006A78D0[func_0014F0F0(7, ItemId) + 0x90];
    if (func_0016C510(Flag) != 0) {
        temp_s0->Alpha = 0.0f;
    }
}
