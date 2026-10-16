#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x88];
    /* 0x88 */ u8 unk88;
} Unk_0014B710;

extern Unk_0014B710* D_0025E3D0;

u8 func_0014B710(void) {
    return D_0025E3D0->unk88;
}
