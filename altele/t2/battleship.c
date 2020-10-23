#include<ncurses.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	//declaram fereastra  
	WINDOW *w;
	//optiunile din meniu
	char meniu[6][12] = {"New Game", "Resume Game", "Quit"}; //optiunile
	char optiunii[10];//un vector pentru optiuni
	//Activam Ncurses
	initscr();
	w = newwin(5, 20, 2, 2); //dimensiunile ferestrei
	box(w, 0, 0); // marginile ferestrei
	for ( int i = 0; i<3; i++ ){
		sprintf(optiunii, "%-5s", meniu[i]);//selectam optiunea din lista
		mvwprintw(w, i+1, 2, "%s", optiunii);//cursor
	}
	keypad(w,TRUE);//activam tastatura
	int schimba, i=0;
	while ( ( schimba = wgetch(w) ) != 0x0A ){ //0x0A e codul pentru ENTER
		sprintf(optiunii, "%-7s", meniu[i]);// selectam optiunea din din lista
		mvwprintw(w, i+1, 2, "%s", optiunii);//cursor
		// avem variabila schimba care are rolul de a
		// misca optiunea selectata 
		switch(schimba){//modificareile ce se produc la apasarea tastelor 
			case KEY_UP: //sus
				i--;
				if( i < 0 ) i=2;
				break;
			case KEY_DOWN: // jos
				i++;
				if( i > 2 ) i=0;
				break;
		}
		sprintf(optiunii, "%-7s", meniu[i]);// selectam optiunea din din lista
		mvwprintw(w, i+1, 2, optiunii);//cursor
	}
	delwin(w);//pentru a sterge fereastra
	endwin();
	if(i==2) exit(0); //pentru a stinge programul
}