#include <stdio.h>
#include <stdlib.h>
#define N 10
typedef struct TCoordenada{
    int x;
    int y;
} Punto;

typedef Punto Velocidad;

void mover_con(Velocidad v, Punto anillo[N]){
    for (int i=N-1; i>0; i--){

	anillo[i].x = anillo[i-1].x;
	anillo[i].y = anillo[i-1].y;
    }
    // Posicion de un anillo = posicion del anillo anterior.
    anillo[0].x = anillo[0].x + v.x;
    anillo[0].y = anillo[0].y + v.y;
    // Posición del primer anillo (cabeza) = a la que tenía más la velocidad.
}
void imprimir_coordenadas(Punto anillo[N]){

    for(int i=1;i<N;i++){
	I	printf("%3i | %3i",anillo[i].x, anillo[i].y);	
	printf("\n");
    }
}
void incializar(Punto anillo[N]){

    anillo[0].x= 40;
    anillo[0].y=17;

    for(int i=1;i<N;i++){	

	anillo[i].x = anillo[i-1].x +1;
	anillo[i].y = anillo[i-1].y;

    }
}

int main(int argc, char *argv[]) {

    Punto serpiente[N];
    Velocidad v_cabeza = {0, 1};

    incializar(serpiente);
    imprimir_coordenadas(serpiente);
    mover_con(v_cabeza, serpiente);
    imprimir_coordenadas(serpiente);

    return EXIT_SUCCESS;
}
