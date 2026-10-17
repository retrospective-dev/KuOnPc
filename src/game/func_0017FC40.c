#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
PathMng *func_001A8690(unsigned char Type, int CtrlId);
void func_0017FC40(MdlMng *lpObj, s32 PathIndex, u16 AnimId, u16 EndAnimId) {
    PathMng *temp_v0;

    if (lpObj->bUse != 0) {
        temp_v0 = func_001A8690(3U, PathIndex);
        M2C_FIELD(temp_v0, u16 *, 0x210) = EndAnimId;
        M2C_FIELD(temp_v0, u16 *, 0x212) = AnimId;
        M2C_FIELD(temp_v0, s32 *, 0x214) = 0x3F800000;
        lpObj->lpPathMng = temp_v0;
        func_0012F3F0(lpObj, AnimId & 0xFFFF, 0.0f);
        lpObj->CtrlModeB = lpObj->CtrlMode;
        lpObj->CtrlMode = 1;
    }
}
