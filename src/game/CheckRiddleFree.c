#include "common.h"

void SetCamCtrlMode(s32 arg0);
void FECard_Enable_Draw(s32 arg0);
void FreeRiddleMdlData(void);
extern s8 D_003AC895[];
extern s32 RiddleMng[];

void CheckRiddleFree(void) {
    if (RiddleMng[0] == 9) {
        FreeRiddleMdlData();
        RiddleMng[0] = 0;
        D_003AC895[0] = 0;
        SetCamCtrlMode(0);
        FECard_Enable_Draw(1);
    }
}
