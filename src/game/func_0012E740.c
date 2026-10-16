#include "common.h"

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
    /* 0x8 */ s32 unk8;
} UnkSrc_0012E740;

typedef struct {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ u8 unk04[0x2C - 0x04];
    /* 0x2C */ s32 unk2C;
} UnkDst_0012E740;

s32 func_0012E740(UnkDst_0012E740* dst, UnkSrc_0012E740* src) {
    dst->unk2C = src->unk4;
    dst->unk00 = src->unk8;
    return 1;
}
