
#include<stdio.h>
#include<stdlib.h>
#define PASO 0.1

double f(double x){

    return x + x -3;
}


int main(int argc,char *argv[]){


    
    for(double x = 0 ; x < 10 ; x+=PASO)

	printf("%.1lf\t %.3lf\t%.3lf\n",x,f(x),( f(x+PASO) - f(x) )/ PASO );
 


    return EXIT_SUCCESS;
}
