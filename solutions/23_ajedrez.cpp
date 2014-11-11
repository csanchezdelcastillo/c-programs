
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	int tablero[8][8]= {
		{'1','0','0','1','1','0','0','0'}, 
		{'0','0','0','0','0','0','0','0'},
		{'0','0','0','0','0','0','0','0'},
		{'0','0','0','0','0','1','0','1'},
		{'0','1','0','1','0','0','0','0'},
		{'0','0','0','0','0','0','1','0'},
		{'0','0','0','0','0','0','0','0'},
		{'0','0','0','0','0','0','0','1'}		       
	};
	int x = x -1,
	    y = y -1;
	system("figlet Ajedrez 2.0");    
	printf("introduce la posicion de la ficha:");
	scanf("%i %i", &x, &y);


	if( tablero[x][y] == '1')

		printf("\t!hay ficha¡\n");

	else
		printf("\tNo hay ficha\n");
	//* pintamos el tablero *//

	for (int fila = 0; fila<8 ; fila++){
		for(int col= 0; col<8; col++)

				printf("\t|%i", tablero[8][8]);
	printf("\n");



	}

	return EXIT_SUCCESS;
}
