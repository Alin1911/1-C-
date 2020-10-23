# Declaratiile de variabile
CC = gcc
CFLAGS = -g -Wall -lm 
 
# Regula de compilare
all: battleship​

battleship​: main.c
	$(CC) -o battleship​ main.c $(CFLAGS)
	./battleship​

# Regulile de "curatenie" (se folosesc pentru stergerea fisierelor intermediare si/sau rezultate)
.PHONY : clean
clean :
	rm -f battleship​
	rm -f *.out
