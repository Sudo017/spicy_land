#ifndef Backg_H
#define Backg_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdlib.h>
#include <stdio.h>

struct Background {
	SDL_Rect pos1;
	SDL_Rect pos2;
	SDL_Surface * img;
};

typedef struct Background Background;

void initBackg(Background *Backg);
void initBackgf(Background *Backgf);
void afficherBackg(Background Backg,SDL_Surface *screen);
void libererBackg(Background Backg);


#endif
