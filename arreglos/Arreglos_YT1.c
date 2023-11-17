//1. Realizar un programa que pida 5 calificaciones por teclado, y calcule el promedio de ellas

#include <stdio.h>
int main(){
	
	float calificaciones[5];
	float promedio=0;
	
	printf("Programa que calcula el promedio de 5 calificaciones");
	
	for(int i=0; i<5; i++){
		
		printf("Dame la calificación %d", i+1); 
		scanf("%f",&calificaciones[i]);
		promedio +=calificaciones[i];
		printf("\n");
	}
	
	printf("El promedio de las calificaciones es: %.2f\n\n", promedio/5 );
	
	return 0;
}