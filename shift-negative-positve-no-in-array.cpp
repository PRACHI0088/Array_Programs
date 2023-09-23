// to shift -ve no. on right side and +ve no. on left side of the given array.

#include<iostream>
using namespace std;
int main()
{	int a[50],n;
	int l,r; 
		cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements:\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		l=0;
		r=n-1;
		while(l<=r)
		{
			if(a[l]<0 ) 
			{
				if(a[r]>=0)
				{	swap(a[l],a[r]);
					l++;
					r--;
				}
				else
				r--;
			}
			else
			if(a[r]>=0)
			{
				if(a[l]<0)
				{
					swap(a[l],a[r]);
					l++;
					r--;
				}
				else
				l++;
			}
			else
			{
				l++;
				r--;
			}
		}
		cout<<"the array is :"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		
	
	return 0;
}
