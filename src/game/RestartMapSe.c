#include "common.h"
#include "m2c_macros.h"

void SetCamReverb();
s32 * GetCamInfo(void);
u8 * GetCamPathData(u8 **arg0, s32 arg1);
void SND_SqFadeStart(s32 arg0, s32 arg1);
s32 SND_SqPlay(s32 arg0, s8 arg1);
extern u8 D_003AC8BC[];
extern u8 D_003AC8BD[];

void RestartMapSe(void) {
    u8 **temp_v0;

    if (D_003AC8BD[0] == 0xFF) {
        SND_SqPlay(0, 0);
        SND_SqFadeStart(0, 2);
        SND_SqPlay(1, 1);
        SND_SqFadeStart(1, 2);
        SND_SqPlay(2, 2);
        SND_SqFadeStart(2, 2);
        SND_SqPlay(3, 3);
        SND_SqFadeStart(3, 2);
        temp_v0 = GetCamInfo();
        SetCamReverb(GetCamPathData(temp_v0, M2C_FIELD(temp_v0, s32 *, 4)));
        D_003AC8BD[0] = D_003AC8BC[0];
    }
}
