#include <stdio.h>
#include <string.h>

void opcion1();
char ultima(char cadena[]);
void opcion2();
int dimension();
void pedir_datos(int valores[], int n);
void acomoda_datos(int valores[], int n);
void imprimir_datos(int valores[], int n);
void opcion3();
int dame_dimension();
void multiplica_matrices(int a, int b, int c, int MR[a][c], int M1[a][b], int M2[b][c]);
void guarda_datos(int a, int b, int arreglo[a][b]);
void muestra_datos(int a, int b, int arreglo[a][b]);
void salir();

int main() {
    int opcion;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ejercicio 1\n");
        printf("2. Ejercicio 2\n");
        printf("3. Ejercicio 3\n");
        printf("4. Salir\n");
        printf("\nElige una opcion: ");
        scanf("%d", &opcion);

        while (getchar() != '\n');

        switch (opcion) {
            case 1:
                opcion1();
                break;
            case 2:
                opcion2();
                break;
            case 3:
                opcion3();
                break;
            case 4:
                salir();
                return 0;
            default:
                printf("Opcion no valida. Elige otra (1-3)\n");
        }
    }

    return 0;
}

char ultima(char cadena[]) {
    int longitud = strlen(cadena);

    if (longitud == 0) {
        return '\0';
    } else {
        return cadena[longitud - 2];
    }
}

void opcion1() {
    char cadena[100];
    printf("Ingresa tu texto:\n");

    fgets(cadena, sizeof(cadena), stdin); // Utiliza fgets para leer la línea completa

    char ultimocaracter = ultima(cadena);

    if (ultimocaracter == '\0') {
        printf("La cadena esta vacia.\n");
    } else {
        printf("\nEl ultimo caracter de la cadena es: %c\n", ultimocaracter);
    }
}

int dimension() {
    int n;
    printf("¿Cuantos datos almacenaras? ");
    scanf("%i", &n);
    return n;
}

void pedir_datos(int valores[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Dame tu valor %i: ", i + 1);
        scanf("%i", &valores[i]);
    }
}

void acomoda_datos(int valores[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            int comparador;
            if (valores[j] > valores[j + 1]) {
                comparador = valores[j + 1];
                valores[j + 1] = valores[j];
                valores[j] = comparador;
            }
        }
    }
}

void imprimir_datos(int valores[], int n) {
    printf("Tus datos ordenados son:\n");
    for (int i = 0; i < n; i++) {
        printf("%i\n", valores[i]);
    }
}

void opcion2() {
    int n;
    n = dimension();

    int valores[n];

    pedir_datos(valores, n);
    acomoda_datos(valores, n);
    imprimir_datos(valores, n);
}

int dame_dimension() {
    int dimension;
    scanf("%i", &dimension);
    return dimension;
}

void multiplica_matrices(int a, int b, int c, int MR[a][c], int M1[a][b], int M2[b][c]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < c; j++) {
            MR[i][j] = 0;
            for (int k = 0; k < b; k++) {
                MR[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
}

void guarda_datos(int a, int b, int arreglo[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Dame el dato de la fila %i columna %i: ", i + 1, j + 1);
            scanf("%i", &arreglo[i][j]);
        }
    }
}

void muestra_datos(int a, int b, int arreglo[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%i ", arreglo[i][j]);
        }
        printf("\n");
    }
}

void opcion3() {
    int f, c, f2, c2; // filas y columnas de M1 y M2

    // Referente a M1
    printf("Cuantas filas tendra tu Matriz 1? ");
    f = dame_dimension();
    printf("Cuantas columnas tendra tu Matriz 1? ");
    c = dame_dimension();

    int M1[f][c];

    guarda_datos(f, c, M1);
    printf("\nMatriz 1:\n");
    muestra_datos(f, c, M1); // Impresión de la Matriz 1

    // Referente a M2
    printf("\nCuantas filas tendra tu Matriz 2? ");
    f2 = dame_dimension();
    printf("Cuantas columnas tendra tu Matriz 2? ");
    c2 = dame_dimension();

    int M2[f2][c2];

    guarda_datos(f2, c2, M2);
    printf("\nMatriz 2:\n");
    muestra_datos(f2, c2, M2); // Impresión de la Matriz 2

    if (c != f2) {
        printf("\nNo se pueden multiplicar, porque el número de columnas de la Matriz 1 debe ser igual al número de filas de la Matriz 2.\n");
    }

    int producto[f][c2];
    multiplica_matrices(f, c, c2, producto, M1, M2);

    printf("\nLa matriz resultante es:\n");
    muestra_datos(f, c2, producto);
}

void salir() {
    printf("Acabando la ejecucion. Adios!\n");
}
