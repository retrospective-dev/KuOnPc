#include "common.h"

typedef struct {
    /* 0x000 */ s32 unk0;
    /* 0x004 */ u8 unk4[0x1F0];
    /* 0x1F4 */ s32 unk1F4;
    /* 0x1F8 */ s32 unk1F8;
} Unk_0019BC40;

extern Unk_0019BC40 *D_0025E4D8;
extern s32 D_0025E4DC;

void func_0019BC40(s32 arg0) {
    if ((D_0025E4DC != 0) && (D_0025E4D8->unk1F8 == -1) && (D_0025E4D8->unk1F4 == -1)) {
        D_0025E4D8->unk0 = arg0;
    }
}
