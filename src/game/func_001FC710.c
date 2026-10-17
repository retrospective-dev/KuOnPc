#include "common.h"

void SetMenuPos(s32 arg0);
u8* GetMenuPos(void);
void SetTimerFrameNum(s32 arg0);
void func_002069F0(s32 arg0);
void func_002085C0(void);
void func_001FC710(void) {
    SetMenuPos(0);
    func_002069F0((s32) *GetMenuPos());
    func_002085C0();
    SetTimerFrameNum(0x80);
}
