#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int opcion;
    
    do 
	{
        // Mostrar el menÃº
        printf("\nMenu de Ejercicios de la practica 9:\n");
        printf("1. Ejercicio 1\n");
        printf("2. Ejercicio 2\n");
        printf("3. Ejercicio 3\n");
        printf("4. Ejercicio 4\n");
        printf("5. Salir\n");

        printf("Seleccione una opcion (1-5): ");
            scanf("%d", &opcion);

switch (opcion){
    case 1:
    { // Llave case 1
    char arreg[10];
    char NO;
    int i, INI;
    INI=0;

    printf("Dame una palabra o frase de maximo 10 caracteres:\n");
        scanf("%s", arreg);
                
    printf("Dime cual es el caracter que quiere buscar:\n");
        scanf(" %c", &NO);
        
    for (i=0; i<10; i++){ //llave for
        if (arreg[i] == NO){// llave if
            INI = 1;
            break;
        } //llave if
        } //llave for

    if (INI!=0) {
        printf("\nEl caracter ' %c ' que desea encontrar, SI se encuentra en la cadena.", NO);
    } 
        else {
            printf("\nEl caracter ' %c ' que desea encontrar, NO se encuentra en la cadena.", NO);
        }
        
        
        return 0;

        break;
    } //Llave case 1


    case 2: 
    { // Llave case 2
    int cont, N;
    printf("Â¿A cual numero le sacare multiplos? ");
        scanf("%i", &N),

    printf("Â¿Cuantos multiplos quieres? ");
        scanf("%i", &cont);

    int arreglo[cont];

for(int i = 0; i < cont; i++){
    arreglo[i] = N * (i + 1);
}

    printf("Los %i multiplos del numero que me diste, son: \n", cont);

for (int i = 0; i < cont; i++){
    printf("%i ", arreglo[i]);
}
        break;
    } // Llave case 2


    case 3: 
    {// Llave case 3
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

    printf("Los 10 elementos, que te genere, son numeros aleatorios entre 1 y 10.\n");

  // Imprimimos los resultados
  for (int i = 0; i < 10; i++) {
    printf("Elemento %i: %d, Cuadrado: %d, Cubo: %d\n", i + 1, vector[i], cuadrados[i], cubos[i]);
  }

  return 0;
        break;
    }// Llave case 3


    case 4: 
    {// Llave case 4
    int i, n;

    printf("Introduce el numero de nombres que deseas ingresar: ");
        scanf("%d", &n);

    // Creamos dos arreglos, uno para almacenar los nombres y otro para almacenar las longitudes
    char nombres[n][50]; // SupondrÃ© que cada nombre puede tener hasta 50 caracteres
    int longitudes[n];

        printf("\n");

    for(i = 0; i < n; i++){
        printf("Introduce el nombre #%d: ", i+1);
            scanf("%49s", nombres[i]); // 49 caracteres + el carÃ¡cter nulo

        // Almacenamos la longitud del nombre
        longitudes[i] = strlen(nombres[i]);
    }

    // Mostrar los nombres y sus longitudes
    printf("\nNombres y sus longitudes:\n");

    for(i = 0; i < n; i++) {
        printf("Nombre: %s, Longitud: %d\n", nombres[i], longitudes[i]);
    }

    return 0;

        break;
    }// Llave case 4


    case 5:
        printf("Saliendo del programa. Adios!!\n");
        break;
    default:
    printf("Accion no valida. Elige una opcion entre 1 y 5!");   
        }//llave switch
    } while (opcion !=5);//llave ciclo do while
}