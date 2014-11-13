#include <stdio.h>
#include <stdlib.h>

#define N 8

void poner_presentacion(){//**declarar una funcion/void -> no devuelve nada "funcion vacia"**//
    system("clear");
    system("figlet Torre");
    system("toilet -f term --gay -F border Posición de la Torre");


}
int main(int argc, char *argv[]) {

    bool come = false;
    int fila_torre, col_torre;
    int negras[N][N] = {
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0}
    };

    poner_presentacion();//**hacer una llamada de la funcion**//
    printf("x, y: ");
    scanf("%i, %i", &col_torre, &fila_torre);
    printf("\n");

    for (int columna=0; columna<N && !come; columna++)
	if (negras[fila_torre][columna])
	    come = true;

    //** tiene k darte que columna es igual a N y come es falso**//

    for (int fila=0; fila<N && !come; fila++)
	if (negras[fila][col_torre])
	    come = true;

    for(int fila=0;fila<N;fila++){
	for(int col=0; col<N;col++)
	    if(fila == fila_torre && col == col_torre)

	    printf("%s", negras[fila][col]?"X":"O"); //**si es verdadero entonces pongo una X si es falso(igual a cero) pon un espacio**//
	printf("\n");
    }
    printf("La torre %scome.\n\n",come ? " " : "no ");

    return EXIT_SUCCESS;
}
