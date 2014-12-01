
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    int lado;

    printf("introduce el lado de su cuadrado:");

    scanf("%i",&lado);

    for( int fila = 0; fila< lado ;fila ++){

	for(int col = 0; col < lado; col++)

		printf("x");

	printf("\n");

    }
    return EXIT_SUCCESS;
}
