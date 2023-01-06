#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void maze();

main (){
	system("cls");
 	maze();
int x = 5;
int y = 8;
	while(true)
{	gotoxy(x,y);
if(x < 12){
x = x + 1;
}
if(x == 16){
gotoxy(x-1, y);
cout << " ";
x = 5;
	}
}


	}
 	void maze(){

cout <<"#######################################"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"*                                     *"<<endl;
cout <<"#######################################"<<endl;

}
	
	void gotoxy (int x, int y){

	COORD corrdinates;
	corrdinates. X = x;
	corrdinates. Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), corrdinates);
}