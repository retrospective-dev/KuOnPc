#include "common.h"

void FreeRiddleMdlData(void);
void FreeRiddleMdlMng(void);
extern s8 D_003AC895[];
extern s32 D_00A3F330[];

void CheckFreeRiddleData(void) {
    if (D_00A3F330[0] != 0) {
        FreeRiddleMdlMng();
        FreeRiddleMdlData();
        D_003AC895[0] = 0;
    }
}
