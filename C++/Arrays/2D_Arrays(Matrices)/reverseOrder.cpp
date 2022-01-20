#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[10];
	int i,A;
	cout << "Give array values" << endl;
	for (i=0;i<10;i++)
		cin >> a[i];
	for (i=0;i<5;i++)
	{
		A = a[10-i-1];
		a[10-i-1] = a[i];
		a[i] = A;
	}
	cout << "Your array in reverse order" << endl;
	for (i=0;i<10;i++)
		cout << a[i] << endl;
	getch();
	return 0;
}
