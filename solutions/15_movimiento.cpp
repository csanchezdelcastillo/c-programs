#include<stdio.h>
#include<stdlib.h>
#include<ncurses.h>

struct TPunto{
    double x;
    double y;
};
void muestra(struct TPunto datos){
    printf("\n\t%.2lf, %.2lf\n", datos.x,datos.y);
};

int main(int argc, char *argv[]){

    struct TPunto punto= { 10, 0},
		  velocidad,
		  aceleracion= { 0, -10};

    printf("\n\tIntroduce la Velocidad (x,y):\t");

    scanf(" (%lf,%lf)", &velocidad.x, &velocidad.y);

    while(punto.y >= 0){
	velocidad.x += aceleracion.x;
	velocidad.y += aceleracion.y;
	punto.x += velocidad.x;
	punto.y += velocidad.y;
	muestra(punto);
    }

    return EXIT_SUCCESS;
}
