#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x114];
    /* 0x114 */ s8 unk114;
    /* 0x115 */ s8 unk115;
    /* 0x116 */ s8 unk116;
    /* 0x117 */ s8 unk117;
    /* 0x118 */ s8 unk118;
    /* 0x119 */ s8 unk119;
    /* 0x11A */ s8 unk11A;
    /* 0x11B */ s8 unk11B;
    /* 0x11C */ s16 unk11C;
    /* 0x11E */ s16 unk11E;
    /* 0x120 */ s16 unk120;
    /* 0x122 */ s16 unk122;
} Unk_00153290;

void func_00153290(s32 arg0, Unk_00153290 *arg1) {
    arg1->unk11C = 0;
    arg1->unk120 = 0;
    arg1->unk118 = (s8) arg1->unk114;
    arg1->unk119 = (s8) arg1->unk115;
    arg1->unk11E = 0;
    arg1->unk122 = 0;
    arg1->unk11A = (s8) arg1->unk116;
    arg1->unk11B = (s8) arg1->unk117;
}
