#include "common.h"
#include "kuon_types.h"

int SetVagStmFade(unsigned char track, unsigned char type, int timer);
int KnMenuMng_CallMenu_(Menu_id menu_id, unsigned char *pMenuMng_Open);
extern s16 D_00A500AA[];

s32 KnMenuMng_CallMenu(enum Menu_id menu_id, u8 *pMenuMng_Open) {
    SetVagStmFade(0U, 3U, 1);
    SetVagStmFade(1U, 3U, 1);
    SetVagStmFade(2U, 3U, 1);
    SetVagStmFade(3U, 3U, 1);
    SetVagStmFade(4U, 3U, 1);
    SetVagStmFade(5U, 3U, 1);
    if (pMenuMng_Open != NULL) {
        D_00A500AA[0] = (s16) menu_id;
    }
    return KnMenuMng_CallMenu_(menu_id, pMenuMng_Open);
}
