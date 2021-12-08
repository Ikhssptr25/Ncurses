#include <ncurses/ncurses.h>
using namespace std;

/*ikhsan saputra
Npm:2117051037
kelas:B*/

int main(){
	
	initscr();
	
	//variabel//
	char name[50];
	char address[150];
	char hobby[200];
	
	//input//
	getstr(name);
	getstr(address);
	getstr(hobby);
	
	//output//
	mvprintw (10,50,"Nama  :"); printw (name);
	mvprintw (11,50,"Alamat:"); printw (address);
	mvprintw (12,50,"Hobi  :"); printw (hobby);
	
	
	refresh();
	getch();
	
	endwin();
}
