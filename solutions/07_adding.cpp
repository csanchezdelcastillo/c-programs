#include<stdio.h>
#include<stdlib.h>

double add(double operando1, double operando2){

	//inicializamos el resultado a 0, despues decimos que resultado es igual a la suma de operandos y devolvemos el valor a resultado.

	double resultado = 0; 
	resultado = operando1 + operando2;
	return resultado;
}


int main(int argc,char *argv[]){


	//Atof para convertir los datos en tipo float.

	double operando1 = atof(argv[1]),
	       operando2 = atof(argv[2]),
	       resultado = 0;
	//La variable resultado tiene el valor que le devuelva la funcion add.

	resultado = add(operando1, operando2);

	printf("%.2lf\n", resultado );

	return EXIT_SUCCESS;
}
