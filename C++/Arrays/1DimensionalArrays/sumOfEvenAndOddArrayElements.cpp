#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int sum_odd = 0, sum_even = 0;
	cout << "Give Array Values" << '\n';
	for (int i=0; i<10; i++)
	{
		cin >> a[i];
	}
	for (int i=0; i<10; i++)
	{
		if (a[i]%2==0)
		{
			sum_even = sum_even + a[i];
		}
		else
		{
			sum_odd = sum_odd + a[i];
		}
	}
	cout << "Sum of Even Numbers = " << sum_even << '\n';
	cout << "Sum of Odd Numbers = " << sum_odd << '\n';
	return 0;
}

