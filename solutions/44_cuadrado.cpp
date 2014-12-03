
#include<stdio.h>
#include<stdlib.h>
#define L 5



// DAMERO //






int main(int argc,char *argv[]){

    int lado;
    int resultado;

    printf("introduce lado :");

    scanf(" %i",&lado);

    for(int cuadrado_fila = 0 ; cuadrado_fila < lado ; cuadrado_fila++)
	for(int fila = 0; fila< lado ;fila++){

	    for(int cuadrado_col = 0; cuadrado_col<L ; cuadrado_col++)

		for(int col= 0; col < lado ; col++)


		    if( (cuadrado_fila * L + cuadrado_col) % 2 == 0)

			printf("*");
		    else
			printf(" ");

	  

		   // printf(" %i",cuadrado_fila * L + cuadrado_col );// 

	printf("\n");
	}
	

    return EXIT_SUCCESS;
}
