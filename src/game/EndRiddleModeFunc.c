#include "common.h"

void FreeRiddleMdlMng(void);
extern s32 RiddleMng[];

void EndRiddleModeFunc(void) {
    FreeRiddleMdlMng();
    RiddleMng[0] = 8;
}
