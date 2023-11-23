#include <stdio.h>
#include "Boolean_Char_W.h"
char Boolean_Char_W(char reference, char position, char value){
    char bit=1<<(position-1);
    if(value==0){
        reference=reference&(~bit);
    }else{
        reference=reference|bit;
    }
    return reference;
}