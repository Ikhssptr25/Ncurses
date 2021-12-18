#include <iostream>
#include <ncurses/ncurses.h>
#include<windows.h>
using namespace std;

/*ikhsan saputra
Npm:2117051037
kelas:B*/

int main(){
	
	
	//variabel//
	int a;
	int b;
	int c;
	
	//input//
	cout<<"Masukkan angka : "; 
	cin>>b;
	cout<<"Masukkan angka : "; 
	cin>>c;
	
	
	a=b/c;
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
	
	//output//
	cout<<"Hasil pembagian  :"<< a <<endl;
	

	refresh();
	getch();
	
	endwin();
}
