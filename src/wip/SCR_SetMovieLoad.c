#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 unkC[0x4];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14[0x4];
    /* 0x18 */ s32 unk18;
} Unk_0016C7A0;

void SetFadeMovieLoad(s32 arg0, s32 arg1, s32 arg2);
void SetFadeMng();
void SCR_SetMovieLoad(Unk_0016C7A0 *arg0) {
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
    SetFadeMng(7, sp20, 0x1E, 0, 0, 0, 0);
    SetFadeMovieLoad(arg0->unk8, arg0->unk10, arg0->unk18);
    arg0->unk0 = 0;
}
