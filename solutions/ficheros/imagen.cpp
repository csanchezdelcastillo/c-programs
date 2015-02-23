
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	FILE *imagen;

	short res_h,res_v;

	//shor es la mitad de un int (4) es decir 2//
	//
	imagen = fopen("madrid.jpeg","rb");

	fseek(imagen,12,SEEK_SET); // SEEK_SET para empezar a leer desde el principio del fichero

	fread(&res_h,2,1,imagen);
	fread(&res_h,2,1,imagen);


	fclose(imagen);


    return EXIT_SUCCESS;
}
