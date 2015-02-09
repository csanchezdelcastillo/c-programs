
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc,char *argv[]){

        char **lista = NULL;
	int n_palabras = 0;
	char buffer[100];
	//preguntar la palabra
	//contar las letras
	//incrementar el directorio en uno
	//reservar para la cantidad de caracteres
	//copiar la palbra desde el buffer

	do{
	    n_palabras++;
	    printf("introduce tu nombre: ");
	    scanf("%s", buffer);
	    lista = (char **) realloc (lista, n_palabras * sizeof (char *));
	    lista[n_palabras-1] = (char *) malloc(strlen(buffer) + 1);
	    strncpy(lista[n_palabras-1],buffer,strlen(buffer)+1); 
	    //strncpy(dondeloquierescopiar, de donde lo copias, y el tamaño k va a tener)
	    //strlen de buffer cuanto el numero de lo que haya en este caso caracteres)
	}while(n_palabras< 5);

	for(int i=0;i<n_palabras;i++)
  	 printf("Nombre: %s\n", lista[i]);

	for(int a=0;a<n_palabras;a++)
	    free(lista[a]);

        free(lista);
	// free() libera el array creado
        //string case compare ?¿?¿
	
    return EXIT_SUCCESS;
}
