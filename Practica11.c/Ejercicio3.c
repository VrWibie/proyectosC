/*Ejercicio 3. Realizar un programa que permita obtener la multiplicaciónde dos
matrices. Se deberán crear las siguientes funciones Dame_dimensión, Guarda_datos, 
Muestra_datos, multiplica_datos.Se deberá verificar que las matrices dadas por el
 usuario seancongruentes, es decir que se puedan multiplicar entre ella.*/

#include <stdio.h>

void Dame_dimension(int *filas, int *columnas) {
    printf("Número de filas: ");
    scanf("%d", filas);
    printf("Número de columnas: ");
    scanf("%d", columnas);
}

void Guarda_datos(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void Muestra_datos(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplica_datos(int filasA, int columnasA, int matrizA[filasA][columnasA], int filasB, int columnasB, int matrizB[filasB][columnasB], int resultado[filasA][columnasB]) {
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            int suma = 0;
            for (int k = 0; k < columnasA; k++) {
                suma += matrizA[i][k] * matrizB[k][j];
            }
            resultado[i][j] = suma;
        }
    }
}

int main() {
    int filasA, columnasA, filasB, columnasB;

    printf("Matriz A:\n");
    Dame_dimension(&filasA, &columnasA);
    
    printf("Matriz B:\n");
    Dame_dimension(&filasB, &columnasB);

    if (columnasA != filasB) {
        printf("Las matrices no son congruentes y no se pueden multiplicar.\n");
        return 1;
    }

    int matrizA[filasA][columnasA];
    int matrizB[filasB][columnasB];
    int resultado[filasA][columnasB];

    printf("Ingrese los datos de la Matriz A:\n");
    Guarda_datos(filasA, columnasA, matrizA);

    printf("Ingrese los datos de la Matriz B:\n");
    Guarda_datos(filasB, columnasB, matrizB);

    multiplica_datos(filasA, columnasA, matrizA, filasB, columnasB, matrizB, resultado);

    printf("Resultado de la multiplicación:\n");
    Muestra_datos(filasA, columnasB, resultado);

    return 0;
}
 

 