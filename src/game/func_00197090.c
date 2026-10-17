#include "common.h"
#include "kuon_types.h"

unsigned int func_0015EE90(BindHead *lpBindHead, unsigned short Index);
extern unsigned char *D_0025E4B4;
EnePrm *func_00197090(s32 EneID, u8 TeamNo) {
    if (D_0025E4B4 == NULL) {
        return NULL;
    }
    if ((TeamNo & 0xFF) == 1) {
        return (struct EnePrm *) (func_0015EE90((BindHead *) D_0025E4B4, EneID & 0xFFFF));
    }
    return (struct EnePrm *) (func_0015EE90((BindHead *) D_0025E4B4, (EneID + 0x32) & 0xFFFF));
}
