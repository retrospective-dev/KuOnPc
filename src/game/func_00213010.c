#include "common.h"
#include "kuon_types.h"

void func_00213040(void);
void __sghMsg_PrintHelpWindow(char *lpFormat);
extern unsigned short **gsHelpDiceCast;
void func_00213010(void) {
    func_00213040();
    __sghMsg_PrintHelpWindow((s8 *) gsHelpDiceCast);
}
