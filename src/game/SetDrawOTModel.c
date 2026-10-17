#include "common.h"
#include "kuon_types.h"

unsigned int CheckDrawModel(MdlMng_t *lpMdlMng);
int _SetDrawOT(unsigned char type_, u8 *pData_, float *world_pos_, unsigned char priority_);
s32 SetDrawOTModel(MdlMng_t *lpMdlMng, f32 *WorldPos, u8 Priority) {
    if (CheckDrawModel(lpMdlMng) != 0) {
        return _SetDrawOT(0U, lpMdlMng, WorldPos, Priority);
    }
    return 0;
}
