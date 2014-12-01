
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    int lado;

    printf("introduce lado :");
    scanf(" %i",&lado);

    for(int f=0;f<2;f++){

    for(int fila = 0; fila< lado ;fila++){
	for(int cuadrado_col = 0; cuadrado_col<6;cuadrado_col++)
	    for(int col= 0;col<lado;col++)
		printf(" %i",fila);
	printf("\n");
    }

    }
    return EXIT_SUCCESS;
}
