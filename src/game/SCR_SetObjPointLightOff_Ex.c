#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int SfxPLight_Delete(unsigned short hSfxPLight_, float fade_time_);
extern MdlMng_t MdlMng[770];
void SCR_SetObjPointLightOff_Ex(Ss *ss) {
    MdlMng_t *temp_s1;
    u16 temp_a0;

    temp_s1 = &MdlMng[GetMdlMngIndexByCtrlId(1, ss->arg[0].val) + 0x30];
    temp_a0 = temp_s1->hSfxPLight;
    if (temp_a0 != 0xFFFF) {
        SfxPLight_Delete(temp_a0, 0.0166666f * (f32) ss->arg[1].val);
    }
    temp_s1->hSfxPLight = 0xFFFF;
    ss->kind = 0;
}
