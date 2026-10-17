#include "common.h"

void SetFadeMng();
void FECard_Enable_Draw(s32 arg0);
void StartRiddleModeFunc(void);
extern s32 RiddleMng[];
extern s32 D_00A3F324[];
extern s32 D_00A3F32C[];
extern s32 D_00A3F330[];

void SetRiddleMode(s32 arg0) {
    s8 sp20[16];
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x10;
    var_v1 = sp20;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    SetFadeMng(5, sp20, 0x1E, 0, StartRiddleModeFunc, 0, 0);
    D_00A3F324[0] = arg0;
    RiddleMng[0] = 1;
    D_00A3F32C[0] = -1;
    D_00A3F330[0] = 0;
    FECard_Enable_Draw(0);
}
