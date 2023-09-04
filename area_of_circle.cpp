//Area of a circle
#include<iostream> //standard input-output stream.
#include<conio.h>
using namespace std; //standard namespace
  int main() //main program
{  int r;
   float a;
   clrscr()
   cout<<"Enter the radius of the circle: \n";
   cin>>r;
   a=3.14*r*r;
   cout<<"The area of the circle is: \n "<<a;
   return 0;
}