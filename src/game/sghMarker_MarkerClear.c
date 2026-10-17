#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
extern u8 D_006BC710[];
void sghMarker_MarkerClear(void)
{
  u8 *new_var;
 do { *((s8 *) ((new_var = (u8 *) (&D_006BC710[0])) - -2)) = 1; } while (0);
  *((s8 *) (new_var + 0x1C2)) = 1;
}
