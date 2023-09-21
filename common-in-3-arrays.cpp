// find elements common in 3 sorted arrays. 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
		   int i,j,k;
           i=j=k=0;
           vector<int> ans;
           
           
           	int a[50],b[50],c[50],n1,n2,n3,ld=0;
		cout<<"enter the size of the 1st array: \n";
		cin>>n1;
			cout<<"enter the size of the 2nd array: \n";
		cin>>n2;
	
		cout<<"enter the size of the 3rd array: \n";
		cin>>n3;
		
		cout<<"enter all the elements in SORTED Oreder."<<endl;
	
		cout<<"enter the 1st array elements:\n";
		for(int p=0;p<n1;p++)
		{
			cin>>a[p];
		}
		cout<<"enter the 2nd array elements:\n";
		for(int p=0;p<n2;p++)
		{
			cin>>b[p];
		}
		cout<<"enter the 3rd array elements:\n";
		for(int p=0;p<n3;p++)
		{
			cin>>c[p];
		}           
           
           
           while(i<n1 && j<n2 && k<n3)
           {
               if(a[i]==b[j] && b[j]==c[k])
               {
                   ans.push_back(a[i]);
                   i++;
                   j++;
                   k++;
               }
               else
               if(a[i]<b[j])
               {
                   i++;
               }
               else
               if(b[j]<c[k])
               {
                   j++;
               }
               else
               { k++; }
               int x,y,z;
               x=a[i-1];
               y=b[j-1];
               z=c[k-1];
               while(x==a[i])
               i++;
               while(y==b[j])
               j++;               
               while(z==c[k])
               k++;
           }
           
           if(ans.size()==0)
      	     {
        	   	cout<<"No common elements ";
           	 }
           else
            { cout<<"The common elements are:"<<endl;
        		   for(int p=0;p<ans.size();p++)
           			{
           				cout<<ans.at(p)<<endl;
		   			}
		    }         
	return 0;
}
