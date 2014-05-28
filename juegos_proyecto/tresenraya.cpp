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
		system("clear");//** borra todo lo que haya en pantalla**//

		tablero (c);

		if(contador % 2 == 0){       //** si 'contador' resto 2 ("JUGADORES") es igual a 0 entonces -> vamos nosotros("intro_yo")**//

			intro_yo (c);
		}
		else {
			no_inteligencia (c);
		}	
		comprobador = ganador (c);
		contador++;
	}while(contador <= 9 && comprobador == 2);

	system("clear");

	tablero (c);

	if ( comprobador == 0){
		printf("\t Enhorabuena has ganado !\n");
	}
	else if( comprobador == 1){
		printf("\t Has perdido :(\n");
	}
	else{
		printf("\t Has empatado :/ \n");
	}


}

void intro_num (char c[3][3]){   //** FUNCION PARA DARLE VALORES A LA MATRIZ//RELLENAR **//


	char aux; //** variable de tipo caracter **//

	aux = '1';

	for(int a = 0; a<3; a++){

		for(int b = 0; b<3; b++){

			c[a][b] = aux++; //** de tal forma que si c de [0][0] = a 1 y queremos que amuente en 1 .
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
			printf(" Introduce tu casilla:\t ");
			__fpurge(stdin);
			scanf("%c",&aux);
		}while (aux < '1' || aux > '9');
		switch (aux) {
			case '1' : {
					   a = 0;
					   b = 0;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;

			case '2' : {
					   a = 0;
					   b = 1;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;

			case '3' : {
					   a = 0;
					   b = 2;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;
			case '4' : {
					   a = 1;
					   b = 0;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;
			case '5' : {
					   a = 1;
					   b = 1;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;
			case '6' : {
					   a = 1;
					   b = 2;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;
			case '7' : {
					   a = 2;
					   b = 0;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;
			case '8' : {
					   a = 2;
					   b = 1;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;
			case '9' : {
					   a = 2;
					   b = 2;
					   if (c[a][b] == 'X' || c[a][b] == 'O')
						   d = 1;
					   printf(" ESA CASILLA ESTA OCUPADA \n ");
				   }
				   break;
		}
	}while (d == 1);
	c[a][b] ='X';
}


void no_inteligencia (char c[3][3]){
	int a,
	    b,
	    d;	
	srand(time(NULL));
	do{
		a= rand() % 3;
		b= rand() % 3;
		d= 0;
		if(c[a][b] == 'X' || c[a][b] == 'O'){
			d= 1;
		}
	}while(d==1);

	c[a][b] = 'O';
}




void tablero (char c[3][3]){ //** Pintar tablero**//
	for(int a=0;a<3;a++){
		for(int b=0;b<3;b++)
			if(b<2)
				printf(" %c | ",c[a][b]);
			else
				printf(" %c ",c[a][b]);
		if(a<2)
			printf("\n.............\n");      
	}
	printf("\n\n");
}

int ganador (char c[3][3]){	//**funcion que comprueba si hemos ganado**//

	if(c[0][0] == 'X' || c[0][0] == 'X'){
		if(c[0][0] == c[0][1] && c[0][0] == c[0][2]){
			if(c[0][0] == 'X')
				return 0; //** he ganado! **//

		}
		else{
			return 1; //** he perdido :( **//	

		}


		if(c[0][0] == c[1][0] && c[0][0] == c[2][0]){
			if(c[0][0] == 'X')
				return 0; //** he ganado! **//

		}
		else{
			return 1; //** he perdido :( **//	

		}

	}
	if(c[1][1] == 'X' || c[1][1] == 'O'){
		if(c[1][1] == c[0][0] && c[1][1] == c[2][2]){
			if(c[1][1] == 'X')
				return 0;
		}
		else{
			return 1;
		}

		if(c[1][1] == c[1][0] && c[1][1] == c[1][2]){
			if(c[1][1] == 'X')
				return 0; //** he ganado! **//

		}
		else{
			return 1; //** he perdido :( **//	

		}

		if(c[1][1] == c[2][0] && c[1][1] == c[0][2]){
			if(c[1][1] == 'X')
				return 0; //** he ganado! **//

		}
		else{
			return 1; //** he perdido :( **//	

		}
		if(c[1][1] == c[2][1] && c[1][1] == c[0][1]){
			if(c[1][1] == 'X')
				return 0; //** he ganado! **//

		}
		else{
			return 1; //** he perdido :( **//	

		}
	}
	if(c[2][2] == 'X' || c[2][2] == 'O'){
		if(c[2][2] == c[2][1] && c[2][2] == c[2][0]){
			if(c[2][2] == 'X')
				return 0;
		}
		else{
			return 1;
		}
		if(c[2][2] == c[0][2] && c[2][2] == c[1][2]){
			if(c[2][2] == 'X')
				return 0;
		}
		else{
			return 1;
		}
	}


	return 2;//** devuelve 2 si no ha pasado nada **//
}

