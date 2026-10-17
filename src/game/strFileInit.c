#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x30];
    /* 0x30 */ s32 unk30;
    /* 0x34 */ u8 unk34[0x4];
    /* 0x38 */ s32 unk38;
} Unk_0019CCF0;

s32 strFileInit(Unk_0019CCF0 *arg0) {
    arg0->unk38 = 0;
    arg0->unk30 = 0;
    return 1;
}
