/*Write a program to input a square matrix of order 4x4 and
display its transpose.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[4][4];
	int b[4][4];
	int i,j;
	cout<<"Give data"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"The transpose of given matrix is"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			b[i][j]=a[j][i];
			cout<<b[i][j]<<endl;
		}
	}
	getch();
	return 0;
}
