
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    int numeros[]= { 4, 3, 5, 1, 9, 4
    };

    const char *lista[]= {
	"hola",
	"que",
	"tal",
	"como",
	"estas",
	NULL
    };

    // para ver el numero de palabras en el array podremos imprimirlo asi: printf("%i",sizeof(lista));//
    for(int i=0;lista[i];i++)

	printf("\t%s\n",lista[i]);

    for(int a= 0; a < 6 ;a++)
	if(numeros[a]<numeros[a + 1] || )

	    printf("\t%i\n", numeros[a]);

	


    return EXIT_SUCCESS;
}
