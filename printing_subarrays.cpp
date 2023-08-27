//printing all the sub arrays of a given array.
#include<iostream>
using namespace std;
int main()
{
		int a[50],n;
	cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements in SORTED manner:\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				for(int k=i;k<=j;k++)
				cout<<a[k]<<" ";
							cout<<endl;
			}

		}

return 0;
}
