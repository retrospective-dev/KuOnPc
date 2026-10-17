#include "common.h"
#include "kuon_types.h"

unsigned int GetBindOffsetByIndex(BindHead *lpBindHead, unsigned short Index);
extern unsigned char *lpEneParamBuf;
EnePrm *GetEneParam(s32 EneID, u8 TeamNo) {
    if (lpEneParamBuf == NULL) {
        return NULL;
    }
    if ((TeamNo & 0xFF) == 1) {
        return (struct EnePrm *) (GetBindOffsetByIndex((BindHead *) lpEneParamBuf, EneID & 0xFFFF));
    }
    return (struct EnePrm *) (GetBindOffsetByIndex((BindHead *) lpEneParamBuf, (EneID + 0x32) & 0xFFFF));
}
