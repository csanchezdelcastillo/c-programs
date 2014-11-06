#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){


    int numeros=5;
    double media,
	numero=0;

for(int introducido=0;introducido<numeros;introducido++){
    printf("introduce un numero\n");
    scanf("%2lf", &numero);
	media+=numero;
}
while(numero<=0)
    	media/=numeros;
	printf("la media de tus numeros es : %2lf\n",media);
	

return EXIT_SUCCESS;
}
