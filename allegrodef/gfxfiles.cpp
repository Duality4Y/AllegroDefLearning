#include <allegro.h>

BITMAP *xSprite;
BITMAP *oSprite;

int main(){
	allegro_init();
	install_keyboard();
	set_color_depth(16);
	set_gfx_mode(GFX_AUTODETECT,640,480,0,0);
	xSprite = load_bitmap("x.bmp",NULL);
	oSprite = load_bitmap("o.bmp",NULL);
	acquire_screen();
	}
