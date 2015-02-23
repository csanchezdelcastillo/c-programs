#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

	FILE *pf;
	char buffer[0x100];

	pf = fopen("carta.txt","r+");
	
	fgets(buffer,0x20,pf);
	fseek(pf,0,SEEK_END);
	fprintf(pf,"%s",buffer);

	fclose(pf);



    return EXIT_SUCCESS;
}
