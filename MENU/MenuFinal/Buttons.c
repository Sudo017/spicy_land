#include <SDL/SDL.h>
#include "Buttons.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>


void initButtonA(Image *ButtonA) // BUtton Start
{
	ButtonA->img = IMG_Load("ButtonA.png");
		if (ButtonA->img == NULL) {
			return ;
		}
	ButtonA->pos1.x=320;
	ButtonA->pos1.y=150;
	ButtonA->pos1.w=ButtonA->img->w;
	ButtonA->pos1.h=ButtonA->img->h;

        ButtonA->pos2.x=0;
        ButtonA->pos2.y=0;
        ButtonA->pos2.w=ButtonA->img->w;
        ButtonA->pos2.h=ButtonA->img->h;
}

void initButtonAA(Image *ButtonAA)
{
	ButtonAA->img = IMG_Load("ButtonAA.png");
		if (ButtonAA->img == NULL) {
			return ;
		}
	ButtonAA->pos1.x=295;
	ButtonAA->pos1.y=140;
	ButtonAA->pos1.w=ButtonAA->img->w;
	ButtonAA->pos1.h=ButtonAA->img->h;;

        ButtonAA->pos2.x=0;
        ButtonAA->pos2.y=0;
        ButtonAA->pos2.w=ButtonAA->img->w;
        ButtonAA->pos2.h=ButtonAA->img->h;
}

void initButtonB(Image *ButtonB) //Button Settings
{
	ButtonB->img = IMG_Load("ButtonB.png");
		if (ButtonB->img == NULL) {
			return ;
		}
	ButtonB->pos1.x=320;
	ButtonB->pos1.y=250;
	ButtonB->pos1.w=ButtonB->img->w;
	ButtonB->pos1.h=ButtonB->img->h;

        ButtonB->pos2.x=0;
        ButtonB->pos2.y=0;
        ButtonB->pos2.w=ButtonB->img->w;
        ButtonB->pos2.h=ButtonB->img->h;
}

void initButtonBB(Image *ButtonBB)
{
	ButtonBB->img = IMG_Load("ButtonBB.png");
		if (ButtonBB->img == NULL) {
			return ;
		}
	ButtonBB->pos1.x=320;
	ButtonBB->pos1.y=250;
	ButtonBB->pos1.w=ButtonBB->img->w;
	ButtonBB->pos1.h=ButtonBB->img->h;;

        ButtonBB->pos2.x=0;
        ButtonBB->pos2.y=0;
        ButtonBB->pos2.w=ButtonBB->img->w;
        ButtonBB->pos2.h=ButtonBB->img->h;
}

void initButtonC(Image *ButtonC) //Button Quit
{
	ButtonC->img = IMG_Load("ButtonC.png");
		if (ButtonC->img == NULL) {
			return ;
		}
	ButtonC->pos1.x=320;
	ButtonC->pos1.y=350;
	ButtonC->pos1.w=ButtonC->img->w;
	ButtonC->pos1.h=ButtonC->img->h;

        ButtonC->pos2.x=0;
        ButtonC->pos2.y=0;
        ButtonC->pos2.w=ButtonC->img->w;
        ButtonC->pos2.h=ButtonC->img->h;
}

void initButtonCC(Image *ButtonCC)
{
	ButtonCC->img = IMG_Load("ButtonCC.png");
		if (ButtonCC->img == NULL) {
			return ;
		}
	ButtonCC->pos1.x=320;
	ButtonCC->pos1.y=340;
	ButtonCC->pos1.w=ButtonCC->img->w;
	ButtonCC->pos1.h=ButtonCC->img->h;

        ButtonCC->pos2.x=0;
        ButtonCC->pos2.y=0;
        ButtonCC->pos2.w=ButtonCC->img->w;
        ButtonCC->pos2.h=ButtonCC->img->h;
}

void initButtonD(Image *ButtonD) //Button Click
{
	ButtonD->img = IMG_Load("ButtonD.png");
		if (ButtonD->img == NULL) {
			return ;
		}
	ButtonD->pos1.x=720;
	ButtonD->pos1.y=450;
	ButtonD->pos1.w=ButtonD->img->w;
	ButtonD->pos1.h=ButtonD->img->h;

        ButtonD->pos2.x=0;
        ButtonD->pos2.y=0;
        ButtonD->pos2.w=ButtonD->img->w;
        ButtonD->pos2.h=ButtonD->img->h;
}

void initButtonDD(Image *ButtonDD)
{
	ButtonDD->img = IMG_Load("ButtonDD.png");
		if (ButtonDD->img == NULL) {
			return ;
		}
	ButtonDD->pos1.x=720;
	ButtonDD->pos1.y=450;
	ButtonDD->pos1.w=ButtonDD->img->w;
	ButtonDD->pos1.h=ButtonDD->img->h;

        ButtonDD->pos2.x=0;
        ButtonDD->pos2.y=0;
        ButtonDD->pos2.w=ButtonDD->img->w;
        ButtonDD->pos2.h=ButtonDD->img->h;
}

void initButtonE(Image *ButtonE) //Button music
{
	ButtonE->img = IMG_Load("ButtonE.png");
		if (ButtonE->img == NULL) {
			return ;
		}
	ButtonE->pos1.x=620;
	ButtonE->pos1.y=450;
	ButtonE->pos1.w=ButtonE->img->w;
	ButtonE->pos1.h=ButtonE->img->h;

        ButtonE->pos2.x=0;
        ButtonE->pos2.y=0;
        ButtonE->pos2.w=ButtonE->img->w;
        ButtonE->pos2.h=ButtonE->img->h;
}

void initButtonEE(Image *ButtonEE)
{
	ButtonEE->img = IMG_Load("ButtonEE.png");
		if (ButtonEE->img == NULL) {
			return ;
		}
	ButtonEE->pos1.x=620;
	ButtonEE->pos1.y=450;
	ButtonEE->pos1.w=ButtonEE->img->w;
	ButtonEE->pos1.h=ButtonEE->img->h;

        ButtonEE->pos2.x=0;
        ButtonEE->pos2.y=0;
        ButtonEE->pos2.w=ButtonEE->img->w;
        ButtonEE->pos2.h=ButtonEE->img->h;
}

void initButtonF(Image *ButtonF) //Button Back
{
	ButtonF->img = IMG_Load("ButtonF.png");
		if (ButtonF->img == NULL) {
			return ;
		}
	ButtonF->pos1.x=380;
	ButtonF->pos1.y=460;
	ButtonF->pos1.w=ButtonF->img->w;
	ButtonF->pos1.h=ButtonF->img->h;

        ButtonF->pos2.x=0;
        ButtonF->pos2.y=0;
        ButtonF->pos2.w=ButtonF->img->w;
        ButtonF->pos2.h=ButtonF->img->h;
}

void initButtonFF(Image *ButtonFF)
{
	ButtonFF->img = IMG_Load("ButtonFF.png");
		if (ButtonFF->img == NULL) {
			return ;
		}
	ButtonFF->pos1.x=380;
	ButtonFF->pos1.y=460;
	ButtonFF->pos1.w=ButtonFF->img->w;
	ButtonFF->pos1.h=ButtonFF->img->h;

        ButtonFF->pos2.x=0;
        ButtonFF->pos2.y=0;
        ButtonFF->pos2.w=ButtonFF->img->w;
        ButtonFF->pos2.h=ButtonFF->img->h;
}

void initButtonG(Image *ButtonG) //Backg Settings
{
	ButtonG->img = IMG_Load("ButtonG.png");
		if (ButtonG->img == NULL) {
			return ;
		}
	ButtonG->pos1.x=0;
	ButtonG->pos1.y=0;
	ButtonG->pos1.w=ButtonG->img->w;
	ButtonG->pos1.h=ButtonG->img->h;

        ButtonG->pos2.x=0;
        ButtonG->pos2.y=0;
        ButtonG->pos2.w=ButtonG->img->w;
        ButtonG->pos2.h=ButtonG->img->h;
}

void initButtonH(Image *ButtonH) //Button -
{
	ButtonH->img = IMG_Load("ButtonH.png");
		if (ButtonH->img == NULL) {
			return ;
		}
	ButtonH->pos1.x=225;
	ButtonH->pos1.y=245;
	ButtonH->pos1.w=ButtonH->img->w;
	ButtonH->pos1.h=ButtonH->img->h;

        ButtonH->pos2.x=0;
        ButtonH->pos2.y=0;
        ButtonH->pos2.w=ButtonH->img->w;
        ButtonH->pos2.h=ButtonH->img->h;
}
void initButtonHH(Image *ButtonHH) //Button -
{
	ButtonHH->img = IMG_Load("ButtonHH.png");
		if (ButtonHH->img == NULL) {
			return ;
		}
	ButtonHH->pos1.x=225;
	ButtonHH->pos1.y=245;
	ButtonHH->pos1.w=ButtonHH->img->w;
	ButtonHH->pos1.h=ButtonHH->img->h;

        ButtonHH->pos2.x=0;
        ButtonHH->pos2.y=0;
        ButtonHH->pos2.w=ButtonHH->img->w;
        ButtonHH->pos2.h=ButtonHH->img->h;
}
void initButtonJ(Image *ButtonJ) //Button +
{
	ButtonJ->img = IMG_Load("ButtonJ.png");
		if (ButtonJ->img == NULL) {
			return ;
		}
	ButtonJ->pos1.x=510;
	ButtonJ->pos1.y=245;
	ButtonJ->pos1.w=ButtonJ->img->w;
	ButtonJ->pos1.h=ButtonJ->img->h;

        ButtonJ->pos2.x=0;
        ButtonJ->pos2.y=0;
        ButtonJ->pos2.w=ButtonJ->img->w;
        ButtonJ->pos2.h=ButtonJ->img->h;
}
void initButtonJJ(Image *ButtonJJ) //Button +
{
	ButtonJJ->img = IMG_Load("ButtonJJ.png");
		if (ButtonJJ->img == NULL) {
			return ;
		}
	ButtonJJ->pos1.x=510;
	ButtonJJ->pos1.y=245;
	ButtonJJ->pos1.w=ButtonJJ->img->w;
	ButtonJJ->pos1.h=ButtonJJ->img->h;

        ButtonJJ->pos2.x=0;
        ButtonJJ->pos2.y=0;
        ButtonJJ->pos2.w=ButtonJJ->img->w;
        ButtonJJ->pos2.h=ButtonJJ->img->h;
}
void initButtonK(Image *ButtonK) //Button Fullscreen
{
	ButtonK->img = IMG_Load("ButtonK.png");
		if (ButtonK->img == NULL) {
			return ;
		}
	ButtonK->pos1.x=310;
	ButtonK->pos1.y=355;
	ButtonK->pos1.w=ButtonK->img->w;
	ButtonK->pos1.h=ButtonK->img->h;

        ButtonK->pos2.x=0;
        ButtonK->pos2.y=0;
        ButtonK->pos2.w=ButtonK->img->w;
        ButtonK->pos2.h=ButtonK->img->h;
}
void initButtonKK(Image *ButtonKK) 
{
	ButtonKK->img = IMG_Load("ButtonKK.png");
		if (ButtonKK->img == NULL) {
			return ;
		}
	ButtonKK->pos1.x=310;
	ButtonKK->pos1.y=355;
	ButtonKK->pos1.w=ButtonKK->img->w;
	ButtonKK->pos1.h=ButtonKK->img->h;

        ButtonKK->pos2.x=0;
        ButtonKK->pos2.y=0;
        ButtonKK->pos2.w=ButtonKK->img->w;
        ButtonKK->pos2.h=ButtonKK->img->h;
}
void initButtonL(Image *ButtonL) //Button Windowscreen
{
	ButtonL->img = IMG_Load("ButtonL.png");
		if (ButtonL->img == NULL) {
			return ;
		}
	ButtonL->pos1.x=420;
	ButtonL->pos1.y=355;
	ButtonL->pos1.w=ButtonL->img->w;
	ButtonL->pos1.h=ButtonL->img->h;

        ButtonL->pos2.x=0;
        ButtonL->pos2.y=0;
        ButtonL->pos2.w=ButtonL->img->w;
        ButtonL->pos2.h=ButtonL->img->h;
}
void initButtonLL(Image *ButtonLL) //Button Windowscreen
{
	ButtonLL->img = IMG_Load("ButtonLL.png");
		if (ButtonLL->img == NULL) {
			return ;
		}
	ButtonLL->pos1.x=420;
	ButtonLL->pos1.y=355;
	ButtonLL->pos1.w=ButtonLL->img->w;
	ButtonLL->pos1.h=ButtonLL->img->h;

        ButtonLL->pos2.x=0;
        ButtonLL->pos2.y=0;
        ButtonLL->pos2.w=ButtonLL->img->w;
        ButtonLL->pos2.h=ButtonLL->img->h;
}
void initButtonI(Image *ButtonI) //Barre volume 99
{
	ButtonI->img = IMG_Load("ButtonI.png");
		if (ButtonI->img == NULL) {
			return ;
		}
	ButtonI->pos1.x=300;
	ButtonI->pos1.y=250;
	ButtonI->pos1.w=ButtonI->img->w;
	ButtonI->pos1.h=ButtonI->img->h;

        ButtonI->pos2.x=0;
        ButtonI->pos2.y=0;
        ButtonI->pos2.w=ButtonI->img->w;
        ButtonI->pos2.h=ButtonI->img->h;
}

void initButtonII(Image *ButtonII) //Barre volume 66
{
	ButtonII->img = IMG_Load("ButtonII.png");
		if (ButtonII->img == NULL) {
			return ;
		}
	ButtonII->pos1.x=300;
	ButtonII->pos1.y=250;
	ButtonII->pos1.w=ButtonII->img->w;
	ButtonII->pos1.h=ButtonII->img->h;

        ButtonII->pos2.x=0;
        ButtonII->pos2.y=0;
        ButtonII->pos2.w=ButtonII->img->w;
        ButtonII->pos2.h=ButtonII->img->h;
}

void initButtonIII(Image *ButtonIII) //Barre Volume 33
{
	ButtonIII->img = IMG_Load("ButtonIII.png");
		if (ButtonIII->img == NULL) {
			return ;
		}
	ButtonIII->pos1.x=300;
	ButtonIII->pos1.y=250;
	ButtonIII->pos1.w=ButtonIII->img->w;
	ButtonIII->pos1.h=ButtonIII->img->h;

        ButtonIII->pos2.x=0;
        ButtonIII->pos2.y=0;
        ButtonIII->pos2.w=ButtonIII->img->w;
        ButtonIII->pos2.h=ButtonIII->img->h;
}

void initButtonIIII(Image *ButtonIIII) //Barre Volume 0
{
	ButtonIIII->img = IMG_Load("ButtonIIII.png");
		if (ButtonIIII->img == NULL) {
			return ;
		}
	ButtonIIII->pos1.x=300;
	ButtonIIII->pos1.y=250;
	ButtonIIII->pos1.w=ButtonIIII->img->w;
	ButtonIIII->pos1.h=ButtonIIII->img->h;

        ButtonIIII->pos2.x=0;
        ButtonIIII->pos2.y=0;
        ButtonIIII->pos2.w=ButtonIIII->img->w;
        ButtonIIII->pos2.h=ButtonIIII->img->h;
}


void initButtonAf(Image *ButtonAf) // BUtton Start
{
	ButtonAf->img = IMG_Load("ButtonAf.png");
		if (ButtonAf->img == NULL) {
			return ;
		}
	ButtonAf->pos1.x=700;
	ButtonAf->pos1.y=250;
	ButtonAf->pos1.w=ButtonAf->img->w;
	ButtonAf->pos1.h=ButtonAf->img->h;

        ButtonAf->pos2.x=0;
        ButtonAf->pos2.y=0;
        ButtonAf->pos2.w=ButtonAf->img->w;
        ButtonAf->pos2.h=ButtonAf->img->h;
}

void initButtonAAf(Image *ButtonAAf)
{
	ButtonAAf->img = IMG_Load("ButtonAAf.png");
		if (ButtonAAf->img == NULL) {
			return ;
		}
	ButtonAAf->pos1.x=700;
	ButtonAAf->pos1.y=250;
	ButtonAAf->pos1.w=ButtonAAf->img->w;
	ButtonAAf->pos1.h=ButtonAAf->img->h;;

        ButtonAAf->pos2.x=0;
        ButtonAAf->pos2.y=0;
        ButtonAAf->pos2.w=ButtonAAf->img->w;
        ButtonAAf->pos2.h=ButtonAAf->img->h;
}

void initButtonBf(Image *ButtonBf) //Button Settings
{
	ButtonBf->img = IMG_Load("ButtonBf.png");
		if (ButtonBf->img == NULL) {
			return ;
		}
	ButtonBf->pos1.x=700;
	ButtonBf->pos1.y=410;
	ButtonBf->pos1.w=ButtonBf->img->w;
	ButtonBf->pos1.h=ButtonBf->img->h;

        ButtonBf->pos2.x=0;
        ButtonBf->pos2.y=0;
        ButtonBf->pos2.w=ButtonBf->img->w;
        ButtonBf->pos2.h=ButtonBf->img->h;
}

void initButtonBBf(Image *ButtonBBf)
{
	ButtonBBf->img = IMG_Load("ButtonBBf.png");
		if (ButtonBBf->img == NULL) {
			return ;
		}
	ButtonBBf->pos1.x=700;
	ButtonBBf->pos1.y=410;
	ButtonBBf->pos1.w=ButtonBBf->img->w;
	ButtonBBf->pos1.h=ButtonBBf->img->h;;

        ButtonBBf->pos2.x=0;
        ButtonBBf->pos2.y=0;
        ButtonBBf->pos2.w=ButtonBBf->img->w;
        ButtonBBf->pos2.h=ButtonBBf->img->h;
}

void initButtonCf(Image *ButtonCf) //Button Quit
{
	ButtonCf->img = IMG_Load("ButtonCf.png");
		if (ButtonCf->img == NULL) {
			return ;
		}
	ButtonCf->pos1.x=700;
	ButtonCf->pos1.y=570;
	ButtonCf->pos1.w=ButtonCf->img->w;
	ButtonCf->pos1.h=ButtonCf->img->h;

        ButtonCf->pos2.x=0;
        ButtonCf->pos2.y=0;
        ButtonCf->pos2.w=ButtonCf->img->w;
        ButtonCf->pos2.h=ButtonCf->img->h;
}

void initButtonCCf(Image *ButtonCCf)
{
	ButtonCCf->img = IMG_Load("ButtonCCf.png");
		if (ButtonCCf->img == NULL) {
			return ;
		}
	ButtonCCf->pos1.x=700;
	ButtonCCf->pos1.y=570;
	ButtonCCf->pos1.w=ButtonCCf->img->w;
	ButtonCCf->pos1.h=ButtonCCf->img->h;

        ButtonCCf->pos2.x=0;
        ButtonCCf->pos2.y=0;
        ButtonCCf->pos2.w=ButtonCCf->img->w;
        ButtonCCf->pos2.h=ButtonCCf->img->h;
}

void initButtonDf(Image *ButtonDf) //Button Click
{
	ButtonDf->img = IMG_Load("ButtonDf.png");
		if (ButtonDf->img == NULL) {
			return ;
		}
	ButtonDf->pos1.x=1620;
	ButtonDf->pos1.y=745;
	ButtonDf->pos1.w=ButtonDf->img->w;
	ButtonDf->pos1.h=ButtonDf->img->h;

        ButtonDf->pos2.x=0;
        ButtonDf->pos2.y=0;
        ButtonDf->pos2.w=ButtonDf->img->w;
        ButtonDf->pos2.h=ButtonDf->img->h;
}

void initButtonDDf(Image *ButtonDDf)
{
	ButtonDDf->img = IMG_Load("ButtonDDf.png");
		if (ButtonDDf->img == NULL) {
			return ;
		}
	ButtonDDf->pos1.x=1620;
	ButtonDDf->pos1.y=745;
	ButtonDDf->pos1.w=ButtonDDf->img->w;
	ButtonDDf->pos1.h=ButtonDDf->img->h;

        ButtonDDf->pos2.x=0;
        ButtonDDf->pos2.y=0;
        ButtonDDf->pos2.w=ButtonDDf->img->w;
        ButtonDDf->pos2.h=ButtonDDf->img->h;
}

void initButtonEf(Image *ButtonEf) //Button music
{
	ButtonEf->img = IMG_Load("ButtonEf.png");
		if (ButtonEf->img == NULL) {
			return ;
		}
	ButtonEf->pos1.x=1400;
	ButtonEf->pos1.y=745;
	ButtonEf->pos1.w=ButtonEf->img->w;
	ButtonEf->pos1.h=ButtonEf->img->h;

        ButtonEf->pos2.x=0;
        ButtonEf->pos2.y=0;
        ButtonEf->pos2.w=ButtonEf->img->w;
        ButtonEf->pos2.h=ButtonEf->img->h;
}

void initButtonEEf(Image *ButtonEEf)
{
	ButtonEEf->img = IMG_Load("ButtonEEf.png");
		if (ButtonEEf->img == NULL) {
			return ;
		}
	ButtonEEf->pos1.x=1400;
	ButtonEEf->pos1.y=745;
	ButtonEEf->pos1.w=ButtonEEf->img->w;
	ButtonEEf->pos1.h=ButtonEEf->img->h;

        ButtonEEf->pos2.x=0;
        ButtonEEf->pos2.y=0;
        ButtonEEf->pos2.w=ButtonEEf->img->w;
        ButtonEEf->pos2.h=ButtonEEf->img->h;
}

void initButtonFf(Image *ButtonFf) //Button Back
{
	ButtonFf->img = IMG_Load("ButtonFf.png");
		if (ButtonFf->img == NULL) {
			return ;
		}
	ButtonFf->pos1.x=855;
	ButtonFf->pos1.y=760;
	ButtonFf->pos1.w=ButtonFf->img->w;
	ButtonFf->pos1.h=ButtonFf->img->h;

        ButtonFf->pos2.x=0;
        ButtonFf->pos2.y=0;
        ButtonFf->pos2.w=ButtonFf->img->w;
        ButtonFf->pos2.h=ButtonFf->img->h;
}

void initButtonFFf(Image *ButtonFFf)
{
	ButtonFFf->img = IMG_Load("ButtonFFf.png");
		if (ButtonFFf->img == NULL) {
			return ;
		}
	ButtonFFf->pos1.x=855;
	ButtonFFf->pos1.y=760;
	ButtonFFf->pos1.w=ButtonFFf->img->w;
	ButtonFFf->pos1.h=ButtonFFf->img->h;

        ButtonFFf->pos2.x=0;
        ButtonFFf->pos2.y=0;
        ButtonFFf->pos2.w=ButtonFFf->img->w;
        ButtonFFf->pos2.h=ButtonFFf->img->h;
}

void initButtonGf(Image *ButtonGf) //Backg Settings
{
	ButtonGf->img = IMG_Load("ButtonGf.png");
		if (ButtonGf->img == NULL) {
			return ;
		}
	ButtonGf->pos1.x=0;
	ButtonGf->pos1.y=0;
	ButtonGf->pos1.w=ButtonGf->img->w;
	ButtonGf->pos1.h=ButtonGf->img->h;

        ButtonGf->pos2.x=0;
        ButtonGf->pos2.y=0;
        ButtonGf->pos2.w=ButtonGf->img->w;
        ButtonGf->pos2.h=ButtonGf->img->h;
}

void initButtonHf(Image *ButtonHf) //Button -
{
	ButtonHf->img = IMG_Load("ButtonHf.png");
		if (ButtonHf->img == NULL) {
			return ;
		}
	ButtonHf->pos1.x=505;
	ButtonHf->pos1.y=405;
	ButtonHf->pos1.w=ButtonHf->img->w;
	ButtonHf->pos1.h=ButtonHf->img->h;

        ButtonHf->pos2.x=0;
        ButtonHf->pos2.y=0;
        ButtonHf->pos2.w=ButtonHf->img->w;
        ButtonHf->pos2.h=ButtonHf->img->h;
}
void initButtonHHf(Image *ButtonHHf) //Button -
{
	ButtonHHf->img = IMG_Load("ButtonHHf.png");
		if (ButtonHHf->img == NULL) {
			return ;
		}
	ButtonHHf->pos1.x=505;
	ButtonHHf->pos1.y=405;
	ButtonHHf->pos1.w=ButtonHHf->img->w;
	ButtonHHf->pos1.h=ButtonHHf->img->h;

        ButtonHHf->pos2.x=0;
        ButtonHHf->pos2.y=0;
        ButtonHHf->pos2.w=ButtonHHf->img->w;
        ButtonHHf->pos2.h=ButtonHHf->img->h;
}
void initButtonJf(Image *ButtonJf) //Button +
{
	ButtonJf->img = IMG_Load("ButtonJf.png");
		if (ButtonJf->img == NULL) {
			return ;
		}
	ButtonJf->pos1.x=1150;
	ButtonJf->pos1.y=405;
	ButtonJf->pos1.w=ButtonJf->img->w;
	ButtonJf->pos1.h=ButtonJf->img->h;

        ButtonJf->pos2.x=0;
        ButtonJf->pos2.y=0;
        ButtonJf->pos2.w=ButtonJf->img->w;
        ButtonJf->pos2.h=ButtonJf->img->h;
}
void initButtonJJf(Image *ButtonJJf) //Button +
{
	ButtonJJf->img = IMG_Load("ButtonJJf.png");
		if (ButtonJJf->img == NULL) {
			return ;
		}
	ButtonJJf->pos1.x=1150;
	ButtonJJf->pos1.y=405;
	ButtonJJf->pos1.w=ButtonJJf->img->w;
	ButtonJJf->pos1.h=ButtonJJf->img->h;

        ButtonJJf->pos2.x=0;
        ButtonJJf->pos2.y=0;
        ButtonJJf->pos2.w=ButtonJJf->img->w;
        ButtonJJf->pos2.h=ButtonJJf->img->h;
}
void initButtonKf(Image *ButtonKf) //Button Fullscreen
{
	ButtonKf->img = IMG_Load("ButtonKf.png");
		if (ButtonKf->img == NULL) {
			return ;
		}
	ButtonKf->pos1.x=700;
	ButtonKf->pos1.y=585;
	ButtonKf->pos1.w=ButtonKf->img->w;
	ButtonKf->pos1.h=ButtonKf->img->h;

        ButtonKf->pos2.x=0;
        ButtonKf->pos2.y=0;
        ButtonKf->pos2.w=ButtonKf->img->w;
        ButtonKf->pos2.h=ButtonKf->img->h;
}
void initButtonKKf(Image *ButtonKKf) 
{
	ButtonKKf->img = IMG_Load("ButtonKKf.png");
		if (ButtonKKf->img == NULL) {
			return ;
		}
	ButtonKKf->pos1.x=700;
	ButtonKKf->pos1.y=585;
	ButtonKKf->pos1.w=ButtonKKf->img->w;
	ButtonKKf->pos1.h=ButtonKKf->img->h;

        ButtonKKf->pos2.x=0;
        ButtonKKf->pos2.y=0;
        ButtonKKf->pos2.w=ButtonKKf->img->w;
        ButtonKKf->pos2.h=ButtonKKf->img->h;
}
void initButtonLf(Image *ButtonLf) //Button Windowscreen
{
	ButtonLf->img = IMG_Load("ButtonLf.png");
		if (ButtonLf->img == NULL) {
			return ;
		}
	ButtonLf->pos1.x=945;
	ButtonLf->pos1.y=585;
	ButtonLf->pos1.w=ButtonLf->img->w;
	ButtonLf->pos1.h=ButtonLf->img->h;

        ButtonLf->pos2.x=0;
        ButtonLf->pos2.y=0;
        ButtonLf->pos2.w=ButtonLf->img->w;
        ButtonLf->pos2.h=ButtonLf->img->h;
}
void initButtonLLf(Image *ButtonLLf) //Button Windowscreen
{
	ButtonLLf->img = IMG_Load("ButtonLLf.png");
		if (ButtonLLf->img == NULL) {
			return ;
		}
	ButtonLLf->pos1.x=945;
	ButtonLLf->pos1.y=585;
	ButtonLLf->pos1.w=ButtonLLf->img->w;
	ButtonLLf->pos1.h=ButtonLLf->img->h;

        ButtonLLf->pos2.x=0;
        ButtonLLf->pos2.y=0;
        ButtonLLf->pos2.w=ButtonLLf->img->w;
        ButtonLLf->pos2.h=ButtonLLf->img->h;
}
void initButtonIf(Image *ButtonIf) //Barre volume 99
{
	ButtonIf->img = IMG_Load("ButtonIf.png");
		if (ButtonIf->img == NULL) {
			return ;
		}
	ButtonIf->pos1.x=675;
	ButtonIf->pos1.y=415;
	ButtonIf->pos1.w=ButtonIf->img->w;
	ButtonIf->pos1.h=ButtonIf->img->h;

        ButtonIf->pos2.x=0;
        ButtonIf->pos2.y=0;
        ButtonIf->pos2.w=ButtonIf->img->w;
        ButtonIf->pos2.h=ButtonIf->img->h;
}

void initButtonIIf(Image *ButtonIIf) //Barre volume 66
{
	ButtonIIf->img = IMG_Load("ButtonIIf.png");
		if (ButtonIIf->img == NULL) {
			return ;
		}
	ButtonIIf->pos1.x=675;
	ButtonIIf->pos1.y=415;
	ButtonIIf->pos1.w=ButtonIIf->img->w;
	ButtonIIf->pos1.h=ButtonIIf->img->h;

        ButtonIIf->pos2.x=0;
        ButtonIIf->pos2.y=0;
        ButtonIIf->pos2.w=ButtonIIf->img->w;
        ButtonIIf->pos2.h=ButtonIIf->img->h;
}

void initButtonIIIf(Image *ButtonIIIf) //Barre Volume 33
{
	ButtonIIIf->img = IMG_Load("ButtonIIIf.png");
		if (ButtonIIIf->img == NULL) {
			return ;
		}
	ButtonIIIf->pos1.x=675;
	ButtonIIIf->pos1.y=415;
	ButtonIIIf->pos1.w=ButtonIIIf->img->w;
	ButtonIIIf->pos1.h=ButtonIIIf->img->h;

        ButtonIIIf->pos2.x=0;
        ButtonIIIf->pos2.y=0;
        ButtonIIIf->pos2.w=ButtonIIIf->img->w;
        ButtonIIIf->pos2.h=ButtonIIIf->img->h;
}

void initButtonIIIIf(Image *ButtonIIIIf) //Barre Volume 0
{
	ButtonIIIIf->img = IMG_Load("ButtonIIIIf.png");
		if (ButtonIIIIf->img == NULL) {
			return ;
		}
	ButtonIIIIf->pos1.x=675;
	ButtonIIIIf->pos1.y=415;
	ButtonIIIIf->pos1.w=ButtonIIIIf->img->w;
	ButtonIIIIf->pos1.h=ButtonIIIIf->img->h;

        ButtonIIIIf->pos2.x=0;
        ButtonIIIIf->pos2.y=0;
        ButtonIIIIf->pos2.w=ButtonIIIIf->img->w;
        ButtonIIIIf->pos2.h=ButtonIIIIf->img->h;
}

void libererButton(Image Button)
{
		SDL_FreeSurface(Button.img);
}

void afficherButton(Image Button,SDL_Surface *screen)
{
SDL_BlitSurface(Button.img,&Button.pos2,screen,&Button.pos1);
}



