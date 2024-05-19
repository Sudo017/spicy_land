#include "texte.h"
#include "Buttons.h"
#include "Backg.h"
#include "intro.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

int main ( int argc, char** argv )
{
//initialisation de la fenetre
	TTF_Init();
	SDL_Init(SDL_INIT_VIDEO);
//Déclaration des variables
	SDL_Surface *screen,*ecran;
	int done = 0,f=0,i=0,ii=0,SCREEN_W=800,SCREEN_H=533;
	Image ButtonA,ButtonB,ButtonC,ButtonD,ButtonE,ButtonF,ButtonG,ButtonAA,ButtonBB,ButtonCC,ButtonDD,ButtonEE,ButtonFF,ButtonI,ButtonII,ButtonIII,ButtonIIII,ButtonJ,ButtonJJ,ButtonK,ButtonH,ButtonHH,ButtonL,ButtonLL,ButtonKK,ButtonAf,ButtonBf,ButtonCf,ButtonDf,ButtonEf,ButtonFf,ButtonGf,ButtonAAf,ButtonBBf,ButtonCCf,ButtonDDf,ButtonEEf,ButtonFFf,ButtonIf,ButtonIIf,ButtonIIIf,ButtonIIIIf,ButtonJf,ButtonJJf,ButtonKf,ButtonHf,ButtonHHf,ButtonLf,ButtonLLf,ButtonKKf;
	Background Backg,Backgf;
	SDL_Event event;
	Text t,tf;
	Mix_Music *Music;
	Mix_Chunk *Click;
	atexit(SDL_Quit);
	int s=0,click=0,music=0,GTS=0,x,y,vol=99,A=0,B=0,C=0,Af=0,Bf=0,Cf=0,D=0,E=0,F=0,H=0,J=0,K=0,L=0,Df=0,Ef=0,Ff=0,Hf=0,Jf=0,Kf=0,Lf=0;
	int Ai=0,Bi=0,Ci=0,Afi=0,Bfi=0,Cfi=0;
//Creation d'une fenetre
	screen = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 32,SDL_HWSURFACE | SDL_RESIZABLE);
	if( !screen ) {
			printf("Unable to set 600x300 video: %s\n", SDL_GetError());
			return 1;}

//Initialisation
	//window screen elements	
	intro (ecran);	//intro commence
	initBackg(&Backg); //Backg Menu
	initButtonA(&ButtonA); //Start
	initButtonAA(&ButtonAA);
	initButtonB(&ButtonB);//Settings
	initButtonBB(&ButtonBB);
	initButtonC(&ButtonC);//Quit
	initButtonCC(&ButtonCC);
	initButtonD(&ButtonD);//Click
	initButtonDD(&ButtonDD);
	initButtonE(&ButtonE);//Music
	initButtonEE(&ButtonEE);
	initButtonF(&ButtonF);//Back
	initButtonFF(&ButtonFF);
	initButtonG(&ButtonG);//Backg Settings
	initButtonH(&ButtonH);// -
	initButtonHH(&ButtonHH);
	initButtonI(&ButtonI);//Barre Volume
	initButtonII(&ButtonII);
	initButtonIII(&ButtonIII);
	initButtonIIII(&ButtonIIII);
	initButtonJ(&ButtonJ);//+
	initButtonJJ(&ButtonJJ);
	initButtonK(&ButtonK);//Fullscreen
	initButtonKK(&ButtonKK);
	initButtonL(&ButtonL);//Windowscreen
	initButtonLL(&ButtonLL);
	initText(&t);

	//Fullscreen elements
	initBackgf(&Backgf);
	initButtonAf(&ButtonAf); //Start
	initButtonAAf(&ButtonAAf);
	initButtonBf(&ButtonBf);//Settings
	initButtonBBf(&ButtonBBf);
	initButtonCf(&ButtonCf);//Quit
	initButtonCCf(&ButtonCCf);
	initButtonDf(&ButtonDf);//Click
	initButtonDDf(&ButtonDDf);
	initButtonEf(&ButtonEf);//Music
	initButtonEEf(&ButtonEEf);
	initButtonFf(&ButtonFf);//Back
	initButtonFFf(&ButtonFFf);
	initButtonGf(&ButtonGf);//Backg Settings
	initButtonHf(&ButtonHf);// -
	initButtonHHf(&ButtonHHf);
	initButtonIf(&ButtonIf);//Barre Volume
	initButtonIIf(&ButtonIIf);
	initButtonIIIf(&ButtonIIIf);
	initButtonIIIIf(&ButtonIIIIf);
	initButtonJf(&ButtonJf);//+
	initButtonJJf(&ButtonJJf);
	initButtonKf(&ButtonKf);//Fullscreen
	initButtonKKf(&ButtonKKf);
	initButtonLf(&ButtonLf);//Windowscreen
	initButtonLLf(&ButtonLLf);
	initTextf(&tf);

//musique continue commence
	{if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) 
	   {
	      printf("%s", Mix_GetError());
	   } 
	   Music = Mix_LoadMUS("gamemusic.mp3.mp3"); 
	}
Mix_PlayMusic(Music,-1);
Mix_VolumeMusic(vol);



	//EVENTS
while(!done){
while((GTS==0)&&(!done))
	{
	//affichage menu
		if(f==0)
		{
		afficherBackg(Backg,screen);
		if(A==1)afficherButton(ButtonAA,screen);else afficherButton(ButtonA,screen);
		if(B==1)afficherButton(ButtonBB,screen);else afficherButton(ButtonB,screen);
		if(C==1)afficherButton(ButtonCC,screen);else afficherButton(ButtonC,screen);
        if(click==0) afficherButton(ButtonD,screen); /*affichage tone ouverte*/
       			else afficherButton(ButtonDD,screen);/*afficher tone fermée*/ 	
        if(music==0) afficherButton(ButtonE,screen);/*afficher baffle ouvert*/
       			else afficherButton(ButtonEE,screen);/*afficher baffle fermé*/
		displayText(t,screen);
		SDL_Flip(screen);//flip the backbuffer to the primary Hardware Video Memory
		}

		if(f==1)
		{
		afficherBackg(Backgf,screen);
		if(Af==1)afficherButton(ButtonAAf,screen);else afficherButton(ButtonAf,screen);
		if(Bf==1)afficherButton(ButtonBBf,screen);else afficherButton(ButtonBf,screen);
		if(Cf==1)afficherButton(ButtonCCf,screen);else afficherButton(ButtonCf,screen);
        if(click==0) afficherButton(ButtonDf,screen); /*affichage tone ouverte*/
       			else afficherButton(ButtonDDf,screen);/*afficher tone fermée*/ 	
        if(music==0) afficherButton(ButtonEf,screen);/*afficher baffle ouvert*/
       			else afficherButton(ButtonEEf,screen);/*afficher baffle fermé*/
		displayText(tf,screen);
		SDL_Flip(screen);//flip the backbuffer to the primary Hardware Video Memory
		}
        if(SDL_PollEvent(&event));
		{switch(event.type)
		{ 
		case SDL_QUIT:
			done=1;
		break;
		
		case SDL_KEYDOWN:
				if ((event.key.keysym.sym==SDLK_ESCAPE))
				done=1;
				
				if ((event.key.keysym.sym==SDLK_F7))
				{if(vol>0) vol=vol-33;
				Mix_VolumeMusic(vol);}

				if ((event.key.keysym.sym==SDLK_F8))
				{if(vol<99) vol=vol+33;
				Mix_VolumeMusic(vol);}	

				if ((event.key.keysym.sym==SDLK_F6))
				{if (Mix_PausedMusic()==1)
					{Mix_ResumeMusic(); music=0;}
				else {Mix_PauseMusic(); music=1;}

				click=((click+1)%2);}
	
		break;
		
		case SDL_MOUSEBUTTONDOWN:
		{SDL_GetMouseState(&x,&y);
			//Click sur Start
			if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=320)&&(event.button.x<=480)&&(event.button.y>=150)&&(event.button.y<=220)&&(click==0))
			{
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);	
			}
			//Click sur Settings
			if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=320)&&(event.button.x<=480)&&(event.button.y>=250)&&(event.button.y<=320))
			{	if(click==0)
				{				
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);
				}
				GTS=1;
           		}
			//Click sur Quit
			if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=320)&&(event.button.x<=480)&&(event.button.y>=350)&&(event.button.y<=420))
			{	if(click==0)
				{				
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);
				}	
				done=1;
			}
			//Click sur click
			if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=720)&&(event.button.x<=788)&&(event.button.y>=450)&&(event.button.y<=498))
			{
				click=((click+1)%2);
				if(click==0);
				{
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);
				}
			}
			//Click sur music
			if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=620)&&(event.button.x<=684)&&(event.button.y>=450)&&(event.button.y<=498))
			{
				if (click==0)
				{
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);	
				}
				if (Mix_PausedMusic()==1)
					{Mix_ResumeMusic(); music=0;}
				else {Mix_PauseMusic(); music=1;}
			}

			//Click sur Start fullscreen
			if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=700)&&(event.button.x<=1006)&&(event.button.y>=250)&&(event.button.y<=352)&&(click==0))
			{
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);	
			}
			//Click sur Settings fullscreen
			if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=700)&&(event.button.x<=1006)&&(event.button.y>=410)&&(event.button.y<=512))
			{	if(click==0)
				{				
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);
				}
				GTS=1;
           		}
			//Click sur Quit fullscreen
			if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=700)&&(event.button.x<=1006)&&(event.button.y>=570)&&(event.button.y<=672))
			{	if(click==0)
				{				
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);
				}	
				done=1;
			}
			//Click sur click fullscreen
			if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=1620)&&(event.button.x<=1764)&&(event.button.y>=745)&&(event.button.y<=824))
			{
				click=((click+1)%2);
				if(click==0);
				{
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);
				}
			}
			//Click sur music fullscreen
			if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=1400)&&(event.button.x<=1524)&&(event.button.y>=745)&&(event.button.y<=824))
			{
				if (click==0)
				{
				Click= Mix_LoadWAV("Click.wav");
				Mix_PlayChannel(-1,Click,0);	
				}
				if (Mix_PausedMusic()==1)
					{Mix_ResumeMusic(); music=0;}
				else {Mix_PauseMusic(); music=1;}
			}

		break;
		}

		case SDL_MOUSEMOTION :
            	{	//Curseur sur Play
			if((f==0)&&(event.motion.x>=320)&&(event.motion.x<=480)&&(event.motion.y>=150)&&(event.motion.y<=220)) 
                   		 A=1;
                	else A=0;
					

			//Curseur sur Settings
			if((f==0)&&(event.motion.x>=320)&&(event.motion.x<=480)&&(event.motion.y>=250)&&(event.motion.y<=320))
 				B=1;
			else B=0;

			//Curseur sur Quit
			if((f==0)&&(event.button.x>=320)&&(event.button.x<=480)&&(event.button.y>=350)&&(event.button.y<=420))
				C=1;
			else C=0;
            		//Curseur sur Play Fullscreen
		if((f==1)&&(event.motion.x>=700)&&(event.motion.x<=1006)&&(event.motion.y>=250)&&(event.motion.y<=352))
			Af=1;
                	else Af=0;
					

			//Curseur sur Settings Fullscreen
			if((f==1)&&(event.motion.x>=700)&&(event.motion.x<=1006)&&(event.motion.y>=410)&&(event.motion.y<=512))
 				Bf=1;
			else Bf=0;

			//Curseur sur Quit Fullscreen
			if((f==1)&&(event.button.x>=700)&&(event.button.x<=1006)&&(event.button.y>=570)&&(event.button.y<=672))
				Cf=1;
			else Cf=0;

		break;
		}

		}
		}
    }//while((GTS==0)&&(!done))
while((GTS==1))
        {
				//affichage menu settings
				if(f==0)
				{
				afficherButton(ButtonG,screen);//backgroung settings
				if(F==1)afficherButton(ButtonFF,screen); else afficherButton(ButtonF,screen);//button back
				if(H==1)afficherButton(ButtonHH,screen); else afficherButton(ButtonH,screen);//button-
				if(vol==99)afficherButton(ButtonI,screen);//barre du volume
					else if(vol==66)afficherButton(ButtonII,screen);
						else if(vol==33)afficherButton(ButtonIII,screen);
							else if(vol==0)afficherButton(ButtonIIII,screen);
				if(J==1)afficherButton(ButtonJJ,screen); else afficherButton(ButtonJ,screen);//button+
				if(K==1)afficherButton(ButtonKK,screen); else afficherButton(ButtonK,screen);//button full screen
				if(L==1)afficherButton(ButtonLL,screen); else afficherButton(ButtonL,screen);//button window screen
				if(click==0) afficherButton(ButtonD,screen);//button click
					else afficherButton(ButtonDD,screen);
				if(music==0) afficherButton(ButtonE,screen);//button music
					else afficherButton(ButtonEE,screen);
				SDL_Flip(screen);
				}

				if(f==1)
				{
				afficherButton(ButtonGf,screen);//backgroung settings
				if(Ff==1)afficherButton(ButtonFFf,screen); else afficherButton(ButtonFf,screen);//button back
				if(Hf==1)afficherButton(ButtonHHf,screen); else afficherButton(ButtonHf,screen);//button-
				if(vol==99)afficherButton(ButtonIf,screen);//barre du volume
					else if(vol==66)afficherButton(ButtonIIf,screen);
						else if(vol==33)afficherButton(ButtonIIIf,screen);
							else if(vol==0)afficherButton(ButtonIIIIf,screen);
				if(Jf==1)afficherButton(ButtonJJf,screen); else afficherButton(ButtonJf,screen);//button+
				if(Kf==1)afficherButton(ButtonKKf,screen); else afficherButton(ButtonKf,screen);//button full screen
				if(Lf==1)afficherButton(ButtonLLf,screen); else afficherButton(ButtonLf,screen);//button window screen
				if(click==0) afficherButton(ButtonDf,screen);//button click
					else afficherButton(ButtonDDf,screen);
				if(music==0) afficherButton(ButtonEf,screen);//button music
					else afficherButton(ButtonEEf,screen);
				SDL_Flip(screen);
				}
                		if( SDL_PollEvent(&event))
						{switch(event.type)
							{ 
							case SDL_QUIT:
								GTS=0;//BTM=1
								done=1;
							break;

							case SDL_KEYDOWN:
							{
								if (event.key.keysym.sym==SDLK_ESCAPE)
								GTS=0;

							if ((event.key.keysym.sym==SDLK_F7))
							{if(vol>0) vol=vol-33;
							Mix_VolumeMusic(vol);}

							if ((event.key.keysym.sym==SDLK_F8))
							{if(vol<99) vol=vol+33;
							Mix_VolumeMusic(vol);}	

							if ((event.key.keysym.sym==SDLK_F6))
							{if (Mix_PausedMusic()==1)
								{Mix_ResumeMusic(); music=0;}
							else {Mix_PauseMusic(); music=1;}

							click=((click+1)%2);}

							break;
							}
							
							case SDL_MOUSEBUTTONDOWN:
							{	SDL_GetMouseState(&x,&y);
								//click dehors du background settings
if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(!((event.button.x>=205)&&(event.button.x<=595)&&(event.button.y>=10)&&(event.button.y<=490)))&&(!((event.button.x>=720)&&(event.button.x<=788) &&(event.button.y>=450)&& (event.button.y<=498)))&&(!((event.button.x>=620)&&(event.button.x<=688)&&(event.button.y>=450)&&(event.button.y<=498))))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									GTS=0;
								}
								//click sur  click										
								if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=720)&&(event.button.x<=788)&&(event.button.y>=450)&&(event.button.y<=498))
								{
									click=((click+1)%2);
									if(click==0);
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);
									}
								}
								//click sur baffle
								if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=620)&&(event.button.x<=688)&&(event.button.y>=450)&&(event.button.y<=498))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									if (Mix_PausedMusic()==1)
										{Mix_ResumeMusic(); music=0;}
									else {Mix_PauseMusic(); music=1;}
								}
								//click sur -
								if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=225)&&(event.button.x<=290)&&(event.button.y>=245)&&(event.button.y<=293))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									if(vol>0) vol=vol-33;
									Mix_VolumeMusic(vol);
								}				
								//click sur +
								if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=510)&&(event.button.x<=575)&&(event.button.y>=245)&&(event.button.y<=293))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									if(vol<99) vol=vol+33;
									Mix_VolumeMusic(vol);
								}
								//click sur Back
								if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=380)&&(event.button.x<=425)&&(event.button.y>=460)&&(event.button.y<=497))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									GTS=0;
								}
								//click sur Fullscreen
								if((f==0)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=310)&&(event.button.x<=397)&&(event.button.y>=355)&&(event.button.y<=404))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
								screen=SDL_SetVideoMode(1800,880, 32,SDL_HWSURFACE | SDL_RESIZABLE);
								f=1;
								}

								//click dehors du background settings fullscreen
if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(!((event.button.x>=460)&&(event.button.x<=1340)&&(event.button.y>=16)&&(event.button.y<=808)))&&(!((event.button.x>=1400)&&(event.button.x<=1544)&&(event.button.y>=745)&&(event.button.y<=824)))&&(!((event.button.x>=1620)&&(event.button.x<=1764)&&(event.button.y>=745)&&(event.button.y<=824))))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									GTS=0;
								}
								//click sur click fullscreen									
								if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=1620)&&(event.button.x<=1764)&&(event.button.y>=745)&&(event.button.y<=824))
								{
									click=((click+1)%2);
									if(click==0);
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);
									}
								}
								//click sur baffle fullscreen
								if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=1400)&&(event.button.x<=1544)&&(event.button.y>=745)&&(event.button.y<=824))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									if (Mix_PausedMusic()==1)
										{Mix_ResumeMusic(); music=0;}
									else {Mix_PauseMusic(); music=1;}
								}


								//click sur - fullscreen
								if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=505)&&(event.button.x<=649)&&(event.button.y>=405)&&(event.button.y<=484))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									if(vol>=0) vol=vol-33;
									Mix_VolumeMusic(vol);
								}				
								//click sur + fullscreen
								if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=1150)&&(event.button.x<=1294)&&(event.button.y>=405)&&(event.button.y<=484))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									if(vol<=99) vol=vol+33;
									Mix_VolumeMusic(vol);
								}
								//click sur Back fullscreen
								if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=855)&&(event.button.x<=999)&&(event.button.y>=760)&&(event.button.y<=839))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
									GTS=0;
								}

								//click sur window screen fullscreen
								if((f==1)&&(event.button.button==SDL_BUTTON_LEFT)&&(event.button.x>=945)&&(event.button.x<=1099)&&(event.button.y>=585)&&(event.button.y<=664))
								{
									if (click==0)
									{
										Click= Mix_LoadWAV("Click.wav");
										Mix_PlayChannel(-1,Click,0);	
									}
								screen=SDL_SetVideoMode(800,533, 32,SDL_HWSURFACE | SDL_RESIZABLE);
								f=0;
								}
							break;
							}
							case SDL_MOUSEMOTION :
							{
							//Curseur sur -
							if((f==0)&&(event.motion.x>=225)&&(event.motion.x<=290)&&(event.motion.y>=245)&&(event.motion.y<=293)) 
                   		 				H=1;
                					else H=0;
					

							//Curseur sur +
							if((f==0)&&(event.motion.x>=510)&&(event.motion.x<=575)&&(event.motion.y>=245)&&(event.motion.y<=293))
 								J=1;
							else J=0;

							//Curseur sur Back
							if((f==0)&&(event.button.x>=380)&&(event.button.x<=425)&&(event.button.y>=460)&&(event.button.y<=497))
								F=1;
							else F=0;

							//Curseur sur Fullscreen
							if((f==0)&&(event.button.x>=310)&&(event.button.x<=379)&&(event.button.y>=355)&&(event.button.y<=404))
								K=1;
							else K=0;

							//Curseur sur Windowscreen
							if((f==0)&&(event.button.x>=420)&&(event.button.x<=489)&&(event.button.y>=355)&&(event.button.y<=404))
								L=1;
							else L=0;

							//Curseur sur - fullscreen
							if((f==1)&&(event.motion.x>=505)&&(event.motion.x<=649)&&(event.motion.y>=405)&&(event.motion.y<=474)) 
                   		 				Hf=1;
                					else Hf=0;
					

							//Curseur sur + fullscreen
							if((f==1)&&(event.motion.x>=1150)&&(event.motion.x<=1294)&&(event.motion.y>=405)&&(event.motion.y<=474))
 								Jf=1;
							else Jf=0;

							//Curseur sur Back fullscreen
							if((f==1)&&(event.button.x>=855)&&(event.button.x<=999)&&(event.button.y>=760)&&(event.button.y<=839))
								Ff=1;
							else Ff=0;

							//Curseur sur Fullscreen fullscreen
							if((f==1)&&(event.button.x>=700)&&(event.button.x<=844)&&(event.button.y>=585)&&(event.button.y<=664))
								Kf=1;
							else Kf=0;

							//Curseur sur Windowscreen fullscreen
							if((f==1)&&(event.button.x>=945)&&(event.button.x<=1089)&&(event.button.y>=585)&&(event.button.y<=664))
								Lf=1;
							else Lf=0;
							break;				
							}

							}
						}
     }//while(GTS==1)
}
// liberation des espaces
libererBackg(Backg);
libererButton(ButtonA);
libererButton(ButtonAA);
libererButton(ButtonB);
libererButton(ButtonBB);
libererButton(ButtonC);
libererButton(ButtonCC);
libererButton(ButtonD);
libererButton(ButtonDD);
libererButton(ButtonE);
libererButton(ButtonEE);
libererButton(ButtonF);
libererButton(ButtonFF);
libererButton(ButtonG);
libererButton(ButtonH);
libererButton(ButtonHH);
libererButton(ButtonI);
libererButton(ButtonII);
libererButton(ButtonIII);
libererButton(ButtonIIII);
libererButton(ButtonJ);
libererButton(ButtonJJ);
libererButton(ButtonK);
libererButton(ButtonKK);
libererButton(ButtonL);
libererButton(ButtonLL);

libererBackg(Backgf);
libererButton(ButtonAf);
libererButton(ButtonAAf);
libererButton(ButtonBf);
libererButton(ButtonBBf);
libererButton(ButtonCf);
libererButton(ButtonCCf);
libererButton(ButtonDf);
libererButton(ButtonDDf);
libererButton(ButtonEf);
libererButton(ButtonEEf);
libererButton(ButtonFf);
libererButton(ButtonFFf);
libererButton(ButtonGf);
libererButton(ButtonHf);
libererButton(ButtonHHf);
libererButton(ButtonIf);
libererButton(ButtonIIf);
libererButton(ButtonIIIf);
libererButton(ButtonIIIIf);
libererButton(ButtonJf);
libererButton(ButtonJJf);
libererButton(ButtonKf);
libererButton(ButtonKKf);
libererButton(ButtonLf);
libererButton(ButtonLLf);

Mix_FreeMusic(Music);
Mix_FreeChunk(Click);
freeText(t);
freeText(tf);
TTF_CloseFont (t.font);
TTF_CloseFont (tf.font);
TTF_Quit();
return 0;
}
