//Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
//we will use a hashmap here.
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
		int a[50],n,s=0,f=0;
		unordered_map<int,int> m;
		cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements in SORTED manner:\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			s=s+a[i];
			if(s==0 || m[s] || a[i]==0)
			{
				f=1;
				break;
			}
			else
			{
				m[s]=1; //marking the s in map as visited. so that we can check if any value of s is repeated or not.
			}
		}
		if(f==1)
		{
			cout<<"subarray with sum=0 is PRESENT \n";
		}
		else
		{
			cout<<"subarray with sum=0 is ABSENT \n";
		}
		
		return 0;
}
