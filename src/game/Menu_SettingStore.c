#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

unsigned char SND_GetVol(SndVolume SndVolume);
unsigned short GetVagMasterVolume(unsigned char Type);
extern G_pSndMng *g_pSndMng;
extern int stg_str_lang;
extern int stg_str_SndMode;
extern int stg_str_kido;
extern int stg_str_voice;
extern int stg_str_se;
extern int stg_str_bgm;
extern int stg_str_vib;
extern int stg_str_key;
extern u8 D_003AC8A5[];
extern u8 D_003AC8A6[];
extern s8 D_003AC8AE[];
extern u8 D_003AC8BC[];

void Menu_SettingStore(void) {
    stg_str_key = (s32) D_003AC8A6[0];
    stg_str_vib = (s32) D_003AC8A5[0];
    stg_str_bgm = GetVagMasterVolume(0U) & 0xFFFF;
    stg_str_se = SND_GetVol(3) & 0xFF;
    stg_str_voice = GetVagMasterVolume(1U) & 0xFFFF;
    stg_str_kido = (s32) D_003AC8AE[0];
    stg_str_SndMode = (s32) M2C_FIELD(g_pSndMng, u8 *, 0x2C);
    stg_str_lang = (s32) D_003AC8BC[0];
}
