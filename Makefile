CFLAGS=-w -O2 -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -lserialport
prog:fontion.o main.o arduino.o enemy.o
	gcc fontion.o main.o arduino.o enemy.o -o prog $(CFLAGS)
main.o:main.c
	gcc -c main.c
fontion.o:fontion.c
	gcc -c fontion.c
enemy.o:enemy.c
	gcc -c enemy.c
arduino.o:arduino.c
	gcc -c arduino.c
clean:
	rm -rf *.o
