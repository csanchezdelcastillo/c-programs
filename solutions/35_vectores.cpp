
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    int resultado=0;

    for (int primer_par=1;primer_par<argc;primer_par+=2)

	resultado+= atoi(argv[primer_par]) * atoi(argv[primer_par + 1]);


    printf("%i\n", resultado);

    return EXIT_SUCCESS;
}
