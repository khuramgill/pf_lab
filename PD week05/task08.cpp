#include <iostream>
#include <cmath>
using namespace std;
  float height(int deg , int dis);
  main()
{	
  float deg , dis , result;
 cout<<"Enter value in degrees: ";
 cin>>deg;
 cout<<"Enter distance: ";
 cin>>dis;
  result = height(deg , dis);
  cout<<"Height is:"<<result;

}
  float height(int deg , int dis)
{
  float rad , height;
  rad = deg / 57.2958;
  height = tan(rad) * dis;
  return height;  


}