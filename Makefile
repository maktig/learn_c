CC=gcc
CFLAGS=-Wall -g
TARGET=ex3 ex1

all: ex1 ex3

ex1: ex1.c
	$(CC) $(CFLAGS) -o ex1 ex1.c

ex3: ex3.c
	$(CC) $(CFLAGS) -o ex3 ex3.c

ex4: ex4.c
	$(CC) $(CFLAGS) -o ex4 ex4.c

clean:
	$(RM) ex1 ex3 ex4
