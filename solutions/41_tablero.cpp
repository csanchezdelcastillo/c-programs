
#include<stdio.h>
#include<stdlib.h>
#define N 5

int main(int argc,char *argv[]){

    int tablero[N];

    tablero[1]= tablero[0]=1 ;


    for(int i=2;i<N;i++)/** la suma de los dos anteriores**/

	tablero[i] = tablero[i-1] + tablero[i-2];

    for(int i=0;i<N; i++)


	printf("| %i |",tablero[i]);

    printf("\n");





    return EXIT_SUCCESS;
}
