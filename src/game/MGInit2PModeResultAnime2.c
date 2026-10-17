#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetTimerFrameNum(unsigned char FrameNum);
void func_00207960(void);
void func_00207A20(void);
extern unsigned char g_WinFlag;
extern u8 D_006BED90[];

void MGInit2PModeResultAnime2(void) {
    SetTimerFrameNum(0x80U);
    func_0012F3F0(&D_006BED90[0], 0, 0.0f);
    if (g_WinFlag == 0) {
        func_00207A20();
        return;
    }
    if (g_WinFlag == 1) {
        func_00207960();
    }
}
