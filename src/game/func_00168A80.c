#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x1];
    /* 0x01 */ u8 unk1;
} Unk_00168A80;

extern Unk_00168A80* D_0025DFB0;

u8 func_00168A80(void) {
    return D_0025DFB0->unk1;
}
