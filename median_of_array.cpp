// find median of given array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{	     int a[50],n,med=0;
		cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the array elements:\n";
		for(int p=0;p<n;p++)
		{
			cin>>a[p];
		}
		cout<<"sorted array:\n";
	sort(a,a+n); //sorting the input array.
	for(int p=0;p<n;p++)
		{
			cout<<a[p]<<endl;
		}
	if(n%2==0)
	{ int p,q;
	 p=n/2;
	 q=a[p]+a[p-1];
		med= q/2;
	cout<<"the median is:"<<med;
	}
	else
	{
		med=n/2;
		cout<<"the median is:"<<a[med];
	}
	return 0;
}
