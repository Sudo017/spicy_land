
#ifndef ENEMY_H
#define ENEMY_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
/*#define SCREEN_H 480
#define SCREEN_W 1440*/
#include"fonction.h"

typedef struct {
SDL_Rect pos_img_affiche;
SDL_Rect frame;
SDL_Surface *sprite;
int direction1;
int direction; 
}enemi;

void initialisation_enemy(enemi *e);

void initialisation_enemy1(enemi *e);

void afficher_enemy(SDL_Surface *screen, enemi e);

void animer_enemy(enemi *e);

int detect_collision(enemi e, Personne e1);

void deplacer_enemy(enemi *e );

void deplacer_IA(enemi *e , Personne perso , int speed);

void liberer_enemy(enemi e);

int Init();

void initialiser_audiobref(Mix_Chunk **music , char path[]);

void liberer_musiquebref (Mix_Chunk **music);


#endif
