/*Programa que calucle el IVA del 19% sobre el valor total de la compra */

#include<stdio.h>

float calcularIVA(float p);
int main(){

float precioCompra, valorIVA;

printf("Ingrese el valor de la compra: ");
scanf("%f",&precioCompra);

valorIVA= calcularIVA(precioCompra);

printf("\nEl valor de la compra sin IVA es de: %.2f", precioCompra);
printf("\nEl valor de la compra con IVA es de: %.2f", precioCompra + valorIVA);
}

float calcularIVA(float p){

float IVA;

    IVA= p*0.19;

    return IVA;
}

