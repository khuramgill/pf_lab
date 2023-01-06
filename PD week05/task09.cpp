#include <iostream>
#include <cmath>
using namespace std;

  main()
{	
 int a , b ,c;
 int a1 , Xn ,  Xp;
 cout<<"Enter no1: ";
 cin>>a;
 cout<<"Enter no2: ";
 cin>>b;
 cout<<"Enter no3: ";
 cin>>c;
 a1 = ( (b*b) - (4*a*c) );
  Xn = (- b - (sqrt(a1) ) )/ 2*a;
   Xp = (- b + (sqrt(a1) ) )/ 2*a;
  cout<<"X is: "<< Xn<<" and "<<Xp; 
 
}