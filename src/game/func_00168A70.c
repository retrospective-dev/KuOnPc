#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x1];
    /* 0x01 */ s8 unk1;
} Unk_00168A70;

extern Unk_00168A70* D_0025DFB0;

void func_00168A70(void) {
    D_0025DFB0->unk1 = 0;
}
