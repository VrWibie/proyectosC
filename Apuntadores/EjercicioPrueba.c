#include <stdio.h>

// Función para solicitar la dimensión de las matrices
int Dame_dimensión() {
  int n;

  printf("Ingrese la dimensión de las matrices: ");
  scanf("%d", &n);

  return n;
}

// Función para guardar los datos de una matriz
void Guarda_datos(int **matriz, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Ingrese el valor de la matriz en la posición [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

// Función para mostrar los datos de una matriz
void Muestra_datos(int **matriz, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

// Función para multiplicar dos matrices
int **Multiplica_datos(int **matrizA, int **matrizB, int n) {
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matrizResultado[i][j] = 0;
      for (int k = 0; k < n; k++) {
        matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
      }
    }
  }

  return matrizResultado;
}

int main() {
  int **matrizA, **matrizB, **matrizResultado;
  int n;

  // Solicitamos la dimensión de las matrices
  n = Dame_dimensión();

  

  // Guardamos los datos de las matrices
  Guarda_datos(matrizA, n);
  Guarda_datos(matrizB, n);

  // Verificamos que las matrices sean congruentes
  if (n != matrizA[0][0]) {
    printf("Las matrices no son congruentes.\n");
    return 0;
  }

  // Multiplicamos las matrices
  matrizResultado = Multiplica_datos(matrizA, matrizB, n);

  // Mostramos los datos de la matriz resultado
  Muestra_datos(matrizResultado, n);

  return 0;
}
