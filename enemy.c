#include "enemy.h"
#include"fonction.h"

void initialisation_enemy(enemi *e)
{
    int h = 1852/6, w = 1300/4 ;
    e->sprite = IMG_Load("sprite.png");
    if(e->sprite == NULL)
    {
        printf("couldnt load sprite");
    }
    e->frame.w = w ;
    e->frame.h = h ;
    e->direction1 = 1 ;
    e->pos_img_affiche.x=120;
    e->pos_img_affiche.y=SCREEN_H - 390;
    e->pos_img_affiche.w=w ;
    e->pos_img_affiche.h=h ;
}
void afficher_enemy(SDL_Surface *screen, enemi e)
{
    SDL_BlitSurface(e.sprite, &(e.frame), screen, &(e.pos_img_affiche));
}

int detect_collision(enemi e, Personne e1 )
{
    if (e.pos_img_affiche.x < e1.position.x + e1.position.w &&
            e.pos_img_affiche.x + e.pos_img_affiche.w > e1.position.x &&
            e.pos_img_affiche.y < e1.position.y + e1.position.h &&
            e.pos_img_affiche.y + e.pos_img_affiche.h > e1.position.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void deplacer_enemy(enemi *e )
{
    int posMax, posMin ;
    srand(time(0));
    do
    {
        posMax = (rand() % (1000 - 5 + 1)) + 5;
        posMin = (rand() % 500 - 0 + 1) + 0;
    }
    while((posMax - posMin) < 100);
    if (e->pos_img_affiche. x > posMax)
    {
        e->direction1 =-1;
        e->direction = 1 ;
    }
    if(e->pos_img_affiche. x < posMin)
    {
        e->direction1 = 1 ;
        e->direction = 0;
    }
    if(e-> direction1 == 1)
    {
        e->pos_img_affiche.x  = e->pos_img_affiche.x + 2 ;
    }
    else if (e->direction1 == -1)
    {
        e->pos_img_affiche.x = e->pos_img_affiche.x  - 2 ;
    }
    else
    {
        e->pos_img_affiche.x = e->pos_img_affiche.x;
    }
}

void animer_enemy(enemi* e)
{
    static Uint32 lastFrameTime = 0;
    Uint32 currentFrameTime = SDL_GetTicks();
    Uint32 elapsedTime = currentFrameTime - lastFrameTime;

    // Set the desired animation delay in milliseconds
    Uint32 animationDelay = 100;  // Adjust this value to control the animation speed

    if (elapsedTime >= animationDelay)
    {
        e->frame.y = e->direction * e->frame.h;
        e->frame.x += e->frame.w;

        if (e->frame.x >= e->sprite->w)
        {
            e->frame.x = 0;
        }

        lastFrameTime = currentFrameTime;
    }
}

void deplacer_IA(enemi *e, Personne perso, int speed)
{
    int collision_flag ;
    float dist ;
    dist = perso.position.x - (e->pos_img_affiche.x + 1800/16) ;
    collision_flag = detect_collision(*e, perso);
    if (perso.position.y - perso.position.h < e->pos_img_affiche.y){
                e->pos_img_affiche.x = e->pos_img_affiche.x;
                e->direction1  = 0 ;
                e->direction = 2 ;

    }
    else if (collision_flag == 1 )
    {
        if (collision_flag == 1 &&   e->pos_img_affiche.x+200 < perso.position.x -5 )
        {
            e->direction1  = 0 ;
            e->direction = 4 ;
        }
        if (collision_flag == 1 &&  e->pos_img_affiche.x+200 > perso.position.x -5 )
        {
            e->direction1  = 0 ;
            e->direction = 5 ;
        }
    }
    else if (abs(dist)<300 && abs(dist)>250)
    {
        e->pos_img_affiche.x = e->pos_img_affiche.x;
        if (e->direction1 == 1 )
        {
            e->direction = 2 ;
        }
        if(e->direction1 == -1)
        {
            e->direction = 3 ;
        }
    }
    else if (abs(dist)<250)
    {

        if (dist > 0)
        {
            e->pos_img_affiche.x += speed;
            e->direction1 = 1;
            e->direction = 0;
        }
        else if(dist < 0 )
        {
            e->pos_img_affiche.x -= speed;
            e->direction1 = -1;
            e->direction = 1 ;
        }
    }
    else
    {
        deplacer_enemy(e);
    }
}

void liberer_enemy(enemi e)
{
    SDL_FreeSurface(e.sprite);
}


void initialiser_audiobref(Mix_Chunk **music, char path[])
{
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 2048);
    *music = Mix_LoadWAV(path);
    if ((*music) == NULL)
    {
        printf("%s", SDL_GetError());
    }
}

void liberer_musiquebref(Mix_Chunk **music)
{
    Mix_FreeChunk(*music);
}

