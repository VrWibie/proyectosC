/*Calcular el numero mayor entre dos numeros con una funcion*/

#include <stdio.h>
int maximo(int a, int b);

int main(){
    int max=0;
    int x=5;
    int y=8;

    max=maximo(x,y);
    printf("El numero mayor es %i \n\n",max);
    return 0;
}

int maximo(int a, int b){
int resultado;
    if(a>b){
        resultado=a;
    }else{
        resultado=b;
    }

    return resultado;
}