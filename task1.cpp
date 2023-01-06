#include <iostream>
using namespace std;

// void info(string name , int marks , int aggregate , char section);
   void sum(int number1 , int number2);
main(){
  
 /*
 string name;
 int marks;
 int aggregate;
 char section;
 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter your marks: ";
 cin >> marks;
 cout << "Enter your aggregate: ";
 cin >> aggregate;
 cout << "Enter your section: ";
 cin >> section;
 info(name , marks , aggregate , section);

*/

/*
 int number1;
 int number2;
 int number3;
 int number4;
 int number5;
 int number6;
 int sum;
 int sum2;
 int sum3;

 cout << "Enter number1: ";
 cin >> number1;
 cout <<"Enter number2: ";
 cin >> number2;
 sum = number1 + number2;

 cout << "Sum is: "<< sum << endl;

 cout << "Enter number: ";
 cin >> number3;
 cout <<"Enter number: ";
 cin >> number4;
 sum2 = number3 + number4;
 cout << "Sum is: "<< sum2 << endl;

 cout << "Enter number: ";
 cin >> number5;
 cout <<"Enter number: ";
 cin >> number6;
 sum3 = number5 + number6;
 cout << "Sum is: "<< sum3;
*/

 int number1;
 int number2;

 cout << "Enter number1: ";
 cin >> number1;
 cout <<"Enter number2: ";
 cin >> number2;

 sum(number1 , number2);


}
/*
  void info(string name , int marks , int aggregate , char section){
  
  cout << "Your name is: " <<name <<endl;
  cout << "Your marks are: "<<marks  <<endl;
  cout << "Your aggregate is: " <<aggregate <<endl;
  cout << "Your section is: " <<section <<endl;

  }

*/


void sum(int number1 , int number2){

 int sum = number1 + number2;
 cout << "The sum is: " << sum;

}