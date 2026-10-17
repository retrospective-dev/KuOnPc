#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x50];
    /* 0x50 */ s32 unk50;
} Unk_0012E780_arg0;

typedef struct {
    /* 0x00 */ u8 unk0[0x4];
    /* 0x04 */ s32 unk4;
} Unk_0012E780_arg1;

s32 MakeObjGroup(Unk_0012E780_arg0 *arg0, Unk_0012E780_arg1 *arg1) {
    arg0->unk50 = (s32) arg1->unk4;
    return 1;
}
