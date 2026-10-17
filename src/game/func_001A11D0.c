#include "common.h"
#include "kuon_types.h"

void func_00127BE0(void* dst, s32 c, u32 n);
int func_00142480(void);
unsigned int func_001A1260(void);
unsigned char *func_001A1270(void);
extern MCMng *D_0025E044;
extern IconSys D_00231600[];

void func_001A11D0(void) {
    do {

    } while (func_00142480() < 0);
    func_00127BE0(D_0025E044, 0, 0x28U);
    D_0025E044->lpIconSys = &D_00231600[0];
    D_0025E044->lpIconData[0] = func_001A1270();
    D_0025E044->lpIconData[1] = NULL;
    D_0025E044->lpIconData[2] = NULL;
    D_0025E044->IconSize[0] = func_001A1260();
    D_0025E044->IconSize[1] = 0;
    D_0025E044->IconSize[2] = 0;
}
