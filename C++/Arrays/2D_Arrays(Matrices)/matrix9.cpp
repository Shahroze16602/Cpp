/*Write a program to input a matrix of order 4x4 and display
the highest value of individual columns separately.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[4][4];
	int i,j,high;
	cout<<"Give data"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	for(j=0;j<4;j++)
	{
		high=a[0][j];
		for(i=0;i<4;i++)
		{
			if(a[i][j]>high)
			{
				high=a[i][j];
			}
		}
		cout<<"Highest value of column "<<j+1<<"="<<high<<endl;
	}
	getch();
	return 0;
}
