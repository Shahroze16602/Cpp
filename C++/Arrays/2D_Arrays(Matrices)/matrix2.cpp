/*Write a program to input a 3-dim array of order 3x4x2 and
display the input data.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[3][4][2];
	int i,j,k;
	cout<<"Give data"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<2;k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
	cout<<"You Input"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<2;k++)
			{
				cout<<a[i][j][k]<<endl;
			}
		}
	}
	getch();
	return 0;
}
