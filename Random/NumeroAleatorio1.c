#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int x; 
    srand(time(NULL));
    printf("numero aleatorio generado: %d", rand());

    x=rand()%11;
    printf("\nNumero aleatorio acotado entr 0-10 generado: %d", x);

    return 0;
}