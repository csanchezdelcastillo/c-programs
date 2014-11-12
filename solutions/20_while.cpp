#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){


    int numeros;
    double media,
	   numero=0;
    numeros = atoi(argv[1]);
    system("toilet -Fborder -Fgay Media");
    while(numero<=0){
	for(int a=0;a<numeros;a++){
	    printf("introduce un numero: \n");
	    scanf("%2lf", &numero);

	    media+=numero; 
	}
	media/=numeros;
	printf("la media de tus numeros es : %2lf\n",media);
    }	

    return EXIT_SUCCESS;
}
