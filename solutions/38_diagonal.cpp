#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(int argc,char *argv[]){

	for(int a=0;a<N;a++){
		for(int b=0;b<N;b++)
			if(a == b){


				printf("*");
			}
			else
				printf(" ");
		printf("\n");
	}


	return EXIT_SUCCESS;
}
