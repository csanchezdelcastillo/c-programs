
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

   double *p_nota;

   p_nota = malloc(sizeof(double));

   printf("Dime tu nota:");

   scanf("%lf",&nota);

   printf("tu nota es %.2lf\n", nota);





    return EXIT_SUCCESS;

}
