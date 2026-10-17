#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEventFlag(int EventFlag);
extern MdlMng_t MdlMng[770];
void InitFadeItem(s32 ItemId, s32 Flag) {
    MdlMng_t *temp_s0;

    temp_s0 = &MdlMng[GetMdlMngIndexByCtrlId(7, ItemId) + 0x90];
    if (CheckEventFlag(Flag) != 0) {
        temp_s0->Alpha = 0.0f;
    }
}
