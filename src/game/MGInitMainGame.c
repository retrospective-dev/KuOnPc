#include "common.h"

void MGDiceAnimeStart(s32 arg0, s32 arg1);
void func_00208A60(void);
void MGInitMainGame(void) {
    func_00208A60();
    MGDiceAnimeStart(2, 1);
}
