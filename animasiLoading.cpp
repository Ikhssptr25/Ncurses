#include <ncurses/ncurses.h>
#include<windows.h>
using namespace std;
	
	int main(){
	initscr();
	for(int i=1;i<=3;i++){
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
		Sleep(250);
		refresh();
		clear();
}
	clear();
	
	getch();
	refresh();
	endwin();
}
