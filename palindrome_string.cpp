//to check a palindrome char array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[50];
  int s=0,e;
  cout<<"enter a word:";
  gets(a);
  e= strlen(a)-1;
  cout<<"the input string is: "<<a<<endl;
  cout<<"ant it's length is: "<<e<<endl;
  while(s<e)
  {
  	if( (a[s]==a[e]) )
  	{
  			s++;
			e--;

	}
	else
	{
		cout<<"the word is not palindrome!";
  		break;

	}
	cout<<"the word is palindrome.";
  
  }
  
  
return 0;
}
