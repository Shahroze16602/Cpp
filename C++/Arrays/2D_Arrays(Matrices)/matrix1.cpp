/*Write a program to input a 2-dim array of order 2x3 and
display the input data.*/
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[2][3];
	int i,j;
	cout<<"Give data"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"You Input"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<endl;
		}
	}
	getch();
	return 0;
}
