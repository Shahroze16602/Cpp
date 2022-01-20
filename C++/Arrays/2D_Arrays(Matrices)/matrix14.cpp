/*Write a program to input a two matrices a(3x4) and b(4x3),
store their product in another matrix c and display the result.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[3][4];
	int b[4][3];
	int c[3][3];
	int i,j,k;
	cout<<"Give data of 1st matrix"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Give data of 2nd matrix"<<endl;
	for(j=0;j<4;j++)
	{
		for(k=0;k<3;k++)
		{
			cin>>b[j][k];
		}
	}
	cout<<"Resultant matrix is"<<endl;
	for(i=0;i<3;i++)
		{
			for(k=0;k<3;k++)
			{
				c[i][k]=0;
				for(j=0;j<4;j++)
				{
					c[i][k]=c[i][k]+a[i][j]*b[j][k];	
				}
				cout<<c[i][k]<<endl;
			}
		}
	getch();
	return 0;
}
