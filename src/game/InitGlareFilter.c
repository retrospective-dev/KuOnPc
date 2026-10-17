#include "common.h"

u8 GetMapGlareID(void);
extern u8 D_003AC8AF[];

void InitGlareFilter(void) {
    D_003AC8AF[0] = GetMapGlareID();
}
