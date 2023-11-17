/*Se cargaran datos aleatoriamente entre 1 y 9 en dos matrices de 3x3, de tipo entero. Obtener
la suma de los elementos de las diagonales y almacenarlos en otro arreglo. Los valores de suma se almacenarán 
en otro arreglo*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

int Matriz1[3][3];
int Matriz2[3][3];
int sumaMatriz1=0;
int sumaMatriz2=0;
int M1M2[2];
int sumaMatrices;
//variables



    srand(time(NULL));
for(int i=0; i<3;i++){
    for(int j=0; j<3; j++){
        Matriz1[i][j]=1+rand()%10;
    }
}
//imprimimos la matriz para comprobar que este bien hecha
printf("Matriz 1: \n");
for(int i=0; i<3;i++){
    for(int j=0; j<3; j++){
 printf("%d ", Matriz1[i][j]);       
}
printf("\n");
}
//Hacemos lo mismo con la matriz 2
for(int i=0; i<3;i++){
    for(int j=0; j<3; j++){
        Matriz2[i][j]=1+rand()%10;
    }
}
//imprimimos la matriz para comprobar que este bien hecha
printf("Matriz 2: \n");
for(int i=0; i<3;i++){
    for(int j=0; j<3; j++){
 printf("%d ", Matriz2[i][j]);       
}
printf("\n");
}
//La diagonal principal de la matriz 1
printf("La diagonal princial de la Matriz1 es: \n");
for(int i=0; i<3; i++){
    printf("%d ", Matriz1[i][i]);
}
//La diagonal principal de la matriz 2
printf("\nLa diagonal princial de la Matriz2 es: \n");
for(int i=0; i<3; i++){
    printf("%d ", Matriz2[i][i]);
}
// suma de la Diagonal principal de la Matriz1 y de la Matriz2
for(int i=0; i<3; i++){
    M1M2[0]=sumaMatriz1+=Matriz1[i][i];
    M1M2[1]=sumaMatriz2+=Matriz2[i][i];
}
printf("\nLa suma de la diagonal principal de la matriz 1 y 2 respectivamnete es: \n");
 printf("%d ", sumaMatriz1); printf("\n");
 printf("%d ", sumaMatriz2);

 // de forma aninada
 printf("\nAqui los valores de la suma se agregaron a un nuevo arreglo y la impresion es aninada: \n");
 for(int i=0; i<2;i++){
    printf("%d", M1M2[i]);
    printf("\n");
 }

//arreglo de las sumas respectivas de las diagonales de la matriz 1 y 2

sumaMatrices=sumaMatriz1+sumaMatriz2;

printf("\nla suma de las diagonales de la matriz 1 y 2 es: \n");
printf("%d", sumaMatrices);


}