#include <stdio.h>
#include "booltypes.h"
#include "Boolean_Char_R.h"
#include "Boolean_Int_R.h"
#include "Boolean_Char_W.h"
#include "Boolean_Int_W.h"

//gcc Test_Code.c booltypes.c Boolean_Char_R.c Boolean_Int_R.c Boolean_Char_W.c Boolean_Int_W.c -o main ;.\main
extern char *Aimer;

int main(){
    char letter='I';
    int size=11;
    int *INPUTS=(init(letter, size));
    INPUTS[0]=Boolean_Int_W(INPUTS[0], 4, 1);
    int result=Boolean_Int_R(INPUTS[0], 4);
    printf("%d", result);
    return 0;
}

