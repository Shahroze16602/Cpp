#include<iostream>
using namespace std;

int main()
{
	int a[10], b[10], c[10];
	cout << "Give values of first array" << '\n';
	for (int i=0; i<10; i++)
	{
		cin >> a[i];
	}
	cout << "Give values of second array" << '\n';
	for (int i=0; i<10; i++)
	{
		cin >> b[i];
	}
	for (int i=0; i<10; i++)
	{
		c[i] = a[i] + b[i];
	}
	cout << "Sum of given  arrays" << '\n';
	for (int i=0; i<10; i++)
	{
		cout << c[i] << '\n';
//		cout << "a[" << i << "] + b[" << i  << "] = "<<  c[i] << '\n';
	}
	return 0;
}

