#include "common.h"

typedef struct {
    /* 0x00 */ s8 unk0;
    /* 0x01 */ u8 unk1[0x3];
    /* 0x04 */ s16 unk4;
    /* 0x06 */ u16 unk6;
} Unk_001692A0;

extern Unk_001692A0 *D_0025DFB0;
extern u16 D_0025DFB4;
extern u8 D_003AC8AD[];

void func_001692A0(s16 arg0, u16 arg1) {
    D_0025DFB0->unk0 = 1;
    D_0025DFB0->unk4 = arg0;
    D_0025DFB0->unk6 = arg1;
    if ((D_003AC8AD[0] == 0) && (D_0025DFB4 != 0xFFFF)) {
        D_0025DFB0->unk6 = (u16) D_0025DFB4;
        D_0025DFB4 = 0xFFFF;
    }
}
