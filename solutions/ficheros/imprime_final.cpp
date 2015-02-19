
#include<stdio.h>
#include<stdlib.h>
#define MAX 0x100

int main(int argc,char *argv[]){

	FILE *fichero;
	char letra;


	fichero = fopen("carta.txt","a+");// abrir fichero y leer

	//fprintf(stdout,"%s\n",buffer);
        while((letra = fgetc(fichero))!='\n'){
	      putchar(letra);

	}
	fclose(fichero);//cerrar fichero

//fseek voy a una posicion de un fichero	

//ftell conocer la posicion de un fichero que te devuelve un long float "lf"

    return EXIT_SUCCESS;
}
