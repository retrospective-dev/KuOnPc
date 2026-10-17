#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0xC];
    /* 0x10 */ s32 unk10;
} Unk_0016DD60;

void SetFadeDrama(s32 arg0);
void SetFadeMng();
void SCR_StartDrama(Unk_0016DD60 *arg0) {
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
    SetFadeMng(3, sp20, 0x28, 0, 0, 0, 0);
    SetFadeDrama(arg0->unk10);
    arg0->unk0 = 0;
}
