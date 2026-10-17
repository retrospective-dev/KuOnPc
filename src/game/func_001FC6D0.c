#include "common.h"

void MGTutorialTextMode(void);
void SetMenuPos(s32 arg0);
u8* GetMenuPos(void);
void func_002069F0(s32 arg0);
void func_00208D90(void);
void func_001FC6D0(void) {
    MGTutorialTextMode();
    func_00208D90();
    SetMenuPos(0);
    func_002069F0((s32) *GetMenuPos());
}
