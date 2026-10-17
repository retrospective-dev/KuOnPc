#include "common.h"
#include "kuon_types.h"

TexMng *GetTexMngByName(u8 *lpTexList, char *texname);
extern char LoadingFileName[32];
extern s8 D_00258D90[];

void FreeLoadingTexture(void) {
    TexMng *temp_v0;
    TexMng *temp_v0_2;

    temp_v0 = GetTexMngByName(NULL, LoadingFileName);
    if (temp_v0 != NULL) {
        temp_v0->bUse = 0;
    }
    temp_v0_2 = GetTexMngByName(NULL, &D_00258D90[0]);
    if (temp_v0_2 != NULL) {
        temp_v0_2->bUse = 0;
    }
}
