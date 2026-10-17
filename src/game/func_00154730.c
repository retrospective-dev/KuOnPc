#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_001963C0(unsigned char fade_, int bAppear_);
void func_00154730(MdlMng *lpMy, u16 AnimIndex) {
    M2C_FIELD(lpMy->lpCtrlSt, s8 *, 0x100) = 8;
    func_0012F3F0(lpMy, AnimIndex & 0xFFFF, 0.0f);
    func_001963C0(1U, 1);
}
