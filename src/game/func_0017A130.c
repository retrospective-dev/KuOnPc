#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x16];
    /* 0x16 */ u8 unk16;
} Unk_0017A130;

extern Unk_0017A130 *D_0025DFCC;

s32 func_0017A130(void) {
    return D_0025DFCC->unk16 != 0;
}
