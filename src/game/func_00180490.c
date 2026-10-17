#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
extern float D_00230010[5][4];
s32 func_00103E88(f32 *, f32 (*)[4]);

void func_00180490(MdlMng *lpObj) {
    lpObj->State[1] = 0;
    lpObj->State[2] = 0;
    lpObj->State[3] = 0;
    lpObj->State[4] = 0;
    func_00103E88(lpObj->Pos, D_00230010);
    func_0012F3F0(lpObj, 0, 0.0f);
}
