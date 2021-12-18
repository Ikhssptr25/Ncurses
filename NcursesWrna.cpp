#include <ncurses/ncurses.h>
#include<windows.h>
using namespace std;

int main(){
	initscr();
	start_color();
	init_pair(1,COLOR_GREEN,COLOR_WHITE);
	init_pair(2,COLOR_BLUE,COLOR_WHITE);
	init_pair(3,COLOR_RED,COLOR_WHITE);
	init_pair(4,COLOR_BLACK,COLOR_WHITE);
	
	attron(COLOR_PAIR(1));
	mvprintw(1,1,"Welcome ");
	refresh();
	Sleep(1000);
	
	mvprintw(1,9,"to ");
	refresh();
	Sleep(1000);
	
	mvprintw(1,12,"my program ");
	attroff(COLOR_PAIR(1));
	refresh();
	Sleep(500);
	
	attron(COLOR_PAIR(2));
	mvprintw(4,4,"please ");
	refresh();
	Sleep(1000);
	
	mvprintw(4,11,"wait!!!");
	attroff(COLOR_PAIR(2));
	refresh();
	Sleep(1000);
	clear();
	
	
	for(int i=1;i<=3;i++){
		attron(COLOR_PAIR(3));
		printw("Loading");
		Sleep(250);
		refresh();
		clear();
		printw("Loading..");
		Sleep(250);
		refresh();
		clear();
		printw("Loading...");
		Sleep(250);
		refresh();
		clear();
		printw("Loading....");
		attroff(COLOR_PAIR(3));
		Sleep(250);
		refresh();
		clear();
}
	clear();
	
	attron(COLOR_PAIR(4));
	mvprintw(7,7,"~Ikhsan ");
	refresh();
	Sleep(1000);
	
	mvprintw(8,13,"Saputra~ ");
	attroff(COLOR_PAIR(4));
	refresh();
	Sleep(1000);
	clear();
	
	
	getch();
	refresh();
	endwin();
}
