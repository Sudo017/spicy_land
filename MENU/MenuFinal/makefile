prog:main.o Backg.o Buttons.o texte.o intro.o
	gcc main.o Backg.o Buttons.o texte.o intro.o -o prog -lSDL -lSDL_ttf -g -lSDL_image -lSDL_mixer
main.o:main.c
	gcc -c main.c -g
Backg.o:Backg.c
	gcc -c Backg.c -g
Buttons.o:Buttons.c
	gcc -c Buttons.c -g
texte.o:texte.c
	gcc -c texte.c -g
intro.o:intro.c
	gcc -c intro.c -g

