#ifndef ENIGMES_H_INCLUDED
#define ENIGMES_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_image.h> 
#include "enigme.h"

/*typedef struct
{
SDL_Surface *img;
SDL_Rect position;
}enigme;*/
typedef struct 
{
 char question[200];
 char r1[50];
 char r2[50];
 char solution[50];

SDL_Surface *q;
SDL_Surface *repp1;
SDL_Surface *repp2;
SDL_Surface *s;

 SDL_Rect pos_q;
SDL_Rect pos_repp1;
SDL_Rect pos_repp2;
SDL_Rect pos_s;
 

}enigme;


int aleatoire(int n);
int compter_nombre_de_ligne_fichier(char* nom_fich);
void return_question_repense(SDL_Surface *screen,char nom_fich[] ,char quest[200], char rep1 [50],  char rep2 [50], char solution [50]);

int resolution (char* nom_fich,char quest[200], char rep1 [50],  char rep2 [50], char solution [50], SDL_Surface *screen);
//void animation_temps(time_t begin,int limite,SDL_Surface *screen);
void afficher_resultat (SDL_Surface * screen,int r);
//int LOAD (personne *p, background *b , char * nomfichier);
//int resolution_enigme (SDL_Surface *screen,enigme e,SDL_Event event );
#endif//ENIGME_H_INCLUDED
