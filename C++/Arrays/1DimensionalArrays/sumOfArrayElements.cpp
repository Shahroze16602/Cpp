#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int sum = 0;
	cout << "Give Array Values" << '\n';
	for (int i=0; i<10; i++)
	{
		cin >> a[i];
	}
	for (int i=0; i<10; i++)
	{
		sum = sum + a[i];
	}
	cout << "Result = " << sum << '\n';
	return 0;
}

