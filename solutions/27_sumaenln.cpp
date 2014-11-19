
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){



	int suma; 




	//** printf("%i + %i = %i\n", numero1, numero2, numero1 + numero2 );**//
	for( int acumulador = 0 ; acumulador< argc ;acumulador ++)

		suma += atoi(argv[acumulador]);


	printf("El resultado es = %i\n", suma);



	return EXIT_SUCCESS;
}
