//count the set bits of a given number.

#include<iostream>
using namespace std;
int main()
{ unsigned int n,c=0;
  cout<<"enter a number"<<endl;
  cin>>n;
   while(n!=0) 
   {
   	if(1&n)  //if 1&n=1 this means n bit=1
   	{
   		c++;
    }
	n=n>>1;  //right shifting.
  }
  cout<<"no. of set bits are: "<<c;
return 0;
}
