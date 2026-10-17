#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void FreeMdlMng(MdlMng_t *lpMdlMng);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEneFlick(MdlMng_t *lpEne);
int CheckEneDead(MdlMng_t *lpEne);
int CheckEventFlag(int EventFlag);
void EasyEneAppear(int CtrlId);
extern MdlMng_t MdlMng[770];
extern u8 D_003AC8A4[];

void InitS0034Event000(Event *lpEvent) {
    MdlMng_t *temp_a0;
    MdlMng_t *temp_a0_2;
    MdlMng_t *temp_a0_3;
    u8 *temp_s1;

    if (D_003AC8A4[0] == 1) {
        FreeMdlMng(&MdlMng[GetMdlMngIndexByCtrlId(1, 0xA) + 0x30]);
        lpEvent->lpMdl[0] = &MdlMng[GetMdlMngIndexByCtrlId(1, 2) + 0x30];
        if (CheckEventFlag(0x555) == 0) {
            EasyEneAppear(4);
            lpEvent->lpMdl[1] = &MdlMng[GetMdlMngIndexByCtrlId(2, 4) + 0xA1];
        }
        if (CheckEventFlag(0x554) == 0) {
            temp_a0 = lpEvent->lpMdl[1];
            if ((temp_a0 != NULL) && (CheckEneDead(temp_a0) == 0)) {
                temp_a0_2 = lpEvent->lpMdl[1];
                temp_s1 = temp_a0_2->lpCtrlSt;
                M2C_FIELD(temp_s1, s32 (**)(MdlMng_t *, u8 *, s32), 0x118)(temp_a0_2, temp_s1, 0x52);
                M2C_FIELD(temp_s1, s8 *, 0x249) = 1;
                func_0012F3F0(lpEvent->lpMdl[1], 0x52, 0.0f);
            }
            func_0012F3F0(lpEvent->lpMdl[0], 0x1E, 0.0f);
            lpEvent->State[1] = 1;
            return;
        }
        temp_a0_3 = lpEvent->lpMdl[1];
        if ((temp_a0_3 != NULL) && (CheckEneDead(temp_a0_3) == 0) && (CheckEneFlick(lpEvent->lpMdl[1]) == 0)) {
            lpEvent->lpMdl[1]->Pos[0] = 32.6f;
            lpEvent->lpMdl[1]->Pos[1] = 0.0f;
            lpEvent->lpMdl[1]->Pos[2] = -29.2f;
            lpEvent->lpMdl[1]->Ang[1] = 0.27745497f;
        }
    }
}
