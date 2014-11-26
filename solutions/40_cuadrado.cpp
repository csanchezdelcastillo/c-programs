#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(int argc,char *argv[]){

    int posicion = 1;

    for(int fila=0;fila<N;fila++){
	for(int col=0;col<N;posicion++, col++)
	    printf("%i",posicion);

	printf("\n");
    }


    return EXIT_SUCCESS;
}
