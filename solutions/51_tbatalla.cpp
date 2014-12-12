
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){


    int base = atoi(argv[1]);

    int altura;

    altura = (base + 1) /2;

    system("clear");

    for(int fila =0 ; fila<altura; fila++){

	for(int col = 0; col<base; col++)

	    if(col<=fila)

		printf("*");

	    else

		printf("-");


	printf("\n");
    }



    return EXIT_SUCCESS;
}
