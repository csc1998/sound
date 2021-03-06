#include "screen.h"
#include <stdio.h>
// function definition of cleanScreen()
void clearScreen(void){
	printf("%c[2J",ESC);
	fflush(stdout);
}

// function definition of gotoxy()
void gotoxy(int row, int col){
	printf("%c[%d;%dH", ESC, row, col);
	fflush(stdout);
}


// function definition of gotoxy()
void setColor(int color){
	if(color>=BLACK && color<=WHITE){
		printf("%c[1;%dm", ESC, color);
		fflush(stdout);
	}
}

// function definition of dispBar()
void dispBar(int col, double dB){
	int i;
	for(i=0; i<dB/3; i++){
		gotoxy(30-i, col+1);
#ifndef UNICODE		// if unicode is not enabled
		printf("%c", '*');
#else
		if(i<50/3) setColor(WHITE);
		else if(i<70/3) setColor(YELLOW);
		else setColor(RED);
		printf("%s", BAR);
#endif
	}   // end of for
}	// end of function


