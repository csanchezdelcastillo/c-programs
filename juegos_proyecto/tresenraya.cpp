#include<stdio.h>
#include<stdlib.h>
#include<ncurses.h>

void loop (char c [3][3]);

void intro_num (char c [3][3]);

void tablero (char c [3][3]);

void intro_yo (char c [3][3]);

int main(int argc, char *argv[]){

    char c [3][3]; //** declaro una matriz de tipo caracter de 3x3**//
    //**
    loop (c);  //**llama a las funciones y refresca la pantalla **//

}


void loop (char c [3][3]){
    intro_num (c);
    tablero (c);
    intro_yo (c);
    tablero (c);
}

void intro_num (char c [3][3]){   //** FUNCION PARA DARLE VALORES A LA MATRIZ//RELLENAR **//


    char aux; //** variable de tipo caracter **//

    aux = '1';

    for(int a = 0; a<3; a++){

	for(int b = 0; b<3; b++){

	    c [a][b] = aux++; //** de tal forma que si c de [0][0] = a 1 y queremos que amuente en 1 .
	}
    }
}

void intro_yo (char c[3][3]){ //** esta funcion la utilizo para introducir una ficha en una casilla del 1 al 9 ... donde si d = 1 es que esta ocupada **//

    int a,
	b,
	d;
    char aux;
    do{
	do{
	    printf(" Introduce tu casilla:\n ");
	    __fpurge();
	    scanf("%c",&d);
	}while (aux<1 || aux>9)
	switch (aux) {
	    case '1' : {
			   a = 0;
			   b = 0;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;

	    case '2' : {
			   a = 0;
			   b = 1;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;

	    case '3' : {
			   a = 0;
			   b = 2;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;
	    case '4' : {
			   a = 1;
			   b = 0;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;
	    case '5' : {
			   a = 1;
			   b = 1;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;
	    case '6' : {
			   a = 1;
			   b = 2;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;
	    case '7' : {
			   a = 2;
			   b = 0;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;
	    case '8' : {
			   a = 2;
			   b = 1;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;
	    case '9' : {
			   a = 2;
			   b = 2;
			   if (c[a][b] == 'x' || c[a][b] == 'o')
			       d = 1;
			   printf(" ESA CASILLA ESTA OCUPADA \n\n ");
		       }
		       break;
	}
    }while (d == 1);
    c [a][b] = 'x';
}



void tablero (char c[3][3]){ //** Pintar tablero**//
    for(int a=0;a<3;a++){
	for(int b=0;b<3;b++)
	    if(b<2)
		printf(" %c | ",c [a][b]);
	    else
		printf(" %c ",c [a][b]);
	if(a<2)
	    printf("\n.............\n");      
    }
    printf("\n\n");
}


