#include "common.h"

extern s32 FadeLoadScene;
extern s32 FadeLoadCam;

void SetFadeSceneLoad(s32 arg0, s32 arg1) {
    FadeLoadScene = arg0;
    FadeLoadCam = arg1;
}
