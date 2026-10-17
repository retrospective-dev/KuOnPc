#include "common.h"
#include "kuon_types.h"

void FsFontSetRect(Rect *pRect, f32 left, f32 top, f32 right, f32 bottom) {
    pRect->left = left;
    pRect->top = top;
    pRect->right = right;
    pRect->bottom = bottom;
}
