#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
GmInfo *func_0020CC40(void);
void func_00214290(void);
void func_00214840(int time_);
extern MdlMng D_006A78D0[770];
void func_00211A10(void) {
    GmInfo *temp_v0;

    temp_v0 = func_0020CC40();
    func_0012F3F0(&D_006A78D0[temp_v0->nowPlayerID + 0xD5], 0, 0.0f);
    func_00214840(0x80);
    func_00214290();
    temp_v0->modeID = 0x19;
}
