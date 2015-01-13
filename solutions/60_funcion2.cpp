
#include<stdio.h>
#include<stdlib.h>


double funcion(int x){

    return (x * x) + 3;
}

int main(int argc,char *argv[]){

    int i;

    printf("Introduce el valor de x en la funcion f(x)= (x * x) + 3\n");

    scanf("%i", &i);

    printf("%lf\n", funcion(i));


    return EXIT_SUCCESS;
}
