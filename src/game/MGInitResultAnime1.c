#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetTimerFrameNum(unsigned char FrameNum);
extern unsigned char g_WinFlag;
extern MdlMng_t MdlMng[770];
void MGInitResultAnime1(void) {
    MdlMng_t *temp_s0;

    temp_s0 = &MdlMng[g_WinFlag + 0xD5];
    SetTimerFrameNum(0x50U);
    temp_s0->bErase = 0;
    func_0012F3F0(temp_s0, 3, 0.0f);
}
