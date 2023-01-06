#include <iostream>
using namespace std;

void odd(string);
void even(string);

main(){

int number;
int operation;
cout <<"Enter number: ";
cin >> number;
operation = number % 2;
//if(operation == 0){
//cout << "Number is even";
//}
//if(operation != 0){
//cout << "Number is odd";
//}

even (number);
odd (number);
}
void even (string operation){
if(operation == 0){
cout << "Number is even";
 }
}
void odd (string operation){
if(operation != 0){
cout << "Number is odd";
}
}
