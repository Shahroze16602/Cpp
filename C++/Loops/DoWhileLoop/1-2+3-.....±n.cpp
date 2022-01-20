#include<iostream>
using namespace std;

int main()
{
	int i=1, n, sum = 0, sign = 1;
	cout << "Give value of N" << '\n';
	cin >> n;
	do
	{
		sum = sum + (i * sign);
		sign = sign * (-1);
		i++;
	}
	while (i<=n);
	cout << "Result = " << sum << '\n';
	return 0;
}

