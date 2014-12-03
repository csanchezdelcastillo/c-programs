
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    //char cadena[] ="792";//

    //char *cadena = argv[1]//

    int resultado = 0;

    //while(cadena[i] != '\0'){//
    //for(int i =0; cadena[i]!='\0';i++){ //
    //for( int i = 0 ; *(cadena + i)!='\0'; i++){//

    for(  char *cadena = argv[1];
	    *cadena !='\0';cadena++){
	resultado *= 10;
	resultado += *cadena - '\0';
    }

    printf("%i\n",resultado);

    return EXIT_SUCCESS;
}
