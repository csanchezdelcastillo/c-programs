#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){

    /**char texto[] = {'h','o','l','a', 0};**/
    char texto[] = "hola";
/**const char *texto= "hola"**/
    char *p = &texto[0];

    while(*p !='\0')
	p++;

    while( p >= texto)
	printf("%c", *p--);

    printf("\n");

    return EXIT_SUCCESS;
}
