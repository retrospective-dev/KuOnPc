#include "common.h"
#include "kuon_types.h"

unsigned int func_00135350(MdlMng *lpMdlMng);
int func_00186F80(unsigned char type_, u8 *pData_, float *world_pos_, unsigned char priority_);
s32 func_00186F20(MdlMng *lpMdlMng, f32 *WorldPos, u8 Priority) {
    if (func_00135350(lpMdlMng) != 0) {
        return func_00186F80(0U, lpMdlMng, WorldPos, Priority);
    }
    return 0;
}
