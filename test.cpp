#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
	bool isSymmetrical(int number);

  main()
{
   int number1;
   cout <<"enter number: ";
   cin>>number1;
   isSymmetrical(number1);

}
  bool isSymmetrical(int number)
{
  if (number << number){
  cout <<"number is symmetrical ";
}
  if (number >> number){
  cout <<"number is not symmetrical ";
}
  return number;
}
