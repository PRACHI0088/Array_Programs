//finding duplicate elements in a SORTED ARRAY and Counting their no. of occurrence.
#include<iostream>
using namespace std;
int main()
{
		int a[50],n,j,no;
	cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements in SORTED manner:\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			{
				j=i+1;
				while(a[j]==a[i])
				{
					j++;
				}
				no=j-i;
				cout<<"The number  "<<a[i]<<"  occured  "<<no<<"  Times"<<endl;
				i=j-1;
			}
		}

return 0;
}
