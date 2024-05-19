#ifndef Buttons_H
#define Buttons_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdlib.h>
#include <stdio.h>


struct Image {
	SDL_Rect pos1;
	SDL_Rect pos2;
	SDL_Surface * img;
};
typedef struct Image Image;
void initCopyrights(Image *Copyrights);
void initButtonA(Image *ButtonA);
void initButtonB(Image *ButtonB);
void initButtonC(Image *ButtonC);
void initButtonD(Image *ButtonD);
void initButtonE(Image *ButtonE);
void initButtonF(Image *ButtonF);
void initButtonFF(Image *ButtonFF);
void initButtonG(Image *ButtonG);
void initButtonH(Image *ButtonH);
void initButtonHH(Image *ButtonHH);
void initButtonK(Image *ButtonK);
void initButtonKK(Image *ButtonKK);
void initButtonL(Image *ButtonL);
void initButtonLL(Image *ButtonLL);
void initButtonAA(Image *ButtonAA);
void initButtonBB(Image *ButtonBB);
void initButtonCC(Image *ButtonCC);
void initButtonDD(Image *ButtonDD);
void initButtonEE(Image *ButtonEE);
void initButtonJ(Image *ButtonJ);
void initButtonJJ(Image *ButtonJJ);
void initButtonI(Image *ButtonI);
void initButtonII(Image *ButtonII);
void initButtonIII(Image *ButtonIII);
void initButtonIIII(Image *ButtonIIII);

void initCopyrightsf(Image *Copyrightsf);
void initButtonAf(Image *ButtonAf);
void initButtonBf(Image *ButtonBf);
void initButtonCf(Image *ButtonCf);
void initButtonDf(Image *ButtonDf);
void initButtonEf(Image *ButtonEf);
void initButtonFf(Image *ButtonFf);
void initButtonFFf(Image *ButtonFFf);
void initButtonGf(Image *ButtonGf);
void initButtonHf(Image *ButtonHf);
void initButtonHHf(Image *ButtonHHf);
void initButtonKf(Image *ButtonKf);
void initButtonKKf(Image *ButtonKKf);
void initButtonLf(Image *ButtonLf);
void initButtonLLf(Image *ButtonLLf);
void initButtonAAf(Image *ButtonAAf);
void initButtonBBf(Image *ButtonBBf);
void initButtonCCf(Image *ButtonCCf);
void initButtonDDf(Image *ButtonDDf);
void initButtonEEf(Image *ButtonEEf);
void initButtonJf(Image *ButtonJf);
void initButtonJJf(Image *ButtonJJf);
void initButtonIf(Image *ButtonIf);
void initButtonIIf(Image *ButtonIIf);
void initButtonIIIf(Image *ButtonIIIf);
void initButtonIIIIf(Image *ButtonIIIIf);

void afficherButton(Image Button,SDL_Surface *screen);
void libererButton(Image Button);

#endif
