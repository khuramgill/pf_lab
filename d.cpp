#include <iostream>
#include <cmath>
using namespace std;
  int position(int number);
  string isEvenish(int number);

main()
{
int number;
cout <<"enter no: ";
cin >>number;


}
   int position(int number){
  int p1, p2, p3, p4;
  p1 = number % 10;
  number = number / 10;
  p2 = number % 10;
  number = number / 10;
  p3 = number % 10;
  number = number / 10;
  p4 = number % 10;
  number = number / 10;
  return number;
}