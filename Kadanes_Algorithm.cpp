// finding the maximum sum of subarray. Using KADANE'S ALGORITHM
#include<iostream>
using namespace std;
int main()
{	int a[50],n,sum=0,maxi;
	cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements in SORTED manner:\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
			maxi=max(maxi,sum);
			if(sum<0)  //neglecting -ve numbers.
			{
				sum=0;
			}
		}
		cout<<"the maximum sum out of all th subarrays is:"<<maxi;
		return 0;
}
