#include <stdio.h>
#include "Boolean_Int_R.h"
char Boolean_Int_R(int reference, char position){
    reference=((reference>>(position-1))&0x01);
    return (char)reference;
}