# Declaratiile de variabile
CC = gcc
CFLAGS = -g -Wall -lm -lncurses 
 
# Regula de compilare
all: battleship​

battleship​: ​battleship.c
	$(CC) -o battleship​ ​battleship.c $(CFLAGS)
	./battleship​

# Regulile de "curatenie" (se folosesc pentru stergerea fisierelor intermediare si/sau rezultate)
.PHONY : clean
clean :
	rm -f battleship​
	rm -f *.out
