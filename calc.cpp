#include <iostream>
using namespace std;


void add(int number1 , int number2);
void multiply(int number1 , int number2);
void divide(float number1 , float number2);
void subtract(int number1 , int number2);

/*void printName(string name){
cout <<"Your name is: "<<name<<endl;
}
*/
main(){

float number1;
float number2; 
char choice;
while (true){
cout << "Enter 1st number: ";
cin >> number1;
cout << "Enter 2nd number: ";
cin >> number2;
cout << "Enter the operator(+,-,/,*): ";
cin >>  choice;

if(choice == '+'){
add(number1 , number2);
}
if(choice == '*'){
multiply (number1 , number2);
}
if(choice == '/'){
divide(number1 , number2);
}
if(choice == '-'){
subtract(number1 , number2);
}
cout << "______________________________________________"<<endl;
}


/*string data;

while(true){
cout << "Enter your name: ";
cin >> data;
printName(data);
}

*/
}
void add(int number1 , int number2){
int sum = number1 + number2;
cout << "Sum: "<<sum<<endl;
}

void multiply(int number1 , int number2){
int multiply = number1 * number2;
cout << "Product: "<<multiply<<endl;
}

void divide(float number1 , float number2){
float divide = number1 / number2;
cout << "Divide: "<<divide<<endl;
}

void subtract(int number1 , int number2){
int subtract = number1 - number2;
cout << "Subtract: "<<subtract<<endl;
}
























