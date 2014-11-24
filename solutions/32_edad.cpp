
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	int edad;
	
	printf("introduce edad");
	scanf("%i",&edad);
        if(edad >= 18)
	printf("%i\n", edad);
        else
        printf("eres un niñato\n");




	return EXIT_SUCCESS;
}
