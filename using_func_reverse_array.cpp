 #include<iostream>
using namespace std;
 
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

 
 void revarray(int a[],int n)
 { int s=0,e=n-1;   //s=starting element, e=last element
 while(s<=e)
 {  
       	  swap(a[s],a[e]);  //INBULIT FUNCTION: to swap two array elements
	   	  s++;
        	  e--;
 }	
 }
 	
 
 int main()
 {
 	 int n,a[10];
   
    cout<<"enter n, number of array elements:"<<endl;
    cin>>n;
    cout<<"now enter the array elements:"<<endl;
    inputarray(a,n);
    cout<<"the reversed array is:"<<endl;
    revarray(a,n);
    
 printarray(a,n);
   
   return 0;
}
   
   
   
   
