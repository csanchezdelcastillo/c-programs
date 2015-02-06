
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	const char *lista[10];
	int b =0;
	do{
	    b++;
	    printf("introduce tu nombre:\n");
	    scanf("%s", lista);
	    
	}while(b<10);

	for(int i=1;i<10;i++)
	printf("Nombre: %s", lista[i]);



    return EXIT_SUCCESS;
}
