#include "common.h"

/* From the Mulberry project (github.com/weirdbeardgame/Mulberry, MIT licence), MathUtil.c */

float func_0013BBE0(float *v1, float *v2) {
    float dx;
    float dy;
    float dz;

    dx = v2[0] - v1[0];
    dy = v2[1] - v1[1];
    dz = v2[2] - v1[2];

    return dx * dx + dy * dy + dz * dz;
}
