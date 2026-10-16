#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x70000];
    /* 0x70000 */ s32 unk70000;
    /* 0x70004 */ s32 unk70004;
    /* 0x70008 */ s32 unk70008;
} Unk_0019C640;

void func_0019C640(Unk_0019C640 *arg0) {
    arg0->unk70004 = 0;
    arg0->unk70000 = 0;
    arg0->unk70008 = 0x70000;
}
