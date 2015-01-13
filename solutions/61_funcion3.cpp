
#include<stdio.h>
#include<stdlib.h>

//double coef[] = {2, -4, 3}//intentar hacerlo para (a*a)+b+c //
//


double coef ( int a, int b , int c,int x){


    return a * x * x +  2*(b * x)+ c;
}


int main(int argc,char *argv[]){

    int a;

    int b;

    int c;

    int x;
	



    printf("Introduce el valor de a b c  en la funcion f(x)= (a * a) 2b + c\n");

    scanf("%i,%i,%i, %i", &a, &b, &c, &x);

    printf("%lf\n", coef(a,b,c,x));


    return EXIT_SUCCESS;
}
