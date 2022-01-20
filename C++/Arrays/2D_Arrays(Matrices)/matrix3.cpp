/*Write a program to input a matrix of order 3x4 and display
the sum of values in the matrix.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[3][4];
	int i,j,sum;
	sum=0;
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
		for(j=0;j<4;j++)
		{
			sum=sum+a[i][j];
		}
	}
	cout<<"Sum="<<sum<<endl;
	getch();
	return 0;
}
