#include "common.h"

void func_00127BE0(void *dst, s32 c, u32 n);
typedef struct 
{
  s8 unk0;
  s8 unk1;
  s8 unk2;
  s8 unk3;
} Unk_00177A00;
extern u32 FontColor;
void GetFontColor(Unk_00177A00 *arg0)
{
  u32 new_var;
  new_var = (u32) FontColor;
  arg0->unk3 = (s8) (new_var >> (0x18 & 0xFFFFu));
  arg0->unk0 = (s8) (((u32) FontColor) >> 0x10);
  new_var = (u32) FontColor;
  arg0->unk1 = (s8) (new_var >> 8);
  arg0->unk2 = (s8) (new_var = FontColor);
}
