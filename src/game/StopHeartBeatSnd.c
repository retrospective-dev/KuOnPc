#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x194];
    /* 0x194 */ s32 unk194;
} Unk_00151DE0;

void SND_Stop(int iVoiceHandle);
void StopHeartBeatSnd(MdlMng_t *lpMy) {
    s32 temp_a0;
    Unk_00151DE0 *temp_s0;

    temp_s0 = lpMy->lpCtrlSt;
    temp_a0 = temp_s0->unk194;
    if (temp_a0 != -1) {
        SND_Stop(temp_a0);
        temp_s0->unk194 = -1;
    }
}
