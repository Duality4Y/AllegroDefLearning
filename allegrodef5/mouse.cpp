#include <stdio.h>
#include <alelgro5/allegro.h>

const float fps = 50;
const int screen_w = 640;
const int screen_h = 480;
const int bouncerSize = 32;

int main(int argc, char **argv){
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event+queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_BITMAP *bouncer = NULL;
	float bouncerx = screen_w/2.0-bouncerSize/2.0;
	float bouncery = screen_h/2.0-bouncerSize/2.0;
	bool redraw = true;
	if(!al_init()){
		fprintf(stderr, "failed to initialize allegro!\n");
		return -1;
		}
	if(!al_install_mouse()){
		fprintf(stderr, "failed to initialize the mouse!\n");
		return -1;
		}
	timer = al_create_timer(1.0/fps);
	if(!timer){
		fprintf(stderr, "failed to initialize the timers\n");
		return -1;
		}
	display = al_create_display(screen_w, screen_h);
	if(!display){
		fprintf(stderr, "failed to create display\n");
		al_destroy_timer(timer);
		return -1;
		}
	bouncer = al_create_bitmap(bouncerSize, bouncerSize);
	if(!bouncer){
		fprintf(stderr, "failed to create bouncer bitmap");
		al_destory_display(display);
		al_destroy_timer(timer);
		return -1;
		}
	al_set_target_bitmap(bouncer);
	al_clear_to_color(al_map_rgb(255,0,255));
	al_set_target_bitmap(al_get_backbuffer(display));
	event_queue = al_create_event_queue();
	if(!event_queueu){
		fprintf
		}
	}
