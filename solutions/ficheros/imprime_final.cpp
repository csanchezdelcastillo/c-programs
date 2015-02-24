
#include<stdio.h>
#include<stdlib.h>
#define MAX 0x100

int main(int argc,char *argv[]){

    FILE *fichero;
    char buffer[0x10];



    fichero = fopen("carta.txt","r+");// abrir fichero y leer
    fread(&buffer,sizeof(buffer),1,fichero);
    fseek(fichero,0,SEEK_END);
    //fprintf(stdout,"%s\n",buffer);


    fclose(fichero);//cerrar fichero

    //fseek voy a una posicion de un fichero	

    //ftell conocer la posicion de un fichero que te devuelve un long float "lf"

    return EXIT_SUCCESS;
}
