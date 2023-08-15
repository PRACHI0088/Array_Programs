// program to find row wise sum of a 2D-Array.

	#include<iostream>
	using namespace std;
	
	void rowsum(int arr[][10], int row, int col)
	{ int sum=0;
		for(int i=0;i<row;i++)
		{  sum=0;
			for(int j=0;j<col;j++)
			{sum= sum+arr[i][j];
			}
	     cout<<"ROW"<<i<<":"<<sum<<endl;
		}
	}
	int main()
	{
		int a[10][10],row=0,col=0;
		cout<<"enter the number of rows and columns of the 2D array (<10)"<<endl;
		cin>>row>>col;
		cout<<"enter the array elements:"<<endl;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			cin>>a[i][j];
		}
		cout<<"the row-wise sum of the array is as follows:"<<endl;
		rowsum(a,row,col);
		return 0;
	
	}