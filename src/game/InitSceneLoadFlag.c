#include "common.h"

typedef struct {
    /* 0x0 */ s8 unk0;
} Unk_001692F0;

extern Unk_001692F0* lpSceneLoad;

void InitSceneLoadFlag(void) {
    lpSceneLoad->unk0 = 0;
}
