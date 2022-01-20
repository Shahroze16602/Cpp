/*Write a program to input a matrix of order 4x4 and display
the sum of even numbers in the matrix.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[4][4];
	int i,j,sum;
	cout<<"Give data"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	sum=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]%2==0)
			{
				sum=sum+a[i][j];
			}
		}
	}
	cout<<"Sum of even numbers in the matrix="<<sum<<endl;
	getch();
	return 0;
}
