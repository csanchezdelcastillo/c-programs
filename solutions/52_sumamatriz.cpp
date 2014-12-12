
#include<stdio.h>
#include<stdlib.h>
#define N 8
#define M 8

int main(int argc,char *argv[]){


	double A[N][M] = {
	    { 1, 1, 1, 1, 1, 1, 1, 1},
	    
	    { 4, 2, 1, 7, 1, 0, 9, 1},
	    
	    { 1, 1, 8, 4, 6, 1, 3, 1},
	    
	    { 2, 1, 1, 9, 7, 9, 1, 1},
	    
	    { 8, 1, 2, 1, 1, 9, 1, 1},
	    
	    { 2, 1, 3, 2, 1, 6, 1, 3},
	    
	    { 3, 1, 9, 1, 3, 5, 1, 8},
	    
	    { 4, 1, 6, 1, 1, 1, 1, 9},
	    
	};
	double media[N][M];

	for(int fila=1;fila<N-1;fila++)
	    for(int col=1; col<M-1; col++)
		media[fila][col]= (A[fila][col-1] + A[fila-1][col] + A[fila][col +1]+ A[fila +1][col])/4;

	for(int fila=0;fila<N;fila++){
	    intint  for(int col=0;col<N;col++)
		printf("%2.lf", media[fila][col]);
	    printf("\n");
	}

    return EXIT_SUCCESS;
}
