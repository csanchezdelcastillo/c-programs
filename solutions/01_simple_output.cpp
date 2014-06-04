#include<stdio.h>

#include<stdlib.h>

int main(int argc, char *argv[]){


	if(argc > 1)

		for(int repetir=0;repetir<10;repetir++)

			printf("%s\n", argv[1]);

	else 

		return EXIT_FAILURE;


	return EXIT_SUCCESS;

}

