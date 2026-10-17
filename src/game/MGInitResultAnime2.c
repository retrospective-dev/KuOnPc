#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetTimerFrameNum(unsigned char FrameNum);
void func_00207C60(void);
void func_00207D20(void);
extern unsigned char g_WinFlag;
extern MdlMng_t MdlMng[770];
void MGInitResultAnime2(void) {
    MdlMng_t *temp_s0;

    temp_s0 = &MdlMng[g_WinFlag + 0xD5];
    SetTimerFrameNum(0x80U);
    func_0012F3F0(temp_s0, 0, 0.0f);
    if (g_WinFlag == 0) {
        func_00207D20();
        return;
    }
    if (g_WinFlag == 1) {
        func_00207C60();
    }
}
