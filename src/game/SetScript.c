#include "common.h"

void SetScriptFunction(void);
s32 fsScr_ScriptStart(u16 arg0);
s32 func_00170FD0(s32 arg0, s32 arg1);
extern s8 D_003AC89D[];

s32 SetScript(s32 arg0, s32 arg1) {
    if (func_00170FD0(arg1, arg0) == 0) {
        return 0;
    }
    SetScriptFunction();
    if (fsScr_ScriptStart(0x7FFFU) <= 0) {
        return 0;
    }
    D_003AC89D[0] = 1;
    return 1;
}
