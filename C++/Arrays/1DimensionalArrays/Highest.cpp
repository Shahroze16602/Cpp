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
	int high = a[0];
	for (int i=1; i<10; i++)
	{
		if (a[i]>high)
		{
			high = a[i];
		}
	}
	cout << "Highest = "<< high << '\n';
	return 0;
}

