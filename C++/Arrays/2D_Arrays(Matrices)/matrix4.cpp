/*Write a program to input a matrix of order 3x4 and display
the highest value in the matrix.*/
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
	high=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if (a[i][j]>high)
			{
				high=a[i][j];
			}
		}
	}
	cout<<"Highest value="<<high<<endl;
	getch();
	return 0;
}
