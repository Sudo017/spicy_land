#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "fonction.h"
#include "enemy.h"
void initBack(Background *b, char path[],int x,int y)
{
	
	(*b).url=path;
	(*b).img=IMG_Load((*b).url);
	if((*b).img==NULL)
	{
		printf("Unable to load background image %s \n",SDL_GetError());
		
	}
	(*b).pos_img_ecran.x=x;
	(*b).pos_img_ecran.y=y;
	(*b).pos_img_affiche.x = 0;
    (*b).pos_img_affiche.y = 0;
	(*b).pos_img_affiche.h=SCREEN_H;
	(*b).pos_img_affiche.w=SCREEN_W;
}
void afficherBack(SDL_Surface *screen,Background b)
{
    SDL_BlitSurface(b.img, &b.pos_img_affiche, screen, &b.pos_img_ecran);
}
void afficher_imageBMP(SDL_Surface *screen, Background imge)
{
    SDL_BlitSurface(imge.img, NULL, screen, &imge.pos_img_ecran);
}
void liberer_image(Background b)
{
    SDL_FreeSurface(b.img);
}
void initPerso(Personne *p)
{
    p->position.x = 0;
    p->position.y = SCREEN_H - 250;
    p->current_image = 0;
    p->direction = 1;
    p->move = 0;
    p->images[0] = IMG_Load("./image/jou.png");
    p->images[1] = IMG_Load("./image/jou1.png");
    p->images[2] = IMG_Load("./image/jou2.png");
    p->images[3] = IMG_Load("./image/jou3.png");
    p->images[4] = IMG_Load("./image/jou4.png");
    p->images[5] = IMG_Load("./image/jou5.png");
    p->images[6] = IMG_Load("./image/jou6.png");
    p->images[7] = IMG_Load("./image/jou7.png");
    p->images[8] = IMG_Load("./image/jour.png");
    p->images[9] = IMG_Load("./image/jour1.png");
    p->images[10] = IMG_Load("./image/jour2.png");
    p->images[11] = IMG_Load("./image/jour3.png");
    p->images[12] = IMG_Load("./image/jour4.png");
    p->images[13] = IMG_Load("./image/jour5.png");
    p->images[14] = IMG_Load("./image/jour6.png");
    p->images[15] = IMG_Load("./image/jour7.png");
}
void afficherPerso(Personne p, SDL_Surface * screen)
{
    SDL_BlitSurface(p.images[p.current_image], NULL, screen, &(p.position));
}
void deplacerPerso(Personne *p,int current_map_level)
{
    if(p->move == 1)
    {
        p->position.x += p->direction * 2;
        if(p->position.x <=0)
        {
            p->move = 0;
            p->position.x=0;
        }
    }
}
void saut(Personne* p,int *jump,int* jump_speed,int current_map_level) {
    if (*jump) {
        p->position.y -= *jump_speed; 
        (*jump_speed)--; 

        if (p->position.y >= SCREEN_H - 250) { 
            *jump = 0; 
            p->position.y=SCREEN_H - 250;
        }
        else if(((p->position.x>=110)&&(p->position.x<=200))&&(p->position.y>=SCREEN_H-400)&&(current_map_level==2))
        { 
                *jump = 0; 
                p->position.y=210;
                
        }
        else if(((p->position.x>=250)&&(p->position.x<=320))&&(p->position.y>=SCREEN_H-400)&&(current_map_level==2))
        {
                
                *jump = 0; 
                p->position.y=230;
        }
        else if(((p->position.x>=390)&&(p->position.x<=470))&&(p->position.y>=SCREEN_H-400)&&(current_map_level==2))
        {
             
               *jump = 0; 
                p->position.y=230;
               
        }
        else if(((p->position.x>=520)&&(p->position.x<=600))&&(p->position.y>=SCREEN_H-400)&&(current_map_level==2))
        {        
                
                *jump = 0; 
                p->position.y=170;
        }
        else if(((p->position.x>=640)&&(p->position.x<=720))&&(p->position.y>=SCREEN_H-400)&&(current_map_level==2))
        {
              
                *jump = 0; 
                p->position.y=230;
        }
        else if(((p->position.x>=780)&&(p->position.x<=840))&&(p->position.y>=SCREEN_H-400)&&(current_map_level==2))
        {
                *jump = 0; 
                p->position.y=200;
                
        }
        else if(((p->position.x>=900)&&(p->position.x<=970))&&(p->position.y>=SCREEN_H-400)&&(current_map_level==2))
        {
                *jump = 0; 
                p->position.y=230;
               
        }
        else if(((p->position.x>=1010)&&(p->position.x<=1080))&&(p->position.y>=SCREEN_H-400)&&(current_map_level==2))
        {
                *jump = 0; 
                p->position.y=210;
                
        }
               
    }

}
void animerPerso(Personne* p,int left)
{
    static int counter;
    const int animation_speed = 10; 
    static int change;
    counter++;
    if (counter >= animation_speed)
    {
        if(p->move == 0)
        {
            if(left)
            {
                p->current_image = 8 + change;
                change= (change + 1) % 2;
            }
            else
            {
                p->current_image = 0 + change;
                change= (change + 1) % 2;
            }
        }
        else
        {
            if(left)
            {
                p->current_image++;
                if(p->current_image < 9 || p->current_image > 15)
                {
                    p->current_image = 8;
                }
            }
            else
            {
                p->current_image--;
                if(p->current_image < 1 || p->current_image > 7)
                {
                    p->current_image = 7;
                }
               
            }
        }
        
        counter = 0;
    }
}
void scrolling(Background *b, Background *e,Background *c,Background *d,Background *z,Personne *p,int current_map_level, SDL_Surface *screen)
{
    int scrollSpeed = 3,scrollSpeed1=-3;

    if((p->move == 1)&&(current_map_level==1))
    {
        b->pos_img_ecran.x+= p->direction * scrollSpeed1;
        e->pos_img_ecran.x+=p->direction *scrollSpeed1;
    }
    else if((p->move == 1)&&(current_map_level==2))
    {
        
        c->pos_img_affiche.x += p->direction * scrollSpeed;
    }
    else if((p->move == 1)&&(current_map_level==3))
    {
        d->pos_img_ecran.x += p->direction * scrollSpeed1;
        z->pos_img_ecran.x += p->direction * scrollSpeed1;
        if(p->position.x>=SCREEN_W-60){
            p->move=0;
        }
    }
}
void initicon(Personnemap *m)
{
    m->position_map.x = 280;
    m->position_map.y = 80;
    m->direction_map = 1;
    m->move_map = 0;
    m->nbimages=0;
    m->images[0] = IMG_Load("./imagemini/icon.png");
    m->images[1] = IMG_Load("./imagemini/icon1.png");
    m->images[2] = IMG_Load("./imagemini/icon2.png");
    m->images[3] = IMG_Load("./imagemini/icon3.png");
    m->images[4] = IMG_Load("./imagemini/icon4.png");
    m->images[5] = IMG_Load("./imagemini/icon5.png");
    m->images[6] = IMG_Load("./imagemini/left.png");
    m->images[7] = IMG_Load("./imagemini/left1.png");
    m->images[8] = IMG_Load("./imagemini/left2.png");
    m->images[9] = IMG_Load("./imagemini/left3.png");
    m->images[10] = IMG_Load("./imagemini/left4.png");

}
void afficheicon(Personnemap m, SDL_Surface * screen)
{
    SDL_BlitSurface(m.images[m.nbimages], NULL, screen, &(m.position_map));
}

void deplacerPersomap(Personnemap *m)
{
    if (m->move_map == 1)
    {
       
        m->position_map.x += m->direction_map+0.95;
        
        if (m->position_map.x > SCREEN_W-335 || m->position_map.x < 280)
        {
            m->direction_map = 0;
            m->move_map = 0;
        
        }
     }  
 

}
void sautmap(Personnemap* m,int *jump_map,int* jump_speed_map)
 {
    if (*jump_map) {
        m->position_map.y -= *jump_speed_map; 
        (*jump_speed_map)--; 

        if (m->position_map.y == 80) { 
            *jump_map = 0; 

            
        }
    }
}
void punch(Personne *perso , int punch_flag){
if (punch_flag == 1 ) {
//modifie the animation fonction and call it to do a punch animation the add a punch sound 
}
}
void animerPersomini(Personnemap* m,int left)
{
    static int counter = 0;
    const int animation_speed = 7; 
    static int change = 0;
    counter++;
    if (counter >= animation_speed)
    {
        if(m->move_map== 0)
        {
            if(left)
            {
                m->nbimages= 6 + change;
                change = (change + 1) % 2;
            }
            else
            {
                m->nbimages = 0 + change;
                change = (change + 1) % 2;
            }
        }
        else
        {
            if(left)
            {
                m->nbimages++;
                if(m->nbimages < 6 || m->nbimages > 10)
                {
                    m->nbimages = 6;
                }
            }
            else
            {
                m->nbimages--;
                if(m->nbimages < 1 || m->nbimages > 5)
                {
                    m->nbimages = 5;
                }
            }
        }
        
        counter = 0;
    }
}

void initializerTemps(Time *time)
{
time->font = TTF_OpenFont("police.ttf",25);
time->time = 0;
sprintf(time->timestring,"00:00");
SDL_Color color = {0,0,0};
time->msg = TTF_RenderText_Solid(time->font,time->timestring,color);
    time->positiontemps.x=10;
    time->positiontemps.y=50;       
} 

void afficherTemps(Time *time,SDL_Surface *ecran)
{
   SDL_Color color = {0,0,0};
   time->time++;
   if (time->time %60 == 0)
        {
            sprintf(time->timestring,"%02d:%02d ",time->time/60/60,(time->time/60)%60);
            time->msg = TTF_RenderText_Solid(time->font,time->timestring,color);

        }
        SDL_BlitSurface(time->msg,NULL,ecran,&time->positiontemps);
} 

void initialiser_texte(texte *txte, char police[],int taille,int r,int g,int b, int x, int y)
{
    TTF_Init(); 
    (*txte).police = TTF_OpenFont(police,taille);
    (*txte).color_txt.r=r;
    (*txte).color_txt.g=g;
    (*txte).color_txt.b=b;
    (*txte).pos_txt.x=x;
    (*txte).pos_txt.y=y;
}
void afficher_texte(SDL_Surface *screen, texte txte, char message[])
{

    txte.txt=TTF_RenderText_Blended(txte.police,message,txte.color_txt);
    SDL_BlitSurface(txte.txt,NULL,screen,&txte.pos_txt);
}
void afficher_texte4(SDL_Surface *screen,int maxi, texte txte4)
{
    char ch[20];
    sprintf(ch,"%d",maxi);
    txte4.txt = TTF_RenderText_Blended(txte4.police,ch,txte4.color_txt);
    SDL_BlitSurface(txte4.txt, NULL, screen, &txte4.pos_txt);
    
}
void afficher_texte45(SDL_Surface *screen,int maxi1, texte txte5)
{
    char ch[20];
    sprintf(ch,"%d",maxi1);
    txte5.txt = TTF_RenderText_Blended(txte5.police,ch,txte5.color_txt);
    SDL_BlitSurface(txte5.txt, NULL, screen, &txte5.pos_txt);
    
}
void liberer_texte(texte txte)
{
    TTF_CloseFont(txte.police);
    TTF_Quit();
}
  
 
