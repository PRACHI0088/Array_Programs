//finding multiple missing elements in a sorted array by using another array
#include<iostream>
using namespace std;

int main()
{	int a[10],n,b[20]={0},k=0,max=0;
	cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements in sorted manner: (less than 20)\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
				max=a[n-1];
	cout<<"the missing elements are: \n";
	for(int i=0;i<n;i++)
	{   	
				k=a[i];
				b[k]=1;
			
	}
	
	for(int k=1;k<=max;k++)
	{    if(b[k]==0)
		{ cout<<k<<endl;
	    }
	}
	
	return 0;
}
