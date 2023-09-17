// findig duplicates in a word using masking(AND) and merging(OR)
#include<iostream>
using namespace std;
int main()
{ char a[50];
  int p=0,x=0,h=0;
  cout<<"Enter a word:"<<endl;
  gets(a);
  for(int i=0;a[i]!='\0';i++)
  {
  	p=a[i]-97;
  	x=1;
  	x=x<<p;
  	if((x&h) >0) 
  	{
  		cout<<"duplicate is found: it is = "<<a[i]<<endl;  		
	}
	else
	{
		h=h|x; //making h[p]=1 by using 'or' operation 0|1=1
	}
  }
  
return 0;
}
