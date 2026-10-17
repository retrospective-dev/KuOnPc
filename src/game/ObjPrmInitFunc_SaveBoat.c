#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x158];
    /* 0x158 */ s32 unk158;
} Unk_00180540;

void ObjPrmInitFunc_SaveBoat(Unk_00180540* arg0) {
    arg0->unk158 = 0;
}
