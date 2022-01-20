/*Write a program to input a matrix of order 3x4 and display
the sum of individual rows separately.*/
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
		sum=0;
		for(j=0;j<4;j++)
		{
			sum=sum+a[i][j];
		}
		cout<<"Sum of row "<<i+1<<"="<<sum<<endl;
	}
	getch();
	return 0;
}
