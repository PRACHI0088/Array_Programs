// check if two strings are ANAGRAM or not.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{ char a[50],b[50];
int flag=1;
  unordered_map<char,int> map;
  
  cout<<"enter the first string:"<<endl;
  gets(a);
  cout<<"enter the second string:"<<endl;
  gets(b);
  for(int i=0;a[i]!='\0';i++)
  {
  	map[a[i]]++;
  }
  for(int i=0;b[i]!='\0';i++)
  {
  	map[b[i]]--;
  	if(map[b[i]]<0)
  	{
  		cout<<"Not Anagram Strings !"<<endl;
		  break;	
	}
  }
  	cout<<"The Strings are Anagram "<<endl;

 return 0;
}
