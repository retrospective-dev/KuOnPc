#include "common.h"
#include "m2c_macros.h"

extern s8 g_piece_anime[];
extern s8 g_dice_anime[];

void MGPieceMoveAnimeFirstInit(s32 arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = &g_piece_anime[0] + (arg1 * 0x50);
    M2C_FIELD(temp_a1, s8 *, 0) = 0;
    M2C_FIELD(temp_a1, u8 *, 0x45) = (u8) M2C_FIELD((&g_dice_anime[0] + ((arg0 & 0xFF) * 0x50)), u8 *, 0x35);
    M2C_FIELD(temp_a1, s8 *, 0x46) = 1;
}
