#include "common.h"
#include "kuon_types.h"

void func_00127BE0(void* dst, s32 c, u32 n);
int fsmc_Init(void);
unsigned int GetIconDataSize(void);
unsigned char *GetIconDataPtr(void);
extern MCMng *lpMCMng;
extern IconSys D_00231600[];

void InitMemoryCard(void) {
    do {

    } while (fsmc_Init() < 0);
    func_00127BE0(lpMCMng, 0, 0x28U);
    lpMCMng->lpIconSys = &D_00231600[0];
    lpMCMng->lpIconData[0] = GetIconDataPtr();
    lpMCMng->lpIconData[1] = NULL;
    lpMCMng->lpIconData[2] = NULL;
    lpMCMng->IconSize[0] = GetIconDataSize();
    lpMCMng->IconSize[1] = 0;
    lpMCMng->IconSize[2] = 0;
}
