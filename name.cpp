#include <iostream>
using namespace std;
void result(int x ,int y);
main (){
int x;
int y;
cout <<"enter no.1  ";
cin >> x;
cout <<"enter no.2   ";
cin >> y;
result( x, y);
}
void result(int x, int y){
if ( x == y){
cout <<"true ";
}
if( x !=  y){
cout <<"false ";
}
}