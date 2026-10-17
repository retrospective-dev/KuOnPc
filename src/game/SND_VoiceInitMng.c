#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 s_aVoice[];

void SND_VoiceInitMng(void) {
    func_00127BE0(&s_aVoice[0], 0, 0x1000U);
}
