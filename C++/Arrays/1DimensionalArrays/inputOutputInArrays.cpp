#include<iostream>
using namespace std;

int main()
{
	int a[10];
	cout << "Give Array Values" << '\n';
	for (int i=0; i<10; i++)
	{
		cin >> a[i];
	}
	cout << "You Entered" << '\n';
	for (int i=0; i<10; i++)
	{
		cout << a[i] << '\n';
	}
	return 0;
}

