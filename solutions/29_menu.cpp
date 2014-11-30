
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	int opcion;

	printf("\nElige:\n "
			"\n1-cuadrado\n"
			"\n2-circulo\n");

	scanf("%i",&opcion);

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
