#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(int argc,char *argv[]){

	for(int a=0;a<N;a++){
		for(int b=0;b<N;b++)
			if(a == 0||b == 0||a == N -1 ||b == N -1){


				printf("*");
			}
			else
				printf(" ");
		printf("\n");
	}


	return EXIT_SUCCESS;
}
