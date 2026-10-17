#include "common.h"

/* From the Mulberry project (github.com/weirdbeardgame/Mulberry, MIT licence), MathUtil.c */

float sqrtf(float);

float func_0013BBA0(float *v1, float *v2) {
    float dx;
    float dz;
    float dd;

    dx = v2[0] - v1[0];
    dz = v2[2] - v1[2];
    dd = sqrtf(dx * dx + dz * dz);

    return dd;
}
