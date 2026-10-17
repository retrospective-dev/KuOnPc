#include "common.h"
#include "kuon_types.h"

DizzyMng *SetDizzyFilter(unsigned char Mode, short PosX, short PosY, short SizeW, short SizeH);
void FECard_Enable_Draw(int bEnable_);
int SND_SecRemoveMap(void);
void SND_VoiceFadeOffAll(void);
int CheckVagStmState(unsigned char track);
void PlayBgmVagStm(int sceneNo, int id);
int SetVagStmFade(unsigned char track, unsigned char type, int timer);
extern DizzyMng GameOverFilterMng;
extern s16 D_0025E460;
extern s8 D_0025E462;
extern s8 D_0025E463;
extern s8 D_003AC89F[];

void SetGameOver(void) {
    if (GameOverFilterMng.Mode == 0) {
        SetDizzyFilter(3U, 0x100, 0xE0, 0x200, 0x1C0);
        D_003AC89F[0] = 2;
        FECard_Enable_Draw(0);
        SND_VoiceFadeOffAll();
        SND_SecRemoveMap();
        if (CheckVagStmState(0U) == 0) {
            PlayBgmVagStm(0, 4);
            D_0025E462 = 1;
        } else {
            SetVagStmFade(0U, 1U, 0x3C);
            D_0025E462 = 0;
        }
        if (CheckVagStmState(5U) != 0) {
            SetVagStmFade(5U, 1U, 0x1E);
        }
        D_0025E460 = 0;
        D_0025E463 = 0;
    }
}
