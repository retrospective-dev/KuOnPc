#include "common.h"

typedef struct {
    /* 0x00 */ s8 unk0;
    /* 0x01 */ u8 unk1[0x3];
    /* 0x04 */ s16 unk4;
    /* 0x06 */ u16 unk6;
} Unk_001692A0;

extern Unk_001692A0 *lpSceneLoad;
extern u16 LoadCamReserve;
extern u8 D_003AC8AD[];

void SetSceneLoad(s16 arg0, u16 arg1) {
    lpSceneLoad->unk0 = 1;
    lpSceneLoad->unk4 = arg0;
    lpSceneLoad->unk6 = arg1;
    if ((D_003AC8AD[0] == 0) && (LoadCamReserve != 0xFFFF)) {
        lpSceneLoad->unk6 = (u16) LoadCamReserve;
        LoadCamReserve = 0xFFFF;
    }
}
