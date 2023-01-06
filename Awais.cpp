#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void A();
void W();
void a();
void I();
void S();
main(){

gotoxy(55, 15);
void A();

void W();

void a();

void I();

void S();


}

	void gotoxy (int x, int y){

	COORD corrdinates;
	corrdinates. X = x;
	corrdinates. Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), corrdinates);
}


 void A(){
cout<<"      ^                 "<<endl;
cout<<"     ^.^           "<<endl;
cout<<"    ^   ^         "<<endl;
}


void W(){
cout<<"   ^   ^^   ^      "<<endl;
cout<<"    ^ ^  ^ ^             "<<endl;
cout<<"     ^    ^              "<<endl;


}
void a(){

cout<<"      ^                 "<<endl;
cout<<"     ^.^           "<<endl;
cout<<"    ^   ^         "<<endl;
}
void I(){
cout<<"      -                 "<<endl;
cout<<"      |               "<<endl;
cout<<"      |                "<<endl;
}
void S(){
cout<<"      .***>                "<<endl;
cout<<"      **`                 "<<endl;
cout<<"         *              "<<endl;
cout<<"     <***`               "<<endl;

}





