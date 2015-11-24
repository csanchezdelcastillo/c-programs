<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	FILE *pf;
	char buffer[0x100];

	pf = fopen("carta.txt","r+");
	
	fgets(buffer,0x20,pf);
	fseek(pf,0,SEEK_END);
	fprintf(pf,"%s",buffer);

	fclose(pf);


=======

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
>>>>>>> 69d543682669e6bf4560cac3fbc1c83ae7ea0df3

    return EXIT_SUCCESS;
}
