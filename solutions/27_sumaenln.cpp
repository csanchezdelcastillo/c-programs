
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){



	int suma=0; 




	//** printf("%i + %i = %i\n", numero1, numero2, numero1 + numero2 );**//
	for( int contador = 0 ; contador< argc ;contador ++)

		suma += atoi(argv[contador]);


	printf("El resultado es = %i\n", suma);



	return EXIT_SUCCESS;
}
