#include "common.h"

s32 func_001BFA10(void);
void SfxFIO_CheckLoadSfxBindFile();
extern s16 s_SfxBndFile_LoadState;

void SfxFIO_CallBack_FinishLoadSfxBindFile(void) {
    s_SfxBndFile_LoadState = 2;
    SfxFIO_CheckLoadSfxBindFile();
    func_001BFA10();
}
