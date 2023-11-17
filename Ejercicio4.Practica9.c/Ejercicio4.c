#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declaramos los vectores
  int vector[10];
  int cuadrados[10];
  int cubos[10];

  // Inicializamos el vector con valores aleatorios
  for (int i = 0; i < 10; i++) {
    vector[i] = rand() % 10 + 1;
  }

  // Calculamos los cuadrados y los cubos
  for (int i = 0; i < 10; i++) {
    cuadrados[i] = vector[i] * vector[i];
    cubos[i] = vector[i] * vector[i] * vector[i];
  }

  // Imprimimos los resultados
  for (int i = 0; i < 10; i++) {
    printf("Elemento: %d, Cuadrado: %d, Cubo: %d\n", vector[i], cuadrados[i], cubos[i]);
  }

  return 0;
}