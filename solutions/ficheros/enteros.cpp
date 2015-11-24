
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	FILE *fichero;

	char x,y;

	//short es la mitad de un int (4bytes) es decir 2bytes//

	fichero = fopen("enteros.txt","rb");


	fread(&x,1,1,fichero);
	fread(&y,1,1,fichero);

	fprintf(stdout,"x es igual a %c\n",x);
	fprintf(stdout,"y es igual a %c\n",y);

	fclose(fichero);
    return EXIT_SUCCESS;
}
