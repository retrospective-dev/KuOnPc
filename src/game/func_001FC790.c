#include "common.h"

void SetMenuPos(s32 arg0);
u8* GetMenuPos(void);
void func_002069F0(s32 arg0);
void func_00208C80(void);
extern s8 g_WinNum;
extern s8 D_0025E731;

void func_001FC790(void) {
    func_00208C80();
    SetMenuPos(0);
    func_002069F0((s32) *GetMenuPos());
    g_WinNum = 0;
    D_0025E731 = 0;
}
