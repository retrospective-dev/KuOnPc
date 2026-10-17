#include "common.h"

/* From the Mulberry project (github.com/weirdbeardgame/Mulberry, MIT licence), MathUtil.c */

#define TWO_PI 6.2831855f

float Math_GetAngle360(float ang) {
    return ang >= 0.0f ? ang : ang + TWO_PI;
}
