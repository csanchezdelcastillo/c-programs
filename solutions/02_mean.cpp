#include<stdio.h>

#include<stdlib.h>


int main(int argc, char *argv[]){

        int ALUMNOS;    
	double nota,
	       media= 0;	

        ALUMNOS = atoi(argv[1]);

	for(int alumnos=0;alumnos<ALUMNOS;alumnos++){

		printf("introduce nota : \t");

		scanf(" %lf",&nota);

		media+=nota;
	}
	media /= ALUMNOS;
	printf("media: %2lf\n", media);

	return EXIT_SUCCESS;
}

