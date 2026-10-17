#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void FreeMdlMng(MdlMng_t *lpMdlMng);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void ResetEventFlag(int EventFlag);
void SetEventFlag(int EventFlag);
int CheckEventFlag(int EventFlag);
void EasyEneAppear(int CtrlId);
extern MdlMng_t MdlMng[770];
extern u8 D_003AC8A4[];

void InitS0031Event001(Event *lpEvent) {
    lpEvent->lpMdl[0] = &MdlMng[GetMdlMngIndexByCtrlId(1, 0xA) + 0x30];
    lpEvent->lpMdl[3] = &MdlMng[GetMdlMngIndexByCtrlId(1, 2) + 0x30];
    lpEvent->lpMdl[3]->HitOff = 1;
    if (D_003AC8A4[0] != 2) {
        if (CheckEventFlag(0x550) == 0) {
            SetEventFlag(0x403);
            lpEvent->State[1] = 1;
            return;
        }
        if (CheckEventFlag(0x551) == 0) {
            ResetEventFlag(0x403);
            lpEvent->State[1] = 3;
            return;
        }
        SetEventFlag(0x403);
        lpEvent->State[1] = 7;
        func_0012F3F0(lpEvent->lpMdl[0], 0x1F, 0.0f);
        lpEvent->lpMdl[0]->HitOff = 1;
        lpEvent->lpMdl[3]->HitOff = 0;
        if (CheckEventFlag(0x552) == 0) {
            EasyEneAppear(1);
            lpEvent->lpMdl[1] = &MdlMng[GetMdlMngIndexByCtrlId(2, 1) + 0xA1];
        }
        if (CheckEventFlag(0x553) == 0) {
            EasyEneAppear(2);
            lpEvent->lpMdl[2] = &MdlMng[GetMdlMngIndexByCtrlId(2, 2) + 0xA1];
        }
    } else {
        FreeMdlMng(&MdlMng[GetMdlMngIndexByCtrlId(7, 1) + 0x90]);
        FreeMdlMng(&MdlMng[GetMdlMngIndexByCtrlId(7, 3) + 0x90]);
        SetEventFlag(0x403);
        lpEvent->State[1] = 7;
        func_0012F3F0(lpEvent->lpMdl[0], 0x1E, 0.0f);
        lpEvent->lpMdl[0]->HitOff = 1;
        lpEvent->lpMdl[3]->HitOff = 0;
    }
}
