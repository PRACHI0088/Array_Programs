//finding the length of a character array.
//this is a basic program of a char array. I have used "cin" to take the input array and that's why it will read the input till it 
//encounters either of the following: null character, newline character or tab
//when gets() is used instead of "cin" it continues consider the letters even when spaces are encountered.
#include<iostream>
using namespace std;

int getlength(char a[])
{   int ct=0;
		for(int i=0;a[i]!='\0';i++)
		{
			ct++;
		}
		return ct;	
}

int main()
{
		char s[50];

		cout<<"\n enter the  character array :\n";
		cin>>s;
		cout<<"\n the length of the given char array is  : ";
		cout<<getlength(s);
		return 0;
}
