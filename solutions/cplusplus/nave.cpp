#include <stdio.h>
#include <stdlib.h>
#include <allegro.h>

int main(){

    allegro_init();
    install_keyboard();
    if (set_gfx_mode(GFX_AUTODEFECT,320,200,0,0)<0){

	printf("error al iniciar modo grafico\n");
	allegro_exit();
	exit(-1);
    }
    textout(screen,font, " AirShip ",0,0,15);
    readkey();
    allegro_exit();
    return 0;
}

