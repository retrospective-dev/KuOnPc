#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x6];
    /* 0x06 */ u16 unk6;
} Unk_00169280;

extern Unk_00169280* D_0025DFB0;

u16 func_00169280(void) {
    return D_0025DFB0->unk6;
}
