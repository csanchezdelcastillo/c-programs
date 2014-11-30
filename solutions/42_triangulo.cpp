
#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(int argc,char *argv[]){

	int altura;

	printf("introduce la altura de su triangulo:");

	scanf("%i", &altura);


	for( int fila = 0; fila< altura ;fila ++){
		for(int col = 0; col < N; col++)
			if(fila >= col)
				printf("x");
		printf("\n");


	}
	return EXIT_SUCCESS;
}
