#include<stdio.h>
#include<stdlib.h>

int main(int argv,char *argc[]){

	int altura;
	printf("Introduce altura: \t");

	scanf(" %i", &altura);


	for(int fila=0;fila<altura;fila++){

		for(int col=0;col<altura;col++)
			if( fila == 0 || col == 0 || fila == altura -1 || col == altura -1 )         
				printf("*");
			else
				printf(" ");


		printf("\n");
	}

	return EXIT_SUCCESS;
}

