#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x44];
    /* 0x44 */ s32 unk44;
    /* 0x48 */ s32 unk48;
    /* 0x4C */ s32 unk4C;
    /* 0x50 */ s32 unk50;
} Unk_0021C3B0;

extern Unk_0021C3B0 *sCurrentP_0025E790;

s32 MmoFsFontSetBaseColor(s32 arg0) {
    sCurrentP_0025E790->unk44 = arg0;
    sCurrentP_0025E790->unk48 = arg0;
    sCurrentP_0025E790->unk4C = arg0;
    sCurrentP_0025E790->unk50 = arg0;
    return 0;
}
