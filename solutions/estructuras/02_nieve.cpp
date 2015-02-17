
#include<stdio.h>
#include<stdlib.h>
#define COPOS 0x100
#include <ncurses.h>

struct TCopo{
    double x;
    double y;
}
int main(int argc,char *argv[]){
	

    int max_y,max_x;

    struct TCOPO[COPOS];

    initscr();
    cur_set(false);
	
    getmaxyx(stdsrc,max_y,max_x);
    inicializar(copo,max_x);
    cur_set(true);
    
    endwin();

    return EXIT_SUCCESS;
}
