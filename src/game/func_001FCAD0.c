#include "common.h"

void SetMenuPos(s32 arg0);
u8* GetMenuPos(void);
void SetTimerFrameNum(s32 arg0);
void* GetSpriteDraw(void);
void func_002069F0(s32 arg0);
void func_00207DE0(void);
void func_001FCAD0(void) {
    s8 *temp_s0;

    temp_s0 = GetMenuPos();
    GetSpriteDraw();
    *temp_s0 = 0;
    SetMenuPos(0);
    func_002069F0((s32) *GetMenuPos());
    SetTimerFrameNum(0x80);
    func_00207DE0();
}
