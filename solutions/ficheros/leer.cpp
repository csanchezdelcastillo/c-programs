
#include<stdio.h>
#include<stdlib.h>
#define MAX 0x100

int main(int argc,char *argv[]){

	FILE *fichero;
	char letra;


	fichero = fopen("carta.txt","r");// abrir fichero y leer

	//fprintf(stdout,"%s\n",buffer);
        while((letra = fgetc(fichero))!=EOF){
	      putchar(letra);

	}
	fclose(fichero);//cerrar fichero 

//ftell conocer la posicion de un fichero que te devuelve un long float "lf"

    return EXIT_SUCCESS;
}
