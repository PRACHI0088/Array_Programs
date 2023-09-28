// Finding sum of all array elements using function.
#include<iostream>
using namespace std;
 int func(int a[],int n);
 
 int main()
 {
 	 int n,a[10],sum=0;
   
   cout<<"enter n"<<endl;
   cin>>n;
   cout<<"now enter the array elements:"<<endl;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   sum=func(a,n);
   cout<<"The sum of the array elements is:"<<sum;
   return 0;
 }
 
 int func(int a[],int n)
 {  int s;
 	 for(int i=0;i<n;i++)
 	 s=s+a[i];
     return s;
 }