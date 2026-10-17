#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xC];
    /* 0x0C */ u16 unkC;
} Unk_001C78D0;

extern Unk_001C78D0* s_pFileData_Ptcl;

u16 SfxFIO_GetPtclDataNum(void) {
    return s_pFileData_Ptcl->unkC;
}
