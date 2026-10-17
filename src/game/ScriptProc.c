#include "common.h"

void fsScr_ScriptProc(void);
extern u8 D_003AC89D[];
extern u8 D_003AC89F[];

void ScriptProc(void) {
    if ((D_003AC89F[0] == 0) && (D_003AC89D[0] != 0)) {
        fsScr_ScriptProc();
    }
}
