#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x20];
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8 unk24[0x84];
    /* 0xA8 */ s32 unkA8;
    /* 0xAC */ s32 unkAC;
    /* 0xB0 */ s32 unkB0;
    /* 0xB4 */ s32 unkB4;
    /* 0xB8 */ s32 unkB8;
} Unk_001F5720;

s32 MenuItemMng_Initialize(Unk_001F5720 *arg0) {
    arg0->unk20 = 0;
    arg0->unkA8 = 0;
    arg0->unkAC = 0;
    arg0->unkB0 = 0;
    arg0->unkB4 = 0;
    arg0->unkB8 = 0;
    return 1;
}
