#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10;
} Unk_0019E860;

s32 voBufIsFull(Unk_0019E860 *arg0) {
    return arg0->unkC == arg0->unk10;
}
