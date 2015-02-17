
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct TNota{
    double matematicas;
    double lengua;
    double fisica;
    char ingles;
    char nombre[0x20];
    char *comentario;

}Nota;
void cp(struct TNota *destino,struct TNota origen){

   destino->matematicas = origen.matematicas;

   destino->lengua = origen.lengua;

   destino->fisica = origen.fisica;

   destino->ingles = origen.ingles;

   //(*destino).matematicas = origen.matematicas; es lo mismo que destino->matematicas = origen.matematicas;
   strncpy(destino->nombre,origen.nombre,0x20);

   strncpy(destino->comentario,origen.comentario,5);
};

int main(int argc,char *argv[]){

    //struct TNota ramon;
    //struct TNota ramon = {2.2,5.1,7.7,'A'};
    //Nota ramon;
    Nota juan,
	 ramon;

    cp(&juan, ramon);
    
    ramon.comentario = (char*) malloc(5);
    strncpy(ramon.comentario,"hola!",5);

    juan.comentario = (char*) malloc(5);

    strncpy(ramon.comentario,"HOLA!",5);

    ramon.matematicas= 2.2;
    ramon.lengua = 5.1;
    ramon.fisica = 7.7;
    ramon.ingles = 'A';
    //strcpy(ramon.nombre,"paco");
   // ramon.nombre[0]= 'R';
    
    printf("%s\n",ramon.comentario);

    free(juan.comentario);

    free(ramon.comentario);





    return EXIT_SUCCESS;
}
