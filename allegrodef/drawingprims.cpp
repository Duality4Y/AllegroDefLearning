#include <allegro.h>

int main(){
	//initiate allegro
	allegro_init();
	//initiate keyboard/mouse
	install_keyboard();
	//initiate a screen
	set_gfx_mode(GFX_AUTODETECT, 640, 480, 0,0);
	//create a screen to draw on
	acquire_screen();
	//set the background to white
	clear_to_color(screen, makecol(255,255,255));
	//color a pixel
	putpixel(screen,5,5,makecol(128,200,23));
	
	circle(screen,20,20,10,makecol(255,0,0));
	circlefill(screen,50,50,25,makecol(0,255,0));
	rect(screen,70,70,90,90,makecol(0,0,255));
	rectfill(screen,100,100,120,120,makecol(12,34,200));
	line(screen,130,130,150,150,makecol(255,0,0));
	line(screen,130,130,170,130,makecol(255,0,0));
	line(screen,170,130,150,150,makecol(255,0,0));
	floodfill(screen,140,135,makecol(255,255,0));
	triangle(screen,200,200,200,220,220,210,makecol(213,79,40));
	release_screen();
	readkey();
	return 0;
	}
END_OF_MAIN();
