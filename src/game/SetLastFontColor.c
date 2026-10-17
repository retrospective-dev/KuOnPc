#include "common.h"

s32 FsFontSetBaseColor(s32 arg0);
s32 FsFontSetColor(s32 arg0);
extern s32 FontColor;
extern s32 FontColorLast;

void SetLastFontColor(void) {
    FontColor = FontColorLast;
    FsFontSetColor(FontColor);
    FsFontSetBaseColor(FontColor);
}
