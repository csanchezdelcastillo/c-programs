#include<stdio.h>
#include<stdlib.h>

double add(double numeros[], double cuantos_numeros){

	double resultado = 0;

	for(int contador=0; contador < cuantos_numeros; contador++)

		resultado+=numeros[contador];
	return resultado;
}

int main(int argc,char *argv[]){


	//para introducir todos los numeros que queramos "argc-1"

	double numeros[argc-1],
		cuantos_numeros = argc-1,
				resultado = 0;

	//metemos todos los datos en una matriz

	for(int contador=0; contador<cuantos_numeros;contador++){

		numeros[contador]=atof(argv[contador+1]);
	}

	//llamada al a funcion.

	resultado = add(numeros, cuantos_numeros);

	printf(" %.2lf\n",resultado);

	return EXIT_SUCCESS;
}
