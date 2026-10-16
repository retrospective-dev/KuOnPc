#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xA8];
    /* 0xA8 */ s32 unkA8;
} Unk_0019E4E0;

s32 func_0019E4E0(Unk_0019E4E0* arg0) {
    return arg0->unkA8;
}
