
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    for(int c=0; c<6;c++){
	for(int d=0;d<6;d++)
	    printf("\n");
	for(int a=0;a<6;a++){
	    for(int b=0;b<6;b++)
		if(b<3)
		    printf("*",a);
		else
		    printf("-",b);
	}
	printf("\n");
    }
	return EXIT_SUCCESS;
    }
