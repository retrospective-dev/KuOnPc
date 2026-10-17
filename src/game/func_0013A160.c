#include "common.h"
#include "kuon_types.h"

TexMng *func_0013FEF0(u8 *lpTexList, char *texname);
extern char D_0032C030[32];
extern s8 D_00258D90[];

void func_0013A160(void) {
    TexMng *temp_v0;
    TexMng *temp_v0_2;

    temp_v0 = func_0013FEF0(NULL, D_0032C030);
    if (temp_v0 != NULL) {
        temp_v0->bUse = 0;
    }
    temp_v0_2 = func_0013FEF0(NULL, &D_00258D90[0]);
    if (temp_v0_2 != NULL) {
        temp_v0_2->bUse = 0;
    }
}
