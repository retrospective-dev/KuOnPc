#include "common.h"
#include "kuon_types.h"

extern u8 D_00A617F6[];
extern u8 D_00A61856[];

u8 sghDice_IsUsed(void) {
    if (((D_00A617F6[0] == 0) || (D_00A617F6[0] == 0xFF)) && ((D_00A61856[0] == 0) || (D_00A61856[0] == 0xFF))) {
        return 1U;
    }
    return 0U;
}
