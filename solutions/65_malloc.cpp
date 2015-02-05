
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    int n = 0;
    bool seguir = false;
    double buffer;
    double *p_nota;
    
    do{
	if(buffer<0)
	    seguir=false
	else {
	    n++;
	    p_nota = (double*) realloc(p_nota, n * sizeof(double));
	    p_nota(n-1)=buffer;
	}while(seguir);

    };

	for(int i=0;i<n;i++)
	    printf("%.2lf",buffer);
	free(buffer);



	
	return EXIT_SUCCESS;
    }
