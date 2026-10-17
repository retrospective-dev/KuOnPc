#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x2];
    /* 0x002 */ s8 unk2;
    /* 0x003 */ u8 unk3[0x12D];
    /* 0x130 */ s8 unk130;
} Unk_0020B2B0;

void SetEventModelDrawAndHit(Unk_0020B2B0 *arg0, s8 arg1) {
    arg0->unk2 = arg1;
    arg0->unk130 = arg1;
}
