#include "common.h"

extern s32 ScriptFunc[];

void fsScr_SetScrFunc(s32 index, s32 value) {
    ScriptFunc[index] = value;
}
