#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ s32 unkC;
} Unk_0015EDD0;

s32 GetBindNum(Unk_0015EDD0* arg0) {
    return arg0->unkC;
}
