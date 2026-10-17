#include "common.h"
#include "kuon_types.h"

int SetVagStmFade(unsigned char track, unsigned char type, int timer);
void StmReadErrCallBack(s32 StmIndex, s32 Error) {
    if ((StmIndex > 0) && (StmIndex < 7)) {
        if (Error == 0x31) {
            SetVagStmFade(0U, 5U, 0xA);
            SetVagStmFade(1U, 5U, 0xA);
            SetVagStmFade(2U, 5U, 0xA);
            SetVagStmFade(3U, 5U, 0xA);
            SetVagStmFade(4U, 5U, 0xA);
            SetVagStmFade(5U, 5U, 0xA);
            return;
        }
        SetVagStmFade(0U, 4U, 0x3C);
        SetVagStmFade(1U, 4U, 0x3C);
        SetVagStmFade(2U, 4U, 0x3C);
        SetVagStmFade(3U, 4U, 0x3C);
        SetVagStmFade(4U, 4U, 0x3C);
        SetVagStmFade(5U, 4U, 0x3C);
    }
}
