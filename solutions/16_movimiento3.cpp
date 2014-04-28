#include<stdio.h>
#include<stdlib.h>
#include<ncurses.h>

struct TPunto{
    double x;
    double y;
};
struct TMovil{
    struct TPunto posicion;
    struct TPunto velocidad;
    struct TPunto aceleracion;
};
void muestra(struct TMovil datos){
    printf("\nPOSICION:\t%.2lf, %.2lf\n", datos.posicion.x,datos.posicion.y);
    printf("\nVELOCIDAD:\t%.2lf, %.2lf\n", datos.velocidad.x,datos.velocidad.y);
    printf("\nACELERACION:\t%.2lf, %.2lf\n", datos.aceleracion.x,datos.aceleracion.y);
};

void pintar(struct TMovil movil){
    mvprintw(20  -movil.posicion.y, -movil.posicion.x, "º");
    refresh();
}
int main(int argc, char *argv[]){

    struct TMovil proyectil= { 
	{10, 0},
	{0, 0},
	{0, -10}
    };
    printf("\n\tIntroduce la Velocidad (x,y):\t");

    scanf(" (%lf,%lf)", &proyectil.velocidad.x, &proyectil.velocidad.y);
    initscr();
    clear();

    while(proyectil.posicion.y >= 0){
	pintar(proyectil);

	proyectil.velocidad.x += proyectil.aceleracion.x;
	proyectil.velocidad.y += proyectil.aceleracion.y;
	proyectil.posicion.x += proyectil.velocidad.x;
	proyectil.posicion.y += proyectil.velocidad.y;
	muestra(proyectil);
    }
    getch();
    endwin();
    return EXIT_SUCCESS;
}
