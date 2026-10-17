#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x6];
    /* 0x06 */ u16 unk6;
} Unk_00169280;

extern Unk_00169280* lpSceneLoad;

u16 GetCamIdAfterLoad(void) {
    return lpSceneLoad->unk6;
}
