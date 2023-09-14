//find the number of elements in the union between these two arrays.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{		int a[50],b[50],n,m;
		unordered_map<int,bool> map; //mapping int with boolean values.
		vector<int> ans;
		cout<<"enter the size of the array A: \n";
		cin>>n;
		cout<<"enter the size of the array B: \n";
		cin>>m;
		cout<<"enter the  array elements :\n";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"enter the  array elements :\n";
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		//entering the unique values from array a[] in the vector ans.
		for(int i=0;i<n;i++)
		{
			if(map.count(a[i])<=0)
			{
				map[a[i]]=true; //marking a[i] is present.
				ans.push_back(a[i]); //entering a[i] in vector.
			}
		}

		//entering the unique values from array b[] in the vector ans.
		for(int i=0;i<m;i++)
		{
			if(map.count(b[i])<=0)
			{
				map[b[i]]=true; //marking a[i] is present.
				ans.push_back(b[i]); //entering a[i] in vector.
			}
		}
 cout<<"the union of two arrays is given by:"<<endl;
for(int i=0;i<ans.size();i++)
{
	cout<<ans.at(i)<<endl;
}


	return 0;
}
