#include<stdio.h>
int main(){
int tabla[3][4];

printf("Ingrese los valores  para la tabla/ matriz de 3x4\n\n");

for(int i=0; i<3; i++){
for(int j=0; j<4; j++){ 
printf("Elemento[%d,%d]: ",i,j);
scanf("%d", &tabla[i][j]);
}

}
printf("Elementos almacenados en la tabla: \n\n");

for(int i=0 ; i<3; i++){
    for(int j =0; j<4;j++){
        printf("%d ", tabla[i][j]);
    }
printf("\n\n");
}

    return 0;
}