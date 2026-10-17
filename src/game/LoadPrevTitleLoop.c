#include "common.h"

void LoadDebugParam(void);
void LoadGameTexture(void);
void ReadEneParam(void);
extern s32 D_0025E31C;

void LoadPrevTitleLoop(void) {
    if (D_0025E31C == 0) {
        ReadEneParam();
        LoadDebugParam();
        LoadGameTexture();
        D_0025E31C = 1;
    }
}
