
#include<stdio.h>
#include<stdlib.h>
#define N 6
int main(int argc,char *argv[]){

    int inicial;

    for(int fila=0;fila<N;fila++){

	for(int cuad=0;cuad<N;cuad++){

	    if(cuad == 0)

		inicial = 0;

	    else

		inicial = 1;

	    for(int col=inicial;col<N;col++)

		if(fila == col && cuad % 2 == 0 || cuad % 2 == 1 && fila + col == N -1)

		    printf("*");
		else

		    printf(" ");
	}

	printf("\n");


    }

    return EXIT_SUCCESS;
}
