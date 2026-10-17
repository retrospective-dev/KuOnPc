#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x8];
    /* 0x08 */ s32 unk8;
    /* 0x0C */ s32 unkC;
} Unk_0019E880;

void voBufReset(Unk_0019E880 *arg0) {
    arg0->unkC = 0;
    arg0->unk8 = 0;
}
