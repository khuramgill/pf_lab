#include <iostream>
using namespace std;
void name1(string);

main (){
 string value;
 cout<<"enter input in true/false: ";
 cin>>value;
 name1(value);
}

void name1(string va){

  if(va=="true"){
    cout<<"False ";
  }else{
   cout<<"True";
  } 

}