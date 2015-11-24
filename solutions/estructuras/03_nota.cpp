#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct TNota{

    double matematicas;
    double lengua;
    char avanza;
}juan,pedro;




int main(){

    juan.matematicas= 6.2;
    juan.lengua=3.3;
    juan.avanza = 's';

    printf("la nota es: %lf\n",juan.matematicas);



    return EXIT_SUCCESS;
}
