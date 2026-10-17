#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
GmInfo *sghGetGameInfo(void);
void sghPad_Init(void);
void sghTime_SetWait(int time_);
extern MdlMng_t MdlMng[770];
void __sghMode_GameScore(void) {
    GmInfo *temp_v0;

    temp_v0 = sghGetGameInfo();
    func_0012F3F0(&MdlMng[temp_v0->nowPlayerID + 0xD5], 0, 0.0f);
    sghTime_SetWait(0x80);
    sghPad_Init();
    temp_v0->modeID = 0x19;
}
