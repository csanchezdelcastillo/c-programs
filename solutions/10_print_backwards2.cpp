#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	const char *frase = "Todo esto es una prueba de punteros";
	const char *flecha;

	flecha = frase ;

	while(*flecha != '\0')

		flecha++;

	while(flecha != frase){

		flecha--;

	printf("%c", *flecha);
}
printf("\n");

return EXIT_SUCCESS;

	}
