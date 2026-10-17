#include "common.h"

s32 GetBindOffsetByIndex(void *arg0, s32 arg1);
extern void *s_pFileData_Sfx;

void func_001C7910(void) {
    GetBindOffsetByIndex(s_pFileData_Sfx, 0);
}
