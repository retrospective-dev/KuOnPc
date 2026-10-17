#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x210];
    /* 0x210 */ u16 unk210;
} Unk_0017FBE0;

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_0017FBE0(MdlMng *lpObj) {
    Unk_0017FBE0 *temp_a2;

    temp_a2 = lpObj->lpPathMng;
    if ((lpObj->bUse != 0) && (temp_a2 != NULL) && (lpObj->CtrlMode == 1)) {
        func_0012F3F0(lpObj, (s32) temp_a2->unk210, 0.0f);
        lpObj->lpPathMng = NULL;
        lpObj->CtrlMode = lpObj->CtrlModeB;
    }
}
