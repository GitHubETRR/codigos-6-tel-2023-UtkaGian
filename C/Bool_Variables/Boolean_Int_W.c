#include <stdio.h>
#include "Boolean_Int_W.h"
int Boolean_Int_W(int reference, char position, char value){

    int bit=1<<(position-1);
    printf("Entro: %X \n",reference);

    if(value==0){
        reference=reference&(~bit);
    }else{
        reference=reference|bit;
    }
    printf("Salio: %X \n",reference);
    return reference;
}