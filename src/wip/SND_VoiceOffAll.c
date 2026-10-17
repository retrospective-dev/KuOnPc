#include "common.h"
#include "m2c_macros.h"

void func_00127BE0(void* dst, s32 c, u32 n);
s32 fssdsynthSeStreamOff(s32 arg0);
extern u8 s_aVoice[];

void SND_VoiceOffAll(void) {
    s8 *var_s0;
    s16 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = &s_aVoice[0];
    do {
        if (M2C_FIELD(var_s0, s8 *, 0) > 0) {
            temp_a0 = M2C_FIELD(var_s0, s16 *, 0xE);
            if ((temp_a0 >= 0) && (temp_a0 < 0x40)) {
                fssdsynthSeStreamOff((s32) temp_a0);
            }
        }
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0x40);
    func_00127BE0(&s_aVoice[0], 0, 0x1000U);
}
