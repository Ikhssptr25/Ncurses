#include<ncurses/ncurses.h>
#include<windows.h>



int main(){
	initscr();
	
	while(true){
	clear();
	mvprintw(10,50,"[");
	refresh();
	Sleep(500);
	
	mvprintw(11,50,"[");
	refresh();
	Sleep(500);
	
	mvprintw(12,50,"[");
	refresh();
	Sleep(500);
	
	mvprintw(10,55,"]");
	refresh();
	Sleep(500);
	
	mvprintw(11,55,"]");
	refresh();
	Sleep(500);
	
	mvprintw(12,55,"]");
	refresh();
	Sleep(500);
	
}

	getch();
	endwin();
}

