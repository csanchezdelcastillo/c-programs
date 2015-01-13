
#include<stdio.h>
#include<stdlib.h>
#define N 7
int main(int argc,char *argv[]){

    int resultado = 0;

    int numero[8]={2,3,4,5,6,7,3,1};



    for (int i =0 ;i<N ; i++){

	resultado+= numero[i];

	printf("%i\n",resultado);


    }


    return EXIT_SUCCESS;
}
