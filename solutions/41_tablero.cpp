
#include<stdio.h>
#include<stdlib.h>
#define N 5

int main(int argc,char *argv[]){

	int tablero = 1;

	for(int fila=0;fila<N;fila++){


		for(int col=1;col<N;tablero++, col++)
                
			

			printf("| %i |",tablero+=tablero--);

		printf("\n");
	}


	return EXIT_SUCCESS;
}
