#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x42E];
    /* 0x42E */ s8 unk42E;
} Unk_00185B10;

extern Unk_00185B10* D_0025DF80;

void func_00185B10(s32 arg0) {
    D_0025DF80->unk42E = arg0;
}
