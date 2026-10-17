#include "common.h"
#include "kuon_types.h"

void func_001370C0(MdlMng_t *lpMdlMng);
void DrawHmdModel(MdlMng_t *lpMdlMng, unsigned int Mode);
extern DrawMng *lpDrawMng;
void DrawModel(MdlMng_t *lpMdlMng) {
    u8 temp_v1;

    temp_v1 = lpDrawMng->DrawHitModel;
    if ((temp_v1 != 0) && (lpMdlMng->lpMdlData->lpHmdHead != NULL)) {
        DrawHmdModel(lpMdlMng, temp_v1 & 0xFF);
        return;
    }
    func_001370C0(lpMdlMng);
}
