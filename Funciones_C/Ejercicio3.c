//Programa que toma las tres notas de un estudiante y diga la nota final del curso 
/*Tenga en cuenta que la primera y segunda nota valen el 30% de la nota final. La tercera
nota vale el 40%*/

#include<stdio.h>

float calcularNota(float n1,float n2,float n3);

int main(){

    float nota1, nota2, nota3, notaFinal;
    printf("Imprime la primera nota: ");
    scanf("%f",&nota1);
     printf("Imprime la segunda nota: ");
    scanf("%f",&nota2);
     printf("Imprime la tercer nota: ");
    scanf("%f",&nota3);

    notaFinal= calcularNota(nota1,nota2, nota3); 
    printf("\nLa nota final es: %.2f",notaFinal);

    return 0;
}

float calcularNota(float n1, float n2, float n3){

    return n1*0.3 + n2*0.3 + n3*0.4;
}