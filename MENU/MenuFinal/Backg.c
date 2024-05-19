#include <SDL/SDL.h>
#include "Backg.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>

void initBackg(Background *Backg)
{
Backg->img= IMG_Load("backg.png");
	if (Backg->img == NULL) {
		printf("Unable to load bitmap: %s\n", SDL_GetError());
		return;
}
	Backg->pos1.x=0;
	Backg->pos1.y=0;
        Backg->pos2.x=0;
        Backg->pos2.y=0;
        Backg->pos2.w=800;
        Backg->pos2.h=533;
}

void initBackgf(Background *Backgf)
{
Backgf->img= IMG_Load("backgf.png");
	if (Backgf->img == NULL) {
		printf("Unable to load bitmap: %s\n", SDL_GetError());
		return;
}
	Backgf->pos1.x=0;
	Backgf->pos1.y=0;
        Backgf->pos2.x=0;
        Backgf->pos2.y=0;
        Backgf->pos2.w=1800;
        Backgf->pos2.h=881;
}

void libererBackg(Background Backg)
{
		SDL_FreeSurface(Backg.img);
}

void afficherBackg(Background Backg,SDL_Surface *screen)
{
SDL_BlitSurface(Backg.img,&Backg.pos2,screen,&Backg.pos1);
}

