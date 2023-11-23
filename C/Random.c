#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomizer(int param1, int param2);

int main(void){
    int param1, param2;
    printf("Hola intgrese el mínimo dentro de los valores:\n");
    scanf("%d", &param1);
    printf("Ahora el máximo dentro de los valores:\n");
    scanf("%d", &param2);
    randomizer(param1, param2);
    return 0;
}

void randomizer(int param1, int param2){
    int mivector[10];
    int i;
    srand(time(NULL));
    for (i=0;i<10;i++){
        do{
            mivector[i]=rand() % param2;
            if (mivector[i]==param1){
                mivector[i]++;
            }
        }while(mivector[i]<param1);
        printf("El vector %d ahora vale %d\n", i, mivector[i]);
    }
}
