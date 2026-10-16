#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0;
    /* 0x01 */ u8 unk1;
    /* 0x02 */ u8 unk2;
    /* 0x03 */ u8 unk3;
    /* 0x04 */ u8 unk4;
    /* 0x05 */ u8 unk5;
    /* 0x06 */ u8 unk6;
    /* 0x07 */ u8 unk7;
} Unk_00148D60;

void* func_00148120(void);
s32 func_00148130(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5);
extern u8 D_0025E3B8;
extern u8 D_0025E3B9;
extern u8 D_0025E3BA;
extern u8 D_0025E3BB;
extern u8 D_0025E3BC;
extern u8 D_0025E3BD;
extern u8 D_0025E3BE;
extern u8 D_0025E3BF;

s32 func_00148D60(void) {
    s32 temp_s0;
    Unk_00148D60 *temp_v0;

    temp_s0 = func_00148130(4, 1, 0, 8, 0x11F00, NULL);
    temp_v0 = func_00148120();
    D_0025E3B8 = temp_v0->unk0;
    D_0025E3B9 = temp_v0->unk1;
    D_0025E3BA = temp_v0->unk2;
    D_0025E3BB = temp_v0->unk3;
    D_0025E3BC = temp_v0->unk4;
    D_0025E3BD = temp_v0->unk5;
    D_0025E3BE = temp_v0->unk6;
    D_0025E3BF = temp_v0->unk7;
    return temp_s0;
}
