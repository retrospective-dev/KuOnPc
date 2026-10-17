#include "common.h"
#include "kuon_types.h"

int func_00149110(int se_idx);
extern Voice D_00A46780[64];
void func_001AECC0(s32 iVoiceHandle) {
    Voice *temp_a0;
    s16 temp_a0_2;

    if ((iVoiceHandle < 0) || (iVoiceHandle >= 0x40)) {
        return;
    }
    temp_a0 = &D_00A46780[iVoiceHandle];
    if (temp_a0->on > 0) {
        temp_a0->on = -1;
        temp_a0->flm = 0;
        temp_a0_2 = temp_a0->vid;
        if ((temp_a0_2 >= 0) && (temp_a0_2 < 0x40)) {
            func_00149110((s32) temp_a0_2);
        }
    }
}
