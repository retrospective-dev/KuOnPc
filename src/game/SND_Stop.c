#include "common.h"
#include "kuon_types.h"

int fssdsynthSeStreamOff(int se_idx);
extern Voice s_aVoice[64];
void SND_Stop(s32 iVoiceHandle) {
    Voice *temp_a0;
    s16 temp_a0_2;

    if ((iVoiceHandle < 0) || (iVoiceHandle >= 0x40)) {
        return;
    }
    temp_a0 = &s_aVoice[iVoiceHandle];
    if (temp_a0->on > 0) {
        temp_a0->on = -1;
        temp_a0->flm = 0;
        temp_a0_2 = temp_a0->vid;
        if ((temp_a0_2 >= 0) && (temp_a0_2 < 0x40)) {
            fssdsynthSeStreamOff((s32) temp_a0_2);
        }
    }
}
