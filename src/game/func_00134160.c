#include "common.h"
#include "kuon_types.h"

void DrawSetViewRange(void);
extern DrawMng *lpDrawMng;
void func_00134160(f32 fov) {
    lpDrawMng->fov = fov;
    DrawSetViewRange();
}
