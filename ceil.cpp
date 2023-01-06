#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
float calculateHight(float degree, float distance);
	

main()
{
  float deg , dis, hight;
  cout <<"enter value in degree: ";
  cin >>deg;
  cout <<"enter distance: ";
  cin >>dis;
  hight = calculateHight(deg , dis);
  cout <<" hight is: "<<hight<<endl;
}
float calculateHight(float degree, float distance)
{
  float radian = 57.2958;
  float radians = degree / radian;
  float result = tan(radians);
  float height = result * distance;
  return height;
}