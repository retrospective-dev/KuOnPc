#include "common.h"
#include "kuon_types.h"

unsigned int *func_0013F650(unsigned int *lpCurDMA, u8 *lpTexList);
void func_0013F8D0(MdlData *lpMdlData) {
    if (lpMdlData->lpTexList != NULL) {
        lpMdlData->TexInVmd = 1;
        lpMdlData->lpTexCurrent = func_0013F650(lpMdlData->lpTexCurrent, lpMdlData->lpTexList);
    }
}
