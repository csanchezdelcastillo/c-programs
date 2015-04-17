
#include<stdio.h>
#include<stdlib.h>


typedef struct TPila{

    int maximo;
    int cima;
    int *datos;

}Pila;

bool meter(char buffer[0x100], Pila *my_pila){

    if(my_pila->cima >= my_pila->maximo)
	return false;
    my_pila->datos[my_pila->cima++] = buffer;

    return 
}

int sacar(Pila *my_pila){

    if(my_pila->cima <= 0)

	return 0;
 
    return my_pila->datos[--my_pila->cima];
}

Pila *crear_pila(size_t maximo_elementos){

    Pila *my_pila = (Pila *) malloc(sizeof(Pila));
    my_pila->cima = 0;
    my_pila->maximo = maximo_elementos;
    my_pila->data = (int *) malloc(maximo_elementos * sizeof(int));
    return my_pila;

}


int main(int argc,char *argv[]){
    
    int opcion;

    opcion = menu();

    char buffer[0x100];
    message = (char*) malloc(strlen(buffer)+1);
    strcpy(message,buffer);


    return EXIT_SUCCESS;

}
