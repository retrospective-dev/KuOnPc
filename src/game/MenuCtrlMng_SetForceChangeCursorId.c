#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x7C];
    /* 0x7C */ s32 unk7C;
} Unk_001EF730;

void MenuCtrlMng_SetForceChangeCursorId(Unk_001EF730* arg0, s32 arg1) {
    arg0->unk7C = arg1;
}
