#include "common.h"
#include "kuon_types.h"

unsigned int *MakeTexListPacket(unsigned int *lpCurDMA, u8 *lpTexList);
void SetMdlTexListPacket(MdlData_t *lpMdlData) {
    if (lpMdlData->lpTexList != NULL) {
        lpMdlData->TexInVmd = 1;
        lpMdlData->lpTexCurrent = MakeTexListPacket(lpMdlData->lpTexCurrent, lpMdlData->lpTexList);
    }
}
