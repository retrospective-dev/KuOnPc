#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
} Unk_0016DA70;

void SetTargetFreeCamera(s32 arg0);
void SCR_SetCamModeFreeTarget(Unk_0016DA70 *arg0) {
    SetTargetFreeCamera(arg0->unk8);
    arg0->unk0 = 0;
}
