CC=gcc

all: inherit

inherit: main.o inherit.o
	gcc -Wall main.o inherit.o

main.o: main.c inherit.h
	gcc -Wall -c main.c inherit.c

inherit.o: inherit.c inherit.h
	gcc -Wall -c inherit.c

clean:
	rm -rf *.o *.h.gch a.out inherit
