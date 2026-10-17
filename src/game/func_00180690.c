#include "common.h"
#include "kuon_types.h"

int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
extern MdlMng D_006A78D0[770];
void func_00180690(s32 ObjId, s32 Flag) {
    MdlMng *temp_s0;

    temp_s0 = &D_006A78D0[func_0014F0F0(1, ObjId) + 0x30];
    if (func_0016C510(Flag) != 0) {
        temp_s0->Alpha = 0.0f;
        temp_s0->State[0] = 1;
    }
}
