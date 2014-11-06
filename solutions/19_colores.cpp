#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    int rojo,
	azul,
	amarillo;

    printf("tu color es rojo?\n");
    scanf("%i",&rojo);

    if(rojo==1)
	printf("Es rojo\n");
    else
	printf("No es\n");

    printf("tu color es azul?\n");
    scanf("%i",&azul);

    if(azul==1)
	printf("Es azul\n");
    else
	printf("No es\n");

    printf("tu color es amarillo?\n");
    scanf("%i",&amarillo);

    if(amarillo==1)
	printf("Es amarillo\n");
    else
	printf("No es\n");

    if(rojo==1 && amarillo== 1 )
	printf("es naranja\n");

    if(rojo==1 && azul==1)

	printf("es morado\n"); 

    if(amarillo==1 && azul==1)

	printf("es verde\n");
    if(amarillo==1 && azul == 1 && rojo ==1)

	printf("\tes blanco\n");

    if(amarillo==0 && azul == 0 && rojo ==0)

	printf("\tes negro\n");
/*Otro FORMA DE HACER EL EJERCICIO
 * if(rojo)
 * 	if(amarillo)
 * 	if(azul)
 * 		printf("blanco");
 * 	else
 * 		printf("Naranja");
 * 	else
 * 	    if(azul)
 * 	    printf("Morado");
 * 	    else
 * 	    printf("Rojo");
 *
 * else
 *
 * 	if(amarillo)
 * 	   if(azul)
 * 		printf("verde);
 *
 * 		else
 * 		printf("amarillo");
 * 	else
 *		if(azul)
 *		pritf("azul");
 *
 *		else
 *		printf("negro");
 */






    return EXIT_SUCCESS;

}
