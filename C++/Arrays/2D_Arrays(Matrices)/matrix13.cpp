/*Write a program to input a two matrices a(3x4) and b(3x4),
store their sum in another matrix c and display the result.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[3][4];
	int b[3][4];
	int c[3][4];
	int i,j;
	cout<<"Give data of 1st matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Give data of 2nd matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Resultant matrix is"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<endl;
		}
	}
	getch();
	return 0;
}
