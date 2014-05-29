#include<stdio.h>
#include<stdlib.h>
#include<ncurses.h>
#include<stdio_ext.h>
#include<time.h>
#include<unistd.h>

void loop (char c [3][3]);

void intro_num (char c [3][3]);

void tablero (char c [3][3]);

void intro_yo (char c [3][3]);

void no_inteligencia (char c [3][3]);

int ganador (char c [3][3]);

int main(int argc, char *argv[]){

	char c [3][3]; //** declaro una matriz de tipo caracter de 3x3**//
	//**
	loop (c);  //**llama a las funciones y refresca la pantalla **//
	fgetc(stdin);
	return 0;
}


void loop (char c[3][3]){   //** Turnos **//
	int contador,
	    comprobador;

	contador = 0;

	intro_num (c);


	do{
		//** borra todo lo que haya en pantalla**//
		system("clear");
		tablero (c);
		printf("\n");

		if(contador % 2 == 0){       //** si 'contador' resto 2 ("JUGADORES") es igual a 0 entonces -> vamos nosotros("intro_yo")**//

			intro_yo (c);
		}
		else {
			no_inteligencia (c);
