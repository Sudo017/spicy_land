#ifndef Image_H
#define Image_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#define SCREEN_W 800
#define SCREEN_H 533

struct Image {
	SDL_Rect pos1;
	SDL_Rect pos2;
	SDL_Surface * img;
};
typedef struct Image Image;

void initbuttonA(Image *buttonA);
void initbuttonB(Image *buttonB);
void initbuttonC(Image *buttonC);
void initBackground(Image *Backg);
void liberer(Image A);
void afficher(Image p,SDL_Surface *screen);
#endif
