//find the missing element  in a consecutive sorted array
#include<iostream>
using namespace std;

int func(int arr[], int size)
{  int sum=0,p=0,ans=0;
	p= arr[size-1]*(arr[size-1]+1) / 2 ;
	for(int i=0;i<size;i++)
	{ 
	   sum=sum+arr[i];
	}
		ans=abs(p-sum);			
	return ans;
}



int main()
{
	int a[10],n,p=0, sum=0,ans;
	cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements in sorted manner: \n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"the missing number is: \n";		
		cout<<func(a,n);
		return 0;
	
}