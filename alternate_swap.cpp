#include<iostream>
using namespace std;

 void altswap(int a[],int n);

void inputarray(int a[],int n)
 {
 	 for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
 }
 
 void printarray(int a[],int n)
 {
 	 for(int i=0;i<n;i++)
   {
   	cout<<a[i]<<endl;
   }
 }

 int main()
 {
 	 int n,a[10];
   
   cout<<"enter n, number of array elements:"<<endl;
   cin>>n;
   cout<<"now enter the array elements:"<<endl;
   inputarray(a,n);
cout<<"alternatively swapped array is:"<<endl;
  altswap(a,n);
  printarray(a,n);
  return 0;
}

 void altswap(int a[],int n)
 { for(int i=0;i<n;i+=2)
    {  if(i+1<n)
    	{ swap(a[i],a[i+1]); 
		 }
	}
	  //printarray(a,n);

 }


