
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    int r[3]= {2,3,4};

    int v[3]= {3,4,5};

    int resultado;

    system("toilet -f term -F border --gay vectores");

    resultado = (r[0]+ r[1] + r[2])*(v[0]+v[1]+v[2]);

    printf("%i\n",resultado);



    return EXIT_SUCCESS;
}
