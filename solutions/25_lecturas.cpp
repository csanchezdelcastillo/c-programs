#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *pf;
    char letra;

    pf = fopen("a.dam", "r");

    if(pf == NULL){
	fprintf(stderr, "No se ha podido abrir el fichero.\n");
	return EXIT_FAILURE;
    }

    while( (letra = fgetc(pf)) != EOF ) {
	if(letra == '#')
	    while((letra = fgetc(pf)) != '\n');
	putchar(letra);
    }

    fclose(pf);

    return EXIT_SUCCESS;
}
