#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include <allegro5/allegro_native_dialog.h>

int main(){
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP *image = NULL;
	if(!al_init()){
		al_show_native_message_box(display, "Error","error","Failed to initialized allegro!",NULL,ALLEGRO_MESSAGEBOX_ERROR);
		return 0;
		}
	if(!al_init_image_addon()){
		al_show_native_message_box(display, "error","error","Failed to initialize al_init_image_addon!",NULL,ALLEGRO_MESSAGEBOX_ERROR);
		return 0;
		}
	display = al_create_display(800,600);
	if(!display){
		al_show_native_message_box(display,"error","error","failed to initialize display!",NULL, ALLEGRO_MESSAGEBOX_ERROR);
		return 0;
		}
	image = al_load_bitmap("image.png");
	if(!image){
		al_show_native_message_box(display,"error","error","failed to initialize/load image",NULL, ALLEGRO_MESSAGEBOX_ERROR);
		al_destroy_display(display);
		return 0;
		}
	al_draw_bitmap(image,200,200,0);
	al_flip_display();
	al_rest(2);
	al_destroy_display(display);
	al_destroy_bitmap(image);
	}
