#ifndef FONCTION_H
#define FONCTION_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#define SCREEN_H 750
#define SCREEN_W 1200
typedef struct {
    char *url;
    SDL_Rect pos_img_affiche;
    SDL_Rect pos_img_ecran;
    SDL_Surface *img;
}Background;
typedef struct {
    SDL_Rect position;
    SDL_Surface *images[16];
    int current_image;
    int direction;
    int move;
    int jump;
    int jump_speed;
}Personne;
typedef struct 
{
    SDL_Rect position_map;
    SDL_Surface *images[11];
    int direction_map;
    int move_map;
    int jump_map;
    int jump_speed_map;
    int nbimages;
} Personnemap;
typedef struct {
    SDL_Surface *txt;
    SDL_Rect pos_txt;
    SDL_Colour color_txt;
    TTF_Font *police;
}texte;
typedef struct Time 
{
    SDL_Surface *msg;
    TTF_Font *font;
    SDL_Rect positiontemps;
    int time;
    char timestring[10];
 }Time; 
void initBack(Background *image, char path[],int x,int y);
void afficherBack(SDL_Surface *screen,Background imge);
void initPerso(Personne *p);
void afficherPerso(Personne p, SDL_Surface * screen);
void deplacerPerso(Personne *p,int current_map_level);
void liberer_image(Background imge);
void saut(Personne* p,int *jump,int* jump_speed,int current_map_level);
void animerPerso(Personne* p,int left);
void punch(Personne *perso , int punch_flag);
void scrolling(Background *b, Background *e,Background *c,Background *d,Background *z,Personne *p,int current_map_level, SDL_Surface *screen);
//minimap
void initicon(Personnemap *m);
void afficheicon(Personnemap m, SDL_Surface * screen);
void deplacerPersomap(Personnemap *m);
void sautmap(Personnemap* m,int *jump_map,int* jump_speed_map);
void animerPersomini(Personnemap* m,int left);
void initializerTemps(Time *time);
void afficherTemps(Time *time, SDL_Surface *ecran);
//***********
void initialiser_texte(texte *txte, char police[],int taille,int r,int g,int b, int x, int y);
void afficher_texte(SDL_Surface *screen, texte txte, char message[]);
void afficher_texte4(SDL_Surface *screen,int maxi, texte txte4);
void afficher_texte45(SDL_Surface *screen,int maxi1, texte txte5);
void afficher_imageBMP(SDL_Surface *screen,Background imge);
void liberer_texte(texte txte);
#endif
