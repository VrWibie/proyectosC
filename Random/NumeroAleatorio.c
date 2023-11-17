#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    srand(time(NULL));
    printf("%d", rand());

    printf("\n%d", RAND_MAX);

    return 0;
}