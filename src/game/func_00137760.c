#include "common.h"
#include "kuon_types.h"

void func_001370C0(MdlMng *lpMdlMng);
void func_0015BEC0(MdlMng *lpMdlMng, unsigned int Mode);
extern DrawMng *D_0025DF80;
void func_00137760(MdlMng *lpMdlMng) {
    u8 temp_v1;

    temp_v1 = D_0025DF80->DrawHitModel;
    if ((temp_v1 != 0) && (lpMdlMng->lpMdlData->lpHmdHead != NULL)) {
        func_0015BEC0(lpMdlMng, temp_v1 & 0xFF);
        return;
    }
    func_001370C0(lpMdlMng);
}
