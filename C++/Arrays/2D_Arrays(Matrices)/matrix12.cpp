/*Write a program to input a square matrix of order 4x4 and
display the highest value in each diagonal separately.*/
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
	high=a[0][0];
	for(i=0;i<4;i++)
	{
		if(a[i][i]>high)
		{
			high=a[i][i];
		}
	}
	cout<<"Highest value of diagonal 1="<<high<<endl;
	high=a[0][3];
	for(i=0;i<4;i++)
	{
		if(a[i][i]>high)
		{
			high=a[i][4-i-1];
		}
	}
	cout<<"Highest value of diagonal 2="<<high<<endl;
	getch();
	return 0;
}
