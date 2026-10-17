#include "common.h"
#include "kuon_types.h"

int func_001C7A70(Flicker *pFlicker_);
int func_001C7E70(Flicker *pFlicker_);
int _DrawFanCircle_3D_YAxis(Flicker *pFlicker_);
int _DrawFanCircle_3D(Flicker *pFlicker_);
int _DrawFanCircle_2D(Flicker *pFlicker_);
u8 *SList_GetElemPtr(u8 *pSList_, unsigned short hElem_);
extern u8 *s_pObjList_0025E5D0;
s32 SfxFlicker_Draw(u16 hFlicker_) {
    Flicker *temp_v0;
    u16 temp_a0;

    temp_v0 = SList_GetElemPtr(s_pObjList_0025E5D0, hFlicker_);
    temp_a0 = temp_v0->type;
    switch (temp_a0) {
    case 0:
        func_001C7E70(temp_v0);
        break;
    case 1:
        _DrawFanCircle_2D(temp_v0);
        break;
    case 2:
        func_001C7A70(temp_v0);
        break;
    case 3:
        _DrawFanCircle_3D(temp_v0);
        break;
    case 4:
        _DrawFanCircle_3D_YAxis(temp_v0);
        break;
    }
    return 1;
}
