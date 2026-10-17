#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x24A];
    /* 0x24A */ s8 unk24A;
} Unk_001A8320;

void E031ActInit(s32 arg0, Unk_001A8320 *arg1) {
    arg1->unk24A = 1;
}
