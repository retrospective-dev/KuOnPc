#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void SetEventFlag8(int EventFlag, unsigned char Flag);
unsigned char CheckEventFlag8(int EventFlag);
void SetEventFlag(int EventFlag);
void StopVagStm(unsigned char track);
extern MdlMng_t MdlMng[770];
s32 QuitOlderSister(void) {
    MdlMng_t *temp_a0;

    temp_a0 = &MdlMng[GetMdlMngIndexByCtrlId(1, 0x23) + 0x30];
    temp_a0->bErase = 1;
    if (temp_a0->State[1] == 2) {
        StopVagStm(0U);
    }
    if ((CheckEventFlag8(0x78) & 0xFF & 0xF0) == 0x30) {
        SetEventFlag(0x79);
        SetEventFlag8(0x78, CheckEventFlag8(0x78) & 0xFF & 0xF);
    }
    return 0;
}
