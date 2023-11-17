//Apuntadores

#include<stdio.h>

int main(){

int var1=10;
int *apEntero=&var1;

printf("La variable 1 es: %d", var1);

*apEntero=777;
printf("lA variable 1 es: %d", var1);



}