#include<stdio.h>
#include<stdlib.h>

int main(){

    //crea un puntero que apunte a la frase
    //crea una copia del puntero
    //mueve esta copia hasta el final 
    //mientras no se crucen los punteros-decrementa en 1 el puntero e imprime el contenido


    const char *sentence = "The world is vampire.";

    const char *beginning = sentence;


    const char *end = sentence;
    //for(;*end !='\0';end++) //
    while(*end != '\0')

	*end++;

    while(end != beginning){

	*end--;
	printf( "%c", *end);
    }
    printf("\n");
    return EXIT_SUCCESS;
}





