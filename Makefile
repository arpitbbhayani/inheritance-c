CC=gcc

all: ll

ll: main.o ll.o
	gcc -o ll -Wall main.o ll.o

main.o: main.c ll.h
	gcc -I. -Wall -c main.c ll.c

ll.o: ll.c ll.h
	gcc -I. -Wall -c ll.c

clean:
	rm -rf *.o *.h.gch a.out ll
