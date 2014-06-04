#include<stdio.h>

#include<stdlib.h>


int main(int argc, char *argv[]){

        int notas;
    
	double nota,
	       media= 0;	

        notas = atoi(argv[1]);

	for(int alumnos=0;alumnos<notas;alumnos++){

		printf("introduce nota : \t");

		scanf(" %2lf",&nota);

		media+=nota;
	}

	media /= notas;

	printf("media: %2lf\n", media);

	return EXIT_SUCCESS;
}

