#include<stdio.h>
#include<stdlib.h>
#define N 0x10

int main(int argc, char *argv[]){

    int f[N]; //declarar un array 

    f[1] = f[0] = 1;

    // f[2] = f[1] + f[0];

    // f[3] = f[2] + f[1];

    // f[4] = f[3] + f[2];

 
    for(int i=2;i<N;i++)
    f[i] = f[i-1] + f[i-2];

    for(int i=0; i<N;i++)
	printf(" %i",f[i]);
    printf("\n");

	return EXIT_SUCCESS;
}


