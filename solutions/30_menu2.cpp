

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    int opcion;
    const char *opciones[] = {
	"cuadrado",
	"circulo"	    
    };
    do{    printf("\nElige:\n ");

	/** size of te da el valor de una variable en bytes**/
	for(int i=0;i<sizeof(opciones)/sizeof(char *);i++)

        printf("%i- %s\n",i+1, opciones[i]);
 
	scanf("%i",&opcion);

    }while(opcion<1 || opcion>2);

    //**switch-> conmutar**//

    switch(opcion){

	case 1:
	    printf("es un cuadrado\n");
	    break;

	case 2:
	    printf("es un circulo\n");
	    break;

	default:
	    printf("eres idiota\n");
	    break;
	    /*con case solo se puede poner numeros por lo tanto se podria poner case 'a' pork es 0x61 del codigo ASCII*/

    }



    return EXIT_SUCCESS;
}
