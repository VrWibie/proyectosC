#include<stdio.h>

int pow(int arg, int exp);

int main(){
    int res = pow(2, 3);
    printf("El valor de 2 al cubo es: %d\n", res); printf("\n\n");

    return 0;
}

int pow(int arg, int exp){ 

    int res=1;
    for(int i=0; i<exp; i++){
        res*=arg;
    }
 return res;
}


