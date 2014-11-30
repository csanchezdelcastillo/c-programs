
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){



    int acumula=1; 


    system("figlet -f script  multiplicacion");

    //** printf("%i + %i = %i\n", numero1, numero2, numero1 * numero2 );**//
    for( int contador = 1 ; contador< argc ;contador ++)

	acumula = acumula * atoi(argv[contador]);


    printf("El resultado es = %i\n", acumula);



    return EXIT_SUCCESS;
}
