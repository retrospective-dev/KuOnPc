#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void SetObjFollowTarget(MdlMng_t *lpObj, u16 WalkAnimId, u16 StayAnimId, MdlMng_t *lpTarget) {
    if (lpObj->bUse != 0) {
        lpObj->CtrlModeB = lpObj->CtrlMode;
        lpObj->CtrlMode = 3;
        lpObj->Target.lpMdl = lpTarget;
        lpObj->Target.walkAnim = WalkAnimId;
        lpObj->Target.stayAnim = StayAnimId;
        lpObj->Target.prevAnim = (u16) lpObj->IndexAnim;
        func_0012F3F0(lpObj, WalkAnimId & 0xFFFF, 0.0f);
    }
}
