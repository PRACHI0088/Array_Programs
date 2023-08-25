//finding multiple missing numbers in a sorted array.
#include<iostream>
using namespace std;
void func(int a[],int s)
{
	int l=0,diff;
	l=a[0]-1;
	diff= l-0;
	for(int i=0;i<s;i++)
	{
		if(a[i]-i != diff)
		{
			while(a[i]-i > diff)
			{
				cout<<diff+i<<endl;
				diff++;
			}
		}
	}
}


int main()
{ 	int a[10],n;
	cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements in sorted manner: \n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"the missing numbers are: \n";
		func(a,n);
				

	return 0;
}
