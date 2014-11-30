
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){


	for(int d=0;d<3;d++){
		for(int e=0;e<3;e++)

			for(int a=0;a<3;a++){
				for(int b=0;b<3;b++)
					printf("*");
				printf("\n");
			}
		for(int c=0;c<3;c++){
			for(int c=0;c<3;c++)
				printf("-");
			printf("\n");
		}

	}


	return EXIT_SUCCESS;
}
