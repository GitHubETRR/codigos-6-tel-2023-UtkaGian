#include <stdio.h>
#include <stdlib.h>
#include "booltypes.h"


static char bit;

char *Aimer = NULL;
char data=0;
char Kind;

void *init(char Kind, int Ammount) {
    void *Tdata = NULL;  // Initialize the pointer to NULL
    
    if (Kind == 'C') {
        char *booleanData = Boolean_Type_C(Ammount);
        Tdata = (void *)booleanData;  // Cast to void pointer
    } else {
        int *booleanData = Boolean_Type_I(Ammount);
        Tdata = (void *)booleanData;  // Cast to void pointer
    }
    
    return Tdata;
}

char *Boolean_Type_C(int Ammount) {
    char *booleanArray = (char *)malloc(sizeof(char) * Ammount);
    if (booleanArray == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria para el array.\n");
        exit(1);
    }
    for (int i = 0; i < Ammount; i++) {
        booleanArray[i] = 0;
    }
    return booleanArray;
}

int *Boolean_Type_I(int Ammount) {
    int *booleanArray = (int *)malloc(sizeof(int) * Ammount);
    if (booleanArray == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria para el array.\n");
        exit(1);
    }
    for (int i = 0; i < Ammount; i++) {
        booleanArray[i] = 0;
    }
    
    return booleanArray;
}