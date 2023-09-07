//multiplying two numbers without using "*" operator .
#include<iostream>
using namespace std;

int fun(int a, int b)
{   int p=0;
	if(b==0)
	{
		return 0;
 	} 
	 else 
	if(b==1)
	 {
	 	return a;
 	 }
	 else
   	 if(b>=1)
	{
		p=fun(a,b-1)+a;
    }
    return p;
}
int main()
{
	int a,b;
	cout<<"enter the two numbers to be multiplied:"<<endl;
	cin>>a>>b;
	cout<<"the product of "<<a<<" and "<<b<<" is :"<<fun(a,b)<<endl;
	return 0;
}