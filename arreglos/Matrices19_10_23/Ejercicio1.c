/*1. Realizar un programa que almacene una matriz de 2x3, que se imprima y por último obtener la suma de 
todos sus elementos.*/
#include<stdio.h>
int main(){

int matriz[2][3];

for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
printf("Asigna valores para la matriz [%d, %d] :",i,j);
scanf("%d",&matriz[i][j] );
    }
    printf("\n");
}
printf("Los numeros ingresados son: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}