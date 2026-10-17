#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEventFlag(int EventFlag);
extern MdlMng_t MdlMng[770];
extern u8 D_003AC8A4[];

void InitS0035Event005(Event *lpEvent) {
    if (D_003AC8A4[0] == 0) {
        lpEvent->lpMdl[0] = &MdlMng[GetMdlMngIndexByCtrlId(1, 2) + 0x30];
        if (CheckEventFlag(0x40F) == 0) {
            lpEvent->State[1] = 1;
        }
    }
}
