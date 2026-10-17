#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ u8 unk8;
} Unk_0016C770;

void SetScriptHeartBeat(s32 arg0);
void SCR_SetScriptHeartBeat(Unk_0016C770 *arg0) {
    SetScriptHeartBeat((s32) arg0->unk8);
    arg0->unk0 = 0;
}
