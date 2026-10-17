#include "common.h"
#include "kuon_types.h"

unsigned int *func_0013F650(unsigned int *lpCurDMA, u8 *lpTexList);
extern unsigned char *D_006FC110[4];
extern unsigned int D_006FC120[4][32768];
void func_0013F1E0(s32 index) {
    func_0013F650(D_006FC120[index], D_006FC110[index]);
}
