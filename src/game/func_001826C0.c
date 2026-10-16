#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x124];
    /* 0x124 */ s32 unk124;
} Unk_001826C0;

extern Unk_001826C0 *D_0025DFE4;

s32 func_001826C0(void) {
    return D_0025DFE4->unk124 != 0;
}
