/*Write a program to input a square matrix of order 3x3 and
display the sum of each diagonal separately.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[3][3];
	int i,j,sum;
	cout<<"Give data"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	sum=0;
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][i];
	}
	cout<<"Sum of diagonal 1="<<sum<<endl;
	sum=0;
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][3-i-1];
	}
	cout<<"Sum of diagonal 2="<<sum<<endl;
	getch();
	return 0;
}
