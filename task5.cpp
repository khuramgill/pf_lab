#include <iostream>
#include <windows.h>
using namespace std;
	void gotoxy(int x, int y);
	void move(int x, int y);
void name();

main(){
system("cls");
gotoxy(55,15);
name();
}

	void gotoxy(int x, int y){

	COORD corrdinates;
	corrdinates. X = x;
	corrdinates. Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), corrdinates);
}

void name(string){
cout <<"khuram gill";
}

	void name(){

cout <<"  $   $ $                                                   "<<endl;
cout <<"  $  $  $                                                  "<<endl;
cout <<"  $ $   $                                                      "<<endl;
cout <<"  $$    $$$$$% 0     0 *   *     .***.   ''|---:---:                          "<<endl;
cout <<"  $ $   $    $ 0     0 * *   *  *     * .  |   :   :                 "<<endl;
cout <<"  $  $  $    $ 0     0 *        *     */   |   :   :                 "<<endl;
cout <<"  $   $ $    4 0 0 0 0 *         `***`                      "<<endl;



}