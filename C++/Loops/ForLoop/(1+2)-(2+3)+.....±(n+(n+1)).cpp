#include<iostream>
using namespace std;

int main()
{
	int i, n, sum = 0, sign = 1;
	cout << "Give value of N" << '\n';
	cin >> n;
	for(i=1; i<n; i++)
	{
		sum = sum + (i+(i+1)) * sign;
		sign = sign * (-1);
	}
	cout << "Result = " << sum << '\n';
	return 0;
}

