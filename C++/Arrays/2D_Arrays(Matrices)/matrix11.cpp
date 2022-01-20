/*Write a program to input a matrix of order 4x4 and display
the sum of individual columns separately.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[4][4];
	int i,j,sum;
	sum=0;
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
		sum=0;
		for(i=0;i<4;i++)
		{
			sum=sum+a[i][j];
		}
		cout<<"Sum of column "<<j+1<<"="<<sum<<endl;
	}
	getch();
	return 0;
}
