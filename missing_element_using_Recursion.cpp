// finding a missing element in a sorted array using recursion.

	#include<iostream>
	#include<algorithm>
	#include<bits/stdc++.h>
	using namespace std;
	
	int missing( int arr[], int s)
	{  int sum=0,ans=0,x,p=0;
	    x= (s+1)*(s+2);
	   ans= x/2;
		for(int i=0;i<s;i++)
		{
			sum=sum+arr[i];
		}
		 p = abs(ans-sum);
		 return p;
	}
	
	int main()
	{
		int n, a[50],p=0;
		cout<<"enter the size of the array (less than 50)"<<endl;
		cin>>n;
		cout<<"enter the array elements:"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

				p=missing(a,n);
				cout<<"the missing element is:"<<p<<endl;

	}

