#include "common.h"

void InitLightMat(void);
void DssInit(void);
void InitDamageMng(void);
void InitHitLine(void);
void InitEneSave(void);
void InitPointLight(void);
void InitDramaMng(void);
void func_00181410(void);
void InitSpiritMng(void);
void InitMovePath(void);
s32 SfxPostEffect_Initialize(void);
void func_00139B30(void) {
    func_00181410();
    InitLightMat();
    DssInit();
    InitDamageMng();
    InitPointLight();
    InitEneSave();
    InitDramaMng();
    SfxPostEffect_Initialize();
    InitHitLine();
    InitMovePath();
    InitSpiritMng();
}
