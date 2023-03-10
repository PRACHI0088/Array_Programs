#include<iostream>
using namespace std;
int main()
{ int a[10],max,min,n;
  cout<<"enter no. of elements of the array:";
  cin>>n;
  cout<<"\n enter the array elements:";
  for(int i=0;i<n;i++)
  { cin>>a[i]; }
  max=a[n-1];
  min=a[0];
  for(int i=0;i<n;i++)
  { if(a[i]<min)
     min=a[i];
     else
    if(a[i]>max)
	max=a[i]; 
  }
  cout<<"\n maximun :"<<max<<endl;
  cout<<"\n minimum :"<<min<<endl;
  return 0; 
  
}