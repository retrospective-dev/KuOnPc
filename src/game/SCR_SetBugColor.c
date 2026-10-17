#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u8 unk8;
    /* 0x09 */ u8 unk9[0x7];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[0x7];
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 unk19[0x7];
    /* 0x20 */ u8 unk20;
} Unk_0016D5A0;

void SfxScriptIF_SetBugColor(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void SCR_SetBugColor(Unk_0016D5A0 *arg0) {
    SfxScriptIF_SetBugColor((s32) arg0->unk8, (s32) arg0->unk10, (s32) arg0->unk18, (s32) arg0->unk20);
    arg0->unk0 = 0;
}
