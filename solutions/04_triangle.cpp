#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	int altura;

	printf("introduce la altura: ",altura);
	scanf(" %i", &altura);

	for(int fila=0;fila<altura;fila++){

		for(int col=0;col<altura;col++)
			if(fila>=col)

				printf("*");

		printf("\n");

	}

	return EXIT_SUCCESS;
}

