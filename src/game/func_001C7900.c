#include "common.h"

s32 GetBindOffsetByIndex(void *arg0, s32 arg1);
extern void *s_pFileData_Ptcl;

void func_001C7900(void) {
    GetBindOffsetByIndex(s_pFileData_Ptcl, 0);
}
