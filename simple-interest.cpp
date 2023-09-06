// program to calculate simple interest.
#include<iostream> //standard input-output stream.
using namespace std; //standard namespace
  int main() //main program
{ int p,t,r;
  float si;
  cout<<"Enter the priciple amount: \n ";
  cin>>p;
  cout<<"Enter the rate: \n";
  cin>>r;
  cout<<"Enter the time period: \n";
  cin>>t;
  si=(p*r*t)/100;
  cout<<"The simple interest is: "<<si;
  return 0;
}