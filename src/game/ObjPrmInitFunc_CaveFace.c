#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x4];
    /* 0x004 */ s8 unk4;
    /* 0x005 */ u8 unk5[0x43];
    /* 0x048 */ s32 unk48;
    /* 0x04C */ u8 unk4C[0xC0];
    /* 0x10C */ s32 unk10C;
    /* 0x110 */ u8 unk110[0x48];
    /* 0x158 */ s32 unk158;
    /* 0x15C */ u8 unk15C[0x8];
    /* 0x164 */ s32 unk164;
    /* 0x168 */ s32 unk168;
} Unk_0017FF70;

s32 func_00128E70();

void ObjPrmInitFunc_CaveFace(Unk_0017FF70 *arg0) {
    s32 temp_a0;

    arg0->unk158 = 0;
    arg0->unk10C = 0;
    arg0->unk48 = 0;
    arg0->unk4 = 0;
    arg0->unk164 = (s32) (func_00128E70() % 4);
    arg0->unk168 = (s32) (func_00128E70() % 4);
    temp_a0 = arg0->unk168;
    if (arg0->unk164 == temp_a0) {
        arg0->unk168 = (s32) ((s32) (temp_a0 + 1) % 4);
    }
}
