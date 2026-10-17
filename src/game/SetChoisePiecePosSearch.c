#include "common.h"
#include "kuon_types.h"

Table *GetPieceTable(void);
extern unsigned char g_ChoisePiecePos;
void SetChoisePiecePosSearch(u8 mode) {
    Table *temp_v0;
    u8 *var_a0;

    temp_v0 = GetPieceTable();
    g_ChoisePiecePos = (mode & 0xFF) * 0xC;
    var_a0 = (u8 *)temp_v0 + (g_ChoisePiecePos * 0x1A0);
    if (*var_a0 == 0) {
        do {
            var_a0 += 0x1A0;
            g_ChoisePiecePos += 1;
        } while (*var_a0 == 0);
    }
}
