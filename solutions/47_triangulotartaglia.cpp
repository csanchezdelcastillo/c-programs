
#include<stdio.h>
#include<stdlib.h>
#define N 10

int main(int argc,char *argv[]){

    int i[N][N];

    for( int col = 1; col<N ; col++)

	i[0][col] = 0;

    for( int fila = 0; fila<N; fila++)

	i[fila][0] = 1;

    for( int fila = 1; fila<N; fila++)
	for( int col = 1; col<N ; col++)
	    i[fila][col]= i[fila-1][col] + i[fila-1][col-1];

    for( int fila = 0; fila<N; fila++){
	for( int col = 0; col<N ; col++)

	    printf(" %4i", i[fila][col]);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
