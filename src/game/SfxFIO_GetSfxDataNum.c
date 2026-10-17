#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ u16 unkC;
} Unk_001C78E0;

extern Unk_001C78E0* s_pFileData_Sfx;

u16 SfxFIO_GetSfxDataNum(void) {
    return s_pFileData_Sfx->unkC;
}
