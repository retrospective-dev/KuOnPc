#include "common.h"

s32 FontGetLineSize(f32 *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6);
void FsFontGetSize(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    FontGetLineSize((f32 *) arg0, (f32 *) arg1, NULL, arg2, arg3, 0, NULL);
}
