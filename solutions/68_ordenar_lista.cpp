
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc,char *argv[]){

    char **lista = NULL;
    int n_palabras = 0;
    char buffer[100];
    char *temp;

    //preguntar la palabra
    //contar las letras
    //incrementar el directorio en uno
    //reservar para la cantidad de caracteres
    //copiar la palbra desde el buffer

    printf("\n");
    printf("Introduce palabras que más tarde serán ordenadas según el numero de caracteres:\n\n");
    do{

	n_palabras++;
	printf("\tDi tu palabra: ");
	scanf("%s", buffer);
	lista = (char **) realloc (lista, n_palabras * sizeof (char *));
	lista[n_palabras-1] = (char *) malloc(strlen(buffer) + 1);
	strncpy(lista[n_palabras-1],buffer,strlen(buffer)+1); 

	//strncpy(dondeloquierescopiar, de donde lo copias, y el tamaño k va a tener)
    }while(n_palabras<5);

    //strlen de buffer cuanto el numero de lo que haya en este caso caracteres)
    for(int n=0;n<5;n++){
	for(int e=n;e<5;e++){
	    if(strcmp(lista[n],lista[e])> 0){
		temp= lista[e];
		lista[e]=lista[n];
		lista[n]=temp;
	    }
	}
    }




    for(int i=0;i<n_palabras;i++)
	printf("Palabra: %s\n", lista[i]);

    for(int a=0;a<n_palabras;a++)
	free(lista[a]);


    free(lista);

    // free() libera el array creado
    //stringcompare strcmp ->> compara las palabras y devuelve un numero entero 

    return EXIT_SUCCESS;
}
