#include <stdio.h>
#include "Boolean_Char_R.h"
char Boolean_Char_R(char reference, char position){
    reference=((reference>>(position-1))&0x01);
    return reference;
}