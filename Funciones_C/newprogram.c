[9:04 a. m., 30/10/2023] Gilazo: #include<stdio.h>
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
for(int i=0; …
[7:30 p. m., 7/11/2023] Gilazo: #include <stdio.h>

void dame_dimension(int *filas, int *columnas) 
{
    printf("Escribe el numero de filas: ");
    scanf("%d", filas);
    printf("Escribe el numero de columnas: ");
    scanf("%d", columnas);
}

void guarda_datos(int matriz[100][100], int filas, int columnas, char n) 
{
    printf("Escribe los numeros de la matriz %c:\n", n);
    for (int i = 0; i < filas; i++) 
    {
        for (int r = 0; r < columnas; r++) 
        {
            printf("Escribe el numero M%c[%d][%d]: ", n, i, r);
            scanf("%d", &matriz[i][r]);
        }
    }
}

void muestra_datos(int matriz[100][100], int filas, int columnas, char n) 
{
    printf("Matriz %c:\n", n);
    for (int i = 0; i < filas; i++) 
    {
        for (int r = 0; r < columnas; r++) 
        {
            printf("%d ", matriz[i][r]);
        }
        printf("\n");
    }
}

void multiplica_datos(int matrizA[100][100], int filasA, int columnasA, int matrizB[100][100], int filasB, int columnasB, int matrizC[100][100]) {
    if (columnasA != filasB) 
    {
        printf("No se pueden multiplicar tus matrices, las dimensiones son incongruentes\n");
        return;
    }

    for (int i = 0; i < filasA; i++) 
    {
        for (int r = 0; r < columnasB; r++) 
        {
            matrizC[i][r] = 0;
            for (int k = 0; k < columnasA; k++) 
            {
                matrizC[i][r] += matrizA[i][k] * matrizB[k][r];
            }
        }
    }
}

int main() 
{
    int filasA, columnasA, filasB, columnasB;
    int matrizA[100][100], matrizB[100][100], matrizC[100][100];

    printf("Matriz A:\n");
    dame_dimension(&filasA, &columnasA);
    guarda_datos(matrizA, filasA, columnasA, 'A');
    muestra_datos(matrizA, filasA, columnasA, 'A');

    printf("Matriz B:\n");
    dame_dimension(&filasB, &columnasB);
    guarda_datos(matrizB, filasB, columnasB, 'B');
    muestra_datos(matrizB, filasB, columnasB, 'B');

    multiplica_datos(matrizA, filasA, columnasA, matrizB, filasB, columnasB, matrizC);

    if (columnasA == filasB) 
    {
        printf("Multiplicacion de tus matrices\n");
        muestra_datos(matrizC, filasA, columnasB, 'C');
    }

    return 0;
}