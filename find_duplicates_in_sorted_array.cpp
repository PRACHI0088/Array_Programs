//finding duplicate elements in a SORTED ARRAY
#include<iostream>
using namespace std;
int main()
{
	int a[50],n,ld=0;
	cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements in SORTED manner:\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"the duplicate numbers are: \n";
		for(int i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
				if(a[i]!=ld)
				{
					ld=a[i];
					cout<< a[i];
					cout<<"\n";
				}
			}
		}
	
return 0;
}
