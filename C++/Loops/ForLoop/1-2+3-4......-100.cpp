#include<iostream>
using namespace std;

int main()
{
	int i, sum = 0, sign = 1;
	for(i=1; i<=100; i++)
	{
		sum = sum + (i * sign);
		sign = sign * (-1);
	}
	cout << "Result = " << sum << '\n';
	return 0;
}

