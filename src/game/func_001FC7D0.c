#include "common.h"

void SetMenuPos(s32 arg0);
u8* GetMenuPos(void);
void SetTimerFrameNum(s32 arg0);
void func_002069F0(s32 arg0);
void func_00208450(void);
void func_001FC7D0(void) {
    SetMenuPos(0);
    func_002069F0((s32) *GetMenuPos());
    func_00208450();
    SetTimerFrameNum(0x80);
}
