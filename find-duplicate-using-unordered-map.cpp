// Find the Duplicate Number using unordered map.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int a[50],n;
		cout<<"enter the size of the array A: \n";
		cin>>n;
	
		cout<<"enter the  array elements (only ONE duplicate should be there):\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	
	unordered_map<int,bool> mp;
        int flag=0,p=0;
    
        for(int i=0;i<=n;i++)
        {
            if(mp[a[i]]==1)
            {   p=a[i];
                flag=1;
                break;
            }
            else
            mp[a[i]]=true;
        }
        cout<<"the duplicate number is:"<<endl;
        if(flag==1)
        {
            cout<< p;
        }
	return 0;
}
