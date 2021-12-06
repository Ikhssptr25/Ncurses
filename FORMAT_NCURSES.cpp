#include <ncurses/ncurses.h>
using namespace std;

int main(){
	initscr();
	
	mvprintw (15,20,"Ikhsan Saputra");
	
	refresh();
	getch();
	
	endwin();
}
