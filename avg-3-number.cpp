// average of 3 numbers
#include<iostream> //standard input-output stream.
using namespace std; //standard namespace
  int main() //main program
{ int a,b,c;
  float avg;
  cout<<"enter the three numbers whose average you want to find: \n";
  cin>>a>>b>>c;
  avg=(a+b+c)/3;
  cout<<"the average of three numbers is: \n"<<avg;
  return 0;
}