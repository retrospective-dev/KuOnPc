#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x4];
    /* 0x04 */ u16 unk4;
} Unk_00169300;

void func_00127BE0(void* dst, s32 c, u32 n);
extern Unk_00169300 *lpSceneLoad;

void InitSceneLoad(void) {
    func_00127BE0(lpSceneLoad, 0, 8U);
    lpSceneLoad->unk4 = 0xFFFF;
}
