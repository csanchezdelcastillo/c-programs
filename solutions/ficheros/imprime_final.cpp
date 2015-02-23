
#include<stdio.h>
#include<stdlib.h>
#define MAX 0x100

int main(int argc,char *argv[]){

    FILE *fichero;
    char frase[0x10];
    char buffer;



    fichero = fopen("carta.txt","r+");// abrir fichero y leer
    fread = (&buffer,)
    fseek(fichero,0,SEEK_END);
    //fprintf(stdout,"%s\n",buffer);
    while((letra = fgetc(fichero))!='\n'){

	putchar(letra);

    }
    fclose(fichero);//cerrar fichero

    //fseek voy a una posicion de un fichero	

    //ftell conocer la posicion de un fichero que te devuelve un long float "lf"

    return EXIT_SUCCESS;
}
