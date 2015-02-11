
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char **rellena(int *n){

    char **lista = NULL;
    int len = 0;
    char buffer[100];

    do{

	
	printf("\tDi tu palabra: ");
	scanf("%s", buffer);
	len = strlen(buffer);
	if (buffer[0]=='\n')
	    break;
	buffer[len-1]= '\0';

	lista = (char **) realloc (lista,++*n * sizeof (char *));
	lista[*n-1] = (char *) malloc(len);
	strncpy(lista[*n-1],buffer,len); 

	//strncpy(dondeloquierescopiar, de donde lo copias, y el tamaño k va a tener)
    }while(1);
    return lista;
}



    char *temp;

    for(int i=0;i<n-1;i++) // comparar la primera palabra
	for(int e=i+1;e<n;e++) //contra todas y cada una de las e restantes
	    if(strcmp(lista[i],lista[e])> 0){//si la primera es mayor intercambio la primera con la palabra e
		temp = lista[i];
		lista[i] = lista[e];
		lista[e] = temp;
	    }




}


int main(int argc,char *argv[]){

    char **lista;
    int n_palabras = 0;

    //preguntar la palabra
    //contar las letras
    //incrementar el directorio en uno
    //reservar para la cantidad de caracteres
    //copiar la palbra desde el buffer

    printf("\n");
    printf("Introduce palabras que más tarde serán ordenadas por orden alfabético:\n\n");

    lista = rellena(&n_palabras);
    ordenar(lista,n_palabras);

    //strlen de buffer cuanto el numero de lo que haya en este caso caracteres)

    for(int i=0;i<n_palabras;i++)
	printf("Palabra: %s\n", lista[i]);

    for(int a=0;a<n_palabras;a++)
	free(lista[a]);

    free(lista);

    // free() libera el espacio de memoria fijado
    //stringcompare strcmp ->> compara las palabras y devuelve un numero entero 

    return EXIT_SUCCESS;
}
