#include <stdio.h>
#include <stdlib.h>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_primitives.h"

ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_BITMAP *image = NULL;
ALLEGRO_EVENT_QUEUE *event_queue = NULL;

enum{keyUp,keyDown,keyLeft,keyRight};
bool keys [4] = {keyUp,keyDown,keyLeft,keyRight};



void init(){
	if(!al_init()){
		fprintf(stderr, "failed to start allegro!\n");
		exit(EXIT_FAILURE);
	}
	if(!al_init_primitives_addon()){
		fprintf(stderr, "failed to init image addon.\n");
		exit(EXIT_FAILURE);
	}
	display = al_create_display(800,600);
	if(!display){
		fprintf(stderr, "failed to create a display \n");
		exit(EXIT_FAILURE);
	}
	event_queue = al_create_event_queue();
	if(!event_queue){
		fprintf(stderr, "failed to create event queue!\n");
		al_destroy_display(display);
		exit(EXIT_FAILURE);
	}
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_clear_to_color(al_map_rgb(0,0,0));
	al_flip_display();
}

void UserInput(bool *key){
	return;
	}

void gameloop(){
	while(1){
		ALLEGRO_EVENT ev;
		if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
			break;
		}
		al_draw_circle(20,20,5,al_map_rgb(255,255,255),0);
		al_draw_rectangle(10,10,800-10,600-10,al_map_rgb(255,255,255),0);
		al_flip_display();
	}
}
void cleanUp(){
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
}

int main(void){
	init();
	gameloop();
	cleanUp();
	return 0;
}
