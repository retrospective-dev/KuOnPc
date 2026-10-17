#include "common.h"
#include "kuon_types.h"

int SetVagStmFade(unsigned char track, unsigned char type, int timer);
int KnMenuMng_CallMenu_(Menu_id menu_id, unsigned char *pMenuMng_Open);
extern u8 D_003AC895[];

s32 KnMenuMng_CallSave(void) {
    if (D_003AC895[0] != 2) {
        SetVagStmFade(0U, 3U, 1);
        SetVagStmFade(1U, 3U, 1);
        SetVagStmFade(2U, 3U, 1);
        SetVagStmFade(3U, 3U, 1);
        SetVagStmFade(4U, 3U, 1);
        SetVagStmFade(5U, 3U, 1);
        return KnMenuMng_CallMenu_(4, NULL);
    }
    return 0;
}
