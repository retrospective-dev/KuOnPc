#include "common.h"

extern s32 FadeLoadScene;
extern s32 FadeLoadCam;
extern s32 FadeLoadMovie;

void SetFadeMovieLoad(s32 arg0, s32 arg1, s32 arg2) {
    FadeLoadScene = arg0;
    FadeLoadCam = arg1;
    FadeLoadMovie = arg2;
}
