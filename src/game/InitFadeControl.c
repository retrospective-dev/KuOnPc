#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 FadeDramaId;
extern s32 FadeLoadScene;
extern s32 FadeLoadCam;
extern s32 FadeMng[];

void InitFadeControl(void) {
    func_00127BE0(&FadeMng[0], 0, 0x30U);
    FadeDramaId = -1;
    FadeLoadScene = -1;
    FadeLoadCam = -1;
}
