
#include<stdio.h>
#include<stdlib.h>

typedef struct TNota{


   double lengua;
   double matematicas;
   double ingles;
}Nota;


int main(int argc,char *argv[]){

   Nota miguel,
	juan;
	
	miguel.lengua=9.2;



	printf("%lf\n",miguel.lengua);


    return EXIT_SUCCESS;
}
