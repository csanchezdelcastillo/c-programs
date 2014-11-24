
#include<stdio.h>
#include<stdlib.h>
#define N 10

int main(int argc,char *argv[]){

	int lista[N];

	for (int a =0; a<N ; a++){

		lista[a] = a * 2;

		printf("%i\n", lista[a]);
	}


	return EXIT_SUCCESS;
}
