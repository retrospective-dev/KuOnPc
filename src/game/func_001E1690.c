#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x2C];
    /* 0x2C */ s8 unk2C;
} Unk_001E1690;

void func_001ACC60(s32 arg0, s8 arg1);
void func_001ADE50(u8 arg0);
void func_001B0690(s32 arg0, s32 arg1);
extern Unk_001E1690 *D_0025E530;
extern s8 D_003AC8A5[];
extern s8 D_003AC8A6[];
extern s8 D_003AC8AE[];
extern s8 D_003AC8BC[];

void func_001E1690(void) {
    D_003AC8A6[0] = 0;
    D_003AC8A5[0] = 1;
    func_001B0690(0, 0x3FFF);
    func_001ADE50(-1);
    func_001ACC60(3, 0x7F);
    func_001B0690(1, 0x3FFF);
    D_003AC8AE[0] = 0;
    D_0025E530->unk2C = 2;
    D_003AC8BC[0] = 1;
}
