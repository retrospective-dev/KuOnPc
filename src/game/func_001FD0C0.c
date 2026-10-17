#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_00203380(unsigned char FrameNum);
extern unsigned char D_0025E72C;
extern MdlMng D_006A78D0[770];
void func_001FD0C0(void) {
    MdlMng *temp_s0;

    temp_s0 = &D_006A78D0[D_0025E72C + 0xD5];
    func_00203380(0x50U);
    temp_s0->bErase = 0;
    func_0012F3F0(temp_s0, 3, 0.0f);
}
