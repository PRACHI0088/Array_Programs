//Given an array, rotate the array by one position in clock-wise direction.
#include<iostream>
using namespace std;
int main()
{	int a[50],n,temp,p;
	cout<<"enter the size of the array: \n";
		cin>>n;
		cout<<"enter the  array elements:\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		temp=a[n-1];
    p=n;
    for(int i=0;i<n;i++)
    {
        a[p-1]=a[p-2];
        p--;
    }
    a[0]=temp;
    
    cout<<"The rotated array by one is: "<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<endl;
	}

return 0;
}    