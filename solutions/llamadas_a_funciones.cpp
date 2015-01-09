
#include<stdio.h>
#include<stdlib.h>


int suma(int op1, int op2, int op3){

    return op1 + op2 + op3;
}

int incrementa(int *x){
    x++;
}

int main(int argc,char *argv[]){


    int resultado ;

    int a = 5,
	b = 2;

    resultado = suma(2,a +5,b); //llamada de la funcion

    printf("%i",resultado);

    printf("\n");

    incrementa(&a); /// & direccion de  * contenido de lo k apunta //

    printf("%i\n",a);

    return EXIT_SUCCESS;
}
