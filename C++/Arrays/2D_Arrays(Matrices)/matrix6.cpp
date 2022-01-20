/*Write a program to input a matrix of order 3x4 and display
the highest value of individual rows separately.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[3][4];
	int i,j,high;
	cout<<"Give data"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		high=a[i][0];
		for(j=0;j<4;j++)
		{
			if(a[i][j]>high)
			{
				high=a[i][j];
			}
		}
		cout<<"Highest value of row "<<i+1<<"="<<high<<endl;
	}
	getch();
	return 0;
}
