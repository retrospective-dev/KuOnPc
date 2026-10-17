#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEventFlag(int EventFlag);
extern MdlMng_t MdlMng[770];
void InitFadeObj(s32 ObjId, s32 Flag) {
    MdlMng_t *temp_s0;

    temp_s0 = &MdlMng[GetMdlMngIndexByCtrlId(1, ObjId) + 0x30];
    if (CheckEventFlag(Flag) != 0) {
        temp_s0->Alpha = 0.0f;
        temp_s0->State[0] = 1;
    }
}
