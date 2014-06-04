#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){


	char caracter= '*';

	int altura;

	if( argc>=2)

		caracter=argv[1][0];

	printf("introduce la altura: ",altura);

	scanf(" %i", &altura);

	for(int fila=0;fila<altura;fila++){

		for(int col=0;col<fila+1;col++) //** if(fila>=col) **//


			printf("%c", caracter);

		printf("\n");

	}

	return EXIT_SUCCESS;
}

