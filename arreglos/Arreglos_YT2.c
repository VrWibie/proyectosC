//2. Inicializar un arreglo de 10 elementos, y con un ciclo for verificar cual de los elementos es mayor
#include <stdio.h>
int main(){
int NumeroM=0;
float numero[10]= {1, 0, 10,0, 4, 6, 8, 11, 3, 7};

for(int i=0; i<10; i++){

    if(numero[i]>numero[NumeroM]){
        NumeroM=i;
       
    }
}
printf("\nEl numero mayor es:  %.2f", numero[NumeroM]);
printf ("La posicion del arreglo es la: %i", NumeroM);
    return 0;
}