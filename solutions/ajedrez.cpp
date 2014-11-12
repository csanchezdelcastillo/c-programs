
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){


    int tablero[8][8] = {

	{'1','0','0','0','0','0','0','0'},
	{'0','0','0','0','0','0','0','0'},
	{'0','1','0','0','0','0','0','0'},
	{'0','0','0','0','0','0','0','0'},
	{'0','0','1','0','0','0','1','0'},
	{'0','0','0','0','0','0','0','0'},
	{'0','1','0','0','0','0','1','0'},
	{'0','0','0','0','0','0','1','1'}

    };

    int x,
	y;
 
    /*jugador*/

    printf("porfavor introduzca la ficha: ");
    
    scanf("%i %i", &x, &y);

    if( tablero[x][y] == '1')

	printf("\n\thay ficha\n");
    else

	printf("\n\tno hay ficha\n");


    /*fichas*/

    /* tablero [x+2][y+1] -> caballo*/





    return EXIT_SUCCESS;
}
