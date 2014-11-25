
#include<stdio.h>
#include<stdlib.h>
#define C 9

int main(int argc,char *argv[]){


    for(int a=0;a<C;a++){

	for(int b=0;b<C;b++)

	    if(a==0 || a==8){
		printf("*");


	    }else 
		printf("o");



	printf("\n");


    }


    return EXIT_SUCCESS;
}
