#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char comparar_palabras(const char *list[]){

	int compara=0;
	const char *primera,
         	   *segunda;
	primera = list[0];
	segunda = list[1];
	compara = strcmp(primera, segunda);
	//"strcmp" = compara// 

	if(compara == 0)	
		printf("\tLas palabras son iguales.");
	else{
		if(compara > 0)	
			printf(" %s %s", list[1], list[0]);
		else
			printf(" %s %s", list[0], list[1]);
	}
	printf("\n");
}


int main(int argc, char *argv[]){

	const char *list[] = { "holacaracola", "holacaracola"};
	system("clear");
	comparar_palabras(list);

	return EXIT_SUCCESS;
}
