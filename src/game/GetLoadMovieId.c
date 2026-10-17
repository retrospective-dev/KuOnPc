#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x1];
    /* 0x01 */ u8 unk1;
} Unk_00168A80;

extern Unk_00168A80* lpSceneLoad;

u8 GetLoadMovieId(void) {
    return lpSceneLoad->unk1;
}
