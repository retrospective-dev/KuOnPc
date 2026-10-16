#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x8];
    /* 0x08 */ s32 unk8;
} Unk_001AC790;

extern Unk_001AC790* D_0025E530;

s32 func_001AC790(void) {
    return D_0025E530->unk8;
}
