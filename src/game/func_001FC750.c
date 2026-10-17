#include "common.h"

void SetMenuPos(s32 arg0);
u8* GetMenuPos(void);
void SetTimerFrameNum(s32 arg0);
void func_002073C0(s32 arg0);
void func_002082E0(void);
void func_001FC750(void) {
    SetMenuPos(0);
    func_002073C0((s32) *GetMenuPos());
    func_002082E0();
    SetTimerFrameNum(0x80);
}
