#include "common.h"
#include "kuon_types.h"

void FreeMdlMng(MdlMng_t *lpMdlMng);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void SetEventFlag(int EventFlag);
int CheckEventFlag(int EventFlag);
extern MdlMng_t MdlMng[770];
extern u8 D_003AC8A4[];

void InitS0032Event000(Event *lpEvent) {
    if ((D_003AC8A4[0] != 1) || (CheckEventFlag(0x6CE) != 0)) {
        FreeMdlMng(&MdlMng[GetMdlMngIndexByCtrlId(1, 0x11) + 0x30]);
        FreeMdlMng(&MdlMng[GetMdlMngIndexByCtrlId(1, 0x12) + 0x30]);
        lpEvent->State[0] = 3;
        SetEventFlag(0x6CE);
        return;
    }
    lpEvent->lpMdl[0] = &MdlMng[GetMdlMngIndexByCtrlId(1, 0x12) + 0x30];
    lpEvent->lpMdl[0]->bErase = 1;
    lpEvent->State[0] = 0;
}
