

#include<stdio.h>
#include<stdlib.h>


double funcion(int x){

    return (x * x) - 3;
}

int main(int argc,char *argv[]){


    for(double i = -20 ; i<20 ; i+= 0.1  ){


	printf("%.2lf|", funcion(i));
    }

    printf("\n");

    return EXIT_SUCCESS;
}
