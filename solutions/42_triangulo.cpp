
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){

    int altura;

    int lado;

    printf("introduce la altura de su triangulo:");

    scanf("%i", &altura);

    printf("introduce el lado de su triangulo:");

    scanf("%i",&lado);


    for( int fila = 0; fila < altura ; fila ++){

	for(int col = 0; col < lado; col++)

         if(col<=fila)
		printf("x");

	printf("\n");


    }
    return EXIT_SUCCESS;
}
