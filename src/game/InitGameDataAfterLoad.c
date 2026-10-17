#include "common.h"

void SetLoadCamReserve(s32 arg0);
void FECard_Initialize(void);
void InitGameDataAfterLoad(void) {
    FECard_Initialize();
    SetLoadCamReserve(0xFFFF);
}
