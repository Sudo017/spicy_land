#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "enigme.h"
#include <time.h>
	
	/*void init_enigme(enigme * e)
	{
int p;
int img;
		e->p.x=0;
		e->p.y=0;	
		e->img=NULL;
	
	
	}*/


int aleatoire(int n)
{
    int alea;
    do {
        srand(time(NULL));
        alea = 1 + rand() % n;
    } while (alea == 0 || alea > n);
    return alea;
}

int compter_nombre_de_ligne_fichier(char* nom_fich)
{
int i;
char quest[200], rep1 [50],  rep2 [50],  solution[50];
  FILE* f=NULL;
char chaine[265]="";
f=fopen("fichier.txt","r");
if(f!=NULL)
{
  //(fscanf(f,"%s.%s.%s.%s. \n",quest,rep1,rep2,solution)!=EOF );
   while(fgets(chaine,256,f)!=NULL)
    {
        i++;  // i contient le nmbre de ligne de ton fichier
    }
fclose(f);
}

return i;
}



void return_question_repense(SDL_Surface *screen,char* nom_fich,char quest[200], char rep1 [50],  char rep2 [50], char solution [50])
{
FILE* f=NULL;
TTF_Font *police1 =NULL;
TTF_Font *police2 =NULL;
SDL_Surface *fonds=NULL;
SDL_Surface *question=NULL;
SDL_Surface *r1=NULL;
SDL_Surface *r2=NULL;
SDL_Surface *solu=NULL;
SDL_Rect position_question;
SDL_Rect position_r1;
SDL_Rect position_r2;
//SDL_Rect position_solution;

 SDL_Color coulerNoir= {255,0,0};
TTF_Init();

  police1 = TTF_OpenFont("police1.ttf",45);
  police2 = TTF_OpenFont("police2.ttf",65);



SDL_Rect position_fonds;
position_fonds.x=0;
position_fonds.y=0;
fonds=IMG_Load("font.png");


int n_ligne=0;
int ligne,j,k=0;
int trouve;

//n_ligne=0;
trouve=0;
char chaine[256]="";
char caractere;

ligne=compter_nombre_de_ligne_fichier("fichier.txt");
j=aleatoire(ligne);      
f=fopen("fichier.txt","r");
if(f!=NULL)
{

fscanf(f,"%s/%s/%s/%s/\n",quest,rep1,rep2,solution)!=EOF && (j!=n_ligne) ;

while (fgets(chaine,256,f)!=NULL && j!=n_ligne)

   { n_ligne ++;}

if(j==n_ligne)
{
k=0;

do {
     caractere=fgetc(f);
     quest[k]=caractere;
     k++;
   }while(caractere!='?');


k=0;

do {
     caractere=fgetc(f);
     rep1[k]=caractere;
     k++;
   }while(caractere!='.');

k=0;

do {
     caractere=fgetc(f);
     rep2[k]=caractere;
     k++;
   }while(caractere!='.');

k=0;

do {
     caractere=fgetc(f);
     solution[k]=caractere;
     k++;
   }while(caractere!='.');

}

fclose(f);
}


question =TTF_RenderText_Blended(police1,quest,coulerNoir);
position_question.x=110;
position_question.y=200;

 r1 =TTF_RenderText_Blended(police2,rep1,coulerNoir);

 position_r1.x=200;
 position_r1.y=300;
 
r2 =TTF_RenderText_Blended(police2,rep2,coulerNoir);


 position_r2.x=200;
 position_r2.y=450;
printf("rep 1 x: %d y:%d\n", position_r1.x, position_r1.y);
 printf("rep 2 x: %d y:%d\n", position_r2.x, position_r2.y);


SDL_BlitSurface(fonds,NULL,screen,&position_fonds);
SDL_BlitSurface(question,NULL,screen,&position_question);
SDL_BlitSurface(r1,&position_fonds,screen,&position_r1);
SDL_BlitSurface(r2,&position_fonds,screen,&position_r2);

SDL_Flip(screen);

TTF_CloseFont(police1);
TTF_CloseFont(police2);
TTF_Quit();


}

int resolution(char* nom_fich, char quest[200], char rep1[50], char rep2[50], char solution[50], SDL_Surface *screen) {
    char p, v;
    SDL_Surface *fonds = NULL;
    SDL_Surface *question = NULL;
    SDL_Surface *r1 = NULL;
    SDL_Surface *r2 = NULL;
    SDL_Surface *solu = NULL;

    SDL_Rect position_question;
    SDL_Rect position_r1;
    SDL_Rect position_r2;
    SDL_Rect position_solution;

    position_question.x = 110;
    position_question.y = 200;

    position_r1.x = 200;
    position_r1.y = 300;
    position_r2.x = 200;
    position_r2.y = 450;

    SDL_Event event;
    int r = -1;
    int continuer = 1;

    // Display the question and answers
    return_question_repense(screen, "fichier.txt", quest, rep1, rep2, solution);

    while (continuer) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    continuer = 0;
                    break;
                case SDL_KEYDOWN:
                    switch (event.key.keysym.sym) {
                        case SDLK_a:  // If 'a' key is pressed, check the first answer
                            if (strcmp(rep1, solution) == 0) {
                                r = 0;  // Correct answer
                            } else {
                                r = 1;  // Incorrect answer
                            }
                            continuer = 0;
                            break;
                        case SDLK_b:  // If 'b' key is pressed, check the second answer
                            if (strcmp(rep2, solution) == 0) {
                                r = 0;  // Correct answer
                            } else {
                                r = 1;  // Incorrect answer
                            }
                            continuer = 0;
                            break;
                    }
                    break;
            }
        }
    }
    return r;
}




/*void animation_temps(time_t begin,int limite,SDL_Surface *screen)
{
time_t end = time( NULL);
unsigned long secondes = (unsigned long) difftime( end, begin );
SDL_Surface *s;
SDL_Rect pos;pos.y=20;
float a=secondes;a/=limite;
s = SDL_CreateRGBSurface(0,a*screen->w,10, 32,0,0,0, 10);
SDL_FillRect(s, NULL, SDL_MapRGB(s->format, 255, 0, 0));
SDL_BlitSurface(s,NULL,screen,&pos);SDL_Flip(screen);
}
*/


void afficher_resultat(SDL_Surface *screen, int r) {
    SDL_Surface *res = NULL;
    SDL_Rect position = {0, 0};  // Initialize position for blitting the result image

    if (r == 0) {
        res = IMG_Load("00.png");  // Ensure this is the correct path for the success image
    } else {
        res = IMG_Load("11.png");  // Ensure this is the correct path for the failure image
    }

    if (res == NULL) {
        fprintf(stderr, "Failed to load image: %s\n", SDL_GetError());
        return;  // Exit if image loading failed
    }

    SDL_BlitSurface(res, NULL, screen, &position);
    SDL_Flip(screen);
    SDL_FreeSurface(res);  // Free the image surface after displaying it

    SDL_Delay(2000);  // Delay for 2000 milliseconds (2 seconds)

    // Assuming you want to close the entire application after showing the result
    SDL_Quit();
    exit(0);  // Terminate the program
}


/*int LOAD (personne *p, background *b , char * nomfichier)

{

	

	FILE *f=fopen(nomfichier,"r");

	if(f==NULL)

	{

	     printf("Erreur !");

	}

	else

	{	

		fscanf(f,"%hd %hd\n",&p->pos_perso.x,&p->pos_perso.y);

	}

	fclose(f);

}*/




	
