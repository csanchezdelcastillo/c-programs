#include<stdio.h>
#include<stdlib.h>

/*#define N 24
 *#define SUELDO 1000
 */

int main(){

    int sueldo[24];

    for (int i=0 ; i<24 ; i++){
	sueldo[i]= 1000;

	printf("En la celda %i hay el numero %i\n",i, sueldo[i]);
    }
    return EXIT_SUCCESS;

}
