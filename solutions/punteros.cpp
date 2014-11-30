#include<stdio.h>
#include<stdlib.h>
#define N 0x10

int main(int argc,char *argv[]){


	int lista[N];
	int *p=lista;
	//** int *p=&lista[0]**//
	for (int i=0;i<N;i++)
		*(p + i)=2 *i;
	for (int i=0;i<N;i++)
		printf(" %i\n", *(p+i));



	return EXIT_SUCCESS;
}
