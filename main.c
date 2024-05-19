#include <stdio.h> 
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "fonction.h"
#include "enemy.h"
#include "arduino.h"
#define SERIAL_PORT "/dev/ttyUSB0"
#define SERIAL_PORT_BUFFER_LENGTH   30

int strStartsWith(const char *pre, const char *str);
void sendTextToArduino(void* text);
int main (){
    SDL_Surface *screen;
    Background IMAGE,IMAGE1,IMAGE2,IMAGE3,IMAGE_BTN,IMAGE4,IMAGE5,IMAGE6,IMAGE7,IMAGE11,IMAGE12,IMAGE_BTN1,IMAGE_BTN2;
    Background game_over_pic;
    SDL_Event event ;
    enemi enemi,monster ;
    Personne perso;
    Personnemap permi;
    int jumparduino = 1;
    Time time;
    Mix_Chunk *mus;
    int boucle=1,leftt,rightt;
    int speed_x=0;
    int speed_y=0;
    int left=0,flag=0,flag1=0;
    int rightarduino=0,leftarduino=0;
    int current_map_level = 1,maxi=0,maxi1=3;
    int punch_timer = -1 ; 
    int punch_flag = 0 ; 
    int cp=0;
    int yes =2;
    int start = 0;
    int done =0;
    texte txte,txte1,txte2,txte3;
    if (SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO | SDL_INIT_TIMER)==-1){
        printf("Could not initialisze SDL : %s .\n",SDL_GetError());
        return -1;
    }
    char serialPortBuffer[SERIAL_PORT_BUFFER_LENGTH] = {0};
   
    int serialPortReadDataLength = 0;   
  if(!Arduino_connect(SERIAL_PORT, 9600)){
        exit(EXIT_FAILURE); 
        }
        
    SDL_WM_SetCaption("HelloWorld", "Hello World");
    screen = SDL_SetVideoMode (SCREEN_W,SCREEN_H,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
      
    initBack(&IMAGE,"level1.png",0,0);
    initBack(&IMAGE11,"level11.png",0,0);
    initBack(&IMAGE2,"level2.png",0,0);
    initBack(&IMAGE3,"level3.png",0,0);
    initBack(&IMAGE12,"level33.png",0,0);
    initBack(&IMAGE1,"minimap.png",280,5);
    initBack(&IMAGE4,"minimap2.png",280,5);
    initBack(&IMAGE5,"minimap3.png",280,5);
    initBack(&IMAGE6,"minimap11.png",280,5);
    initBack(&IMAGE7,"minimap33.png",280,5);
    initBack(&IMAGE_BTN,"live.png",155,20);
    initBack(&IMAGE_BTN1,"obs1.png",330,480);
    initBack(&IMAGE_BTN2,"obs1.png",310,460);
    initialiser_texte(&txte,"police.ttf",20,0,0,0,10,20);
    initialiser_texte(&txte1,"police.ttf",20,0,0,0,95,20);
    initialiser_texte(&txte2,"police.ttf",20,0,0,0,185,20);
    initialiser_texte(&txte3,"police.ttf",120,0,0,0,280,200);
    initicon(&permi);         
    initPerso(&perso);
    initializerTemps(&time);
    initialiser_audiobref(&mus , "punch.wav");
    initialisation_enemy(&enemi);
    
 
    while (boucle)
    
{	
       if (maxi1 < 0 )
      
       {	
        serialPortReadDataLength = Arduino_read(serialPortBuffer, SERIAL_PORT_BUFFER_LENGTH);
        serialPortBuffer[serialPortReadDataLength] = 0;
        
       
       
         if(serialPortReadDataLength > 0)
        {    
           	
               
                 
            if(strStartsWith("YES", serialPortBuffer))
            {	printf("\n m here yes\n"); 
               yes=1;
                
            }
            if(strStartsWith("No", serialPortBuffer))
            {yes=0;
            }
           
         }
         if(yes==1){
          Arduino_write("s", 10);
          current_map_level = 1 ; 
        maxi1 = 3 ; 
        initBack(&IMAGE,"level1.png",0,0);
        initBack(&IMAGE11,"level11.png",0,0);
        initBack(&IMAGE2,"level2.png",0,0);
        initBack(&IMAGE3,"level3.png",0,0);
        initBack(&IMAGE12,"level33.png",0,0);
        initBack(&IMAGE1,"minimap.png",280,5);
        initBack(&IMAGE4,"minimap2.png",280,5);
        initBack(&IMAGE5,"minimap3.png",280,5);
        initBack(&IMAGE6,"minimap11.png",280,5);
        initBack(&IMAGE7,"minimap33.png",280,5);
        initBack(&IMAGE_BTN,"live.png",155,20);
        initBack(&IMAGE_BTN1,"obs1.png",330,480);
        initBack(&IMAGE_BTN2,"obs1.png",310,460);
        initialiser_texte(&txte,"police.ttf",20,0,0,0,10,20);
        initialiser_texte(&txte1,"police.ttf",20,0,0,0,95,20);
        initialiser_texte(&txte2,"police.ttf",20,0,0,0,185,20);
        initialiser_texte(&txte3,"police.ttf",120,0,0,0,280,200);
        initicon(&permi);         
        initPerso(&perso);
        initializerTemps(&time);
        yes=2;
         }
         if(yes==0){
         boucle=0;
         }
        initBack(&game_over_pic ,"game_over.jpg",0,0);
        afficherBack(screen, game_over_pic);
        
        while (SDL_PollEvent(&event))
        { switch (event.type)
        { 
        case SDL_MOUSEBUTTONDOWN:
        if (event.button.button==SDL_BUTTON_LEFT && (event.motion.y<=562 && event.motion.y>=522 && event.motion.x<=671 && event.motion.x>627))
        {boucle=0;}
        else if (event.button.button==SDL_BUTTON_LEFT && (event.motion.y<=562 && event.motion.y>=522 && event.motion.x<=590 && event.motion.x>529))
        {
        current_map_level = 1 ; 
        maxi1 = 3 ; 
        initBack(&IMAGE,"level1.png",0,0);
        initBack(&IMAGE11,"level11.png",0,0);
        initBack(&IMAGE2,"level2.png",0,0);
        initBack(&IMAGE3,"level3.png",0,0);
        initBack(&IMAGE12,"level33.png",0,0);
        initBack(&IMAGE1,"minimap.png",280,5);
        initBack(&IMAGE4,"minimap2.png",280,5);
        initBack(&IMAGE5,"minimap3.png",280,5);
        initBack(&IMAGE6,"minimap11.png",280,5);
        initBack(&IMAGE7,"minimap33.png",280,5);
        initBack(&IMAGE_BTN,"live.png",155,20);
        initBack(&IMAGE_BTN1,"obs1.png",330,480);
        initBack(&IMAGE_BTN2,"obs1.png",310,460);
        initialiser_texte(&txte,"police.ttf",20,0,0,0,10,20);
        initialiser_texte(&txte1,"police.ttf",20,0,0,0,95,20);
        initialiser_texte(&txte2,"police.ttf",20,0,0,0,185,20);
        initialiser_texte(&txte3,"police.ttf",120,0,0,0,280,200);
        initicon(&permi);         
        initPerso(&perso);
        initializerTemps(&time);
        }}}}
       else {
        if (current_map_level == 1) { 
        if (perso.position.x >= SCREEN_W-60) { 
                maxi=maxi+1000; 
                current_map_level = 2; 
                perso.position.x=0;
                perso.position.y=270;
                permi.position_map.x=280;
               
        }
        }
        if(current_map_level==2){
            if(perso.position.x>=SCREEN_W-60){
                maxi=maxi+1000;
                current_map_level =3;
                perso.position.x=0;
                perso.position.y=SCREEN_H-250;
                permi.position_map.x=280;
               

            }
        }
        if (current_map_level == 1) 
        { 
             if(cp%30>=20){
              afficher_imageBMP(screen, IMAGE);
              afficherBack(screen,IMAGE1); 
               cp++;
             }else{
              afficher_imageBMP(screen, IMAGE11);
              afficherBack(screen,IMAGE6);
               cp++;
             }
        
            

        } 
        else if (current_map_level == 2)
        { 
            
            afficherBack(screen, IMAGE2);
            afficherBack(screen,IMAGE4);  
            if (perso.position.x >=  644 ){
            animer_enemy(&enemi); 
            afficher_enemy(screen, enemi); 
            if (detect_collision(enemi, perso)) {
            if (punch_timer == -1 || SDL_GetTicks() - punch_timer > 1000){
            Mix_PlayChannel(-1, mus, 0);
            Mix_VolumeChunk(mus, MIX_MAX_VOLUME);
            punch_timer = SDL_GetTicks();
            printf("you take a hit from enemy\n");
            maxi1 = maxi1 -1 ;}
             }
            deplacer_IA(&enemi , perso , 6);
            }     
        }
        else if ( current_map_level == 3)
        {    
            if(cp%30>=20){
               afficher_imageBMP(screen,IMAGE3);
               afficherBack(screen,IMAGE5);
               cp++;
            }
            else{
               afficher_imageBMP(screen, IMAGE12);
               afficherBack(screen,IMAGE7);
               cp++;
            }
             
        }
        if(current_map_level==1)
        {
            if((perso.position.x==180)&&(perso.position.y==SCREEN_H-250))
            {
                maxi1--;
            }
            if((perso.position.x==360)&&(perso.position.y==SCREEN_H-250))
            {
                afficher_imageBMP(screen,IMAGE_BTN1);
                afficher_imageBMP(screen,IMAGE_BTN2);
                maxi1--;
                          }
            if((perso.position.x==540)&&(perso.position.y==SCREEN_H-250))
            {
                maxi1--;
            }
            if((perso.position.x==920)&&(perso.position.y==SCREEN_H-250))
            {
                maxi1--;
            }
            if((perso.position.x==1030)&&(perso.position.y==SCREEN_H-250))
            {
                maxi1--;
            }
        }
        if(current_map_level==2)
        {
            if((perso.position.x==60)&&(perso.position.y==270))
            {
                perso.position.y=SCREEN_H-250;
            }
            if(((perso.position.x==110)||(perso.position.x==200))&&(perso.position.y==210))
            {
                perso.position.y=SCREEN_H-250;
            }
            if(((perso.position.x==250)||(perso.position.x==320))&&(perso.position.y==230))
            {
                perso.position.y=SCREEN_H-250;
            }
            if(((perso.position.x==390)||(perso.position.x==470))&&(perso.position.y==230))
            {
                perso.position.y=SCREEN_H-250;
            }
            if(((perso.position.x==520)||(perso.position.x==600))&&(perso.position.y==170))
            {
                perso.position.y=SCREEN_H-250;
            }
            if(((perso.position.x==640)||(perso.position.x==720))&&(perso.position.y==230))
            {
                perso.position.y=SCREEN_H-250;
            }
            if(((perso.position.x==780)||(perso.position.x==840))&&(perso.position.y==200))
            {
                perso.position.y=SCREEN_H-250;
            }
            if(((perso.position.x==900)||(perso.position.x==970))&&(perso.position.y==230))
            {
                perso.position.y=SCREEN_H-250;
            }
            if(((perso.position.x==1010)||(perso.position.x==1090))&&(perso.position.y==210))
            {
                perso.position.y=SCREEN_H-250;
            }
        }
        if(current_map_level==3)
        {
            if((perso.position.x==160)&&(perso.position.y==SCREEN_H-250))
            {
                maxi1--;
            }
            if((perso.position.x==330)&&(perso.position.y==SCREEN_H-250))
            {
                maxi1--;
            }
            if((perso.position.x==530)&&(perso.position.y==SCREEN_H-250))
            {
                maxi1--;
            }
            if((perso.position.x==750)&&(perso.position.y==SCREEN_H-250))
            {
                maxi1--;
            }
        }
  
    afficherPerso(perso,screen);
    afficheicon(permi,screen);
    animerPerso(&perso,left);
    animerPersomini(&permi,left);
    afficherTemps(&time,screen);
    afficher_texte(screen,txte,"score:");
    afficher_imageBMP(screen,IMAGE_BTN);

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            boucle=0;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if (event.button.button==SDL_BUTTON_LEFT && (event.motion.y<=300 && event.motion.y>=250 && event.motion.x<=423 && event.motion.x>213)){
                boucle=0;
            }
            if (event.button.button==SDL_BUTTON_LEFT){
                punch_flag = 1 ; 
                boucle=0;
            }
            else{
                punch_flag = 0 ; 
            }
            break;
         case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_RIGHT:
                left=0;
                perso.direction = 1;
                perso.move= 1;
                permi.move_map = 1;
                permi.direction_map =1;
                break;
      
            case SDLK_LEFT:
                left=1;
                perso.direction = -1;
                perso.move = 1;
                permi.direction_map = -1;
                permi.move_map = 1;
                break;
            case SDLK_UP:
                    if(!flag)
                    {
                        flag=1;
                         perso.jump_speed = 22; 
                    } 
                    if(!flag1)
                    {
                        flag1=1;
                        permi.jump_speed_map=13;
                    }
                
                break;
            case SDLK_LSHIFT:
                if(perso.direction>=0)
                {
               
                    perso.direction = 3;
                    permi.direction_map = 3;
                }
                else
                {
                    perso.direction= -3;
                    permi.direction_map = -3;

                }
            break;
          
            }
            break;
        case SDL_KEYUP:
            switch (event.key.keysym.sym)
            {
            case SDLK_RIGHT:
                perso.move=0;
                permi.move_map=0;
                break;
            case SDLK_LEFT:
                perso.move=0;
                permi.move_map=0;
                break;
            case SDLK_LSHIFT:
                if(perso.direction>=0)
                {
               
                    perso.direction = 1;
                }
                else
                {
                    perso.direction= -1;
                }
                if(permi.direction_map>=0)
                {
                    permi.direction_map =1;
                }
                else
                {
                    permi.direction_map=-1;
                }
                break;
          
            }
            break;
        
        }
            
    }  
            
serialPortReadDataLength = Arduino_read(serialPortBuffer, SERIAL_PORT_BUFFER_LENGTH);
serialPortBuffer[serialPortReadDataLength] = 0;

if (serialPortReadDataLength > 0) {    
    if (strStartsWith("righ", serialPortBuffer)) {
        rightarduino = 1;
        printf("\n m here right \n");    
        if (rightarduino) {
            printf("\n m here right \n");
            left = 0;
            perso.direction = 1;
            perso.move = 1;
            permi.move_map = 1;
            permi.direction_map = 1;
        }
    }
   
    if (strStartsWith("left", serialPortBuffer)) {
        printf("\n m here left \n");
        leftarduino = 1;
        if (leftarduino) {
            printf("\n m here left \n");
            left = 1;
            perso.direction = -1;
            perso.move = 1;
            permi.direction_map = -1;
            permi.move_map = 1;
        }
    }

    if (strStartsWith("JR", serialPortBuffer)) {
        if (jumparduino == 1) {
            if (!flag) {
                flag = 1;
                perso.jump_speed = 22;
            }
            if (!flag1) {
                flag1 = 1;
                permi.jump_speed_map = 13;
            }
            jumparduino = 0;
        }
    }

    if (strStartsWith("JL", serialPortBuffer)) {
        if (jumparduino == 1) {
            if (!flag) {
                flag = 1;
                perso.jump_speed = 22;
            }
            if (!flag1) {
                flag1 = 1;
                permi.jump_speed_map = 13;
            }
            jumparduino = 0;
        }
        printf("\n m here left \n");
        leftarduino = 1;
        if (leftarduino) {
            printf("\n m here left \n");
            left = 1;
            perso.direction = -1;
            perso.move = 1;
            permi.direction_map = -1;
            permi.move_map = 1;
        }
    }

    if (strStartsWith("STOP", serialPortBuffer)) {
        printf("\n m here stop\n");
        if (rightarduino || leftarduino) {
            printf("\n m here stop\n");
            perso.move = 0;
            permi.move_map = 0;
            jumparduino = 1;
            rightarduino = 0;
            leftarduino = 0;
        }
        jumparduino = 1;
    }

    if (strStartsWith("JUMP", serialPortBuffer)) {
        printf("\n m here jump\n");
        if (jumparduino == 1) {
            if (!flag) {
                flag = 1;
                perso.jump_speed = 22;
            }
            if (!flag1) {
                flag1 = 1;
                permi.jump_speed_map = 13;
            }
            jumparduino = 0;
        }
    }

    if (strStartsWith("YES", serialPortBuffer)) {
        printf("\n m here yes\n");
        yes = 1;
    }

    if (strStartsWith("done", serialPortBuffer)) {
        sendTextToArduino("s");
    }

    if (strStartsWith("NO", serialPortBuffer)) {
        yes = 0;
    }
} // This line is now properly closing the if block


       
        
    
      
    punch(&perso , punch_flag);
    saut(&perso, &flag, &perso.jump_speed,current_map_level);
    sautmap(&permi,&flag1,&permi.jump_speed_map);
    scrolling(&IMAGE,&IMAGE11,&IMAGE2,&IMAGE3,&IMAGE12,&perso,current_map_level,screen);
    deplacerPerso(&perso,current_map_level);
    deplacerPersomap(&permi);
    afficher_texte4(screen,maxi,txte1);
    afficher_texte45(screen,maxi1,txte2);
    /*if(maxi1==0)
    {
            afficher_texte(screen,txte3,"GAMEOVER");
            perso.move=0;
            perso.position.x=0;
            permi.move_map=0;
            permi.position_map.x=280;
    }  */  
    //SDL_Delay(2);

    
}
   
 //--------------------------------MANETTE-------------------------------
   
SDL_Flip(screen);

}	
    liberer_texte(txte);
    liberer_image (IMAGE);
    liberer_enemy(enemi);
    liberer_musiquebref(&mus);
    
    SDL_Quit();
    return 0;
}
    
    
    
    

int strStartsWith(const char *pre, const char *str)
{
    size_t lenpre = strlen(pre),
           lenstr = strlen(str);
    return lenstr < lenpre ? 0 : strncmp(pre, str, lenpre) == 0;
}
void sendTextToArduino(void* text)
{
    if (!Arduino_write(text, 10)) {
        fprintf(stderr, "Failed to send text to Arduino: ");
    } else {
        printf("Sent text to Arduino:");
    }
}
        
