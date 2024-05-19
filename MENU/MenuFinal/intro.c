#include "intro.h"
#define SCREEN_W 800
#define SCREEN_H 533

void intro(SDL_Surface *ecran)
{
    SDL_Surface *logo1 = NULL, *logo2 = NULL, *logo3 = NULL, *coat = NULL;
    SDL_Rect poslogo;
    poslogo.x = 0;
    poslogo.y = 0;
    int i = 0;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Event event;
    ecran = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));

    // Load logo images
    logo1 = IMG_Load("l1.jpg");
    logo2 = IMG_Load("l2.jpg");
    logo3 = IMG_Load("l4.jpg");
    coat = IMG_Load("pre.jpg");

    // Display logo1
    while (i != 128)
    {
        SDL_SetAlpha(logo1, SDL_SRCALPHA, i);
        SDL_BlitSurface(logo1, NULL, ecran, &poslogo);
        SDL_Flip(ecran);
        i++;
        while (SDL_PollEvent(&event))
            switch (event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    i = 128;
                    break;
                }
            }
    }

    i = 0;

    // Display logo2
    while (i != 128)
    {
        SDL_SetAlpha(logo2, SDL_SRCALPHA, i);
        SDL_BlitSurface(logo2, NULL, ecran, &poslogo);
        SDL_Flip(ecran);
        i++;
        while (SDL_PollEvent(&event))
            switch (event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    i = 128;
                    break;
                }
            }
    }

    i = 0;

    // Display logo3
    while (i != 128)
    {
        SDL_SetAlpha(logo3, SDL_SRCALPHA, i);
        SDL_BlitSurface(logo3, NULL, ecran, &poslogo);
        SDL_Flip(ecran);
        i++;
        while (SDL_PollEvent(&event))
            switch (event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    i = 128;
                    break;
                }
            }
    }

    i = 0;

    // Display coat
    while (i != 128)
    {
        SDL_SetAlpha(coat, SDL_SRCALPHA, i);
        SDL_BlitSurface(coat, NULL, ecran, &poslogo);
        SDL_Flip(ecran);
        i++;
        while (SDL_PollEvent(&event))
            switch (event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                case SDLK_ESCAPE:
                    i = 128;
                    break;
                }
            }
    }

    SDL_FreeSurface(logo1);
    SDL_FreeSurface(logo2);
    SDL_FreeSurface(logo3);
    SDL_FreeSurface(coat);
}

