#include <stdio.h>
void Order_66();

int main(){
    Order_66();
    return 0;
}

void Order_66(){
    int padawans=50;
    printf("The order 66 has been started\n");
    printf("Anakin has come to the jedi temple\n");
    while(padawans>0){
        printf("Padawans reaming: %d\n", padawans);
        padawans--;
    }
    printf("Well done Anakin, you killed them all...");
}

