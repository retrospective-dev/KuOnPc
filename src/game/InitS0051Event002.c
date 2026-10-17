#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEventFlag(int EventFlag);
void EasyEneAppearEx(int CtrlId, unsigned short AnimId, unsigned char bLogicFree);
void EasyEneAppear(int CtrlId);
extern MdlMng_t MdlMng[770];
extern u8 D_003AC8A4[];

void InitS0051Event002(Event *lpEvent) {
    lpEvent->lpMdl[0] = &MdlMng[GetMdlMngIndexByCtrlId(1, 0x25) + 0x30];
    lpEvent->lpMdl[1] = NULL;
    if ((D_003AC8A4[0] != 0) || (CheckEventFlag(0x6CB) != 0)) {
        lpEvent->State[0] = 2;
        return;
    }
    if (CheckEventFlag(0x6CA) != 0) {
        EasyEneAppear(3);
        lpEvent->State[0] = 2;
        lpEvent->lpMdl[1] = &MdlMng[GetMdlMngIndexByCtrlId(2, 3) + 0xA1];
        return;
    }
    EasyEneAppearEx(3, 0x52U, 1U);
    lpEvent->lpMdl[1] = &MdlMng[GetMdlMngIndexByCtrlId(2, 3) + 0xA1];
    func_0012F3F0(lpEvent->lpMdl[0], 0x1E, 0.0f);
    lpEvent->State[0] = 0;
}
