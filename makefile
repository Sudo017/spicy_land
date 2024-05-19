enigme1:main.o enigme.o 
	gcc main.o enigme.o -o enigme1 -lSDL -lSDL_ttf -lSDL_mixer -lSDL_image -g
main.o:main.c
	gcc -c main.c -g
enig.o:enigme.c
	gcc -c enigme.c -g
