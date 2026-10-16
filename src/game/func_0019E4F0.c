#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xA8];
    /* 0xA8 */ s32 unkA8;
} Unk_0019E4F0;

void func_0019E4F0(Unk_0019E4F0 *arg0) {
    arg0->unkA8 = 1;
}
