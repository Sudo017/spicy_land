#include <SDL/SDL.h>
#include "Image.h"
#include <SDL/SDL_image.h>


void initbuttonA(Image *buttonA)
{
	buttonA->img = IMG_Load("buttonA.png");
		if (buttonA->img == NULL) {
			return ;
		}
	buttonA->pos1.x=200;
	buttonA->pos1.y=150;
	buttonA->pos1.w=buttonA->img->w;
	buttonA->pos1.h=buttonA->img->h;

        buttonA->pos2.x=0;
        buttonA->pos2.y=0;
        buttonA->pos2.w=buttonA->img->w;
        buttonA->pos2.h=buttonA->img->h;
}

void initbuttonB(Image *buttonB)
{
	buttonB->img = IMG_Load("buttonB.png");
		if (buttonB->img == NULL) {
			return ;
		}
	buttonB->pos1.x=200;
	buttonB->pos1.y=300;
	buttonB->pos1.w=buttonB->img->w;
	buttonB->pos1.h=buttonB->img->h;

        buttonB->pos2.x=0;
        buttonB->pos2.y=0;
        buttonB->pos2.w=buttonB->img->w;
        buttonB->pos2.h=buttonB->img->h;
}

void initbuttonC(Image *buttonC)
{
	buttonC->img = IMG_Load("buttonC.png");
		if (buttonC->img == NULL) {
			return ;
		}
	buttonC->pos1.x=200;
	buttonC->pos1.y=450;
	buttonC->pos1.w=buttonC->img->w;
	buttonC->pos1.h=buttonC->img->h;

        buttonC->pos2.x=0;
        buttonC->pos2.y=0;
        buttonC->pos2.w=buttonC->img->w;
        buttonC->pos2.h=buttonC->img->h;
}
void initBackground(Image *Backg)
{
Backg->img= IMG_Load("Backg.png");
	if (Backg->img == NULL) {
		printf("Unable to load bitmap: %s\n", SDL_GetError());
		return;
}
	Backg->pos1.x=0;
	Backg->pos1.y=0;
        Backg->pos2.x=0;
        Backg->pos2.y=0;
        Backg->pos2.w=(SCREEN_W);
        Backg->pos2.h=(SCREEN_H);
}
void liberer(Image A)
{
		SDL_FreeSurface(A.img);
}
void afficher(Image p,SDL_Surface *screen)
{
SDL_BlitSurface(p.img,&p.pos2,screen,&p.pos1);
}

