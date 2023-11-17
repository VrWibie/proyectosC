// apuntadores con arreglos

#include<stdio.h>
int  main(){

int arreglo[6] = {1,-10,5,4,3,9};
int *apArray= &arreglo[0];

apArray++;
printf("Contenido de la direccion de memoria apuntada por apArray: %d", *apArray);

apArray+=4;
printf("\nContenido de la direccion de memoria apuntada por apArray: %d", *apArray);

apArray-=5;
printf("\nContenido de la direccion de memoria apuntada por apArray: %d", *apArray);


}

